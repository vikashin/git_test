#include<bits/stdc++.h>
using namespace std;

class base{

    public:

    int c,b;

    public:

    virtual void fun(){
        cout<<"base fun\n";
    }
};

class derive:protected base{

    private:

    int a,b;

    public:

    void fun();
};

void derive :: fun(){

    cout<<"derive fun\n";
    cout<<c<<endl;
}

int main(){

    base* first=new derive();

    first->fun();
    
    return 0;
}