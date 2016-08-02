#include <iostream>

using std::cout;
using std::make_shared;

class Node {
public:
  Node(int datum) : data {datum}  {}
  int data;
  Node* next{NULL};
};

void Print(Node *head)
{
  if (head == NULL) {
    cout << "NULL\n";
    return;
  }
  cout << head->data << "\n";
  Print(head->next);
}

Node* Insert(Node *head, int data)
{
  Node *newnode = (Node*) calloc(1, sizeof(Node)); //(data);
  newnode->data = data;

  if ( head == NULL ) return newnode;
  //Node* cur_node = head;
  //while(head->next != NULL) {
  //  cur_node = head->next;
  //}
  //cur_node->next = newnode;
  newnode->next = head;
  return newnode;
}

Node* Delete(Node *head, int position)
{
  if (position == 0 ) {
    Node *tmp = head->next;
    free(head);
    return tmp;
  } else {
    int i;
    Node* a = head;
    for ( i = 1; i < position; i++ )
      a = a->next;
    Node* tmp = a->next;
    a->next = a->next->next;
    free(tmp);
    return head;
  }
}

Node* InsertNth(Node *head, int data, int position)
{

  if ( position == 0 ) {
    Node *node = (Node*) calloc(1, sizeof(Node));
    node->next = head;
    node->data = data;
    return node;
  } else {
    int i;
    Node* a = head;
    for( i = 1; i< position; i++) {
      a = a->next;
    }
    Node *tmp = (Node*) calloc(1, sizeof(Node));
    tmp->data = data;
    tmp->next = a->next;
    a->next = tmp;
    return head;
  }

}

int main()
{
  cout << "Starting up yo!\n";
  //Node node1(1);
  // Node node2(2);
  //Node *node1 = (Node*) calloc(1, sizeof(Node));
  //node1->data = 1;
  //auto node2 = make_shared<Node>(2);
  //node1.next = &node2;
  //Node node3(3);
  //node2.next = &node3;
  //Node *node4 = insert(NULL, 4);
  //Print(&node1);
  //Print(NULL);
  //Node *head = InsertNth(NULL, 3, 0);
  //Print(head);

  cout << "\n++++++++++++++++++++++\n";

  Node node3(3);
  Node *head4 = InsertNth(&node3, 4, 0);
  //Print(head4);

  cout << "\n++++++++++++++++++++++\n";
  Node *head7 = InsertNth(head4, 7, 1);
  //Print(head7);
  
  cout << "\n++++++++++++++++++++++\n";
  Node *head8 = InsertNth(head7, 8, 2);
  Print(head8);
  cout << "\n\n";
  cout << "\n++++++++++++++++++++++\n";
  Node *nod = Delete(head8, 0);
  Print(nod);
  cout << "\n\n";
  cout << "\n++++++++++++++++++++++\n";
  Node *nod2 = Delete(nod, 1);
  Print(nod2);
}

