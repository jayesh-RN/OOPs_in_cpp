#include<iostream>
#include<string>
using namespace std;

// class
class house{
    // member variables
    private:
        int length = 0, breadth  = 0;

    // member functions
    public:
    void setData(int x , int y){
        length = x; 
        breadth = y;
    }
    void area(){
        cout<<"Area of house is "<<length*breadth<<endl;
    }
};

int main(){
    // object
    house gini;
    gini.setData(10,20);
    gini.area();
    return 0;
}