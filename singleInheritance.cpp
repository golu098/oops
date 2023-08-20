// single inheritance 

#include<iostream>
using namespace std;

class parentClass {
    public:
    void book(){
        cout<<"this is parent class"<<endl;
    }
};

class childClass :public parentClass{
    public:
    void pen(){
        cout<<"this is child class "<<endl;
    }
};
int main(){
    childClass obj;
    obj.book();
    obj.pen();
    return 0;
}
