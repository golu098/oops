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
// class multiLevel: public childClass{
//     public :
//     void pencil(){
//         cout<<" this is 3rd class which is inherting the property of 2nd and 1st class which is known multi level inheritance ."<<endl;
//     }
// } ;
class hierarchical :public parentClass{
    public :
    void lapi(){
        cout<<"this is hierarchical inheritance in which  1st class property is inherting into 2nd and 3rd class"<<endl;
    }
};
int main(){
    // childClass obj;// obj for single inheritance 
    // multiLevel obj;// obj for multi level inheritance 
     hierarchical obj;
     obj.book();    // Accesses parentClass{
    
    // obj.pen();     // Accesses childClass function
    // obj.pencil();  // Accesses multiLevel function
    obj.lapi(); // access  hierarchical function
    return 0;
}
