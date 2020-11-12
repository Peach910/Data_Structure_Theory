#include<bits/stdc++.h>
struct Tree{
    struct Tree* left;
    struct Tree* right;
    int data;
};

struct Tree* tcons(struct Tree* L,int d,struct Tree* R){
    struct Tree* n = (struct Tree*)malloc(sizeof(struct Tree));
    if(n!=NULL){
        n->left = L;
        n->data = d;
    }
}