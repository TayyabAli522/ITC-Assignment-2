#include <iostream>
using namespace std;
int main()
{
	int choice, pin = 1234, userpin, AccountMoney = 1000, Deposit, Withdraw;
	cout << "**** Bank Account Management System ****" << endl;
	cout << "1. Create Account (Initial Balance)" << endl;
	cout << "2. Deposit Money" << endl;
	cout << "3. Withdraw Money" << endl;
	cout << "4. Check Balance" << endl;
	cout << "5. Exit" << endl;
	cout << "Enter your choice: ";
	cin >> choice;                                      //User input above choise 
	while (choice <= 0 || choice > 5)                        //When user input invalid choice then use this loop
	{
		cout << "Incorrect choice !!" << endl;
		cout << "Enter correct choice: ";
		cin >> choice;
	}
	while (choice != 5)                                  //loop is use, The user exit any time while input 5
	{
		if (choice == 1)                                 //If user input choice no 1 
		{
			AccountMoney = 1000;
			cout << "Set your pin account: ";
			cin >> pin;                                 //User set the pin of his/her account
			cout << "Your account has been created successfully" << endl;
			cout << "currently you have " << AccountMoney << "$ in your Account" << endl;
		}
		else if (choice == 2)                             //If user input choice no 2    
		{
			cout << "Enter how many Money Deposit: ";
			cin >> Deposit;                              //Now user input how many Amount Deposit
			while (Deposit < 0)                           //User enter invalid input so use this loop
			{
				cout << "invalid input !!" << endl;
				cout << "Enter correct input: ";
				cin >> Deposit;
			}
			cout << "You Deposit " << Deposit << "$ successfully" << endl;
			AccountMoney += Deposit;                     //The Deposit money Add in his/her account
		}
		else if (choice == 3)                             //If user input choice no 3
		{
			cout << "Enter pin: ";
			cin >> userpin;                              //User enter pin 
			while (userpin != pin)                        //If pin is worng so use this loop
			{
				cout << "invalid pin !!" << endl;
				cout << "Enter correct pin: ";
				cin >> userpin;
			}
			cout << "Enter Withdraw Amount: ";
			cin >> Withdraw;                             //Then user Withdraw money in his/her Amount
			while (Withdraw < 0)                          //User enter invalid input so use this loop
			{
				cout << "invalid input !!" << endl;
				cout << "Enter correct input: ";
				cin >> Withdraw;
			}
			while (Withdraw > AccountMoney)               //If user Withdraw more than Account Money so use this loop
			{
				cout << "Not Enough Money to Withdraw" << endl;
				cout << "Enter correct input: ";
				cin >> Withdraw;
			}
			cout << "You Withdraw " << Withdraw << "$ successfully" << endl;
			AccountMoney -= Withdraw;                     //The Withdraw money subtract in his/her account
		}
		else if (choice == 4)                              //If user input choice no 4 
		{
			cout << "Enter pin: ";
			cin >> userpin;                               //User enter pin 
			while (userpin != pin)                         //If pin is worng so use this loop
			{
				cout << "invalid pin !!" << endl;
				cout << "Enter correct pin: ";
				cin >> userpin;
			}
			cout << "your current Balance is " << AccountMoney << "$" << endl;   //Display current Account Balance
		}
		cout << "\n1. Create Account (Initial Balance)" << endl;
		cout << "2. Deposit Money" << endl;
		cout << "3. Withdraw Money" << endl;
		cout << "4. Check Balance" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;                                       //Again User input above choise 
		while (choice <= 0 || choice > 5)                         //When user input invalid choice then use this loop
		{
			cout << "Incorrect choice !!" << endl;
			cout << "Enter correct choice: ";
			cin >> choice;
		}
	}
	cout << "\nGoodbye";
	return 0;
}