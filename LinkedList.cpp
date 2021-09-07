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