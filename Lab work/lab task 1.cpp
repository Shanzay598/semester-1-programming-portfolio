#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50)
    {
        cout << "Result: Pass" << endl;

        if (marks >= 70)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Keep practicing" << endl;
        }
    }
    else
    {
        cout << "Result: Fail" << endl;
    }

    return 0;
}