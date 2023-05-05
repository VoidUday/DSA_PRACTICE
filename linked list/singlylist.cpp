#include<iostream>
using namespace std;

class Node  {
  public : 
    int data;
    Node* next;

    Node(int data){
      this -> data = data;
      this -> next = NULL;
    }
};

//Insert at Head
void insertAtHead(Node* &head, int d){
   //new node create

   Node* temp = new Node(d);
   temp -> next = head;
   head = temp;
}
//traverse the linked list
void printLink(Node * &head){
  Node* temp = head;

  while(temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;
}
int main(){
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    Node* head = node1;
    insertAtHead(head, 12);
    insertAtHead(head, 142);
    insertAtHead(head, 152);
    printLink(head);

}
