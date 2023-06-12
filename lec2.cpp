#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
        string name;
        int age;
        float height;
    public:

        Person(string n = "Null", int a = 0, float h = 0.0f){  // overloading constructor
            name = n;
            age = a;
            height = h;
        }

        // Person(){  // default constructor  or non-parameterized constructor
        //     name = "NUll";
        //     age = 0;
        //     height = 0.0f;
        // }  

        // Person(string n, int a, float h){  // parameterized constructor
        //     name = n;
        //     age = a;
        //     height = h;
        // }

        Person(Person &p){  // copy constructor
            name = p.name;
            age = p.age;
            height = p.height;
        }

        void getData(){
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<height<<endl;
        }
};

int main(){
    Person p1;
    p1.getData();

    Person p2("Gini", 20, 5.6f);
    p2.getData();

    Person p3(p2);
    p3.getData();

    return 0;
}