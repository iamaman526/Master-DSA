// #include<iostream>
// using namespace std;

// class Hero{

//     // properties
//     // char name[100];
//     // int health;
//     // char level;

//     int health;
// };

// int main(){ 
// //  creation of a object lecture 1
//     Hero h1;

// cout << "size : " << sizeof(h1) << endl;

// return 0;
// }


// access modifiers ! lecture 2

#include<iostream>
using namespace std;

class Hero{

    // properties
    private:
    int health;

    public:
    char level;

    // Default Constructor
    Hero() {
        cout << "constructor called" << endl;
    }

    //paramerterised constructor 
     
    Hero(int health)  {
       // cout << "this ->" << this << endl;
       this -> health = health;

    }
     Hero(int health, char level){
        this->level = level;
        this-> health = health;
     }
      //copy constructor 
      Hero(Hero& temp){
        cout << "copy contructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
      }
    void print(){
        cout << "level " <<  this->level <<endl;
        cout << "health " <<  this->health <<endl;
    }

     int gethealth(){
        return health;
     }
     void sethealth(int h){
        health = h;
     }

     char getlevel(){
        return level;
     }
    void setlevel(char ch){
    level = ch;
    };

};

int main() {    

    Hero ramesh;
    ramesh.sethealth(200);
    cout<<ramesh.gethealth()<<endl;

    Hero S(70 , 'c');
    S.print();
    
    //copy contructor 
    Hero R(S);
    R.print();


// //object created statically 
//   Hero ramesh;(10);
//   cout << "address of ramesh" << &ramesh << endl;
//   ramesh.gethealth();
  

// //dynamically
// Hero *h = new Hero(11);










//         // // static allocation
//         // Hero a;
//         //  a.sethealth(80);
//         //  a.setlevel('b');
//         //  cout << "level is " << a.level << endl;
//         // cout << "health is " << a.gethealth() << endl;

//         // // dynamically 
//         // Hero *b = new Hero;
//         //  b->sethealth(70);
//         //  b->setlevel('a');
//         // cout << "level is " << (*b).level << endl;
//         // cout << "health is " << (*b).gethealth() << endl;



//         // // another way to call dynamic allocated variable

//         //  cout << "level is " << b->level << endl;
//         // cout << "health is " << b->gethealth() << endl;

     




// //      //creation of object
// //      Hero ramesh;
// //  //  ramesh.health = 100
// // //   use setter
// //      ramesh.sethealth(100);
// //      cout << "health is : " << ramesh.gethealth() << endl;
   
// //      ramesh.level = 'a';
// //     //  cout << "level is : " << ramesh.level << endl;
    
// //      cout << "level is : " << ramesh.getlevel() << endl;
   


}