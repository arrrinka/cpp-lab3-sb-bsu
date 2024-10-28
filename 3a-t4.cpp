#include <iostream> 
#include <limits> 
using namespace std;
int main() {
    int k, i = 1, sum_k = 0, number;
    cout << "Enter the amount of integers to sum = ";
    while (true) {
        cin >> k;
        if (cin.fail() || k < 0) {         // Check if k is negative
            cout << "Invalid input. Please enter a non-negative integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            break;
        }
    }
    if (k == 0) {     // Check if k is zero
        cout << "The total sum of " << k << " integers is: 0" << endl;
        return 0;
    }
    do {
        cout << "Enter integer nr. " << i << ": ";
        while (true) {
            cin >> number;
            if (cin.fail()) {
                cout << "Invalid input. Please enter an integer: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else {
                break;
            }
        }
        sum_k += number;
        i++;
    } while (i <= k);
    cout << "The total sum of " << k << " integers is: " << sum_k << endl;
    return 0;
}
