#include<stdio.h>
#include<math.h>
#include <iostream>

using namespace std;

int factorial(int n){
    if (n==0)
    {
      return 1;
      
    }
    else 
    return n*factorial(n-1);
}

int main(){
    int n;
    cout << " enter a postive number";
    cin>> n;
      int fact = factorial(n);
    cout<< n<< "! = " << fact <<endl;
    return 0;
}