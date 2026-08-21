#include <iostream>

using namespace std;

const int MAX = 100;


int main(){
    int min = 0;
    int a[MAX];
    cout << "Enter the number of elements (max " << MAX << "): ";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }

    //a) Find the minimum positive number in the array
    
    for(int i = 0; i < n; i++){
        if (a[i] > 0 && (a[i] < min || min == 0)){
            min = a[i];
        }
    }
    if(min != 0){
        cout << "The minimum positive number is: " << min << endl;
    } else {
        cout << "There are no positive numbers in the array." << endl;
    }


    // b) Calculate the sum of all numbers
    int sum = 0;
    for(int i = 0; i < n; i++){
        if (a[i] > 0){
            sum += a[i];
        }
    }
        cout << "The sum of all numbers is: " << sum << endl;

    // c) Find the first even number in the array
    int firstEven = -1;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            firstEven = a[i];
            break;
        }
    }
    if(firstEven != -1){
        cout << "The first even number is: " << firstEven << endl;
    } else {
        cout << "There are no even numbers in the array." << endl;
    }

    return 0;
}