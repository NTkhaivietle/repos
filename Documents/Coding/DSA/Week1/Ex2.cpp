#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    string id;
    double salary;
};

// Input employees
void inputEmployees(Employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Name: ";
        cin >> employees[i].name;

        cout << "ID: ";
        cin >> employees[i].id;

        cout << "Salary: ";
        cin >> employees[i].salary;
    }
}

// Display employees
void displayEmployees(Employee employees[], int n) {
    cout << "\n===== Employee List =====\n";

    for (int i = 0; i < n; i++) {
        cout << "Name: " << employees[i].name << endl;
        cout << "ID: " << employees[i].id << endl;
        cout << "Salary: " << employees[i].salary << endl;
        cout << "-------------------------\n";
    }
}

// a) Find employee with highest salary
void findHighestSalary(Employee employees[], int n) {
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (employees[i].salary > employees[maxIndex].salary) {
            maxIndex = i;
        }
    }

    cout << "\n===== Employee with Highest Salary =====\n";
    cout << "Name: " << employees[maxIndex].name << endl;
    cout << "ID: " << employees[maxIndex].id << endl;
    cout << "Salary: " << employees[maxIndex].salary << endl;
}

// b) Sort employees by salary ascending
void sortBySalary(Employee employees[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (employees[i].salary > employees[j].salary) {
                Employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
}

int main() {

    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee employees[n];

    // Input
    inputEmployees(employees, n);

    // Display original list
    displayEmployees(employees, n);

    // a) Highest salary
    findHighestSalary(employees, n);

    // b) Sort ascending by salary
    sortBySalary(employees, n);

    cout << "\n===== Employees Sorted by Salary =====\n";
    displayEmployees(employees, n);

    return 0;
}