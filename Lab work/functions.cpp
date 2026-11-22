//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int steps;
//    int day = 1;
//    int totalSteps = 0;
//    int targetDays = 0;
//    int highestSteps = -1;
//    int highestDay = 0;
//    double average;
//
//    while (day <= 7)
//    {
//        cout << "Enter steps for day " << day << ": ";
//        cin >> steps;
//
//        // Input validation
//        while (steps < 0 || steps > 50000)
//        {
//            cout << "Invalid input! Enter steps between 0 and 50000: ";
//            cin >> steps;
//        }
//
//        // Calculate total
//        totalSteps = totalSteps + steps;
//
//        // Count target days
//        if (steps >= 10000)
//        {
//            targetDays++;
//        }
//
//        // Find highest steps
//        if (steps > highestSteps)
//        {
//            highestSteps = steps;
//            highestDay = day;
//        }
//
//        // Move to next valid day
//        day++;
//    }
//
//    // Calculate average
//    average = totalSteps / 7.0;
//
//    // Display results
//    cout << "\nWeekly Step Record" << endl;
//    cout << "Total steps: " << totalSteps << endl;
//    cout << "Daily average: " << average << endl;
//    cout << "Days reached target: " << targetDays << endl;
//    cout << "Highest steps: " << highestSteps << endl;
//    cout << "Day number: " << highestDay << endl;
//
//    return 0;
//}
//
//
//
//#include <iostream>
//using namespace std;
//
//// Function definition
//void displayWelcome()
//{
//    cout << "Welcome to Programming Fundamentals Lab";
//}
//
//int main()
//{
//    displayWelcome();
//
//    return 0;
//}
//
//
//
//
//#include <iostream>
//using namespace std;
//
//// Function definition
//void multiplicationTable(int num)
//{
//    for (int i = 1; i <= 10; i++)
//    {
//        cout << num << " x " << i << " = "
//            << num * i << endl;
//    }
//}
//
//int main()
//{
//    int number;
//
//    cout << "Enter an integer: ";
//    cin >> number;
//
//    multiplicationTable(number);
//
//    return 0;
//}
//
//
//
//
//
//#include <iostream>
//using namespace std;
//
//// Function definition
//int findHighest(int mark1, int mark2, int mark3)
//{
//    int highest;
//
//    if (mark1 >= mark2 && mark1 >= mark3)
//    {
//        highest = mark1;
//    }
//    else if (mark2 >= mark1 && mark2 >= mark3)
//    {
//        highest = mark2;
//    }
//    else
//    {
//        highest = mark3;
//    }
//
//    return highest;
//}
//
//int main()
//{
//    int a, b, c;
//    int highest;
//
//    cout << "Enter marks of three students: ";
//    cin >> a >> b >> c;
//
//    highest = findHighest(a, b, c);
//
//    cout << "Highest mark = " << highest;
//
//    return 0;
//}
//
//
//
//
//#include <iostream>
//using namespace std;
//
//// Function definition
//void checkEvenOdd()
//{
//    int number;
//
//    cout << "Enter an integer: ";
//    cin >> number;
//
//    if (number % 2 == 0)
//    {
//        cout << number << " is Even";
//    }
//    else
//    {
//        cout << number << " is Odd";
//    }
//}
//
//int main()
//{
//    checkEvenOdd();
//
//    return 0;
//}
//
//
//
//
//
//#include <iostream>
//using namespace std;
//
//// Function definition
//char calculateGrade(double percentage)
//{
//    if (percentage >= 80)
//    {
//        return 'A';
//    }
//    else if (percentage >= 70)
//    {
//        return 'B';
//    }
//    else if (percentage >= 60)
//    {
//        return 'C';
//    }
//    else
//    {
//        return 'F';
//    }
//}
//
//int main()
//{
//    double percentage;
//    char grade;
//
//    cout << "Enter your percentage: ";
//    cin >> percentage;
//
//    grade = calculateGrade(percentage);
//
//    cout << "Grade = " << grade;
//
//    return 0;
//}
//
//
//
//
//#include <iostream>
//using namespace std;
//
//// Addition function
//double add(double num1, double num2)
//{
//    double result;
//    result = num1 + num2;
//    return result;
//}
//
//// Subtraction function
//double subtract(double num1, double num2)
//{
//    double result;
//    result = num1 - num2;
//    return result;
//}
//
//// Multiplication function
//double multiply(double num1, double num2)
//{
//    double result;
//    result = num1 * num2;
//    return result;
//}
//
//// Division function
//double divide(double num1, double num2)
//{
//    double result;
//    result = num1 / num2;
//    return result;
//}
//
//int main()
//{
//    int choice;
//    double num1, num2, result;
//
//    cout << "===== CALCULATOR MENU =====" << endl;
//    cout << "1. Addition" << endl;
//    cout << "2. Subtraction" << endl;
//    cout << "3. Multiplication" << endl;
//    cout << "4. Division" << endl;
//
//    cout << "Enter your choice: ";
//    cin >> choice;
//
//    cout << "Enter two numbers: ";
//    cin >> num1 >> num2;
//
//    switch (choice)
//    {
//    case 1:
//        result = add(num1, num2);
//        cout << "Result = " << result;
//        break;
//
//    case 2:
//        result = subtract(num1, num2);
//        cout << "Result = " << result;
//        break;
//
//    case 3:
//        result = multiply(num1, num2);
//        cout << "Result = " << result;
//        break;
//
//    case 4:
//        if (num2 == 0)
//        {
//            cout << "Error! Division by zero is not allowed.";
//        }
//        else
//        {
//            result = divide(num1, num2);
//            cout << "Result = " << result;
//        }
//        break;
//
//    default:
//        cout << "Invalid choice!";
//    }
//
//    return 0;
//}
//
//
//
//
//
//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//// Function to display company name and rates
//void displayCompany()
//{
//    cout << "===== FAST COURIER SERVICE =====" << endl;
//
//    cout << "\nDestination Zones and Rates" << endl;
//    cout << "Zone 1 - Same City: Rs. 100/kg" << endl;
//    cout << "Zone 2 - Within Punjab: Rs. 180/kg" << endl;
//    cout << "Zone 3 - Other Provinces: Rs. 250/kg" << endl;
//}
//
//// Function to validate sender name
//bool validateName(string name)
//{
//    return !name.empty();
//}
//
//// Function to calculate rate according to zone
//double getRate(int zone)
//{
//    switch (zone)
//    {
//    case 1:
//        return 100;
//
//    case 2:
//        return 180;
//
//    case 3:
//        return 250;
//
//    default:
//        return 0;
//    }
//}
//
//// Function to calculate delivery charge
//double calculateDelivery(double weight, double rate)
//{
//    return weight * rate;
//}
//
//// Function to calculate express surcharge
//double calculateSurcharge(double deliveryCharge, char type)
//{
//    if (type == 'E' || type == 'e')
//    {
//        return deliveryCharge * 0.30;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//// Function to calculate packing fee
//double calculatePacking(double weight)
//{
//    if (weight <= 5)
//    {
//        return 50;
//    }
//    else
//    {
//        return 100;
//    }
//}
//
//// Function to confirm booking
//void confirmBooking()
//{
//    char choice;
//
//    cout << "\nConfirm booking (Y/N): ";
//    cin >> choice;
//
//    while (choice != 'Y' && choice != 'y' &&
//        choice != 'N' && choice != 'n')
//    {
//        cout << "Invalid choice! Enter Y or N: ";
//        cin >> choice;
//    }
//
//    if (choice == 'Y' || choice == 'y')
//    {
//        cout << "Booking confirmed";
//    }
//    else
//    {
//        cout << "Booking canceled";
//    }
//}
//
//int main()
//{
//    string sender;
//    double weight, rate;
//    double deliveryCharge, surcharge, packingFee, total;
//    int zone;
//    char type;
//
//    // Display company information
//    displayCompany();
//
//    // Input sender name
//    cout << "\nEnter sender name: ";
//    cin >> ws;
//    getline(cin, sender);
//
//    while (!validateName(sender))
//    {
//        cout << "Invalid name! Enter sender name again: ";
//        getline(cin, sender);
//    }
//
//    // Input and validate weight
//    cout << "Enter parcel weight (0.1 - 30 kg): ";
//    cin >> weight;
//
//    while (weight < 0.1 || weight > 30)
//    {
//        cout << "Invalid weight! Enter again: ";
//        cin >> weight;
//    }
//
//    // Input and validate zone
//    cout << "Enter destination zone (1-3): ";
//    cin >> zone;
//
//    while (zone < 1 || zone > 3)
//    {
//        cout << "Invalid zone! Enter again: ";
//        cin >> zone;
//    }
//
//    // Input and validate delivery type
//    cout << "Enter delivery type (N/E): ";
//    cin >> type;
//
//    while (type != 'N' && type != 'n' &&
//        type != 'E' && type != 'e')
//    {
//        cout << "Invalid delivery type! Enter N or E: ";
//        cin >> type;
//    }
//
//    // Calculate charges
//    rate = getRate(zone);
//
//    deliveryCharge = calculateDelivery(weight, rate);
//
//    surcharge = calculateSurcharge(deliveryCharge, type);
//
//    packingFee = calculatePacking(weight);
//
//    total = deliveryCharge + surcharge + packingFee;
//
//    // Display receipt
//    cout << fixed << setprecision(2);
//
//    cout << "\n========== COURIER RECEIPT ==========" << endl;
//
//    cout << "Sender: " << sender << endl;
//    cout << "Weight: " << weight << " kg" << endl;
//    cout << "Zone: " << zone << endl;
//
//    if (type == 'E' || type == 'e')
//    {
//        cout << "Delivery Type: Express" << endl;
//    }
//    else
//    {
//        cout << "Delivery Type: Normal" << endl;
//    }
//
//    cout << "Delivery Charge: Rs. " << deliveryCharge << endl;
//    cout << "Express Surcharge: Rs. " << surcharge << endl;
//    cout << "Packing Fee: Rs. " << packingFee << endl;
//    cout << "Total: Rs. " << total << endl;
//
//    // Confirm booking separately
//    confirmBooking();
//
//    return 0;
//}
