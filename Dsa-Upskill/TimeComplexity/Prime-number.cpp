#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i, num = 0, count = 0;

    cout << "Enter the Number to check Prime: ";
    cin >> n;
    num = sqrt(n);
    if (num <= 1)
    {
        cout << "Enter the number greater than 1 ";  //prime no. is divisble be itself and 1 therefore 

        return 0;
    }

    //  check for prime
    for (i = 2; i <= num; i++)
    {
        if (n % i == 0)
        {
            count = count + 1;
        }
    }
    if (count == 0)
        cout << "Number is Prime." << endl;
    else
        cout << "Number is not Prime." << endl;
    return 0;
}

// t's worth mentioning that the sqrt(n) is a rough approximation, as in reality the number of iterations of the loop is less than or equal to sqrt(n) due to the nature of prime numbers where the number of divisors of a prime number is less than sqrt(n).

// The time complexity of  code is O(sqrt(n)), where n is the input number
