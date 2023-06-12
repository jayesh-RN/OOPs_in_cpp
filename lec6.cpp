// virtual function 

#include<iostream>
using namespace std;

class base{
    public:
        virtual void show(){
            cout<<"Base class"<<endl;
        }
};

class drv1: public base{
    public:
        void show(){
            cout<<"Derived class"<<endl;
        }
};

class drv2: public drv1{
    public:
        void show(){
            cout<<"Derived class 2"<<endl;
        }
};

int main(){
    base *ptr;
    ptr = new drv1;
    ptr->show();

    ptr = new drv2;
    ptr->show();

    return 0;
}