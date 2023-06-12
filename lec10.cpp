#include <iostream>
#include <string>
using namespace std;

class Alpha{
    private:
        int a1;
    public:
        Alpha(int a=0){
            a1 = a;
        }
        friend class Beta;
};

class Beta{
    private:
        int b1;
    public:
        Beta(int b=0){
            b1 = b;
        }
        int Sum(){
            Alpha a(9);
            return a.a1 + b1;
        }

};


int main(){

    Beta b(10);
    cout<<b.Sum()<<endl;

    return 0;
}