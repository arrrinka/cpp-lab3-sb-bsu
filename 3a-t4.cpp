#include <iostream> 
using namespace std;

int main() {
    int k, i = 1, sum_k = 0, number;
    cout << "Enter the amount of integers to sum = ";
    cin >> k;
    // Check if k is zero
    if (k == 0) {
        cout << "The total sum of " << k << " integers is: 0" << endl;
        return 0; // Exit the program since there are no integers to sum
    }
    do {
        cout << "Enter integer nr. " << i << ": ";
        cin >> number;
        sum_k += number;
        i++;
    } while (i <= k);
    cout << "The total sum of " << k << " integers is: " << sum_k << endl;
    return 0;
}
