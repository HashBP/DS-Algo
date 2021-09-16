//Trees - Collection of nodes and data connected with each other in singular form.
//Collection of Trees is called Forest.

//Binary Tree - The number of nodes can not be excided more then two.

//Number of Binary Trees without Identity = (2n C n)/(n+1)
//Number of Binary Trees with Identity = (2n C n)*n!/(n+1)

//Number of Nodes with Maximum Height = 2^(n-1)

//Minimum Number of Nodes with a given Height = h+1
//Maximum Number of Nodes with a given Height = 2^(h+1)-1

//Minimum Height with a given Number of Nodes = n-1
//Maximum Height with a given Number of Nodes = log2(n+1)-1

/*
// Internal Nodes and External Nodes
Internal Nodes- Atleat a child.
External Nodes- No child.
  **deg(0)=deg(2)+1**
*/

// Strict Binary Tree - The degree at any moment should be 0 or 2 only.
// Minimum Number of Nodes with a given Height in Strict Binary Tree = 2h+1
// Maximum Number of Nodes with a given Height in Strict Binary Tree =  2^(h+1)-1
// Minimum Height with a given Number of Nodes in Strict Binary Tree =  log2(n+1)-1
// Maximum Height with a given Number of Nodes in Strict Binary Tree =  (n-1)/2

//N-Ary Trees
//Maximum number of child should be n at once.

/*
//Strict N-Ary Trees - The degree at any moment should be 0 or n only.

If Height is given :
Note : Here m is degree.
Min Nodes = mh+1
Max Nodes = m^(h+1)-1/(m+1)

If Number of Node is given :
Min Height = log base(m) (n(m-1)+1)-1
Max Height = (n-1)/m

Relation for number of internal and External nodes -> e= (m-1)i+1
*/

/*
//Representation of a Binary Tree :
1. By Array Representation
2. By linked List Representation.(Convineant)
*/

/*
// Linked Representation of Binary Tree

struct node
{
    int data;
    node *lchild;
    node *rchild;
};
*/

//Full Binary Tree
// Binary Tree of height h having maximum number of nodes.

//Complete Binary Tree
// If Binary tree represented in an array and there is no blank spaces.

/*
Tree Transvarsal

In Order - Left Node Right
Pre Order - Node Left Right
Post Order - Left Right Node
Level Order - Level by Level
*/

/*
// Creating a Binary Tree

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    // val is the key or the value that
    // has to be added to the data part
    Node(int val)
    {
        data = val;

        // Left and right child for node
        // will be initialized to null
        left = NULL;
        right = NULL;
    }
};

int main()
{

    /*create root*/
//   struct Node *root = new Node(1);
/* following is the tree after above statement
 
             1
            / \
          NULL NULL
    */
//  root->left = new Node(2);
//  root->right = new Node(3);
/* 2 and 3 become left and right children of 1
                    1
                  /    \
                 2       3
               /  \     /  \
            NULL NULL  NULL NULL
    */
// root->left->left = new Node(4);
/* 4 becomes left child of 2
               1
            /     \
           2       3
          / \     / \
         4  NULL NULL NULL
        / \
     NULL NULL
    */
//   return 0; }

/*
*********RECURSIVE METHORD********
// Pre Order Tree Traversal

void preorder()
{
    if (t != NULL)
    {
        cout << t->data;
        preorder(t->lchild);
        preorder(t->rchild);
    };
}

// In Order Tree Traversal

void inorder()
{
    if (t != NULL)
    {

        inorder(t->lchild);
        cout << t->data;
        inorder(t->rchild);
    }
}

// Post Order Tree Traversal

void postorder()
{
    if (t != NULL)
    {

        postorder(t->lchild);
        postorder(t->rchild);
        cout << t->data;
    }
}
*/

/*

//Iterative Tree Traversals

#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
#include "Stack.h"
    struct Node *root = NULL;
void Treecreate()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q, 100);
    printf("Eneter root value ");
    scanf("%d", &x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);
    while (!isEmpty(q))
    {
        p = dequeue(&q);
        printf("eneter left child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("eneter right child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}

void IPreorder(struct Node *p)
{
    struct Stack stk;
    Stackcreate(&stk, 100);
    while (p || !isEmptyStack(stk))
    {
        if (p)
        {
            printf("%d ", p->data);
            push(&stk, p);
            p = p->lchild;
        }
        else
        {
            p = pop(&stk);
            p = p->rchild;
        }
    }
}
void IInorder(struct Node *p)
{
    struct Stack stk;
    Stackcreate(&stk, 100);
    while (p || !isEmptyStack(stk))
    {
        if (p)
        {
            push(&stk, p);
            p = p->lchild;
        }
        else
        {
            p = pop(&stk);
            printf("%d ", p->data);
            p = p->rchild;
        }
    }
}

int main()

{
    Treecreate();
    IPreOrder(root);
    IInorder(root);
    return 0;
}
*/

/*

//Level Order Traversal

LevelOrder Traversal
#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
#include "Stack.h"
    struct Node *root = NULL;
void Treecreate()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q, 100);
    printf("Eneter root value ");
    scanf("%d", &x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);
    while (!isEmpty(q))
    {
        p = dequeue(&q);
        printf("eneter left child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("eneter right child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}
void LevelOrder(struct Node *root)
{
    struct Queue q;
    create(&q, 100);
    printf("%d ", root->data);
    enqueue(&q, root);
    while (!isEmpty(q))
    {
        root = dequeue(&q);
        if (root->lchild)
        {
            printf("%d ", root->lchild->data);
            enqueue(&q, root->lchild);
        }
        if (root->rchild)
        {
            printf("%d ", root->rchild->data);
            enqueue(&q, root->rchild);
        }
    }
}

int main()
{
    Treecreate();
    LevelOrder(root);

    return 0;
}
*/

/*
//Can we Genrate Tree from Traversal

**If one of the following then no unique treee can be formed,
1. Pre Order
2. Post Order
3. In Order

Rather number of tress formed is Catalen Number = (2n C n)/(n+1)

** If we are provided with Pre Order and Post Order We can still not form a unique tree.

For Forming a unique tree one of following two conditions should be fulfilled :-
1. Pre Order and In Order
2. Post Order and In Order
*/

/*
//Count and Height of a Tree

#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
#include "Stack.h"
    struct Node *root = NULL;
void Treecreate()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q, 100);
    printf("Eneter root value ");
    scanf("%d", &x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);
    while (!isEmpty(q))
    {
        p = dequeue(&q);
        printf("eneter left child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("eneter right child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}
int count(struct Node *root)
{
    if (root)
        return count(root->lchild) + count(root->rchild) + 1;
    return 0;
}
int height(struct Node *root)
{
    int x = 0, y = 0;
    if (root == 0)
        return 0;
    x = height(root->lchild);
    y = height(root->rchild);
    if (x > y)
        return x + 1;
    else
        return y + 1;
}

int main()
{
    Treecreate();
    printf(“% d”, count(root));
    printf(“% d”, height(root));

    return 0;
}
*/