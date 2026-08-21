#include <iostream>
#include <cmath>
#define MAX 100
using namespace std;

int main(){
    // Khai Bao mang
    int a[MAX];
    cout << "Enter the number of elements (max " << MAX << "): ";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }

    // a) Find the maximun absolutevalue in the array
    int maxAbs = 0;
    for(int i = 0; i < n; i++){
        if(abs(a[i]) > maxAbs){
            maxAbs = abs(a[i]);
        }
    }
    cout << "The maximum absolute value in the array is: " << maxAbs << endl;

    // b) Calculate the sum of the numbers between -10 and 10
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= -10 && a[i] <= 10){
            sum += a[i];
        }
    }
    cout << "The sum of numbers between -10 and 10 is: " << sum << endl;

    // c) Find the first number that is divisible by both 2 and 3
    int firstDivisible = 1;
    for(int i = 0; i < n; i++){
        if( a[i] %2 == 0 && a[i] %3 == 0){
            firstDivisible = a[i];
            break;
        }
    }
    cout << "The first number divisible by both 2 and 3 is: " << firstDivisible << endl;



}

