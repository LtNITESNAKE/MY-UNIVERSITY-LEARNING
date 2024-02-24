#include<iostream>
#include<cstdlib>

using namespace std;

struct SubjectiveQuestion
{
	char qtext[20];
};

struct MCQ
{
	char qtext[20];
	char opt1[10], opt2[10], opt3[10];
};

struct Paper
{
	char subject[10];
	int year;
	int paper_Class;
	int total_subj_questions;
	int total_objective;
	char board[10];
	SubjectiveQuestion* squestions;
	MCQ* mcq;
};

void enterNewPaper(Paper papers[], int& paperCount);
void enterSubjectivePaper(Paper& paper);
void enterMCQPaper(Paper& paper);
void viewEnteredPaper(const Paper papers[], int paperCount);
void editPaper(Paper papers[], int paperCount);
void boardMenu();
void subjectMenu(char subjectType);
void displaySimilarQuestions(const Paper papers[], int paperCount);
bool areArraysEqual(const char arr1[], const char arr2[]);

int main()
{
	Paper papers[10];
	int paperCount = 0;
	int choice;
	do {
		system("cls");

		cout << "Menu:\n";
		cout << "1. Enter New Paper\n";
		cout << "2. View Entered Papers\n";
		cout << "3. Edit Paper\n";
		cout << "4. Display Similar Questions\n";
		cout << "0. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			enterNewPaper(papers, paperCount);
			break;
		case 2:
			viewEnteredPaper(papers, paperCount);
			break;
		case 3:
			editPaper(papers, paperCount);
			break;
		case 4:
			displaySimilarQuestions(papers, paperCount);
			break;
		case 0:
			cout << "Exiting program.\n";
			break;
		default:
			cout << "Invalid choice. Please enter a valid option.\n";
		}
	} while (choice != 0);
	system("pause");

	return 0;
}

void enterNewPaper(Paper papers[], int& paperCount)
{
	if (paperCount < 10)
	{
		Paper newPaper;
		cout << "Enter details of the new paper:\n";

		cout << "Paper Class: ";
		cin >> newPaper.paper_Class;

		boardMenu();
		cout << "Enter Board: ";
		cin >> newPaper.board;
		cout << "Enter the subject:\n";
		cin >> newPaper.subject;
		cout << "Year: ";
		cin >> newPaper.year;

		cout << "Press 's' to enter subjective paper\n";
		cout << "Press 'm' to enter mcqs paper\n";
		char paperType;
		cin >> paperType;
		if (paperType == 'm' || paperType == 'M')
		{
			cout << "Enter objective paper\n";
			enterMCQPaper(newPaper);
		}
		else {
			cout << "Enter Subjective paper\n";
			enterSubjectivePaper(newPaper);
		}

		papers[paperCount++] = newPaper;
		cout << "Paper entered successfully.\n";
	}
}
void enterMCQPaper(Paper& papers)
{
	cout << "Enter the number of MCQs Questions:\n";
	cin >> papers.total_objective;

	papers.mcq = new MCQ[papers.total_objective];

	for (int i = 0; i < papers.total_objective; i++)
	{
		cout << "Enter MCQ Question " << i + 1 << ": ";
		cin.ignore();
		cin.getline(papers.mcq[i].qtext, sizeof(papers.mcq[i].qtext));
		cout << "Enter options: Opt1, Opt2, Opt3\n";
		cin.getline(papers.mcq[i].opt1, sizeof(papers.mcq[i].opt1));
		cin.getline(papers.mcq[i].opt2, sizeof(papers.mcq[i].opt2));
		cin.getline(papers.mcq[i].opt3, sizeof(papers.mcq[i].opt3));
	}

}

void enterSubjectivePaper(Paper& papers)
{
	cout << "Enter the number of subjective questions: ";
	cin >> papers.total_subj_questions;

	papers.squestions = new SubjectiveQuestion[papers.total_subj_questions];

	for (int i = 0; i < papers.total_subj_questions; i++)
	{
		cout << "Enter subjective question " << i + 1 << ": ";
		cin.ignore();
		cin.getline(papers.squestions[i].qtext, sizeof(papers.squestions[i].qtext));
	}

}


void viewEnteredPaper(const Paper papers[], int paperCount)
{
	if (paperCount > 0)
	{
		cout << "Entered Papers:\n";
		for (int i = 0; i < paperCount; ++i)
		{
			cout << "Paper " << i + 1 << ":\n";
			cout << "Subject: " << papers[i].subject << "\n";
			cout << "Year: " << papers[i].year << "\n";
			cout << "Class: " << papers[i].paper_Class << "\n";
			cout << "Total Subjective Questions: " << papers[i].total_subj_questions << "\n";
			cout << "Total Objective Questions: " << papers[i].total_objective << "\n";
			cout << "Board: " << papers[i].board << "\n";

			if (papers[i].total_subj_questions > 0)
			{
				cout << "Subjective Questions:\n";
				for (int j = 0; j < papers[i].total_subj_questions; j++)
				{
					cout << "  " << j + 1 << ". " << papers[i].squestions[j].qtext << "\n";
				}
			}

			if (papers[i].total_objective > 0)
			{
				cout << "MCQ Questions:\n";
				for (int j = 0; j < papers[i].total_objective; ++j)
				{
					cout << "  " << j + 1 << ". " << papers[i].mcq[j].qtext << "\n";
					cout << "    Opt1: " << papers[i].mcq[j].opt1 << "\n";
					cout << "    Opt2: " << papers[i].mcq[j].opt2 << "\n";
					cout << "    Opt3: " << papers[i].mcq[j].opt3 << "\n";
				}
			}
			cout << "-----------------------\n";
		}
	}
	else
	{
		cout << "No papers entered yet.\n";
	}
}

void editPaper(Paper papers[], int paperCount)
{
	if (paperCount > 0)
	{
		cout << "Enter the index of the paper you want to edit (1 to " << paperCount << "):\n";
		int paperIndex;
		cin >> paperIndex;

		if (paperIndex > 0 && paperIndex <= paperCount)
		{


			Paper& paperToEdit = papers[paperIndex - 1];
			int editOption;
			do
			{
				cout << "Editing Paper " << paperIndex << ":\n";
				cout << "Choose an option to edit:\n";
				cout << "1. Edit Subject\n";
				cout << "2. Edit Year\n";
				cout << "3. Edit Class\n";
				cout << "4. Edit MCQs Paper\n";
				cout << "5. Edit Subjective Paper\n";
				cout << "6. Edit Board\n";
				cout << "0. Exit Editing\n";
				cout << "Enter your choice: ";
				cin >> editOption;

				switch (editOption)
				{
				case 1:
					cout << "Enter new Subject: ";
					cin >> paperToEdit.subject;
					break;
				case 2:
					cout << "Enter new Year: ";
					cin >> paperToEdit.year;
					break;
				case 3:
					cout << "Enter new Class: ";
					cin >> paperToEdit.paper_Class;
					break;
				case 4:
					delete[] paperToEdit.mcq;
					subjectMenu('s');
					enterMCQPaper(paperToEdit);
					break;
				case 5:
					delete[] paperToEdit.squestions;
					subjectMenu('a');
					enterSubjectivePaper(paperToEdit);
					break;
				case 6:
					boardMenu();
					cout << "Enter new Board: ";
					cin >> paperToEdit.board;
					break;
				case 0:
					cout << "Exiting editing.\n";
					break;
				default:
					cout << "Invalid choice. Please enter a valid option.\n";
				}
			} while (editOption != 0);
		}
	}
}


void boardMenu()
{
	cout << "Board Menu:\n";
	cout << "1. Press R for Rawalpindi Board\n";
	cout << "2. Press L for Lahore Board\n";
	cout << "3. Press M for Multan Board\n";
	cout << "4. Press F for Federal Board\n";
	cout << "5. Press G for Gujranwala Board\n";
	cout << "6. Press Q for Faisalabad Board\n";
	cout << "7. Press S for Sahiwal Board\n";
	cout << "8. Press B for Bahawalpur Board\n";
}

void subjectMenu(char subjectType)
{
	cout << "Subject Menu:\n";
	if (subjectType == 's')
	{
		cout << "1. Press P for Physics\n";
		cout << "2. Press C for Chemistry\n";
		cout << "3. Press M for Mathematics\n";
		cout << "4. Press B for Biology\n";
		cout << "5. Press U for Computer Science\n";
	}
	else if (subjectType == 'a')
	{
		cout << "1. Press E for Economics\n";
		cout << "2. Press S for History\n";
		cout << "3. Press H for Home Science\n";
		cout << "4. Press P for Political Science\n";
		cout << "5. Press F for Fashion Studies\n";
		cout << "6. Press M for Media Studies\n";
	}
}
bool areArraysEqual(const char arr1[], const char arr2[]) {
	int i = 0;
	while (arr1[i] != '\0' && arr2[i] != '\0') {
		if (arr1[i] != arr2[i]) {
			return false;
		}
		++i;
	}
	// Check if both strings have reached the end
	if (arr1[i] != arr2[i]) {
		return false;
	}
	return true;
}
void displaySimilarQuestions(const Paper papers[], int paperCount) {
	if (paperCount > 1) {
		int targetClass;
		cout << "Enter the class to search for similar questions: ";
		cin >> targetClass;

		char uniqueSubjects[10][10];  // Assuming a maximum of 10 subjects with length up to 10 characters
		int uniqueSubjectCount = 0;

		cout << "Available Subjects:\n";
		for (int i = 0; i < paperCount; ++i) {
			if (papers[i].paper_Class == targetClass) {
				bool subjectExists = false;
				for (int j = 0; j < uniqueSubjectCount; ++j) {
					if (areArraysEqual(uniqueSubjects[j], papers[i].subject)) {
						subjectExists = true;
						break;
					}
				}

				if (!subjectExists) {
					int k = 0;
					while (papers[i].subject[k] != '\0') {
						uniqueSubjects[uniqueSubjectCount][k] = papers[i].subject[k];
						++k;
					}
					uniqueSubjects[uniqueSubjectCount][k] = '\0';
					++uniqueSubjectCount;
				}
			}
		}

		for (int i = 0; i < uniqueSubjectCount; ++i) {
			cout << uniqueSubjects[i] << "\n";
		}

		char targetSubject[10];
		cout << "Enter the subject to search for similar questions: ";
		cin >> targetSubject;

		int type;
		cout << "Press 1 to see subjective questions\n";
		cout << "Press 2 to see objective type questions\n";
		cin >> type;

		

		cout << "Similar Questions for Class " << targetClass << " and Subject " << targetSubject << ":\n";

	for (int i = 0; i < paperCount; ++i) {
    if (papers[i].paper_Class == targetClass && areArraysEqual(papers[i].subject, targetSubject)) {
        for (int j = 0; j < paperCount - 1; ++j) {
            if (type == 1 && papers[j].total_subj_questions > 1) {
                cout << "Subjective Questions:\n";
                for (int k = 0; k < papers[j].total_subj_questions; ++k) {
                    for (int l = j + 1; l < paperCount; ++l) {
                        for (int m = 0; m < papers[l].total_subj_questions; ++m) {
                            if (areArraysEqual(papers[j].squestions[k].qtext, papers[l].squestions[m].qtext)) {
                                cout << "Subjective Question in paper " << j + 1 << ": " << papers[j].squestions[k].qtext << "\n";
                                cout << "Subjective Question in paper " << l + 1 << ": " << papers[l].squestions[m].qtext << "\n";
                            }
                        }
                    }
                }
            }
            else if (type == 2 && papers[j].total_objective > 1) {
                cout << "MCQ Questions:\n";
                for (int k = 0; k < papers[j].total_objective; ++k) {
                    for (int l = j + 1; l < paperCount; ++l) {
                        for (int m = 0; m < papers[l].total_objective; ++m) {
                            if (areArraysEqual(papers[j].mcq[k].qtext, papers[l].mcq[m].qtext)) {
                                cout << "MCQ Question in paper " << j + 1 << ": " << papers[j].mcq[k].qtext << "\n";
                                cout << "MCQ Question in paper " << l + 1 << ": " << papers[l].mcq[m].qtext << "\n";
                            }

                        }
                    }
                }
            }
        }
    }
}
cout << "-----------------------\n";
	}
	else {
		cout << "Insufficient papers to compare.\n";
	}

	system("pause");
}

