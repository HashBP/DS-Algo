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

#include<bits/stdc++.h>
using namespace std;
 
//Function to return precedence of operators
int prec(char c) {
    if(c == '^')
        return 3;
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
 
// The main function to convert infix expression
//to postfix expression
void infixToPostfix(string s) {
 
    stack<char> st; //For stack operations, we are using C++ built in stack
    string result;
 
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
 
        // If the scanned character is
        // an operand, add it to output string.
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
 
        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if(c == '(')
            st.push('(');
 
        // If the scanned character is an ‘)’,
        // pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if(c == ')') {
            while(st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
 
        //If an operator is scanned
        else {
            while(!st.empty() && prec(s[i]) <= prec(st.top())) {
                result += st.top();
                st.pop(); 
            }
            st.push(c);
        }
    }
 
    // Pop all the remaining elements from the stack
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }
 
    cout << result << endl;
}
 
//Driver program to test above functions
int main() {
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    infixToPostfix(exp);
    return 0;
}
*/