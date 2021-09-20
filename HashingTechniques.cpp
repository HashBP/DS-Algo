//Hashing - It is a search methord which consumes less time as compared to Linear and Binary Search of O(1).
//Here we use modulus(%) to distribute the numbers in the array.
/*
**Types of Hashing :- 
*Open Hashing - We use the space outside the Hash Tablr too.
 + Chaining
*Closed Hashing - We use only the space of Hash Table.
 Open Addressing
 + Linear Probing
 + Quardatic Probing
 + Double Hashing
*/

// Loading Factor(λ) :- number of keys/size of hash table

/*
//Chaining :- 

 The numbers with same output for the Hashing Function is arranged in a linked list at a single address in the hash table.

#ifndef Chains_h
#define Chains_h
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void SortedInsert(struct Node **H, int x)
{
    struct Node *t, *q = NULL, *p = *H;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;
    if (*H == NULL)
        *H = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == *H)
        {
            t->next = *H;
            *H = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}
struct Node *Search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)

        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

#endif 

#include <stdio.h>
#include "Chains.h"
int hash(int key)
{
    return key % 10;
}
void Insert(struct Node *H[], int key)
{
    int index = hash(key);
    SortedInsert(&H[index], key);
}
int main()
{
    struct Node *HT[10];
    struct Node *temp;
    int i;
    for (i = 0; i < 10; i++)
        HT[i] = NULL;
    Insert(HT, 12);
    Insert(HT, 22);
    Insert(HT, 42);
    temp = Search(HT[hash(21)], 21);
    printf("%d ", temp->data);

    return 0;
}
*/

/*
// Linear Probing

It does not use the space outside the Hash Table.
So it stores in the Hash table in next free space after applying the Hash Function. h'(x)=(h(x)+f(i))%10
Here Loading Factor should(λ) be <= 0.5 always.

Avg. successful time for Search = (1/λ)ln(1/1-λ)
Avg. unsuccessful time for Search = (1/1-λ)

**Drawbacks :-
1. imary Clusting or cluster of keys which does not belong to a group.
2. Use of more spaces to have required vacencies in the array due to λ<=0.5.

**Linear Probing:--

#include <stdio.h>
#define SIZE 10
int hash(int key)
{
    return key % SIZE;
}
int probe(int H[], int key)
{
    int index = hash(key);
    int i = 0;
    while (H[(index + i) % SIZE] != 0)
        i++;
    return (index + i) % SIZE;
}

void Insert(int H[], int key)
{
    int index = hash(key);
    if (H[index] != 0)
        index = probe(H, key);
    H[index] = key;
}
int Search(int H[], int key)
{
    int index = hash(key);
    int i = 0;
    while (H[(index + i) % SIZE] != key)
        i++;
    return (index + i) % SIZE;
}
int main()
{
    int HT[10] = {0};
    Insert(HT, 12);

    Insert(HT, 25);
    Insert(HT, 35);
    Insert(HT, 26);
    printf("\nKey found at %d\n", Search(HT, 35));
    return 0;
}
*/

Quardaic Probing :-

Similar to Linear Probing, Here, Only The function changes for f(i)=i^2. 

Avg. successful time for Search = -ln(1-λ)/λ
Avg. unsuccessful time for Search = (1/1-λ)