// inheritance
#include<iostream>
using namespace std;

class rectangle{
    public:
        int length;
        int breadth;
        int area(){
            return length*breadth;
        }
};

class cuboid:public rectangle{
    public:
        int height;
        int volume(){
            return length*breadth*height;
        }
};

int main(){
    cuboid c;
    c.length = 10;
    c.breadth = 20;
    c.height = 30;
    cout<<"Area of rectangle is "<<c.area()<<endl;
    cout<<"Volume of cuboid is "<<c.volume()<<endl;
    return 0;
}