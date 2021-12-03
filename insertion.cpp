#include <iostream>
#include <conio.h>
#include <malloc.h>
using namespace std;


struct node {
  int info;
  struct node *link;
};

void print(struct node *m) {
  while (m != NULL) {
    cout<<m->info<<" ===> ";
    m = m->link;
  } cout<<"NULL";
}

int main() {

  struct node *FIRST;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;

  one =(node*)malloc(sizeof(struct node));
  two = (node*)malloc(sizeof(struct node));
  three = (node*)malloc(sizeof(struct node));

  one->info = 2;
  two->info = 3;
  three->info = 4;

  one->link = two;
  two->link = three;
  three->link = NULL;
  cout<<"Displaying the linked list before insertion "<<endl;
  FIRST = one;
  print(FIRST);
  cout<<endl;
  cout<<"Displaying the linked list after insertion at beginning "<<endl;

struct node *newNode;
newNode = (node*)malloc(sizeof(struct node));
newNode->info = 1;
newNode->link = FIRST;
FIRST = newNode;

print(FIRST);
getch();
}