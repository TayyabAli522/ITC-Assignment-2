#include <iostream>
using namespace std;
int main()
{
	int ch, b = 5, c = 5, d = 5, e = 5, a = 5, sch, tch;
	cout << "Welcome to the Library System!" << endl;
	cout << "Please select an option:" << endl;
	cout << "1. Borrow a book" << endl;
	cout << "2. Return a book" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter your choice: ";
	cin >> ch;                                    //User Enter the choice
	while (ch < 1 || ch>3)                        //loop is use when user input worng choice
	{
		cout << "Invalid input!!" << endl;
		cout << "Enter correct input: ";
		cin >> ch;
	}
	while (ch != 3)                                //loop is use, The user exit any time while input 3
	{
		if (ch == 1)                                //if user input 1 than show all books in Library to borrow
		{
			cout << "Please select an option:" << endl;
			cout << "1. The Catcher in the Rye - Available: " << a << " copies" << endl;
			cout << "2. 1984 ------------------- Available: " << b << " copies" << endl;
			cout << "3. To Kill a Mockingbird -- Available: " << c << " copies" << endl;
			cout << "4. The Great Gatsby ------- Available: " << d << " copies" << endl;
			cout << "5. Moby Dick -------------- Available: " << e << " copies" << endl;
			cout << "Enter to choise the book: ";
			cin >> sch;                                 //user input book number for borrow
			while (sch < 1 || sch>5)                    //user input worng book number so use this loop
			{
				cout << "Invalid input!!" << endl;
				cout << "Enter correct input: ";
				cin >> sch;
			}
			if (sch == 1)                               //If user choice book no 1
			{

				if (a > 4)                                 //If user borrow two or more book no 1 
				{
					a--;
					cout << "You borrow successfully The book' The Catcher in the Rye '" << endl;
				}
				else
					cout << "You already borrowed this book" << endl;
			}
			if (sch == 2)                                //If user choice book no 2
			{

				if (b > 4)                                  //If user borrow two or more book no 2
				{
					b--;
					cout << "You borrow successfully The book' 1984 '" << endl;
				}
				else
					cout << "You already borrowed this book" << endl;
			}
			if (sch == 3)                                  //If user choice book no 3
			{

				if (c > 4)                                    //If user borrow two or more book no 3
				{
					c--;
					cout << "You borrow successfully The book' To Kill a Mockingbird '" << endl;
				}
				else
					cout << "You already borrowed this book" << endl;
			}
			if (sch == 4)                                   //If user choice book no 4
			{

				if (d > 4)                                     //If user borrow two or more book no 4 
				{
					d--;
					cout << "You borrow successfully The book' The Great Gatsby '" << endl;
				}
				else
					cout << "You already borrowed this book" << endl;
			}
			if (sch == 5)                                     //If user choice book no 5
			{

				if (e > 4)                                       //If user borrow two or more book no 5
				{
					e--;
					cout << "You borrow successfully The book' Moby Dick '" << endl;
				}
				else
					cout << "You already borrowed this book" << endl;
			}
		}
		if (ch == 2)                                      //if user input 2 than show all books in Library to return
		{
			cout << "Please select an option:" << endl;
			cout << "1. The Catcher in the Rye " << endl;
			cout << "2. 1984  " << endl;
			cout << "3. To Kill a Mockingbird" << endl;
			cout << "4. The Great Gatsby " << endl;
			cout << "5. Moby Dick " << endl;
			cout << "Select the book you wish to return: ";
			cin >> tch;                                    //user input the book no for return
			while (tch < 1 || tch>5)                       //user input worng book number so use this loop
			{
				cout << "Invalid input!!" << endl;
				cout << "Enter correct input: ";
				cin >> tch;
			}
			if (tch == 1)                                      //if user return book no 1
			{
				if (a >= 5)                                 //Check if user already borrow book no 1
				{
					cout << "You could not borrow this book " << endl;
					cout << "Return the book that you borrowed" << endl;
				}
				else if (a < 5)
				{
					a++;
					cout << "You Return successfully The book' The Catcher in the Rye '" << endl;
				}
			}
			else if (tch == 2)                               //if user return book no 2
			{
				if (b >= 5)                                  //Check if user already borrow book no 2
				{
					cout << "You could not borrow this book " << endl;
					cout << "Return the book that you borrowed" << endl;
				}
				else if (b < 5)
				{
					b++;
					cout << "You Return successfully The book' 1984 '" << endl;
				}
			}
			else if (tch == 3)                                 //if user return book no 3
			{
				if (c >= 5)                                    //Check if user already borrow book no 3
				{
					cout << "You could not borrow this book " << endl;
					cout << "Return the book that you borrowed" << endl;
				}
				else if (c < 5)
				{
					c++;
					cout << "You Return successfully The book' To Kill a Mockingbird '" << endl;
				}
			}
			else if (tch == 4)                                 //if user return book no 4
			{
				if (d >= 5)                                    //Check if user already borrow book no 4
				{
					cout << "You could not borrow this book " << endl;
					cout << "Return the book that you borrowed" << endl;
				}
				else if (d < 5)
				{
					d++;
					cout << "You Return successfully The book' The Great Gatsby '" << endl;
				}
			}
			else if (tch == 5)                                   //if user return book no 5
			{
				if (e >= 5)                                      //Check if user already borrow book no 5
				{
					cout << "You could not borrow this book " << endl;
					cout << "Return the book that you borrowed" << endl;
				}
				else if (e < 5)
				{
					e++;
					cout << "You Return successfully The book' Moby Dick '" << endl;
				}
			}
		}
		cout << "\n1. Borrow a book" << endl;
		cout << "2. Return a book" << endl;
		cout << "3. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> ch;                                                //User input choice again 
		while (ch < 1 || ch>3)                                    //use loop if user enter invalid input
		{
			cout << "Invalid input!!" << endl;
			cout << "Enter correct input: ";
			cin >> ch;
		}

	}
	cout << "\nGoodbye";
	return 0;
}