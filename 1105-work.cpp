#include<bits/stdc++.h>

struct Tree{
    Tree* left;
    std::string name,phone;
    Tree* right;
};

struct Tree* tcons(struct Tree* L, std::string Na, std::string Ph, struct Tree* R){
    struct Tree* n = (struct Tree*)malloc(sizeof(struct Tree));
    if(n != NULL){
        n->left = L;
        n->name = Na;
        n->phone = Ph;
        n->right = R;
    }
    return n;
}

struct Tree* top = NULL;
void tree_entry(std::string n, std::string ph){
    struct Tree** tail = &top;
    while(*tail != NULL){
        if((*tail)->name == n)break;
        else if((*tail)->name > n)tail = &((*tail)->left);
        else tail = &((*tail)->right);
    }
    if((*tail) == NULL)*tail = tcons(NULL, n, ph, NULL);
}

void tree_print(struct Tree* p){
    if(p == NULL)return;
    tree_print(p->left);
    std::string na = p->name, ph = p->phone;
    std::cout<< na << " " << ph <<"\n";
    tree_print(p->right);
    //printf("%s %s\n", p->name, p->phone);

}

//struct Tree* tree_search_by_name(std::string n){
//}

int main(){
    std::string name, phone;
    while(1){
        std::cin>>name>>phone;
        if(name == "1" || phone == "1")break;
        tree_entry(name, phone);
        std::cout<<"success!"<<std::endl;
    }
    std::cout<<"finish enter\n";
    tree_print(top);

    std::string s_name;
    while(1){
        std::cin>>s_name;
        if(s_name == "")break;
        //
    }
}