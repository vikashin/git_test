#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node *Array[26];
    bool flag;
    
    Node(){
        for(int a=0;a<26;a++){
            Array[a]=NULL;
        }

        flag=false;
    }

};


void insert(string str,Node *root){
    
    Node* curr=root;
    for(int a=0;a<str.length();a++){
        if(curr->Array[str[a]-'a']==NULL){
            curr->Array[str[a]-'a']=new Node();
            curr=curr->Array[str[a]-'a'];
        }
        else{
           
            curr=curr->Array[str[a]-'a'];           
        }
        
    }

    curr->flag=true;

}


void search(string str,Node* root){
    
    int n=str.size();

    Node *curr=root;

    for(int a=0;a<n;a++){
        if(curr->Array[str[a]-'a']==NULL){
            cout<<"not found"<<endl;
            return;
        }

        curr=curr->Array[str[a]-'a'];
    }

    cout<<curr->flag<<endl;
}



int main(){
    
    Node *root=new Node();

    string key[4]={"abc","vikash","abd"};

    for(int a=0;a<4;a++){
        insert(key[a],root);
    }

    
    search("aba",root);


    return 0;
}