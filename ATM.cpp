#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

/* Mini Project - ATM
   -> Check Balance
   -> Cash withdraw
   -> User Details
   -> Update Mobile No.
*/

class atm // class atm
{
private: // private member varibles
	long int account_No;
	string name;
	int PIN;
	double balance;
	string mobile_No;

public: // public member functions
	// setData function is setting the Data into the private member variables
	void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a)
	{
		account_No = account_No_a; // assigning the formal arguments to the private member var's
		name = name_a;
		PIN = PIN_a;
		balance = balance_a;
		mobile_No = mobile_No_a;
	}

	long int getAccountNo()
	{
		return account_No;
	}

	string getName()
	{
		return name;
	}

	int getPIN()
	{
		return PIN;
	}

	double getBalance()
	{
		return balance;
	}

	string getMobileNo()
	{
		return mobile_No;
	}

	// setMobile function is Updating the user mobile no
	void setMobile(string mob_prev, string mob_new)
	{
		if (mob_prev == mobile_No)
		{
			mobile_No = mob_new;
			cout << endl
				 << "Sucessfully Updated Mobile no.";
			_getch(); // getch is to hold the screen ( untill user press any key )
		}

		else
		{
			cout << endl
				 << "Incorrect !!! Old Mobile no";
			_getch(); // getch is to hold the screen ( untill user press any key )
		}
	}
	void setName(string name_prev, string name_new)
	{
		if (name_prev == name)
		{
			name = name_new;
			cout << endl
				 << "Sucessfully Updated name no.";
			_getch(); // getch is to hold the screen ( untill user press any key )
		}

		else
		{
			cout << endl
				 << "Incorrect !!! Old name no";
			_getch(); // getch is to hold the screen ( untill user press any key )
		}
	}

	void cashWithDraw(int amount_a)
	{
		if (amount_a > 0 && amount_a < balance) // check entered amount validity
		{
			balance -= amount_a;
			cout << endl
				 << "Please Collect Your Cash";
			cout << endl
				 << "Available Balance :" << balance;
			_getch(); // getch is to hold the screen(untill user press any key )
		}

		else
		{
			cout << endl
				 << "Invalid Input or Insufficient Balance";
			_getch(); // getch is to hold the screen ( untill user press any key )
		}
	}
};

int main()
{
	int choice = 0, enterPIN; // enterPIN and enterAccountNo. ---> user authentication
	long int enterAccountNo;

	system("cls");

	// created User ( object )
	atm user1;
	atm user2;
	atm user3;
	// Set User Details ( into object )         ( Setting Default Data )
	user1.setData(1234567, "Anjali", 11761, 48700.90, "9087654321");
	user2.setData(1545345, "Sauravsaini", 1911, 45000.90, "987754321");
	user3.setData(635214562, "Shivani", 9811, 45800.90, "908787321");

	do
	{
		system("cls");

		cout << endl
			 << "****Welcome to ATM*****" << endl;
		cout << endl
			 << "Enter Your Account No "; // asking user to enter account no
		cin >> enterAccountNo;

		cout << endl
			 << "Enter PIN "; // asking user to enter PIN
		cin >> enterPIN;

		// check whether enter values matches with user details
		if ((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN()))
		{
			do
			{
				int amount = 0;
				string oldMobileNo, newMobileNo;
                 string oldname , newname;
				system("cls");
				// user Interface
				cout << endl
					 << "**** Welcome to ATM *****" << endl;
				cout << endl
					 << "Select Options ";
				cout << endl
					 << "1. Check Balance";
				cout << endl
					 << "2. Cash withdraw";
				cout << endl
					 << "3. Show User Details";
				cout << endl
					 << "4. Update Mobile no.";
				cout << endl
					 << "5. Update Name  ";
				cout << endl
					 << "6. Exit" << endl;
				cin >> choice;

				switch (choice) // switch condition
				{
				case 1: // if user presses 1
					cout << endl
						 << "Your Bank balance is :" << user1.getBalance();
					// getBalance is ... printing the users									bank balance
					_getch();
					break;

				case 2: // if user presses 2
					cout << endl
						 << "Enter the amount :";
					cin >> amount;
					user1.cashWithDraw(amount);
					break;

				case 3: // if user presses 3
					cout << endl
						 << "*** User Details are :- ";
					cout << endl
						 << "-> Account no" << user1.getAccountNo();
					cout << endl
						 << "-> Name      " << user1.getName();
					cout << endl
						 << "-> Balance   " << user1.getBalance();
					cout << endl
						 << "-> Mobile No." << user1.getMobileNo();
					// getting and printing user details
					_getch();
					break;

				case 4: //  if user presses 4
					cout << endl
						 << "Enter Old Mobile No. ";
					cin >> oldMobileNo; // take old mobile no

					cout << endl
						 << "Enter New Mobile No. ";
					cin >> newMobileNo; // take new mobile no

					user1.setMobile(oldMobileNo, newMobileNo); // now set new mobile no
					break;

				case 5: //  if user presses 4
					cout << endl
						 << "Enter Old Name  ";
					cin >> oldname; // take old mobile no

					cout << endl
						 << "Enter New Name  ";
					cin >> newname; // take new mobile no

					user1.setName(  oldname , newname); // now set new mobile no
					break;

					// if user presses 5
				case 6:
					exit(0); // exit application

				default: // handle invalid user inputs
					cout << endl
						 << "Enter Valid Data !!!";
				}

			} while (1); // MENU	   // condition will always TRUE and loop is										capable of running infinite times
		}

		if ((enterAccountNo == user2.getAccountNo()) && (enterPIN == user2.getPIN()))
		{
			do
			{
				int amount = 0;
			string oldMobileNo, newMobileNo;
                 string oldname , newname;

				system("cls");
				// user Interface
				cout << endl
					 << "**** Welcome to ATM *****" << endl;
				cout << endl
					 << "Select Options ";
				cout << endl
					 << "1. Check Balance";
				cout << endl
					 << "2. Cash withdraw";
				cout << endl
					 << "3. Show User Details";
				cout << endl
					 << "4. Update Mobile no.";
				cout << endl
					 << "5. Exit" << endl;
				cin >> choice;

				switch (choice) // switch condition
				{
				case 1: // if user presses 1
					cout << endl
						 << "Your Bank balance is :" << user2.getBalance();
					// getBalance is ... printing the users									bank balance
					_getch();
					break;

				case 2: // if user presses 2
					cout << endl
						 << "Enter the amount :";
					cin >> amount;
					user1.cashWithDraw(amount);
					break;

				case 3: // if user presses 3
					cout << endl
						 << "*** User Details are :- ";
					cout << endl
						 << "-> Account no" << user2.getAccountNo();
					cout << endl
						 << "-> Name      " << user2.getName();
					cout << endl
						 << "-> Balance   " << user2.getBalance();
					cout << endl
						 << "-> Mobile No." << user2.getMobileNo();
					// getting and printing user details
					_getch();
					break;

				case 4: //  if user presses 4
					cout << endl
						 << "Enter Old Mobile No. ";
					cin >> oldMobileNo; // take old mobile no

					cout << endl
						 << "Enter New Mobile No. ";
					cin >> newMobileNo; // take new mobile no

					user2.setMobile(oldMobileNo, newMobileNo); // now set new mobile no
					break;

						case 5: //  if user presses 4
					cout << endl
						 << "Enter Old Name  ";
					cin >> oldname; // take old mobile no

					cout << endl
						 << "Enter New Name  ";
					cin >> newname;

					user2.setName(oldname, newname); 
					break;

					// if user presses 5
				case 6:
					exit(0); // exit application

				default: // handle invalid user inputs
					cout << endl
						 << "Enter Valid Data !!!";
				}

			} while (1); // MENU	   // condition will always TRUE and loop is										capable of running infinite times
		}

		else
		{
			cout << endl
				 << "User Details are Invalid !!! ";
			_getch();
		}
	} while (1); // LOGIN		// condition will always TRUE and loop is										capable of running infinite times

	return 0;
}