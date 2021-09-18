// AVL Trees - It is a Self-Balencing Binary Tree in which height is balanced by a balence factor.
// Balance Factor - Diffrence between Left sub-tree and right sub-tree.
// BF should be -1 , 0 or 1 for a tree to be balanced.

/*
// Insertion in AVL Trees
We use rotation for insertion in AVL Trees :-
1. LL Rotation (1 step)
2. RR Rotation (1 step) 
3. LR Rotation (2 step)
4. RL Rotation (2 step)
*/

/*
// AVL Tree

#include <stdio.h>
    struct Node
{
    struct Node *lchild;
    int data;
    int height;
    struct Node *rchild;
} *root = NULL;

int NodeHeight(struct Node *p)
{
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;
    return hl > hr ? hl + 1 : hr + 1;
}
int BalanceFactor(struct Node *p)
{
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;
    return hl - hr;
}
struct Node *LLRotation(struct Node *p)
{
    struct Node *pl = p->lchild;
    struct Node *plr = pl->rchild;
    pl->rchild = p;
    p->lchild = plr;

    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);
    if (root == p)
        root = pl;
    return pl;
}
struct Node *LRRotation(struct Node *p)
{
    struct Node *pl = p->lchild;
    struct Node *plr = pl->rchild;
    pl->rchild = plr->lchild;
    p->lchild = plr->rchild;
    plr->lchild = pl;
    plr->rchild = p;
    pl->height = NodeHeight(pl);
    p->height = NodeHeight(p);
    plr->height = NodeHeight(plr);
    if (root == p)
        root = plr;
    return plr;
}
struct Node *RRRotation(struct Node *p)
{
    return NULL;
}
struct Node *RLRotation(struct Node *p)
{
    return NULL;
}
struct Node *RInsert(struct Node *p, int key)

{
    struct Node *t = NULL;
    if (p == NULL)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->height = 1;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data)
        p->lchild = RInsert(p->lchild, key);
    else if (key > p->data)
        p->rchild = RInsert(p->rchild, key);
    p->height = NodeHeight(p);
    if (BalanceFactor(p) == 2 && BalanceFactor(p -
                                               > lchild) == 1)
        return LLRotation(p);
    else if (BalanceFactor(p) == 2 && BalanceFactor(p -
                                                    > lchild) == -1)
        return LRRotation(p);
    else if (BalanceFactor(p) == -2 && BalanceFactor(p -
                                                     > rchild) == -1)
        return RRRotation(p);
    else if (BalanceFactor(p) == -2 && BalanceFactor(p -
                                                     > rchild) == 1)
        return RLRotation(p);
    return p;
}

int main()
{
    root = RInsert(root, 50);
    RInsert(root, 10);

    RInsert(root, 20);

    return 0;
}
*/

/*
//Height vs Nodes of AVL Trees

Minimum number of Nodes with given Height = {
                                              0 ,if h=0
                                              1 ,if h=1
                                              n(h-2)+n(h-1) ,Otherwise
                                             }
Maximum number of Nodes with given Height = 2^(h)-1

Minimum Height when number of Nodes is given =log base2 (n+1)
Maximum Height when number of Nodes is given =1.44 log base2 (n+2)

*/

