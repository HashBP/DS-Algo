//Stack - It is a collection of valuses working on LIFO (Last in First out).
/*
//ADT for Stack:-
1. Space for String Elements.
2. Top Pointer.

//Operation:-
1. Push()
2. Pop()
3. Peek()
4. StackTop()
5. isEmpty()
6. isFull()
*/

/*
//Stack using Array:-

Creating a Stack:-

struct stack
{
    int top;
    int *s; (First address of stack)
    int size;
};
int main(){
    stack st;
    cout<<"Size of stack";
    cin>>st.size;
    st.s=new int[st.size]; (Creating an array in Heap and assigning initial address to st.s)
    top=-1;
}
*/

/*
//Pushing in Stack
Note :- Call by Reference coz we are modifing a value.
void push(stack *st,int x){
    if (st->top==st->size-1)
    {
        cout<<"Stack OverFlow";
    }
    else{
        st->top++;
        st->s[st->top]=x;
    }
}
*/

/*
//Deletion in Stack
Note :- Call by Reference coz we are modifing a value.
int pop(stack *st){
    int x;
    if (st->top==-1)
    {
        cout<<"Stack UnderFlow";
    }
    else{
        x=st->s[st->top];
        st->top--;
    }
    return x;
}
*/

/*
//Peek in Stack
Note :- Call by Value coz we are not modifing a value.
int peek(stack st,int pos){
    x=-1;
   if(st.top-pos+1<0){
   cout<<"Invalid Position";
   }
   else{
       x=st.s[st.top-pos+1];
   }
   return x;
}
*/

/*
//Stack using Linked List

struct node{
    int data;
    node *next;
}
//Push Function
push(int x){
  node *t=new node;
  if(t==NULL){
      cout<<"Stack is Full."
  }
  else{
   t->data=x;
   t->next=top;
   top=t;
  }
}
//Pop Function()
pop(){
    node *p;
    int x=-1;
    if(top==NULL){
        cout<<"Stack empty";
    }
    else{
        p=top;
        top=top->next;
        x=p->data;
        delete(p);
    }
    return x;
}
//Peek Operation
peek(int pos){
   node *p=top;
   for(int i=0,i<=pos,i++){
    p=p->next;
   }
   if(p==NULL){
   return p->data;
   }
   else return -1;
}
*/

/*
**Application of Stack**
//Paranthesis Matching
* Find if the brackets have proper opening and closing.
               ((a+b)*(c+d)) or []{}()
-> Push when '(' is found.
-> Pop when ')' is found.
Look if the stack is empty or not.
*/

/*
//Infix to Postfix conversion
Use brackets to convert the infix to postfix manually.
Urinary Operators will have higher precidence and will commence from R - l .

//Infix to Postfix Conversion

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
struct Node
{
    char data;
    struct Node *next;
} *top = NULL;

void push(char x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL)
        printf("stack is full\n");
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
char pop()
{
    struct Node *t;
    char x = -1;
    if (top == NULL)
        printf("Stack is Empty\n");
    else
    {
        t = top;
        top = top->next;

        x = t->data;
        free(t);
    }
    return x;
}
void Display()
{
    struct Node *p;
    p = top;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
int isBalanced(char *exp)
{
    int i;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            if (top == NULL)
                return 0;
            pop();
        }
    }
    if (top == NULL)
        return 1;
    else
        return 0;
}
int pre(char x)

{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    return 0;
}
int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return 0;
    else
        return 1;
}
char *InToPost(char *infix)
{
    int i = 0, j = 0;
    char *postfix;
    int len = strlen(infix);
    postfix = (char *)malloc((len + 2) * sizeof(char));
    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else
        {
            if (pre(infix[i]) > pre(top->data))
                push(infix[i++]);
            else
            {
                postfix[j++] = pop();
            }
        }
    }
    while (top != NULL)
        postfix[j++] = pop();

    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char *infix = "a+b*c-d/e";
    push('#');
    char *postfix = InToPost(infix);
    printf("%s ", postfix);

    return 0;
}
*/