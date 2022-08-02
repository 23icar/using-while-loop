#include <iostream>
using namespace std;

int main()
{
    int income = 0;
    cout << "Please give me your income ";
    cin >> income;
    while (income < 50000)
    {
        income = income + 10000;
        cout << "You are Below poverty line " << income << endl;
    }
    cout << "Your income is above poverty parameter";
    return 0;
}