#include<iostream>
#include<string>
using namespace std;
void display_menu()
{

	cout << "  Press 1 to See Different Varieties Available In Our Collection " << endl;
	cout << " Press 2 for Purchasing any Item From Our Collection " << endl;
	cout << " Press 3 for Proceeding to the Bill " << endl;
	cout << " Press 4 to View Available Quantity of Items from Our Shopping Web " << endl;
}
void display_men_items()
{
	cout << "            List of Men Items          " << endl;
	cout << " What Do you Want " << endl;
	cout << " 1.  Kurta Pajama " << endl;
	cout << " 2. Qameez Shalwar " << endl;
	cout << " 3. Men Caps " << endl;
	cout << " 4. Waist Coats " << endl;
	cout << " 5. Sandals OR Chappal " << endl;
	cout << " 6. Perfumes " << endl;
}
void display_women_items()
{
	cout << "            List of Women Items       " << endl;
	cout << " What Do you Want " << endl;
	cout << " 1. 1 Piece Suits " << endl;
	cout << " 2. 2 Piece Suits Stitched Suits " << endl;
	cout << " 3. 2 Piece Un-Stitched Suits " << endl;
	cout << " 4. Saree " << endl;
	cout << " 5. Fragrances " << endl;
	cout << " 6. Bags " << endl;
	cout << " 7. Stoles " << endl;
}
void billing_method_cust()
{
	int cred_num, cred_pin;
	cout << " You'll Pay Through Your Credit Card " << endl;
	cout << " So Please Enter The 16 Digit Number Which is On Your credit Card " << endl;
	cin >> cred_num;
	cout << endl;
	cout << " Enter Password (Pin) of your Account " << endl;
	cin >> cred_pin;
}
void address_cust()
{
	char name_cust[20];
	char name_city[20];
	int house_number, street_number, phone_number;
}
struct Kurta_Pajama
{
	string fit_type = { "regular" };
	string fit_type_2 = { "classic" };
	string fit_type_3 = { "smart" };
	string colour_of_suit;
	string wear_type_1 = { "blended" };
	string wear_type_2 = { "Casual" };
	int quant_of_suit;
	int price_of_suit_blended;
	int price_of_suit_casual;
};
struct Qameez_Shalwar
{
	string fit_type = { "regular" };
	string fit_type_2 = { "classic" };
	string fit_type_3 = { "smart" };
	string colour_of_suit;
	string wear_type_1 = { "blended" };
	string wear_type_2 = { "Casual" };
	int quant_of_suit;
	int price_of_suit_blended;
	int price_of_suit_casual;
};
struct Men_Caps
{

	string colour_of_cap_1 = { "blue" };
	string colour_of_cap_2 = { "brown" };
	string colour_of_cap_3 = { "white" };
	int quant_of_cap;
	int price_of_cap;
};
struct Waist_Coats
{
	string colour_of_waistcoat_1 = { "dark brown" };
	string colour_of_waistcoat_2 = { "black" };
	string colour_of_waistcoat_3 = { "red" };
	int quant_of_waistcoat;
	int price_of_waistcoat;
};
struct Foot_wear
{
	string colour_of_chappal_1 = { "brown" };
	string colour_of_chappal_2 = { "blue" };
	string colour_of_chappal_3 = { "black" };
	int quant_of_chappal;
	int price_of_chappal;
};
struct Perfumes
{
	string  name_of_perfume_1 = { "marco polo" };
	string  name_of_perfume_2 = { " masculin" };
	string  name_of_perfume_3 = { "lactus " };
	int quant_of_perfume;
	int price_of_perfume;
};
struct one_Piece_Suits
{
	string size_of_suit = { " one piece" };
	string colour_of_suit_1 = { " blue" };
	string colour_of_suit_2 = { " green" };
	string colour_of_suit_3 = { "orange" };
	string fabric_of_suit_1 = { " lawn" };
	string fabric_of_suit_2 = { " camber" };
	string fabric_of_suit_3 = { " jacquard" };
	int quant_of_suit;
	int price_of_suit;
};
struct two_Piece_Stitched_Suits
{
	string size_of_suit = { " two piece" };
	string colour_of_suit_1 = { " blue" };
	string colour_of_suit_2 = { " green" };
	string colour_of_suit_3 = { "orange" };
	string fabric_of_suit_1 = { " lawn" };
	string fabric_of_suit_2 = { " camber" };
	string fabric_of_suit_3 = { " jacquard" };
	int quant_of_suit;
	int price_of_suit;
};
struct two_Piece_Un_Stitched_Suits
{

	string size_of_suit = { " two piece" };
	string colour_of_suit_1 = { " blue" };
	string colour_of_suit_2 = { " green" };
	string colour_of_suit_3 = { "orange" };
	string fabric_of_suit_1 = { " lawn" };
	string fabric_of_suit_2 = { " camber" };
	string fabric_of_suit_3 = { " jacquard" };
	int quant_of_suit;
	int price_of_suit;
};
struct  Saree
{
	string fabric_of_saree_1 = { " shafoon" };
	string fabric_of_saree_2 = { " lawn" };
	string fabric_of_saree_3 = { " jacquard" };
	string colour_of_saree;
	int quant_of_saree;
	int price_of_saree;
};
struct Fragrances
{
	string  name_of_perfume_1 = { "marco polo" };
	string  name_of_perfume_2 = { " masculin" };
	string  name_of_perfume_3 = { "lactus " };
	int quant_of_perfume;
	int price_of_perfume;
};
void main()
{
	int  max_k_blended = 25, max_k_casual = 25, max_k_paj = (max_k_blended + max_k_casual), max_q_blended = 25, max_q_casual = 25, max_q_shal = (max_q_blended + max_q_casual), max_men_caps = 90, max_br_chappal = 20, max_bl_chappal = 20, max_blc_chappal = 20, max_chappals = (max_br_chappal + max_bl_chappal + max_blc_chappal), max_p_m = 20, max_p_ms = 20, max_p_lc = 20, max_perfumes = (max_p_m + max_p_lc + max_p_ms), max_w_db = 10, max_w_bl = 10, max_w_r = 10, max_waistcoats = (max_w_db + max_w_bl + max_w_r);
	int  max_2_piece_stitched = 46, max_2_piece_unstitched = 55, max_l_saree = 10, max_s_saree = 10, max_j_saree = 10, max_saree = max_l_saree + max_s_saree + max_j_saree, max_fragrances = 50;

	int                   max_one_piece_l_b = 4, max_one_piece_l_g = 4, max_one_piece_l_o = 4;
	int max_one_piece_l = max_one_piece_l_b + max_one_piece_l_g + max_one_piece_l_o;
	int                   max_one_piece_c_b = 4, max_one_piece_c_g = 4, max_one_piece_c_o = 4;
	int max_one_piece_c = max_one_piece_l_b + max_one_piece_l_g + max_one_piece_l_o;
	int                   max_one_piece_j_b = 4, max_one_piece_j_g = 4, max_one_piece_j_o = 4;
	int max_one_piece_j = max_one_piece_j_b + max_one_piece_j_g + max_one_piece_j_o;
	int max_one_piece = max_one_piece_j + max_one_piece_c + max_one_piece_l;

	int                   max_two_piece_l_b = 4, max_two_piece_l_g = 4, max_two_piece_l_o = 4;
	int max_two_piece_l = max_two_piece_l_b + max_two_piece_l_g + max_two_piece_l_o;
	int                   max_two_piece_c_b = 4, max_two_piece_c_g = 4, max_two_piece_c_o = 4;
	int max_two_piece_c = max_two_piece_l_b + max_two_piece_l_g + max_two_piece_l_o;
	int                   max_two_piece_j_b = 4, max_two_piece_j_g = 4, max_two_piece_j_o = 4;
	int max_two_piece_j = max_two_piece_j_b + max_two_piece_j_g + max_two_piece_j_o;
	int max_two_piece = max_two_piece_j + max_two_piece_c + max_two_piece_l;



	char choice;
	string str;
	string choice_2;
	int total_bill = 0;
	int cust_choice;
	cout << " Welcome to J. Shopping Collections " << endl;
	do
	{
	
		Kurta_Pajama* kurta_pajama = new Kurta_Pajama[max_k_paj];
		Qameez_Shalwar* qameez_shalwar = new Qameez_Shalwar[max_q_shal];
		Men_Caps* caps = new Men_Caps[max_men_caps];
		Waist_Coats* waistcoats = new Waist_Coats[max_waistcoats];
		Foot_wear* footwear = new Foot_wear[max_chappals];
		Perfumes* perfumes = new Perfumes[max_perfumes];
		one_Piece_Suits* one_piece_suits = new one_Piece_Suits[max_one_piece];
		two_Piece_Stitched_Suits* two_piece_suits = new two_Piece_Stitched_Suits[max_2_piece_stitched];
		two_Piece_Un_Stitched_Suits* two_piece_unstitched = new two_Piece_Un_Stitched_Suits[max_2_piece_unstitched];
		Saree* saree = new Saree[max_saree];
		Fragrances* fragrances = new Fragrances[max_fragrances];

		display_menu();
		cin >> cust_choice;
		while (cust_choice < 1 || cust_choice > 4)
		{
			cout << " Invalid Command " << endl;
			cout << " Please Enter a Valid Command " << endl;
			cin >> cust_choice;
		}
		if (cust_choice == 1)
		{
			cout << " Do You Want to See Mens Collections OR Womens Collections " << endl;
			cin >> choice;


			if (choice == 'M' || choice == 'm')
			{
				display_men_items();
				cout << " Press 2 if you Want To Purchase Any Item " << endl;
				cout << " Press 4 to Exit  " << endl;
			}
			else if (choice == 'W' || choice == 'w')
			{
				display_women_items();
				cout << " Press 2 if you Want To Purchase Any Item " << endl;
				cout << " Press 4 to Exit  " << endl;
			}


		}
		else if (cust_choice == 2)
		{
			cout << " Please Enter What Do You Want To Purchase  " << endl;
			cout << " Do You Want to Purchase from Mens Items OR Womens Items " << endl;
			cin >> choice;
			int u_choice;
			if (choice == 'M' || choice == 'm')
			{
				display_men_items();
				cout << " What do You Want from Mens Items " << endl;
				cin >> u_choice;
				if (u_choice == 1)
				{
					cout << "  Kurta Pajama " << endl;
					cout << " Please Let us Lnow What Type Of Kurta Pajama You Want to Purchase " << endl;
					cout << " Blended , Casual " << endl;
					cin >> str;

					if (str == kurta_pajama->wear_type_1)
					{
						cout << " You Have Selected Blended Kurta Pajama " << endl;
						cout << " Let us Know Some Things About Your Blended Suit " << endl;
						cout << " Enter Fit Type You Like (regular , classic , smart) " << endl;
						cin >> str;

						if (str == kurta_pajama->fit_type)
						{
							cout << " You Have Selected Regular Fit Type " << endl;
							choice_2 = kurta_pajama->fit_type;
						}
						else if (str == kurta_pajama->fit_type_2)
						{
							cout << " You Have Selected Classic Fit " << endl;
							choice_2 = kurta_pajama->fit_type_2;
						}
						else if (str == kurta_pajama->fit_type_3)
						{
							cout << " You Have Selected Smart Fit Type " << endl;
							choice_2 = kurta_pajama->fit_type_3;
						}
						cout << " Please Enter Colour of The Kurta Pajama You Want to Purchase " << endl;
						cin >> kurta_pajama->colour_of_suit;
						cout << " Enter Quantity of Suits " << endl;
						cin >> kurta_pajama->quant_of_suit;
						while (kurta_pajama->quant_of_suit > 25)
						{
							cout << " You Have Entered a Quantity Which is Not Available " << endl;
							cout << " So Please Enter a Quantity Less Than or Equal to " << max_k_blended << endl;
							cin >> kurta_pajama->quant_of_suit;
						}
						kurta_pajama->price_of_suit_blended = 3000;
						max_k_blended = max_k_blended - kurta_pajama->quant_of_suit;
						max_k_paj = max_k_blended + max_k_casual;
						total_bill = total_bill + (kurta_pajama->price_of_suit_blended * kurta_pajama->quant_of_suit);
						cout << " You Have Purchased Kurta Pajama of Wear Type Blended " << endl;
						cout << " Whose Price is " << kurta_pajama->price_of_suit_blended << endl;
						cout << " Whose Fit Type is " << choice_2 << endl;
						cout << " Available Blended Suits in Collections are " << max_k_blended << endl;
						cout << " And Total Items of Kurta Pajama Are " << max_k_paj << endl;
						cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
						cout << " Press 3 to Proceed to the Bill " << endl;
						cout << endl << endl;
					}
					else if (str == kurta_pajama->wear_type_2)
					{
						cout << " You Have Selected Casual Kurta Pajama " << endl;
						cout << " Let us Know Some Things About Your Casual Suit " << endl;
						cout << " Fit Type = regular, classic , smart " << endl;
						cout << " Enter Fit Type You Like = " << endl;
						cin >> str;
						if (str == kurta_pajama->fit_type)
						{
							cout << " You Have Selected Regular Fit Type " << endl;
							choice_2 = kurta_pajama->fit_type;
						}
						else if (str == kurta_pajama->fit_type_2)
						{
							cout << " You Have Selected Classic Fit " << endl;
							choice_2 = kurta_pajama->fit_type_2;
						}
						else if (str == kurta_pajama->fit_type_3)
						{
							cout << " You Have Selected Smart Fit Type " << endl;
							choice_2 = kurta_pajama->fit_type_3;
						}
						cout << " Please Enter Colour of The Kurta Pajama You Want to Purchase " << endl;
						cin >> kurta_pajama->colour_of_suit;
						cout << " Enter Quantity of Suits " << endl;
						cin >> kurta_pajama->quant_of_suit;
						while (kurta_pajama->quant_of_suit > 25)
						{
							cout << " You Have Entered a Quantity Which is Not Available " << endl;
							cout << " So Please Enter a Quantity Less Than or Equal to " << max_k_casual << endl;
							cin >> kurta_pajama->quant_of_suit;
						}
						kurta_pajama->price_of_suit_casual = 4000;
						max_k_casual = max_k_casual - kurta_pajama->quant_of_suit;
						max_k_paj = max_k_blended + max_k_casual;
						total_bill = total_bill + (kurta_pajama->price_of_suit_casual * kurta_pajama->quant_of_suit);
						cout << " You Have Purchased Kurta Pajama of Wear Type Blended " << endl;
						cout << " Whose Price is " << kurta_pajama->price_of_suit_casual << endl;
						cout << " Whose Fit Type is " << choice_2 << endl;
						cout << " Available Casual Suits In the Collections are " << max_k_casual << endl;
						cout << " And the Total Items of Kurta Pajama In The Collections are " << max_k_paj << endl;
						cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
						cout << " Press 3 to Proceed to the Bill " << endl;
					}
				}
				else if (u_choice == 2)
				{

					cout << "  Qameez Shalwar  " << endl;
					cout << " Please Let us Lnow What Type Of Qameez Shalwar You Want to Purchase " << endl;
					cout << " Blended , Casual " << endl;
					cin >> str;

					if (str == qameez_shalwar->wear_type_1)
					{
						cout << " You Have Selected Blended Qameez Shalwar " << endl;
						cout << " Let us Know Some Things About Your Blended Suit " << endl;
						cout << " Enter Fit Type You Like (regular , classic , smart) " << endl;
						cin >> str;

						if (str == qameez_shalwar->fit_type)
						{
							cout << " You Have Selected Regular Fit Type " << endl;
							choice_2 = qameez_shalwar->fit_type;
						}
						else if (str == kurta_pajama->fit_type_2)
						{
							cout << " You Have Selected Classic Fit " << endl;
							choice_2 = qameez_shalwar->fit_type_2;
						}
						else if (str == kurta_pajama->fit_type_3)
						{
							cout << " You Have Selected Smart Fit Type " << endl;
							choice_2 = qameez_shalwar->fit_type_3;
						}
						cout << " Please Enter Colour of The Kurta Pajama You Want to Purchase " << endl;
						cin >> qameez_shalwar->colour_of_suit;
						cout << " Enter Quantity of Suits " << endl;
						cin >> qameez_shalwar->quant_of_suit;
						while (qameez_shalwar->quant_of_suit > max_q_blended)
						{
							cout << " You Have Entered a Quantity Which is Not Available " << endl;
							cout << " So Please Enter a Quantity Less Than or Equal to " << max_q_blended << endl;
							cin >> qameez_shalwar->quant_of_suit;
						}
						qameez_shalwar->price_of_suit_blended = 3500;
						max_q_blended = max_q_blended - qameez_shalwar->quant_of_suit;
						max_q_shal = max_q_blended + max_q_casual;
						total_bill = total_bill + (qameez_shalwar->price_of_suit_blended * qameez_shalwar->quant_of_suit);
						cout << " You Have Purchased Qameez Shalwar of Wear Type Blended " << endl;
						cout << " Whose Price is " << qameez_shalwar->price_of_suit_blended << endl;
						cout << " Whose Fit Type is " << choice_2 << endl;
						cout << " Available Items of Qameez Shalwar Blended  in Collections are " << max_q_blended;
						cout << " And Total Items of Shalwar Qameez In Collections are " << max_q_shal << endl;
						cout << " Press 2 If You Want to Add Another Item Into Your Bill " << endl;
						cout << " Press 3 to Proceed to the Bill " << endl;
						cout << endl << endl;
					}
					else if (str == qameez_shalwar->wear_type_2)
					{
						cout << " You Have Selected Casual Qameez Shalwar " << endl;
						cout << " Let us Know Some Things About Your Casual Suit " << endl;
						cout << " Fit Type = regular, classic , smart " << endl;
						cout << " Enter Fit Type You Like = " << endl;
						cin >> str;
						if (str == qameez_shalwar->fit_type)
						{
							cout << " You Have Selected Regular Fit Type " << endl;
							choice_2 = qameez_shalwar->fit_type;
						}
						else if (str == qameez_shalwar->fit_type_2)
						{
							cout << " You Have Selected Classic Fit " << endl;
							choice_2 = qameez_shalwar->fit_type_2;
						}
						else if (str == qameez_shalwar->fit_type_3)
						{
							cout << " You Have Selected Smart Fit Type " << endl;
							choice_2 = qameez_shalwar->fit_type_3;
						}
						cout << " Please Enter Colour of The Kurta Pajama You Want to Purchase " << endl;
						cin >> qameez_shalwar->colour_of_suit;
						cout << " Enter Quantity of Suits " << endl;
						cin >> qameez_shalwar->quant_of_suit;
						while (qameez_shalwar->quant_of_suit > max_q_casual)
						{
							cout << " You Have Entered a Quantity Which is Not Available " << endl;
							cout << " So Please Enter a Quantity Less Than or Equal to " << max_q_casual << endl;
							cin >> qameez_shalwar->quant_of_suit;
						}
						qameez_shalwar->price_of_suit_casual = 4000;
						max_q_casual = max_q_casual - qameez_shalwar->quant_of_suit;
						max_q_shal = max_q_shal - qameez_shalwar->quant_of_suit;
						total_bill = total_bill + (qameez_shalwar->price_of_suit_casual * qameez_shalwar->quant_of_suit);
						cout << " You Have Purchased Qameez Shalwar of Wear Type Casual " << endl;
						cout << " Whose Price is " << qameez_shalwar->price_of_suit_casual << endl;
						cout << " Whose Fit Type is " << choice_2 << endl;
						cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
						cout << " Press 3 to Proceed to the Bill " << endl;
						cout << endl << endl;
					}
				}
				else if (u_choice == 3)
				{
					cout << "                      Men Caps            " << endl;
					cout << " Please Let Us Know What Colour of Cap You Want " << endl;
					cout << " blue , brown or white ? " << endl;
					cin >> str;

					if (str == caps->colour_of_cap_1)
					{
						cout << " You Have Selected Cap of Blue Colour " << endl;
					}
					else if (str == caps->colour_of_cap_2)
					{
						cout << " You Have Selected Cap of Brown Colour " << endl;
					}
					else if (str == caps->colour_of_cap_3)
					{
						cout << " You Have Selected Cap of White Colour " << endl;
					}
					cout << " Enter Quantity of Caps You Want = " << endl;
					cin >> caps->quant_of_cap;
					caps->price_of_cap = 1500;
					total_bill = total_bill + (caps->price_of_cap * caps->quant_of_cap);
					cout << " Press 2 If you Want to Add Another Item Into The Bill " << endl;
					cout << " Press 3 to Proceed to the Bill " << endl;
				}
				else if (u_choice == 4)
				{
					cout << "       Waist Coats                            " << endl;
					cout << "    Enter Colour of The Waist Coat You Want (dark brown  , black , red) " << endl;
					cin >> str;

					if (str == waistcoats->colour_of_waistcoat_1)
					{
						cout << " You Have Selected Dark Brown Waist Coat " << endl;
						cout << " Enter Quantity of The Waist Coat " << endl;
						cin >> waistcoats->quant_of_waistcoat;
						while (waistcoats->quant_of_waistcoat > 10)
						{
							cout << " You Have Entered a Quantity Which is Not Available in the Collection " << endl;
							cout << " Please Enter a Valid Quantity " << endl;
							cin >> waistcoats->quant_of_waistcoat;
						}
						waistcoats->price_of_waistcoat = 4500;
						max_w_db = max_w_db - waistcoats->quant_of_waistcoat;
						max_waistcoats = max_w_db + max_w_bl + max_w_r;
						total_bill = total_bill + (waistcoats->quant_of_waistcoat * waistcoats->price_of_waistcoat);
						cout << " Available Items In Collections of WaistCoats in Dark Brown Colour are = " << max_w_db << endl;
						cout << " And Total Items In Collections of Waist Coats are " << max_waistcoats << endl;
						cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
						cout << " Press 3 to Proceed to the Bill " << endl;
						cout << endl << endl;
					}
					else if (str == waistcoats->colour_of_waistcoat_2)
					{
						cout << " You Have Selected Black Waist Coat  " << endl;
						cout << " Enter Quantity of The Waist Coat " << endl;
						cin >> waistcoats->quant_of_waistcoat;
						while (waistcoats->quant_of_waistcoat > 10)
						{
							cout << " You Have Entered a Quantity Which is Not Available in the Collection " << endl;
							cout << " Please Enter a Valid Quantity " << endl;
							cin >> waistcoats->quant_of_waistcoat;
						}
						waistcoats->price_of_waistcoat = 4500;
						max_w_bl = max_w_bl - waistcoats->quant_of_waistcoat;
						max_waistcoats = max_w_db + max_w_bl + max_w_r;
						total_bill = total_bill + (waistcoats->quant_of_waistcoat * waistcoats->price_of_waistcoat);
						cout << " Available Items In Collections of WaistCoats in Dark Brown Colour are = " << max_w_bl << endl;
						cout << " And Total Items In Collections of Waist Coats are " << max_waistcoats << endl;
						cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
						cout << " Press 3 to Proceed to the Bill " << endl;
						cout << endl << endl;
					}
					else if (str == waistcoats->colour_of_waistcoat_3)
					{
						cout << " You Have Selected Red Waist Coat  " << endl;
						cout << " Enter Quantity of The Waist Coat " << endl;
						cin >> waistcoats->quant_of_waistcoat;
						while (waistcoats->quant_of_waistcoat > 10)
						{
							cout << " You Have Entered a Quantity Which is Not Available in the Collection " << endl;
							cout << " Please Enter a Valid Quantity " << endl;
							cin >> waistcoats->quant_of_waistcoat;
						}
						waistcoats->price_of_waistcoat = 4500;
						max_w_r = max_w_r - waistcoats->quant_of_waistcoat;
						max_waistcoats = max_w_db + max_w_bl + max_w_r;
						total_bill = total_bill + (waistcoats->quant_of_waistcoat * waistcoats->price_of_waistcoat);
						cout << " Available Items In Collections of WaistCoats in Dark Brown Colour are = " << max_w_r << endl;
						cout << " And Total Items In Collections of Waist Coats are " << max_waistcoats << endl;
						cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
						cout << " Press 3 to Proceed to the Bill " << endl;
						cout << endl << endl;
					}
				}
				else if (u_choice == 5)
				{
					cout << "                              Foot Wear ( Chappal OR Sandals)    " << endl;
					cout << " Enter Colour of The Chappal You Want (brown , blue , black) " << endl;
					cin >> str;

					if (str == footwear->colour_of_chappal_1)
					{
						cout << " You Have Selected Brown Chappals " << endl;
						cout << " Please Enter Quantity of The Chappals You Want " << endl;
						cin >> footwear->quant_of_chappal;
						while (footwear->quant_of_chappal > 20)
						{
							cout << " You Have Entered a Quantity Which is Not Available in The Collection " << endl;
							cout << " Please Enter a Valid Quantity " << endl;
							cin >> footwear->quant_of_chappal;
						}
						footwear->price_of_chappal = 5000;
						max_br_chappal = max_br_chappal - footwear->quant_of_chappal;
						max_chappals = max_br_chappal + max_bl_chappal + max_blc_chappal;
						total_bill = total_bill + (footwear->quant_of_chappal * footwear->price_of_chappal);
						cout << " Available Items of Brown Chappals In The Collections are " << max_br_chappal << endl;
						cout << " And Total Avaialble Chappals in the Collections are " << max_chappals << endl;
						cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
						cout << " Press 3 to Proceed to the Bill " << endl;
						cout << endl << endl;
					}
					else if (str == footwear->colour_of_chappal_2)
					{
						cout << " You Have Selected Blue  Chappals " << endl;
						cout << " Please Enter Quantity of The Chappals You Want " << endl;
						cin >> footwear->quant_of_chappal;
						while (footwear->quant_of_chappal > 20)
						{
							cout << " You Have Entered a Quantity Which is Not Available in The Collection " << endl;
							cout << " Please Enter a Valid Quantity " << endl;
							cin >> footwear->quant_of_chappal;
						}
						footwear->price_of_chappal = 5000;
						max_bl_chappal = max_bl_chappal - footwear->quant_of_chappal;
						max_chappals = max_br_chappal + max_bl_chappal + max_blc_chappal;
						total_bill = total_bill + (footwear->quant_of_chappal * footwear->price_of_chappal);
						cout << " Available Items of Brown Chappals In The Collections are " << max_bl_chappal << endl;
						cout << " And Total Avaialble Chappals in the Collections are " << max_chappals << endl;
						cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
						cout << " Press 3 to Proceed to the Bill " << endl;
						cout << endl << endl;
					}
					else if (str == footwear->colour_of_chappal_3)
					{
						cout << " You Have Selected Black  Chappals " << endl;
						cout << " Please Enter Quantity of The Chappals You Want " << endl;
						cin >> footwear->quant_of_chappal;
						while (footwear->quant_of_chappal > 20)
						{
							cout << " You Have Entered a Quantity Which is Not Available in The Collection " << endl;
							cout << " Please Enter a Valid Quantity " << endl;
							cin >> footwear->quant_of_chappal;
						}
						footwear->price_of_chappal = 5000;
						max_blc_chappal = max_blc_chappal - footwear->quant_of_chappal;
						max_chappals = max_br_chappal + max_bl_chappal + max_blc_chappal;
						total_bill = total_bill + (footwear->quant_of_chappal * footwear->price_of_chappal);
						cout << " Available Items of Brown Chappals In The Collections are " << max_blc_chappal << endl;
						cout << " And Total Avaialble Chappals in the Collections are " << max_chappals << endl;
						cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
						cout << " Press 3 to Proceed to the Bill " << endl;
						cout << endl << endl;
					}
				}
				else if (u_choice == 6)
				{
					cout << "                                       Perfumes " << endl;
					cout << " Please Enter Name of the Perfume You Want ( marco polo , masculin , lactus) " << endl;
					cin >> str;

					if (str == perfumes->name_of_perfume_1)
					{
						cout << " You Have Selected Marco Polo " << endl;
						cout << " Please Enter Quantity of Perfumes " << endl;
						cin >> perfumes->quant_of_perfume;
						while (perfumes->quant_of_perfume > max_p_m)
						{
							cout << " You Have Selected a Quantity Which is Not Available in The Collection " << endl;
							cout << " Please Select a Valid quantity " << endl;
							cin >> perfumes->quant_of_perfume;
						}
						perfumes->price_of_perfume = 5000;
						max_p_m = max_p_m - perfumes->quant_of_perfume;
						max_perfumes = max_p_m + max_p_ms + max_p_lc;
						total_bill = total_bill + (perfumes->quant_of_perfume * perfumes->price_of_perfume);
					}
					else if (str == perfumes->name_of_perfume_2)
					{
						cout << " You Have Selected Masculin" << endl;
						cout << " Please Enter Quantity of Perfumes " << endl;
						cin >> perfumes->quant_of_perfume;
						while (perfumes->quant_of_perfume > max_p_ms)
						{
							cout << " You Have Selected a Quantity Which is Not Available in The Collection " << endl;
							cout << " Please Select a Valid quantity " << endl;
							cin >> perfumes->quant_of_perfume;
						}
						perfumes->price_of_perfume = 7500;
						max_p_ms = max_p_ms - perfumes->quant_of_perfume;
						max_perfumes = max_p_m + max_p_ms + max_p_lc;
						total_bill = total_bill + (perfumes->quant_of_perfume * perfumes->price_of_perfume);
					}
					else if (str == perfumes->name_of_perfume_3)
					{
						cout << " You Have Selected Lactus " << endl;
						cout << " Please Enter Quantity of Perfumes " << endl;
						cin >> perfumes->quant_of_perfume;
						while (perfumes->quant_of_perfume > max_p_lc)
						{
							cout << " You Have Selected a Quantity Which is Not Available in The Collection " << endl;
							cout << " Please Select a Valid quantity " << endl;
							cin >> perfumes->quant_of_perfume;
						}
						perfumes->price_of_perfume = 5000;
						max_p_lc = max_p_lc - perfumes->quant_of_perfume;
						max_perfumes = max_p_m + max_p_ms + max_p_lc;
						total_bill = total_bill + (perfumes->quant_of_perfume * perfumes->price_of_perfume);

					}
				}
			}
			else if (choice == 'W' || choice == 'w')
			{
				display_women_items();
				int w_choice;
				cout << " Please Let us Know That What do you Want From Women Items " << endl;
				cin >> w_choice;
				if (w_choice == 1)
				{


					cout << "                        1 Piece Suits " << endl;
					cout << " Please Choose the fabric of Your Suit (lawn , camber , jacquard )(max 12+12+12) " << endl;
					cin >> str;
					if (str == one_piece_suits->fabric_of_suit_1)
					{
						cout << " You Have Selected Lawn One Piece Suit " << endl;
						cout << " Please Choose Colour of Suit (blue , green , orange )(max 4+4+4)" << endl;
						cin >> str;
						if (str == one_piece_suits->colour_of_suit_1)
						{
							cout << " You Have Selected Lawn One Piece Suit in Blue Colour " << endl;
							cout << " Enter Quantity of Blue Lawn One Piece Suits " << endl;
							cin >> one_piece_suits->quant_of_suit;
							while (one_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Blue Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> one_piece_suits->quant_of_suit;

							}
							one_piece_suits->price_of_suit = 3977;
							max_one_piece_l_b = max_one_piece_l_b - one_piece_suits->quant_of_suit;
							max_one_piece_l = max_one_piece_l - one_piece_suits->quant_of_suit;
							max_one_piece = max_one_piece - one_piece_suits->quant_of_suit;
							cout << " You Have Purchased Blue Lawn One Piece Suit " << endl;
							cout << " Whose Price is " << one_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (one_piece_suits->quant_of_suit * one_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == one_piece_suits->colour_of_suit_2)
						{
							cout << " You Have Selected Lawn One Piece Suit in Green  Colour " << endl;
							cout << " Enter Quantity of Green Lawn One Piece Suits " << endl;
							cin >> one_piece_suits->quant_of_suit;
							while (one_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Green Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> one_piece_suits->quant_of_suit;

							}
							one_piece_suits->price_of_suit = 3977;
							max_one_piece_l_g = max_one_piece_l_g - one_piece_suits->quant_of_suit;
							max_one_piece_l = max_one_piece_l - one_piece_suits->quant_of_suit;
							max_one_piece = max_one_piece - one_piece_suits->quant_of_suit;
							cout << " You Have Purchased Green Lawn One Piece Suit " << endl;
							cout << " Whose Price is " << one_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (one_piece_suits->quant_of_suit * one_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == one_piece_suits->colour_of_suit_3)

						{
							cout << " You Have Selected Lawn One Piece Suit in Orange Colour " << endl;
							cout << " Enter Quantity of Orange Lawn One Piece Suits " << endl;
							cin >> one_piece_suits->quant_of_suit;
							while (one_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Orange Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> one_piece_suits->quant_of_suit;

							}
							one_piece_suits->price_of_suit = 3977;
							max_one_piece_l_o = max_one_piece_l_o - one_piece_suits->quant_of_suit;
							max_one_piece_l = max_one_piece_l - one_piece_suits->quant_of_suit;
							max_one_piece = max_one_piece - one_piece_suits->quant_of_suit;
							cout << " You Have Purchased Orange Lawn One Piece Suit " << endl;
							cout << " Whose Price is " << one_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (one_piece_suits->quant_of_suit * one_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}

					}
					else if (str == one_piece_suits->fabric_of_suit_2)
					{
						cout << " You Have Selected camber One Piece Suit " << endl;
						cout << " Please Choose Colour of Suit (blue , green , orange )(max 4+4+4)" << endl;
						cin >> str;
						if (str == one_piece_suits->colour_of_suit_1)
						{
							cout << " You Have Selected camber One Piece Suit in Blue Colour " << endl;
							cout << " Enter Quantity of Blue Camber One Piece Suits " << endl;
							cin >> one_piece_suits->quant_of_suit;
							while (one_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Blue Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> one_piece_suits->quant_of_suit;

							}
							one_piece_suits->price_of_suit = 4000;
							max_one_piece_c_b = max_one_piece_c_b - one_piece_suits->quant_of_suit;
							max_one_piece_c = max_one_piece_c - one_piece_suits->quant_of_suit;
							max_one_piece = max_one_piece - one_piece_suits->quant_of_suit;
							cout << " You Have Purchased Blue Camber One Piece Suit " << endl;
							cout << " Whose Price is " << one_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (one_piece_suits->quant_of_suit * one_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == one_piece_suits->colour_of_suit_2)
						{
							cout << " You Have Selected camber One Piece Suit in Green  Colour " << endl;
							cout << " Enter Quantity of Green camber One Piece Suits " << endl;
							cin >> one_piece_suits->quant_of_suit;
							while (one_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Green Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> one_piece_suits->quant_of_suit;

							}
							one_piece_suits->price_of_suit = 4000;
							max_one_piece_c_g = max_one_piece_c_g - one_piece_suits->quant_of_suit;
							max_one_piece_c = max_one_piece_c - one_piece_suits->quant_of_suit;
							max_one_piece = max_one_piece - one_piece_suits->quant_of_suit;
							cout << " You Have Purchased Green Camber One Piece Suit " << endl;
							cout << " Whose Price is " << one_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (one_piece_suits->quant_of_suit * one_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == one_piece_suits->colour_of_suit_3)

						{
							cout << " You Have Selected Camber One Piece Suit in Orange Colour " << endl;
							cout << " Enter Quantity of Orange Camber One Piece Suits " << endl;
							cin >> one_piece_suits->quant_of_suit;
							while (one_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Orange Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> one_piece_suits->quant_of_suit;

							}
							one_piece_suits->price_of_suit = 4000;
							max_one_piece_c_o = max_one_piece_c_o - one_piece_suits->quant_of_suit;
							max_one_piece_c = max_one_piece_c - one_piece_suits->quant_of_suit;
							max_one_piece = max_one_piece - one_piece_suits->quant_of_suit;
							cout << " You Have Purchased Orange Camber One Piece Suit " << endl;
							cout << " Whose Price is " << one_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (one_piece_suits->quant_of_suit * one_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
					}
					else if (str == one_piece_suits->fabric_of_suit_3)
					{
						cout << " You Have Selected Jacquard One Piece Suit " << endl;
						cout << " Please Choose Colour of Suit (blue , green , orange )(max 4+4+4)" << endl;
						cin >> str;
						if (str == one_piece_suits->colour_of_suit_1)
						{
							cout << " You Have Selected Jacquard One Piece Suit in Blue Colour " << endl;
							cout << " Enter Quantity of Blue Camber One Piece Suits " << endl;
							cin >> one_piece_suits->quant_of_suit;
							while (one_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Blue Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> one_piece_suits->quant_of_suit;

							}
							one_piece_suits->price_of_suit = 4500;
							max_one_piece_j_b = max_one_piece_j_b - one_piece_suits->quant_of_suit;
							max_one_piece_j = max_one_piece_j - one_piece_suits->quant_of_suit;
							max_one_piece = max_one_piece - one_piece_suits->quant_of_suit;
							cout << " You Have Purchased Blue Jacquard One Piece Suit " << endl;
							cout << " Whose Price is " << one_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (one_piece_suits->quant_of_suit * one_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == one_piece_suits->colour_of_suit_2)
						{
							cout << " You Have Selected jacquard One Piece Suit in Green  Colour " << endl;
							cout << " Enter Quantity of Green Jacquard One Piece Suits " << endl;
							cin >> one_piece_suits->quant_of_suit;
							while (one_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Green Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> one_piece_suits->quant_of_suit;

							}
							one_piece_suits->price_of_suit = 3977;
							max_one_piece_j_g = max_one_piece_j_g - one_piece_suits->quant_of_suit;
							max_one_piece_j = max_one_piece_j - one_piece_suits->quant_of_suit;
							max_one_piece = max_one_piece - one_piece_suits->quant_of_suit;
							cout << " You Have Purchased Green Jacquard One Piece Suit " << endl;
							cout << " Whose Price is " << one_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (one_piece_suits->quant_of_suit * one_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == one_piece_suits->colour_of_suit_3)

						{
							cout << " You Have Selected Jacquard One Piece Suit in Orange Colour " << endl;
							cout << " Enter Quantity of Orange Jacquard One Piece Suits " << endl;
							cin >> one_piece_suits->quant_of_suit;
							while (one_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Orange Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> one_piece_suits->quant_of_suit;

							}
							one_piece_suits->price_of_suit = 3977;
							max_one_piece_j_o = max_one_piece_j_o - one_piece_suits->quant_of_suit;
							max_one_piece_j = max_one_piece_j - one_piece_suits->quant_of_suit;
							max_one_piece = max_one_piece - one_piece_suits->quant_of_suit;
							cout << " You Have Purchased Orange Jacquard One Piece Suit " << endl;
							cout << " Whose Price is " << one_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (one_piece_suits->quant_of_suit * one_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
					}
				}
				else if (w_choice == 2)
				{

					cout << "                        2 Piece Suits " << endl;
					cout << " Please Choose the fabric of Your Suit (lawn , camber , jacquard )(max 12+12+12) " << endl;
					cin >> str;
					if (str == two_piece_suits->fabric_of_suit_1)
					{
						cout << " You Have Selected Lawn Two Piece Suit " << endl;
						cout << " Please Choose Colour of Suit (blue , green , orange )(max 4+4+4)" << endl;
						cin >> str;
						if (str == two_piece_suits->colour_of_suit_1)
						{
							cout << " You Have Selected Lawn Two Piece Suit in Blue Colour " << endl;
							cout << " Enter Quantity of Blue Lawn Two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (one_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Blue Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> one_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 4620;
							max_two_piece_l_b = max_two_piece_l_b - two_piece_suits->quant_of_suit;
							max_two_piece_l = max_two_piece_l - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Blue Lawn Two Piece Suit " << endl << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (one_piece_suits->quant_of_suit * one_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == two_piece_suits->colour_of_suit_2)
						{
							cout << " You Have Selected Lawn Two Piece Suit in Green  Colour " << endl;
							cout << " Enter Quantity of Green Lawn One Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Green Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							one_piece_suits->price_of_suit = 4620;
							max_two_piece_l_g = max_two_piece_l_g - two_piece_suits->quant_of_suit;
							max_two_piece_l = max_two_piece_l - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Green Lawn Two Piece Suit " << endl << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * two_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == two_piece_suits->colour_of_suit_3)

						{
							cout << " You Have Selected Lawn Two Piece Suit in Orange Colour " << endl;
							cout << " Enter Quantity of Orange Lawn Two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Orange Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 4500;
							max_two_piece_l_o = max_two_piece_l_o - two_piece_suits->quant_of_suit;
							max_two_piece_l = max_two_piece_l - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Orange Lawn Two Piece Suit " << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * one_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}

					}
					else if (str == two_piece_suits->fabric_of_suit_2)
					{
						cout << " You Have Selected camber Two Piece Suit " << endl;
						cout << " Please Choose Colour of Suit (blue , green , orange )(max 4+4+4)" << endl;
						cin >> str;
						if (str == two_piece_suits->colour_of_suit_1)
						{
							cout << " You Have Selected camber two Piece Suit in Blue Colour " << endl;
							cout << " Enter Quantity of Blue Camber Two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Blue Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 7000;
							max_two_piece_c_b = max_two_piece_c_b - two_piece_suits->quant_of_suit;
							max_two_piece_c = max_two_piece_c - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Blue Camber Two Piece Suit " << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * two_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == two_piece_suits->colour_of_suit_2)
						{
							cout << " You Have Selected camber Two Piece Suit in Green  Colour " << endl;
							cout << " Enter Quantity of Green camber Two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Green Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 6575;
							max_two_piece_c_g = max_two_piece_c_g - two_piece_suits->quant_of_suit;
							max_two_piece_c = max_two_piece_c - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Green Camber Two Piece Suit " << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * two_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == two_piece_suits->colour_of_suit_3)

						{
							cout << " You Have Selected Camber two Piece Suit in Orange Colour " << endl;
							cout << " Enter Quantity of Orange Camber two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Orange Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 7200;
							max_two_piece_c_o = max_two_piece_c_o - two_piece_suits->quant_of_suit;
							max_two_piece_c = max_two_piece_c - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Orange Camber Two Piece Suit " << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * two_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
					}
					else if (str == two_piece_suits->fabric_of_suit_3)
					{
						cout << " You Have Selected Jacquard Two Piece Suit " << endl;
						cout << " Please Choose Colour of Suit (blue , green , orange )(max 4+4+4)" << endl;
						cin >> str;
						if (str == two_piece_suits->colour_of_suit_1)
						{
							cout << " You Have Selected Jacquard Two Piece Suit in Blue Colour " << endl;
							cout << " Enter Quantity of Blue Camber Two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Blue Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 6540;
							max_two_piece_j_b = max_two_piece_j_b - two_piece_suits->quant_of_suit;
							max_two_piece_j = max_two_piece_j - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Blue Jacquard Two Piece Suit " << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * two_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == two_piece_suits->colour_of_suit_2)
						{
							cout << " You Have Selected jacquard Two Piece Suit in Green  Colour " << endl;
							cout << " Enter Quantity of Green Jacquard Two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Green Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 5977;
							max_two_piece_j_g = max_two_piece_j_g - two_piece_suits->quant_of_suit;
							max_two_piece_j = max_two_piece_j - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Green Jacquard Two Piece Suit " << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * two_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == two_piece_suits->colour_of_suit_3)

						{
							cout << " You Have Selected Jacquard Two Piece Suit in Orange Colour " << endl;
							cout << " Enter Quantity of Orange Jacquard Two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Orange Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 6777;
							max_two_piece_j_o = max_two_piece_j_o - two_piece_suits->quant_of_suit;
							max_two_piece_j = max_two_piece_j - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Orange Jacquard Two Piece Suit " << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * two_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
					}
				}
				else if (w_choice == 3)
				{
					cout << "                        2 Piece Suits Un-Stitched " << endl;
					cout << " Please Choose the fabric of Your Suit (lawn , camber , jacquard )(max 12+12+12) " << endl;
					cin >> str;
					if (str == two_piece_suits->fabric_of_suit_1)
					{
						cout << " You Have Selected Lawn Two Piece Suit " << endl;
						cout << " Please Choose Colour of Suit (blue , green , orange )(max 4+4+4)" << endl;
						cin >> str;
						if (str == two_piece_suits->colour_of_suit_1)
						{
							cout << " You Have Selected Lawn Two Piece Suit in Blue Colour " << endl;
							cout << " Enter Quantity of Blue Lawn Two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (one_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Blue Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> one_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 4620;
							max_two_piece_l_b = max_two_piece_l_b - two_piece_suits->quant_of_suit;
							max_two_piece_l = max_two_piece_l - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Blue Lawn Two Piece Suit " << endl << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (one_piece_suits->quant_of_suit * one_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == two_piece_suits->colour_of_suit_2)
						{
							cout << " You Have Selected Lawn Two Piece Suit in Green  Colour " << endl;
							cout << " Enter Quantity of Green Lawn One Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Green Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							one_piece_suits->price_of_suit = 4620;
							max_two_piece_l_g = max_two_piece_l_g - two_piece_suits->quant_of_suit;
							max_two_piece_l = max_two_piece_l - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Green Lawn Two Piece Suit " << endl << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * two_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == two_piece_suits->colour_of_suit_3)

						{
							cout << " You Have Selected Lawn Two Piece Suit in Orange Colour " << endl;
							cout << " Enter Quantity of Orange Lawn Two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Orange Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 4500;
							max_two_piece_l_o = max_two_piece_l_o - two_piece_suits->quant_of_suit;
							max_two_piece_l = max_two_piece_l - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Orange Lawn Two Piece Suit " << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * one_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}

					}
					else if (str == two_piece_suits->fabric_of_suit_2)
					{
						cout << " You Have Selected camber Two Piece Suit " << endl;
						cout << " Please Choose Colour of Suit (blue , green , orange )(max 4+4+4)" << endl;
						cin >> str;
						if (str == two_piece_suits->colour_of_suit_1)
						{
							cout << " You Have Selected camber two Piece Suit in Blue Colour " << endl;
							cout << " Enter Quantity of Blue Camber Two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Blue Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 7000;
							max_two_piece_c_b = max_two_piece_c_b - two_piece_suits->quant_of_suit;
							max_two_piece_c = max_two_piece_c - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Blue Camber Two Piece Suit " << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * two_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == two_piece_suits->colour_of_suit_2)
						{
							cout << " You Have Selected camber Two Piece Suit in Green  Colour " << endl;
							cout << " Enter Quantity of Green camber Two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Green Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 6575;
							max_two_piece_c_g = max_two_piece_c_g - two_piece_suits->quant_of_suit;
							max_two_piece_c = max_two_piece_c - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Green Camber Two Piece Suit " << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * two_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == two_piece_suits->colour_of_suit_3)

						{
							cout << " You Have Selected Camber two Piece Suit in Orange Colour " << endl;
							cout << " Enter Quantity of Orange Camber two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Orange Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 7200;
							max_two_piece_c_o = max_two_piece_c_o - two_piece_suits->quant_of_suit;
							max_two_piece_c = max_two_piece_c - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Orange Camber Two Piece Suit " << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * two_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
					}
					else if (str == two_piece_suits->fabric_of_suit_3)
					{
						cout << " You Have Selected Jacquard Two Piece Suit " << endl;
						cout << " Please Choose Colour of Suit (blue , green , orange )(max 4+4+4)" << endl;
						cin >> str;
						if (str == two_piece_suits->colour_of_suit_1)
						{
							cout << " You Have Selected Jacquard Two Piece Suit in Blue Colour " << endl;
							cout << " Enter Quantity of Blue Camber Two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Blue Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 6540;
							max_two_piece_j_b = max_two_piece_j_b - two_piece_suits->quant_of_suit;
							max_two_piece_j = max_two_piece_j - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Blue Jacquard Two Piece Suit " << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * two_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == two_piece_suits->colour_of_suit_2)
						{
							cout << " You Have Selected jacquard Two Piece Suit in Green  Colour " << endl;
							cout << " Enter Quantity of Green Jacquard Two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Green Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 5977;
							max_two_piece_j_g = max_two_piece_j_g - two_piece_suits->quant_of_suit;
							max_two_piece_j = max_two_piece_j - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Green Jacquard Two Piece Suit " << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * two_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
						else if (str == two_piece_suits->colour_of_suit_3)

						{
							cout << " You Have Selected Jacquard Two Piece Suit in Orange Colour " << endl;
							cout << " Enter Quantity of Orange Jacquard Two Piece Suits " << endl;
							cin >> two_piece_suits->quant_of_suit;
							while (two_piece_suits->quant_of_suit > 4)
							{
								cout << " You Have Selected a Quantity of Orange Suits  Which is Not Avaialble " << endl;
								cout << " Please Enter a Valid Quantity " << endl;
								cin >> two_piece_suits->quant_of_suit;

							}
							two_piece_suits->price_of_suit = 6777;
							max_two_piece_j_o = max_two_piece_j_o - two_piece_suits->quant_of_suit;
							max_two_piece_j = max_two_piece_j - two_piece_suits->quant_of_suit;
							max_two_piece = max_two_piece - two_piece_suits->quant_of_suit;
							cout << " You Have Purchased Orange Jacquard Two Piece Suit " << endl;
							cout << " Whose Price is " << two_piece_suits->price_of_suit << endl;
							total_bill = total_bill + (two_piece_suits->quant_of_suit * two_piece_suits->price_of_suit);
							cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
							cout << " Press 3 to Proceed to the Bill " << endl;
							cout << endl << endl;
						}
					}
				}
				else if (w_choice == 4)
				{
					cout << "                                      Saree" << endl;
					cout << " Please Select Fabric of Your Saree ( shafoon , lawn , jacquard ) " << endl;
					cin >> str;
					if (str == saree->fabric_of_saree_1)
					{
						cout << " You have Selected Shafoon Saree " << endl;
						cout << " Please Enter quantity of Saree You Want to Purchase " << endl;
						cin >> saree->quant_of_saree;

						while (saree->quant_of_saree > 10)
						{
							cout << " You Have entered a Quantity Which is Not Available In the Collection " << endl;
							cout << " Please Enter a Quantity Less Than or Equal to 10 " << endl;
							cin >> saree->quant_of_saree;
						}
						saree->price_of_saree = 10000;
						max_s_saree = max_s_saree - saree->quant_of_saree;
						max_saree = max_saree - saree->quant_of_saree;
						total_bill = total_bill + (saree->quant_of_saree * saree->price_of_saree);
						cout << " You Have Purchased Shafoon Saree " << endl;
						cout << " Whose Price is " << saree->price_of_saree << endl;
						cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
						cout << " Press 3 to Proceed to the Bill " << endl;
						cout << endl << endl;
					}
					else if (str == saree->fabric_of_saree_2)
					{
						cout << " You have Selected Lawn Saree " << endl;
						cout << " Please Enter quantity of Saree You Want to Purchase " << endl;
						cin >> saree->quant_of_saree;

						while (saree->quant_of_saree > 10)
						{
							cout << " You Have entered a Quantity Which is Not Available In the Collection " << endl;
							cout << " Please Enter a Quantity Less Than or Equal to 10 " << endl;
							cin >> saree->quant_of_saree;
						}
						saree->price_of_saree = 10000;
						max_l_saree = max_l_saree - saree->quant_of_saree;
						max_saree = max_saree - saree->quant_of_saree;
						total_bill = total_bill + (saree->quant_of_saree * saree->price_of_saree);
						cout << " You Have Purchased Lawn Saree " << endl;
						cout << " Whose Price is " << saree->price_of_saree << endl;
						cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
						cout << " Press 3 to Proceed to the Bill " << endl;
						cout << endl << endl;
					}
					else if (str == saree->fabric_of_saree_3)
					{
						cout << " You have Selected Jacquard Saree " << endl;
						cout << " Please Enter quantity of Saree You Want to Purchase " << endl;
						cin >> saree->quant_of_saree;

						while (saree->quant_of_saree > 10)
						{
							cout << " You Have entered a Quantity Which is Not Available In the Collection " << endl;
							cout << " Please Enter a Quantity Less Than or Equal to 10 " << endl;
							cin >> saree->quant_of_saree;
						}
						saree->price_of_saree = 10000;
						max_j_saree = max_j_saree - saree->quant_of_saree;
						max_saree = max_saree - saree->quant_of_saree;
						total_bill = total_bill + (saree->quant_of_saree * saree->price_of_saree);
						cout << " You Have Purchased Jacquard Saree " << endl;
						cout << " Whose Price is " << saree->price_of_saree << endl;
						cout << " Press 2 If You Wamt to Add Another Item Into Your Bill " << endl;
						cout << " Press 3 to Proceed to the Bill " << endl;
						cout << endl << endl;
					}
				}
				else if (w_choice == 5)
				{
					cout << "                                       Perfumes " << endl;
					cout << " Please Enter Name of the Perfume You Want ( marco polo , masculin , lactus) " << endl;
					cin >> str;

					if (str == perfumes->name_of_perfume_1)
					{
						cout << " You Have Selected Marco Polo " << endl;
						cout << " Please Enter Quantity of Perfumes " << endl;
						cin >> perfumes->quant_of_perfume;
						while (perfumes->quant_of_perfume > max_p_m)
						{
							cout << " You Have Selected a Quantity Which is Not Available in The Collection " << endl;
							cout << " Please Select a Valid quantity " << endl;
							cin >> perfumes->quant_of_perfume;
						}
						perfumes->price_of_perfume = 5000;
						max_p_m = max_p_m - perfumes->quant_of_perfume;
						max_perfumes = max_p_m + max_p_ms + max_p_lc;
						total_bill = total_bill + (perfumes->quant_of_perfume * perfumes->price_of_perfume);
					}
					else if (str == perfumes->name_of_perfume_2)
					{
						cout << " You Have Selected Masculin" << endl;
						cout << " Please Enter Quantity of Perfumes " << endl;
						cin >> perfumes->quant_of_perfume;
						while (perfumes->quant_of_perfume > max_p_ms)
						{
							cout << " You Have Selected a Quantity Which is Not Available in The Collection " << endl;
							cout << " Please Select a Valid quantity " << endl;
							cin >> perfumes->quant_of_perfume;
						}
						perfumes->price_of_perfume = 7500;
						max_p_ms = max_p_ms - perfumes->quant_of_perfume;
						max_perfumes = max_p_m + max_p_ms + max_p_lc;
						total_bill = total_bill + (perfumes->quant_of_perfume * perfumes->price_of_perfume);
					}
					else if (str == perfumes->name_of_perfume_3)
					{
						cout << " You Have Selected Lactus " << endl;
						cout << " Please Enter Quantity of Perfumes " << endl;
						cin >> perfumes->quant_of_perfume;
						while (perfumes->quant_of_perfume > max_p_lc)
						{
							cout << " You Have Selected a Quantity Which is Not Available in The Collection " << endl;
							cout << " Please Select a Valid quantity " << endl;
							cin >> perfumes->quant_of_perfume;
						}
						perfumes->price_of_perfume = 5000;
						max_p_lc = max_p_lc - perfumes->quant_of_perfume;
						max_perfumes = max_p_m + max_p_ms + max_p_lc;
						total_bill = total_bill + (perfumes->quant_of_perfume * perfumes->price_of_perfume);

					}

				}
			}
		}
			else if (cust_choice == 3)
			{
				if (total_bill == 0)
				{
					cout << " You Have Purchased Nothing " << endl;
					cout << " First Purchase Something To View The Bill " << endl;
				}
				else
				{
					cout << " Your Total Bill is " << total_bill << endl;
					cout << " Thanks for Visiting US " << endl;
				}
			}
			else if (cust_choice == 4)
			{
				char ch;
				cin >> ch;
				switch (ch)
				{
				case 'm':
					cout << " Max Kurta Pajama " << max_k_paj << endl;
					cout << " Max Kurta Pajama Blended " << max_k_blended << endl;
					cout << " Max Kurta Pajama Casual " << max_k_casual << endl;
					cout << endl << endl;
					cout << " Max Shalwar Qameez " << max_q_shal << endl;
					cout << " Max Shalwar Qameez Blended " << max_q_blended << endl;
					cout << " Max Shalwar Qameez Casual " << max_q_casual << endl;
					cout << endl << endl;
					cout << " Max Waist Coats " << max_waistcoats << endl;
					cout << " Max Waist Coast Black    " << max_w_bl << endl;
					cout << " Max Waist Coats dark Brown " << max_w_db << endl;
					cout << " Max Waist Coats Red " << max_w_r << endl;
					cout << endl << endl;
					cout << " Max Footwears ( Chappals)" << max_chappals << endl;
					cout << " Max Black Chappals " << max_blc_chappal << endl;
					cout << " Max Blue Chappals " << max_bl_chappal << endl;
					cout << " Max Brown Chappals " << max_br_chappal << endl;
					cout << endl << endl;
					cout << " Max Men Caps " << max_men_caps << endl;
					cout << endl << endl;
					cout << " Max Perfumes " << endl;
					cout << " Max Marco Polo " << max_p_m << endl;
					cout << " Max Masculin " << max_p_ms << endl;
					cout << " Max Lactus " << max_p_lc << endl;
					cout << endl << endl;
				case 'w':
					cout << " Max One Piece Suits " << max_one_piece << endl;
					cout << " Max One Piece Lawn " << max_one_piece_l << endl;
					cout << " Max One Piece Lawn in Blue Colour " << max_one_piece_l_b << endl;
					cout << " Max One Piece Lawn in Green Colour " << max_one_piece_l_g << endl;
					cout << " Max One Piece Lawn in Orange Colour " << max_one_piece_l_o << endl;
					cout << endl;
					cout << " Max One Piece Camber " << max_one_piece_c << endl;
					cout << " Max One Piece Camber in Blue Colour " << max_one_piece_c_b << endl;
					cout << " Max One Piece Camber in Green Colour " << max_one_piece_c_g << endl;
					cout << " Max One Piece Camber in Orange Colour " << max_one_piece_c_o << endl;
					cout << endl;
					cout << " Max One Piece Jacquard " << max_one_piece_j << endl;
					cout << " Max One Piece Jacquard in Blue Colour " << max_one_piece_j_b << endl;
					cout << " Max One Piece Jacquard in Green Colour " << max_one_piece_j_g << endl;
					cout << " Max One Piece Jacquard in Orange Colour " << max_one_piece_j_o << endl;
					cout << endl << endl;
					cout << " Max Two Piece Suits " << max_two_piece << endl;
					cout << " Max Two Piece Lawn " << max_two_piece_l << endl;
					cout << " Max Two Piece Lawn in Blue Colour " << max_two_piece_l_b << endl;
					cout << " Max Two Piece Lawn in Green Colour " << max_two_piece_l_g << endl;
					cout << " Max Two Piece Lawn in Orange Colour " << max_two_piece_l_o << endl;
					cout << endl;
					cout << " Max Two Piece Camber " << max_two_piece_c << endl;
					cout << " Max Two Piece Camber in Blue Colour " << max_two_piece_c_b << endl;
					cout << " Max Two Piece Camber in Green Colour " << max_two_piece_c_g << endl;
					cout << " Max Two Piece Camber in Orange Colour " << max_two_piece_c_o << endl;
					cout << endl;
					cout << " Max Two Piece Jacquard " << max_two_piece_j << endl;
					cout << " Max Two Piece Jacquard in Blue Colour " << max_two_piece_j_b << endl;
					cout << " Max Two Piece Jacquard in Green Colour " << max_two_piece_j_g << endl;
					cout << " Max Two Piece Jacquard in Orange Colour " << max_two_piece_j_o << endl;
					cout << endl << endl;
				default:
					cout << " Invalid Command " << endl;
				}
			}
		
		
	}while(cust_choice != 5);
	
	system("pause");
	}

