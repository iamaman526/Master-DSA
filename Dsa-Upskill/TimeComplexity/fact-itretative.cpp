//factorial of a number // iterative

#include<iostream>
#include<math.h>

using namespace std;



int factorial( int n){
 int fact = 1 ;
 for (int i = 2; i < n; i++)
 {
  fact = fact * i ;
 }
   return fact;
 }

int main(){
    int n;
    cout<< " enter a postive number";
    cin>>n;
      int fact = factorial(n);
    cout<< n<< "! = " << fact <<endl;
    return 0;
}