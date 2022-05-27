//Israel Black - Personal Expenses Tracking System

#include <iostream>
#include <string>




using std::cout;
using std::cin;
using std::string;

// Define structure data type for Expenses
struct Expenses
{
    string dateExpense;
    int transportCost;
    int mealCost;
    int entertainCost;
    int othersCost;

    // Constructor to initialize members
    Expenses(string dateExp = "", int transport = 0, int meal = 0, int entertain = 0, int others = 0)
    {
        dateExpense = dateExp;
        transportCost = transport;
        mealCost = meal;
        entertainCost = entertain;
        othersCost = others;
    }
};

// Function Prototypes
int showMenu();
int totalExpenses(Expenses expenses[], int length);
void getExpenses(Expenses expenses[], int length);
void viewDailyExpenses(Expenses expenses[], int length);
void tabularReport(Expenses expenses[], int length, string title);
void weeklyReport(Expenses expenses[], int length);

int main()
{
    // variable definitions
    int menuChoice = 0;
    Expenses dailyExpense[3]; // Number of days for array

    while (menuChoice != 4)
    {
        menuChoice = showMenu(); // Show menu choices and save choice into the menuChoice variable.

        switch (menuChoice)
        {
        case 1:
            getExpenses(dailyExpense, 3); // Get expenses for three (3) days only - this is just a demo for purposes of this assignment
            break;
        case 2:
            viewDailyExpenses(dailyExpense, 3);
            break;
        case 3:
            weeklyReport(dailyExpense, 3);
            break;
       
        case 4:
            break;

        default:
            cout << "\nInvalid choice\n";
            break;
        }
    }

    return 0;
}

void getExpenses(Expenses expenses[], int length){
  //allows user to input expenses for the day

    for (int i = 0; i < length; i++)
    {
        cout << "\nEnter expenses for the day\n";
        cout << "----------------------------\n";

        cout << "\nDate (DD-MM-YYYY): ";
        cin >> expenses[i].dateExpense;
        cout << "Transport: ";
        cin >> expenses[i].transportCost;
        cout << "Meal: ";
        cin >> expenses[i].mealCost;
        cout << "Entertainment: ";
        cin >> expenses[i].entertainCost;
        cout << "Others: ";
        cin >> expenses[i].othersCost;
    }
}

void viewDailyExpenses(Expenses expenses[], int length)
 //Displays expenses for user selected day. User inputs the date to view.

{
    float dailyExpenses = 0;
    string day = "";
    bool found = false;

    cout << "Enter day to view (DD-MM-YYYY): ";
    cin >> day;
    for (int i = 0; i < length; i++)
    {
        if (expenses[i].dateExpense == day)
        {
            found = true;
            cout << "\nExpenses for: " << day << "\n";
            cout << "-----------------------------\n";
            cout << "     Transport: " << expenses[i].transportCost << "\n";
            cout << "          Meal: " << expenses[i].mealCost << "\n";
            cout << " Entertainment: " << expenses[i].entertainCost << "\n";
            cout << "        others: " << expenses[i].othersCost << "\n";
        }
    }

   
}

int totalExpenses(Expenses expenses[], int length)

 // Sums all expenses
 
{
    int totalExpenses = 0;

    for (int i = 0; i < length; i++)
    {
        totalExpenses += (expenses[i].transportCost + expenses[i].mealCost + expenses[i].entertainCost + expenses[i].othersCost);
    }

    return totalExpenses;
}

void weeklyReport(Expenses expenses[], int length)

 // Displays weekly expenses


{
    int rowTotal = 0;
    int colTotal[4] = { 0, 0, 0, 0 };
    int overAllTotal = 0;

    cout << "\nWeekly Report";
    cout << "\n-----------------------------------------------------------------------------------------------";
    cout << "\nWeek#"
        << "\t\t"
        << "Transport"
        << "\t\t"
        << "Meal"
        << "\t\t"
        << "Entertain"
        << "\t"
        << "Others"
        << "\t\t"
        << "Total\n";

    cout << "-----------------------------------------------------------------------------------------------\n";

    // Total the columns
    cout << "Week-1"
        << "\t";

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < length; i++)
        {
            switch (j)
            {
            case 0:
                colTotal[j] += expenses[i].transportCost;
                break;
            case 1:
                colTotal[j] += expenses[i].mealCost;
                break;
            case 2:
                colTotal[j] += expenses[i].entertainCost;
                break;
            case 3:
                colTotal[j] += expenses[i].othersCost;
                break;
            }
        }
        overAllTotal += colTotal[j];
        cout << "\t\t" << colTotal[j];
    }
    cout << "\t\t" << overAllTotal;
    cout << "-----------------------------------------------------------------------------------------------\n";
}

int showMenu()
 //Displays menu
{
    int menuChoice = 0;
    
    cout << "Personal Expenses Tracking System\n";
    cout << "---------------------------------\n";
    cout << "1. Record expenses\n";
    cout << "2. View daily expense\n";
    cout << "3. View weekly expenses\n";
    cout << "4. Generate daily report\n";
    cout << "5. Generate weekly report\n";
    cout << "6. Exit\n";
    cout << "---------------------------------\n";
    cout << "Choice: ";
    cin >> menuChoice;

    return menuChoice;
}