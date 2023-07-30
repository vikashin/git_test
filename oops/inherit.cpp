#include<bits/stdc++.h>
using namespace std;

class base{
    
    public:
    int a,b;

    public:
    void fun(){

    }
};

class derive:public base{

    public:
    void fun_derive(){
        cout<<a<<endl;
    }
};

int main(){

    derive first;
    first.fun();
    return 0;
}