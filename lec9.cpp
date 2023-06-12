#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
        int wt;
    public:
        Person(int w=0){
            wt = w;
        } 
        friend bool operator>(Person p1 , Person p2);   
        friend bool operator<(Person p1 , Person p2);   
};

bool operator>(Person p1 , Person p2){
    if(p1.wt>p2.wt){
        return true;
    }
    else{
        return false;
    }
}

bool operator<(Person p1 , Person p2){
    if(p1.wt<p2.wt){
        return true;
    }
    else{
        return false;
    }
}



int main(){

    int w1 , w2;
    cin>>w1>>w2;
    Person p1(w1);
    Person p2(w2);

    if(p1>p2){
        cout<<"p1 is heavier"<<endl;
    }
    else if (p1<p2){
        cout<<"p2 is heavier"<<endl;
    }

    return 0;
}