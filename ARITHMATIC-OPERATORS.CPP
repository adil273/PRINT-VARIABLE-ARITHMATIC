#include <iostream>
using namespace std;

int main() {

   //1
    // create the cost_price variable and assign 19 to it
    int cost_price = 19;

    // create the selling_price variable and assign 27 to it
    int selling_price = 27;

    // compute the profit and print it
    int profit = selling_price - cost_price;
    cout<<profit<<endl;
//2
     // create two double variables
    double number1 = 85.0;
    double number2 = 13.0;

    // create result variable
    // divide number1 by number2
    double result  = number1 / number2;
    // print result
    cout << result<<endl;

//3
    // define apple_number and student_number variables
    int apple_number = 14;
    int student_number = 3;

    // compute and print the number of apples each student will get
    // hint: find the quotient
    int compute = apple_number / student_number;
    cout<<compute<<endl;
//4
    // compute and print the number of apples that will be left
    // hint: find the remainder
    int reminder = apple_number % student_number;
    cout<<reminder<<endl;

//5

// create number1 and number2 variables
    int number11 = 34;
    double number22 = 54.9;

    // add number1 and number2 by explicitly converting number1 to double
    double result2 = number11 + number22;

    // print the result
    cout << result2;




   return 0;
}
