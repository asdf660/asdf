#include <iostream>
using namespace std;
struct Node{
  int data;
  Node *Next;

};
Node *front=NULL;
Node *Rear=NULL;
void enqueue(int value){
  if(front==NULL || Rear==NULL){
    Node *Temp=new Node;
    Temp->data=value;
    Temp->Next=NULL;
    front=Temp;
    Rear=Temp;

  }
  else{
    Node *temp=new Node;
    temp->data=value;
    Rear->Next=temp;
    temp->Next=front;
    Rear=temp;

  }
  
}
void dequeue(){
  Node *temp=front;
  front=front->Next;
  delete(temp);
}
void display(){
  Node *temp=front;
  do{
    cout<<temp->data<<" ";
    temp=temp->Next;
  }
  while(temp!=Rear->Next);
  cout<<endl;
}
int main(){
  int value;
  cin>>value;
  enqueue(value);


}