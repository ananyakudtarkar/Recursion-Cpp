#include <iostream>
using namespace std;

// Recursion

int factorial(int num){
    if (num<=1)
        return 1;
    else {
        return num*factorial(num-1);
    }
}

int summation(int num){
    if (num<=1)
        return 1;
    else{
        return num+summation(num-1);
    }
}

int main() {
    int n, fact, sum;
    cout << "Enter number: ";
    cin >> n;
    
    fact = factorial(n);
    sum = summation(n);
    cout << "Sum: "<< sum <<endl;
    cout << "Factorial: "<< fact;
    return 0;
}

/*
OUTPUT
Enter number: 7
Sum: 28
Factorial: 5040
*/
