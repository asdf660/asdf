#include <iostream>
#include <string.h>
using namespace std;
struct Student{
  int rollno;
  string name;
  float sgpa;
};
int binarySearch(Student students[], int n, const string& searchName) {
    int left = 0, right = n - 1;
    
    // Binary search loop without recursion
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Compare mid student's name with the search name
        if (students[mid].name == searchName) {
            return mid;  // Found the student, return the index
        } else if (students[mid].name < searchName) {
            left = mid + 1;  // Search in the right half
        } else {
            right = mid - 1;  // Search in the left half
        }
    }
    
    return -1;  // Student not found
}
void display(Student student[],int n){
  for(int i=0;i<n;i++){
  cout<<"Name : \t"<<student[i].name<<"Roll : \t"<<student[i].rollno<<"Sgpa : \t"<<student[i].sgpa<<endl;
  }
}
int main(){
  int n;
  cout<<"Enter the no of students : "<<endl;
  cin>>n;
  Student student[n];
  for(int i=0;i<n;i++){
    cout<<"Student details"<<endl;
    cout<<"Enter the roll no :"<<endl;
    cin>>student[i].rollno;
    cout<<"Enter the name "<<endl;
    cin>>student[i].name;
    cout<<"Enter the sgpa"<<endl;
    cin>>student[i].sgpa;
  }
  binarySearch(student,n,"dnyanesh");
  display(student,n);
}