#include <iostream>
#include <string.h>
using namespace std;
struct Student{
  int rollno;
  string name;
  float sgpa;
};
void insertion(Student student[],int n){
  for(int i=1;i<n;i++){
    Student curr=student[i];
    int prev=i-1;
    while(prev>=0 && student[prev].rollno>curr.rollno){
      student[prev+1]=student[prev];
      prev--;

    }
    student[prev+1]=curr;
    
  }
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
  insertion(student,n);
  display(student,n);
}