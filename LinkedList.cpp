// Linked List is collection of nodes in which each node  contains a data and points to some another node.
/*
struct node{
    int data;
    struct node *next;
}
Self-Refrential data type.
*/

/*
Creating a node
struct node
{
    int data;
    struct node *next;
};
struct node *p;
p = new node;    
p->data=10;
p->next=0;
*/

/*
Traversing through Linked List -
first = address of first node.

struct node *p = first;
p=p->next; (Assigning address of another node which is pointed in present node).
while(p!=0){
    cout<<p->next;
    p=p->next;
}
*/

/*
// Recursive way of displaying a Linked list
display(struct node *p){
    if (p!=0)
    {
        cout<<p->data;
        p=p->next;
        display(p->next);
    }    
}
*/

/*
// Counting number of nodes in Linked-List
int count(struct node *p){
    int c=o;
    while(p!=0){
        c++;
        p=p->next;
    }
    return c;
}
*/

/*
//Sum of all elements in linked list
int add(struct node *p){
  int sum =0;
  while(p!=0){
      sum+=p->data;
  }
  return sum;
}
*/

/*
//Maximum element in Linked List
int maximum(struct node *p){
    int greater=p->data;
    while(p!=0){
     p=p->next;
     greater=max(greater,p->data);
    }
    return greater;
}
*/

/*
//Serching in Linked List
Note:- Binary search is not suitable,Linear search is used.
search(node *p,int key){
    while(p!=0){
        if(p->data==key){
            return p;
        }
    }
    return 0;
}
*/

/*
//Insert a new node in a Linked List
insert(node *p,key){
   node *t=new node;
   t->data=123;
   p=first;
   while(key--){
    p=p->next;
   }
   t->next=p->next;
   p->next=t;
}
*/

/*
//Creating a Linked List
Using functions as:-
push_front(g) – Adds a new element ‘g’ at the beginning of the list .
push_back(g) – Adds a new element ‘g’ at the end of the list.
pop_front() – Removes the first element of the list, and reduces size of the list by 1.
pop_back() – Removes the last element of the list, and reduces size of the list by 1
insert(position,value) – Inserts new elements in the list before the element at a specified position.
*/

/*
// Inserting in a Sorted Linked List
#include <stdio.h>
#include <stdlib.h>
    struct Node
{
    int data;
    struct Node *next;
} 
*first = NULL, 
*second = NULL, 
*third = NULL;
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void SortedInsert(struct Node *p, int x)
{
    struct Node *t, *q = NULL;

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;
    if (first == NULL)
        first = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}
int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    printf(“% d\n”, SortedInsert(first, 15));
    Display(first);

    return 0;
}
*/

/*
//Delete from a Linked List
* First move the ponters address from the node to be delated.
* Use pseudo pointer to delete.
  delete p;(p is pointing to thr node to be delated)
*/

/*
//Checking is a Linked List is Sorted
#include <stdio.h>
#include <stdlib.h>
    struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third = NULL;
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = new node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int isSorted(struct Node *p)
{
    int x = -65536;

    while (p != NULL)
    {
        if (p->data < x)
            return 0;
        x = p->data;
        p = p->next;
    }
    return 1;
}
int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    printf(“% d\n”, isSorted(first));

    return 0;
}
*/

/*
//Remove Duplicates from Linked List
#include <stdio.h>
#include <stdlib.h>
    struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third = NULL;
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = new node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void RemoveDuplicate(struct Node *p)
{
    struct Node *q = p->next;

    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

int main()
{
    int A[] = {10, 20, 20, 40, 50, 50, 50, 60};
    create(A, 8);

    RemoveDuplicate(frist);
    Display(frist);
    return 0;
}
*/

/*
//Reversing the Linked List
It can be done by two ways:- 
(1) Reversing the elements.
(2) Reversing the links.(*)
Note:-Reversing Links is more preferable methord,Because extra space is consumed for making an arry in the first methord.

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third = NULL;
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Reverse1(struct Node *p)
{
    int *A, i = 0;
    struct Node *q = p;

    A = (int *)malloc(sizeof(int) * count(p));
    while (q != NULL)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q != NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}
void Reverse2(struct Node *p)
{
    struct Node *q = NULL, *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}
void Reverse3(struct Node *q, struct Node *p)
{
    if (p)
    {
        Reverse3(p, p->next);
        p->next = q;
    }
    else
        first = q;
}

int main()
{

    int A[] = {10, 20, 40, 50, 60};
    create(A, 5);

    Reverse1(frist);
    Display(frist);
    return 0;
}
*/

// Circular Linked List
// The nodes are inter connected so there is a loop among the nodes. 

/*
// Display a Circular Linked List
 display(node *p){
    do
    {
        cout<<p->data;
        p=p->next;
    } while (p!=head);
}
*/
