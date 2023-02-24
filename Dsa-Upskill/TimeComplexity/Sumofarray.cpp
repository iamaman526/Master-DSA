
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 5, 7, 8, 2, 6, 9};
    int n, sum = 0;
    cout << "enter the number";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "The array sum is " << sum << endl;
    return 0;
}