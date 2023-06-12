#include<iostream>
using namespace std;

class parent{ // abstract class
    public:
        virtual void show() = 0; // pure virtual function
};

class boy: public parent{
    public:
        void show(){
            cout<<"brown bun"<<endl;
        }
};

class girl: public parent{
    public:
        void show(){
            cout<<"pink bun"<<endl;
        }
};

int main(){
    parent *ptr;
    ptr = new boy();
    ptr->show();
    ptr = new girl();
    ptr->show();
    return 0;
}