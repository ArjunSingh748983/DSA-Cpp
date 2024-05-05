#include <bits/stdc++.h>
using namespace std;
int main() {
    double total_amount, greater_odd, lower_odd;
    cout << "Enter the total amount you have :" << endl;
    cin >> total_amount;
    cout << "Enter the greater odd :" << endl;
    cin >> greater_odd;
    cout << "Enter the lower odd :" << endl;
    cin >> lower_odd;
    double first_account_deposit = int(total_amount * (lower_odd / (lower_odd + greater_odd)));
    double second_account_deposit = int(total_amount * (greater_odd / (lower_odd + greater_odd)));
    cout << "Amount to deposit in first account : " << first_account_deposit << endl;
    cout << "Amount to deposit in second account : " << second_account_deposit << endl;
    double max_return = first_account_deposit * lower_odd + second_account_deposit * greater_odd;
    cout << "Max return : " << max_return << endl;
    cout << "Max profit :  " << max_return - total_amount << endl;
    double max_loss = second_account_deposit * lower_odd - total_amount;
    //  max_loss = first_account_deposit * greater_odd3 - total_amount;
    cout << "Max loss possible : " << max_loss << endl;
    return 0;
}