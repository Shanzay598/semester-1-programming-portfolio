//#include <iostream>
//using namespace std;
//void displayMessage()
//{
//	cout << "Hi I am doing PF" << endl;
//
//}
//void calculateTotal()
//{
//	double total = 50;
//	cout << "Total is" << total;
//
//}
//int main()
//{
//	displayMessage();
//	calculateTotal();
//	return 0;
//}


#include <iostream>
using namespace std;

double selectActivity()
{
    int choice;
    double total = 0;

    while (true)
    {
        cout << "Select activity (1, 2 or 0 to finish): ";
        cin >> choice;

        if (choice == 0)
            break;

        switch (choice)
        {
        case 1:
            total += 1500;
            cout << "City Tour selected\n";
            break;

        case 2:
            total += 800;
            cout << "Museum Visit selected\n";
            break;

        default:
            cout << "Invalid choice\n";
        }
    }

    return total;
}

int main()
{
    double total;

    total = selectActivity();

    cout << "Total activities cost: " << total;

    return 0;
}
