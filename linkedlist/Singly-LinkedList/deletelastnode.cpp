#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node(int data1){
    data = data1;
    next = nullptr;
  }
  Node(int data1, Node* next1){
    data = data1;
    next = next1;
  }
};

void PrintList(Node * head){
  while(head != NULL){
    cout << head->data << "-->";
    head = head->next;
  }
  cout << "null"<<endl;
}

Node *deletetail(Node * head){
  if(head == NULL || head->next == NULL){
    return NULL;
  }
  Node * temp = head;
  while(temp->next->next != NULL){
    temp = temp->next;
  }
  delete temp->next;
  temp->next = nullptr;
  return head;
}
int main()
{
  vector<int> arr = {40,41,42,43,44,45,46,47,48};
  Node* head = new Node(arr[0]);
  head-> next = new Node(arr[1]);
  head->next->next = new Node(arr[2]);
  head->next->next->next = new Node(arr[3]);
  cout <<"Before deleting "<<endl;
  PrintList(head);
  cout << "After deleting tail " << endl;
  head = deletetail(head);
  PrintList(head);
  return 0;
}
