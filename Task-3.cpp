#include <iostream>
using namespace std;
int main()
{
	int size = 10, i = 1, j = 1, k = 1, x = 1;
	while (i <= size)                     //The loop is run atleast size time
	{ 
		if (i <= size / 2)                //This loop run before size half time
		{
			j = 1;
			while (j <= i)                //This loop is use to print the counting
			{
				cout << j;
				j++;
			}
			cout << endl;
		} 
		else if (i > size / 2)            //This loop run after size half time
		{
			k = 1;
			while (k <= size - i)         //This loop use to print spaces
			{
				cout << " ";
				k++;
			}
			x = 1;
			while (x <= i - size / 2)    //This loop is use to print '*'
			{
				cout << "*";
				x++;
			}
			cout << endl;
		}
		i++;
	}
	return 0;
}