#include<iostream>
#include<string>
using namespace std;

class Alpha{
    private:
        int a;
        int b;
    public:
        Alpha(){
            a=5;
            b=5;
            stat++;
        }
        static int stat;  // static member variable


        static int getStat(){
            stat++;
            return stat;
        }


};
int Alpha::stat = 0;

int main(){
    // Alpha a1;
    // Alpha a2;

    // cout<<a1.stat<<endl;
    // cout<<a2.stat<<endl;
    // cout<<Alpha::stat<<endl;

    Alpha a1;
    cout<<a1.getStat()<<endl;
    cout<<Alpha::getStat()<<endl;


    return 0;
}