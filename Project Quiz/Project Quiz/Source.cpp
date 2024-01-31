#include <iostream>
using namespace std;

struct QuestionBank
{
	char question[30];
	char subject[10];
	char option1[6];
	char option2[6];
	char option3[6];
	char option4[6];
	char correct[6];
	int dif_level; // 1 easy 2 medium 3 hard
};

struct Quiz
{
	int marks;
	int totalquestions;
	QuestionBank* examquestions = nullptr;
};

// Custom function to compare strings
bool areStringsEqual(const char* str1, const char* str2) {
	while (*str1 != '\0' && *str2 != '\0') {
		if (*str1 != *str2) {
			return false;
		}
		++str1;
		++str2;
	}
	return (*str1 == '\0' && *str2 == '\0');
}

// Function to add a question to the question bank
void addQuestion(QuestionBank*& qbank, int& qCount, const int MAX_QUESTIONS) {
	cout << "Enter subject (up to 9 characters): ";
	cin >> qbank[qCount].subject;

	cout << "Enter question (up to 29 characters): ";
	cin >> ws; // to consume leading whitespaces
	cin.getline(qbank[qCount].question, 30);

	cout << "Enter options (up to 5 characters each):" << endl;
	cout << "Option 1: ";
	cin >> qbank[qCount].option1;
	cout << "Option 2: ";
	cin >> qbank[qCount].option2;
	cout << "Option 3: ";
	cin >> qbank[qCount].option3;
	cout << "Option 4: ";
	cin >> qbank[qCount].option4;

	cout << "Enter correct answer (up to 5 characters): ";
	cin >> qbank[qCount].correct;

	cout << "Enter difficulty level (1 for easy, 2 for medium, 3 for hard): ";
	cin >> qbank[qCount].dif_level;

	qCount++;
}

// Function to display available subjects
void displaySubjects(QuestionBank* qbank, int qCount) {
	cout << "Available subjects: ";
	for (int i = 0; i < qCount; ++i) {
		cout << qbank[i].subject << " ";
	}
	cout << endl;
}

// Function to display a single question
void displayQuestion(QuestionBank& q) {
	cout << q.question << endl;
	cout << "1. " << q.option1 << endl;
	cout << "2. " << q.option2 << endl;
	cout << "3. " << q.option3 << endl;
	cout << "4. " << q.option4 << endl;
}

void adminMenu(QuestionBank*& qbank, int& qCount, const int MAX_QUESTIONS);
void updateQuestion(QuestionBank*& qbank, int qCount, const int MAX_QUESTIONS);

void displayResultMessage(int marks, int totalQuestions) {
	float percentage = (float)marks / totalQuestions * 100;

	cout << "Your total marks: " << marks << "/" << totalQuestions << endl;
	cout << "Percentage: " << percentage << "%" << endl;

	if (percentage == 100) {
		cout << "Excellent! Keep it up." << endl;
	}
	else if (percentage >= 75) {
		cout << "Good job! Well done." << endl;
	}
	else if (percentage >= 40) {
		cout << "Need improvement. Keep practicing." << endl;
	}
	else {
		cout << "Fail. Try again. You can do better!" << endl;
	}
}

// Function to display the user menu
void userMenu(Quiz& q, QuestionBank* qbank, int qCount) {
	cout << "User Menu:" << endl;
	cout << "1. Display available subjects" << endl;
	cout << "2. Take a quiz" << endl;
	cout << "3. Exit user menu" << endl;

	int choice;
	cout << "Enter your choice (1-3): ";
	cin >> choice;

	switch (choice) {
	case 1:
		// Display available subjects for the user to choose
		displaySubjects(qbank, qCount);
		break;
	case 2:
		// Take a quiz
		if (qCount == 0) {
			cout << "No questions available. Please add questions before taking a quiz." << endl;
		}
		else {
			cout << "Available subjects: ";
			displaySubjects(qbank, qCount);

			char selectedSubject[10];
			cout << "Enter the subject you want to take a quiz on: ";
			cin >> ws; // to consume leading whitespaces
			cin >> selectedSubject;

			int selectedDifficulty;
			cout << "Enter the difficulty level (1 for easy, 2 for medium, 3 for hard): ";
			cin >> selectedDifficulty;
			cin.ignore(); // to handle newline character left in the buffer

			int questionsDisplayed = 0;
			for (int i = 0; i < qCount && questionsDisplayed < q.totalquestions; ++i) {
				if (areStringsEqual(qbank[i].subject, selectedSubject) && qbank[i].dif_level == selectedDifficulty) {
					displayQuestion(qbank[i]);

					int userAnswer;
					cout << "Enter your answer (1-4): ";
					cin >> userAnswer;

					if (userAnswer >= 1 && userAnswer <= 4) {
						char* selectedOption;
						switch (userAnswer) {
						case 1:
							selectedOption = qbank[i].option1;
							break;
						case 2:
							selectedOption = qbank[i].option2;
							break;
						case 3:
							selectedOption = qbank[i].option3;
							break;
						case 4:
							selectedOption = qbank[i].option4;
							break;
						}

						bool isCorrect = true;
						char* correctOption = qbank[i].correct;
						while (*selectedOption != '\0' && *correctOption != '\0') {
							if (*selectedOption != *correctOption) {
								isCorrect = false;
								break;
							}
							++selectedOption;
							++correctOption;
						}

						if (isCorrect) {
							// Correct answer
							q.marks++;
						}
					}

					questionsDisplayed++;
				}
			}
			displayResultMessage(q.marks, q.totalquestions);
		}
		break;
	case 3:
		return; // exit the user menu
	default:
		cout << "Invalid choice. Please try again." << endl;
	}
}

void main() {
	char userType;
	const int MAX_QUESTIONS = 100;
	QuestionBank* qbank = new QuestionBank[MAX_QUESTIONS];
	int qCount = 0;
	do {
		cout << "Are you a user (u) or admin (a)? ";
		cin >> userType;

		if (userType == 'a') {
			// Admin functionality
			adminMenu(qbank, qCount, MAX_QUESTIONS);
		}
		else if (userType == 'u') {
			// User functionality
			Quiz q;
			q.marks = 0;
			q.totalquestions = 10;
			q.examquestions = new QuestionBank[q.totalquestions];

			userMenu(q, qbank, qCount);
		}
		else {
			cout << "Invalid user type." << endl;
		}

		char goBack;
		cout << "Do you want to go back to the login screen? (y/n): ";
		cin >> goBack;

		if (goBack != 'y') {
			break; // exit the loop if the user doesn't want to go back
		}

	} while (true);


	system("pause");
}

// Function to display the admin menu
void adminMenu(QuestionBank*& qbank, int& qCount, const int MAX_QUESTIONS) {
	char addMore;
	do {
		cout << "Admin Menu:" << endl;
		cout << "1. Add a question" << endl;
		cout << "2. Display available subjects" << endl;
		cout << "3. Update a question" << endl;
		cout << "4. Exit admin menu" << endl;

		int choice;
		cout << "Enter your choice (1-4): ";
		cin >> choice;

		switch (choice) {
		case 1:
			addQuestion(qbank, qCount, MAX_QUESTIONS);
			break;
		case 2:
			displaySubjects(qbank, qCount);
			break;
		case 3:
			updateQuestion(qbank, qCount, MAX_QUESTIONS);
			break;
		case 4:
			return; // exit the admin menu
		default:
			cout << "Invalid choice. Please try again." << endl;
		}

		cout << "Do you want to perform another action? (y/n): ";
		cin >> addMore;
	} while (addMore == 'y');
}

// Function to update a question in the question bank
void updateQuestion(QuestionBank*& qbank, int qCount, const int MAX_QUESTIONS) {
	cout << "Enter the subject of the question you want to update: ";
	char searchSubject[10];
	cin >> ws; // to consume leading whitespaces
	cin >> searchSubject;

	cout << "Enter the difficulty level of the question you want to update (1 for easy, 2 for medium, 3 for hard): ";
	int searchDifficulty;
	cin >> searchDifficulty;
	cin.ignore(); // to handle newline character left in the buffer

	int* matchingQuestions = new int[MAX_QUESTIONS];
	int matchingCount = 0;

	// Display questions that match the criteria
	cout << "Matching questions:" << endl;
	for (int i = 0; i < qCount; ++i) {
		if (areStringsEqual(qbank[i].subject, searchSubject) && qbank[i].dif_level == searchDifficulty) {
			matchingQuestions[matchingCount++] = i;
			cout << matchingCount << ". ";
			displayQuestion(qbank[i]);
		}
	}

	if (matchingCount == 0) {
		cout << "No matching questions found." << endl;
		
		return;
	}

	// Ask the user to select the specific question to update
	cout << "Enter the number corresponding to the question you want to update: ";
	int selectedQuestionIndex;
	cin >> selectedQuestionIndex;

	if (selectedQuestionIndex >= 1 && selectedQuestionIndex <= matchingCount) {
		int selectedQuestion = matchingQuestions[selectedQuestionIndex - 1];

		// Display the selected question
		cout << "Selected question:" << endl;
		displayQuestion(qbank[selectedQuestion]);

		// Ask the user what to update
		cout << "What do you want to update?" << endl;
		cout << "1. Question text" << endl;
		cout << "2. Options" << endl;
		cout << "3. Correct answer" << endl;
		cout << "4. Difficulty level" << endl;

		int updateChoice;
		cout << "Enter your choice (1-4): ";
		cin >> updateChoice;

		switch (updateChoice) {
		case 1:
			cout << "Enter the updated question text (up to 29 characters): ";
			cin >> ws; // to consume leading whitespaces
			cin.getline(qbank[selectedQuestion].question, 30);
			break;
		case 2:
			cout << "Enter updated options (up to 5 characters each):" << endl;
			cout << "Option 1: ";
			cin >> qbank[selectedQuestion].option1;
			cout << "Option 2: ";
			cin >> qbank[selectedQuestion].option2;
			cout << "Option 3: ";
			cin >> qbank[selectedQuestion].option3;
			cout << "Option 4: ";
			cin >> qbank[selectedQuestion].option4;
			break;
		case 3:
			cout << "Enter updated correct answer (up to 5 characters): ";
			cin >> qbank[selectedQuestion].correct;
			break;
		case 4:
			cout << "Enter updated difficulty level (1 for easy, 2 for medium, 3 for hard): ";
			cin >> qbank[selectedQuestion].dif_level;
			break;
		default:
			cout << "Invalid choice. No updates performed." << endl;
			break;
		}

		cout << "Question updated successfully." << endl;
	}
	else {
		cout << "Invalid selection. No updates performed." << endl;
	}


}
