// encapsulation

// #include <iostream>
// using namespace std;

// class student
// {

// private:
//   string name;
//   int age = 20;
//   int Height;

// public:
//   int getAge()
//   {
//     return this->age;
//   }
// };
// int main()
// {
//   student Aman;
//   cout << Aman.getAge() << endl;
//   return 0;
// }

// Inheritance -----------------------------------------------------------------

// #include <iostream>
// using namespace std;

// class Human
// {

// private:
//   int height;

//   int weight;

// private:
//   int age;

// public:
//   int getAge()
//   {
//     return this->age;
//   }

//   void setWeight(int w)
//   {
//     this->weight = w;
//   }
// };

// class Male : private Human
// {

// public:
//   string color;

//   void sleep()
//   {
//     cout << " Male sleeping" << endl;
//   }

//   int getheight()
//   {
//     return this->height;
//   }
// };

// int main()
// {

//   Male m1;
//   cout << m1.getheight() << endl;

// Male object1;
// cout << object1.age << endl; // called value of super class
// cout << object1.weight << endl;
// cout << object1.height << endl;

// object1.sleep();
// object1.setWeight(84);
// cout << object1.weight << endl; // called value of setWeight

// called value of child class
//  cout<< object1.sleep() << endl; // called function of child class
// return 0;
// }

// single inheritance -----------------------------------------

// #include <iostream>
// using namespace std;

// class Animal
// {

// public:
//   int age;
//   int weight;

// public:
//   void speak()
//   {
//     cout << "speaking" << endl;
//   }
// };

//  class Dog: public Animal{

//  };

// int main()
// {

//  Dog d;
//  d.speak();
//  cout<< d.age << endl;
//    return 0;
// }

// multi - level inheritance ------------------------------------------------------------

// #include <iostream>
// using namespace std;

// class Animal
// {

// public:
//   int age;
//   int weight;

// public:
//   void speak()
//   {
//     cout << "speaking" << endl;
//   }
// };

// class Dog : public Animal
// {
// };

// class GermanShephard : public Dog
// {
// };

// int main(){

// GermanShephard g;
// g.speak();
// cout<< g.age << endl;
// return 0;
// }

// Multiple inheritanc-----------------------------------------------------

// #include <iostream>
// using namespace std;

// class Animal
// {

// public:
//   int age;
//   int weight;

// public:
//   void bark()
//   {
//     cout << "barking" << endl;
//   }
// };

// class Human
// {

// public:
//   string color;

// public:
//   void speak()
//   {
//     cout << "speaking" << endl;
//   }
// };

// // multiple inheritance
// class Hybrid : public Animal, public Human
// { // syntax of multiple inheritance
// };

// int main()
// {

//   Hybrid obj1;
//   obj1.speak();
//   obj1.bark();

//   return 0;
// }

// Hierarchical inheritance --------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//   void func1()
//   {
//     cout << "Inside the function 1" << endl;
//   }
// };

// class B : public A
// {
// public:
//   void func2()
//   {
//     cout << "Inside the function 2" << endl;
//   }
// };

// class C : public A
// {
// public:
//   void func3()
//   {
//     cout << "Inside the function 3" << endl;
//   }
// };
// int main()
// {
//   A object1;
//   object1.func1();

//   B object2;
//   object2.func2();
//   object2.func1();

//   C object3;
//   object3.func3();
//   object3.func1();
// };

// Hybrid Inheritance-----------------------------------------------------

// #include <iostream>
// using namespace std;
// // Parent class1
// class Vehicle
// {
// public:
//     Vehicle() //when class name and function name is same it act as default constructor.
//     {}
// };
// // Parent class2
// class Fare
// {
// public:
//     Fare()
//     {
//         cout << "Fare of Vehicle\n";
//     }
// };
// // Child class1
// class Car : public Vehicle
// {
//     public:
//     void horn()
//     {
//         cout << "No Honking" << endl;
//     }
// };
// // Child class2
// class Bus : public Vehicle, public Fare
// {
// };
// // main function
// int main()
// {
//     // creating object of sub class will
//     // invoke the constructor of base class
//     Car obj1;
//     obj1.horn();

//     return 0;
// };

// Ambiguity  In Inheritance ----------------------------------------------------

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     void abc()
//     {
//         cout << "class A" << endl;
//     }
// };

// class B
// {
// public:
//     void abc()
//     {
//         cout << "class B" << endl;
//     }
// };

// class C : public A, public B
// {
// public:
//     string alphabet;
//     void abc()
//     {
//         cout << "class B" << endl;
//     }
// };

// int main()
// {
//     C obj;
//     cout << obj.alphabet << endl;
//     obj.A::abc(); // USING SCOPE RESULTION OPERATOR
// };

//----------------------------------------------------------------------------

// polymorphism

// //function overloading

// #include <iostream>
// using namespace std;

// class A
// {

// public:
//     void sayHello()
//     {
//         cout << "Hello AMAN Kumar" << endl;
//     }

//     void sayHello(string name)
//     {
//         cout << "Hello" << name << endl;
//     }
//     int sayHello(char name)
//     {
//         cout << "Hello AMAN Kumar" << endl;
//         return 1;
//     }
// };

// int main()
// {
//     A obj;
//     obj.sayHello(" Aman");
//     obj.sayHello();

//     return 0;
// }

//---------------------------------------------------------------------

// polymorphism

// operator overloading

// #include <iostream>
// using namespace std;

// class B
// {
// public:
//     int a;
//     int b;

// public:
//     int add()
//     {
//         return a + b;
//     }

//     void operator+(B &obj)
//     {
//         // int value1 = this->a;
//         // int value2 = obj.a;
//         // cout << "output " << value2 - value1 << endl;
//         cout << "Hello aman" << endl;
//     }

//     void operator() (){
//         cout<< "main hoon bracket"<<endl;
//     }
// };

// int main()
// {
//     B obj1, obj2;
//     obj1.a = 4;
//     obj2.a = 7;

//     obj1 + obj2;
//     obj1();

//     return 0;
// }

//-------------------------------polymorphism-----------------
// runtime polymorphism ---------mehod overriding--------------

// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     void speak()
//     {
//         cout << "speaking" << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void speak()
//     {
//         cout << "Barking" << endl;
//     }
// };

// int main()
// {

//     Dog obj;
//     obj.speak();

//     return 0;
// }

// abstraction ------------------------------------------------------

// #include <iostream>
// using namespace std;

// class abstraction {
//     private:
//     int a, b;
//     public:
//     // method top set the value of private member
//     void set(int x, int y){
//         a = x;
//         b = y;
//     }
//     void display() {
//         cout << "a = " << a << endl;
//         cout << "b = " << b << endl;
//     }
// };
// int main(){
//     abstraction obj;
//     obj.set(10,20);
//     obj.display();
//     return 0;
// }
