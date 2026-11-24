
#include <iostream>
#include <string>
using namespace std;

// FUNCTION DECLARATIONS
void displayMenu();

void selectDestination(double& transport, double& accommodation,
    double& food, string& destinationName);

void displayActivity();

double selectActivity(string& selectedActivities);

bool budgetCheck(double total, double budget);

void exitProgram();

double calculateTotal(int people, int days, int nights,
    int rooms, double totalActiv,
    double transport, double accommodation,
    double food);


// MAIN FUNCTION

int main()
{
    int choice;
    int people, days, nights, rooms;

    double transport, accommodation, food;
    double totalActiv, total, budget;

    string destinationName;
    string selectedActivities;

    while (true)
    {
        displayMenu();

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            // SELECT DESTINATION
            selectDestination(transport, accommodation,
                food, destinationName);

            // ENTER NUMBER OF TRAVELLERS
            cout << "\nEnter number of travellers: ";
            cin >> people;

            while (people < 1 || people > 10)
            {
                cout << "Invalid! Enter again (1-10): ";
                cin >> people;
            }

            // ENTER TRIP DURATION
            cout << "Enter trip duration in days: ";
            cin >> days;

            while (days < 1 || days > 30)
            {
                cout << "Invalid! Enter again (1-30): ";
                cin >> days;
            }

            // CALCULATE NIGHTS AND ROOMS
            nights = days - 1;
            rooms = (people + 1) / 2;

            // SELECT ACTIVITIES
            displayActivity();

            selectedActivities = "";

            totalActiv = selectActivity(selectedActivities);

            // ENTER BUDGET
            cout << "\nEnter your budget: ";
            cin >> budget;

            while (budget <= 0)
            {
                cout << "Enter a positive budget: ";
                cin >> budget;
            }

            // CALCULATE TOTAL COST
            total = calculateTotal(people, days, nights,
                rooms, totalActiv,
                transport, accommodation, food);

            // DISPLAY TRIP SUMMARY
            cout << "\n\t\tTRIP SUMMARY\n";

            cout << "Destination: " << destinationName << endl;
            cout << "Number of travellers: " << people << endl;
            cout << "Duration: " << days << " days\n";

            cout << "\nSelected Activities:\n";

            if (selectedActivities == "")
                cout << "None\n";
            else
                cout << selectedActivities;

            // DISPLAY EXPENSES
            cout << "\t COST BREAKDOWN \t";

            cout << "Accommodation: PKR "
                << rooms * nights * accommodation << endl;

            cout << "Transport: PKR "
                << people * transport << endl;

            cout << "Food: PKR "
                << people * days * food << endl;

            cout << "Activities: PKR "
                << people * totalActiv << endl;

            cout << "Total Estimated Cost: PKR "
                << total << endl;

            cout << "\nEntered Budget: PKR "
                << budget << endl;

            // CHECK BUDGET
            if (budgetCheck(total, budget))
            {
                cout << "\nWITHIN BUDGET - remaining PKR "
                    << budget - total << endl;
            }
            else
            {
                cout << "\nOVER BUDGET - exceeded by PKR "
                    << total - budget << endl;
            }
        }

        else if (choice == 2)
        {
            // VIEW DESTINATION PRICES
            cout << "\n\t\tDESTINATION PRICES\n";

            cout << "\nMurree: Accommodation 9000, "
                << "Transport 4000, Food 3000\n";

            cout << "\nHunza: Accommodation 12000, "
                << "Transport 15000, Food 3000\n";

            cout << "\nSwat: Accommodation 8000, "
                << "Transport 6000, Food 2000\n";

            cout << "\nNaran: Accommodation 10000, "
                << "Transport 8000, Food 2500\n";
        }

        else if (choice == 3)
        {
            exitProgram();
            break;
        }

        else
        {
            cout << "\nInvalid menu choice!\n";
        }
    }

    return 0;
}


// FUNCTION 1: DISPLAY MENU

void displayMenu()
{
    cout << "\n\t\tSMART TRAVEL PLANNER\n";

    cout << "1. Plan a Trip\n";
    cout << "2. View Available Destinations\n";
    cout << "3. Exit\n";
}


// FUNCTION 2: SELECT DESTINATION

void selectDestination(double& transport, double& accommodation,
    double& food, string& destinationName)
{
    int choice;

    cout << "\n\t\tDESTINATIONS\n";

    cout << "1. Murree\n";
    cout << "2. Hunza\n";
    cout << "3. Swat\n";
    cout << "4. Naran\n";

    cout << "Select destination: ";
    cin >> choice;

    while (choice < 1 || choice > 4)
    {
        cout << "Invalid choice! Select again: ";
        cin >> choice;
    }

    switch (choice)
    {
    case 1:
        destinationName = "Murree";
        transport = 4000;
        accommodation = 9000;
        food = 3000;
        break;

    case 2:
        destinationName = "Hunza";
        transport = 15000;
        accommodation = 12000;
        food = 3000;
        break;

    case 3:
        destinationName = "Swat";
        transport = 6000;
        accommodation = 8000;
        food = 2000;
        break;

    case 4:
        destinationName = "Naran";
        transport = 8000;
        accommodation = 10000;
        food = 2500;
        break;
    }
}


// FUNCTION 3: DISPLAY ACTIVITIES

void displayActivity()
{
    cout << "\n\t\tAVAILABLE ACTIVITIES\n";

    cout << "1. Sightseeing - 600\n";
    cout << "2. Hiking - 1200\n";
    cout << "3. Boating - 1100\n";
    cout << "4. Museum - 350\n";
    cout << "5. Adventure - 1800\n";

    cout << "Enter 0 when finished selecting activities.\n";
}


// FUNCTION 4: SELECT ACTIVITIES

double selectActivity(string& selectedActivities)
{
    int choice;

    double totalActiv = 0;

    bool sightseeing = false;
    bool hiking = false;
    bool boating = false;
    bool museum = false;
    bool adventure = false;

    while (true)
    {
        cout << "\nSelect activity: ";
        cin >> choice;

        if (choice == 0)
        {
            break;
        }

        if (choice < 1 || choice > 5)
        {
            cout << "Invalid activity choice!\n";
            continue;
        }

        switch (choice)
        {
        case 1:
            if (sightseeing == false)
            {
                totalActiv += 600;
                sightseeing = true;

                selectedActivities += "Sightseeing\n";

                cout << "Sightseeing selected.\n";
            }
            else
            {
                cout << "Already selected!\n";
            }
            break;

        case 2:
            if (hiking == false)
            {
                totalActiv += 1200;
                hiking = true;

                selectedActivities += "Hiking\n";

                cout << "Hiking selected.\n";
            }
            else
            {
                cout << "Already selected!\n";
            }
            break;

        case 3:
            if (boating == false)
            {
                totalActiv += 1100;
                boating = true;

                selectedActivities += "Boating\n";

                cout << "Boating selected.\n";
            }
            else
            {
                cout << "Already selected!\n";
            }
            break;

        case 4:
            if (museum == false)
            {
                totalActiv += 350;
                museum = true;

                selectedActivities += "Museum\n";

                cout << "Museum selected.\n";
            }
            else
            {
                cout << "Already selected!\n";
            }
            break;

        case 5:
            if (adventure == false)
            {
                totalActiv += 1800;
                adventure = true;

                selectedActivities += "Adventure\n";

                cout << "Adventure selected.\n";
            }
            else
            {
                cout << "Already selected!\n";
            }
            break;
        }
    }

    return totalActiv;
}


// FUNCTION 5: CHECK BUDGET

bool budgetCheck(double total, double budget)
{
    if (total <= budget)
    {
        return true;
    }
    else
    {
        return false;
    }
}


// FUNCTION 6: EXIT PROGRAM

void exitProgram()
{
    cout << "\nThank you for using ";
    cout << "Smart Travel Planner!\n";
    cout << "Goodbye!\n";
}


// FUNCTION 7: CALCULATE TOTAL

double calculateTotal(int people, int days, int nights,
    int rooms, double totalActiv,
    double transport, double accommodation,
    double food)
{
    double totalDestin =
        (people * transport) +
        (rooms * accommodation * nights) +
        (people * food * days);

    double total = totalDestin + (people * totalActiv);

    return total;
}
