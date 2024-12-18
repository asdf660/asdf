#include <iostream>
#include <string>
using namespace std;


struct Student {
    int rollNo;
    string name;
    float sgpa;
};


void bubbleSort(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (students[j].rollNo > students[j + 1].rollNo) {
                
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}


void displayStudentList(Student students[], int n) {
    cout << "\nRoll No\tName\t\tSGPA\n";
    for (int i = 0; i < n; ++i) {
        cout << students[i].rollNo << "\t" << students[i].name << "\t" << students[i].sgpa << endl;
    }
}

int main() {
 
    int n;

    
    cout << "Enter number of students: ";
    cin >> n;


    Student students[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Roll No: ";
        cin >> students[i].rollNo;
         
        cout << "Name: ";
        cin >> students[i].name;
        cout << "SGPA: ";
        cin >> students[i].sgpa;
    }

    bubbleSort(students, n);


    cout << "\nSorted list of students by Roll No:\n";
    displayStudentList(students, n);

    return 0;
}
