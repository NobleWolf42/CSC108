/*
Author: Ben Carpenter
Copyright: 2024

Assignment:
Using recursion, compute the sum of all values in an array. For example,

    *Enter a number for how many elements you want in the array: 4
    *The element is: 4
    *The element is: -4
    *The element is: 14
    *The element is: 8
    *The sum is: 22

*/

#include <iostream>
#include <vector>

using namespace std;

/**
   Find the sum of an array of numbers up to a given index.
   @param a the array of numbers
   @param n the ending index
   @return the sum
*/
int sum(int a[],int n) {
    if (n != 1) {
        return a[n-1] + sum(a, (n-1));
    } else {
        return a[0];
    }
}

int main() {
   
    int arraySize;
    int uIn;
    
    cout << "Enter a number for how many elements you want in the array: " << endl;
    
    cin >> arraySize;

    int numbers[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> uIn;
        numbers[i] = uIn;
        cout << "The element is: " << uIn << endl;
    }
    
    cout << "The sum is: " << sum(numbers, arraySize) << endl;
    
    return 0;
}
