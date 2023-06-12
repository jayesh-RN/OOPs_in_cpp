#include<iostream>
#include<string>
using namespace std;

class A{
    private:
        int weight;
    public:
        A(int w=0){
            weight = w;
        }
        void print(){
            cout<<"The weight is "<<weight<<endl;
        }
        A operator+(A obj){
            A temp;
            temp.weight = weight + obj.weight;
            return temp;
        }

};


class person{

    private:
        int wt;
    public:
        person(int w = 0){
            wt = w;
        }    
        void print(){
            cout<<"The weight is "<<wt<<endl;
        }
        void operator++(){
            wt++;
        }
        void operator++(int){ // int is a dummy variable to differentiate between pre and post increment   -- > post increment
            wt++;
        }

};


int main(){
    int a = 34 , b =45, c=0;
    c = a+b;
    cout<<"The sum is "<<c<<endl;

    // operator overloading
    A person1(45);
    A person2(56);
    A total ;

    total = person1 + person2;

    total.print();

    person p1(45);
    ++p1;
    p1.print();

    return 0;

}