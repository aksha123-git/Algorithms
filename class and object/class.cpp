#include<iostream>
//#include "intro.cpp"
using namespace std;
class hero{
   // int name[100];
   public:
   int health;
    char level;

    int gethealth(){
        return health;

    }
    void sethealth(int h){
        health = h;
    }
    //parametermised constructor
    hero(int health)
{
    cout<<this<<endl;
   this ->  health = health;
}

};
int main(){
    hero ramesh(10);//creating object
    cout<< &ramesh<<endl;
    ramesh.gethealth();
   // cout<<"size : " << sizeof(h1) << endl;
   cout<<ramesh.gethealth() <<endl;
   ramesh.sethealth(80);

    return 0;
}