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
class multiLevel: public childClass{
    public :
    void pencil(){
        cout<<" this is 3rd class which is inherting the property of 2nd and 1st class which is known multi level inheritance ."<<endl;
    }
} ;
int main(){
    // childClass obj;// obj for single inheritance 
    multiLevel obj;
     obj.book();    // Accesses parentClass function
    obj.pen();     // Accesses childClass function
    obj.pencil();  // Accesses multiLevel function
    return 0;
}
