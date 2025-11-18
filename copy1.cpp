#include<iostream>
using namespace std;

int main() {
    int n = 10;
    int oddsum = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {  // Check if 'i' is odd
            oddsum += i;  // Add 'i' to 'oddsum'
        }
    }
    cout << "oddsum = " << oddsum << endl;  // Print the sum of odd numbers
    return 0;
}
