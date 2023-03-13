#include <bits/stdtr1c++.h>

using namespace std;

int main()
{
    // methods to intialize value with same data type
    // 1
    // pair<int, int> p = {1, 2};
    // 2
    //   pair<int,int>p = make_pair(1,2);
    // 3
    // pair<int, int> p(1, 2);

    // with diff datatype

    // pair<char , int>p2 = {'a',3};
    // cout<<p2.first<<" " << p2.second <<endl;

    // pair< string , int>p3 = {"hello",5};
    // cout<<p3.first<<" "<<p3.second<<endl;

    // new copy of pair
    // ampersand used for refrencing the pair

    //  pair<int, int> &u = p;
    //  u.first = 7;
    //   cout << p.first << " " << p.second << endl;
    //   cout << u.first << " " << u.second << endl;

    // comparision
    pair<int, int> p = {1, 2};
    pair<int, int> u = {1, 2};

    if (p < u)
    {
        cout << "yes" << endl;
    }
    if (p == u)
    {
        cout << "they are equal" << endl;
    }
}