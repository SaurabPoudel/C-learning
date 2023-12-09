#include <bits/stdc++.h>
#include <cstddef>

using namespace std;

class ListNode{
  public:
  int val;
  ListNode* next;
  ListNode(int x){
    val = x;
    next = NULL;
  }
};

void PrintList(ListNode* head){
  ListNode* curr = head;
  for(; curr != NULL; curr= curr->next){
    cout << curr-> val << "-->";
  }
  cout << "null" << endl;
}
ListNode * InsertIntoNode(int value, ListNode * head){
  ListNode * newnode = new ListNode(value);
  newnode->next = head;
  head = newnode;
  return head;
}
int main()
{
  ListNode * head = NULL;
  head = InsertIntoNode(40, head);
  head = InsertIntoNode(50, head);
  head = InsertIntoNode(60, head);
  head = InsertIntoNode(70, head);
  cout << "LinkedList before inserting 80 " << endl;
  PrintList(head);
  cout << "Inserting 80...." << endl;
  head = InsertIntoNode(80, head);
  PrintList(head);
  return 0;
}
