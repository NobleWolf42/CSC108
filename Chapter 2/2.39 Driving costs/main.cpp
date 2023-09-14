/*
Driving is expensive. Write a program with a car's gas mileage (miles/gallon) and the cost of gas (dollars/gallon) as floating-point input, and output the gas cost for 20 miles, 75 miles, and 500 miles.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements. Note: End with a newline.

Ex: If the input is:

    *25.0 3.1599

where the gas mileage is 25.0 miles/gallon and the cost of gas is $3.1599/gallon, the output is:

    *2.53 9.48 63.20

Note: Real per-mile cost would also include maintenance and depreciation.
*/
#include <iostream>
#include <iomanip>      //For setprecision
using namespace std;

int main() {

    //Declaring variables
    double gasMileage;
    double gasPrice;
    double cpm;

    //Getting user inputs
    cin >> gasMileage >> gasPrice;

    //Finding MPG
    cpm = gasPrice / gasMileage;

    //Finding and Printing cost of 25, 75, and 500 miles
    cout << fixed << setprecision(2);
    cout << cpm * 20 << " " << cpm * 75 << " " << cpm * 500 << endl;
    return 0;
}