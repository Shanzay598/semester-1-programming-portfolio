//#include <iostream>
//using namespace std;
//int main()
//{
//	const int SIZE = 6;
//	double total = 0;
//	double marks[SIZE];
//	for (int i = 0;i < 6;i++)
//	{
//		cout << "Enter Student Marks:";
//			cin >> marks[i];
//			total += marks[i];
//	}
//	double average = total / SIZE;
//	double highest = marks[0];
//	double lowest = marks[0];
//	for (int i = 1;i < 6;i++)
//	{
//		if (marks[i] > highest)
//		{
//			highest = marks[i];
//		}
//		if (marks[i] < lowest)
//		{
//			lowest = marks[i];
//		}
//	}
//	
//	cout << "HIGHEST=" << highest << endl;
//	cout << "Lowest=" << lowest << endl;
//	cout << "Average=" << average << endl;
//	return 0;
//} 
//


#include <iostream>
using namespace std;
int main()
{
	int choice;
	double total = 0;
	cout << "====MENU=====" << endl;
	cout << "1.Bread" << endl;
	cout << "2.Pizza" << endl;
	cout << "3.Burger" << endl;
	cout << "Enter choice" << endl;
	
	while (true)
	{
		cin >> choice;
		if (choice == 0)
		{
			break;
		}
		switch (choice)
		{
		case 1:
		{
			total += 1000;
			cout << "Bread has been selected" << endl;
			break;
		}
		case 2:
		{
			total += 1500;
			cout << "Pizza has been selected" << endl;
			break;
		}
		case 3:
		{
			total += 2000;
			cout << "Burger has been selected" << endl;
			break;
		}
		default:
			cout << "invalid choice" << endl;
		}

	}
		
		
		
		
		
		
		
		
		
		
		
		
		
}