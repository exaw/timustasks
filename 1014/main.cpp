
#include <cstdio>
#include <cmath>

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <bitset>


using namespace std;

vector<int> MakeSimples (int k)
{

    vector<int> simples;

    int t = k;
    while (t > 1)
    {
        int tt = t;
        for (int i = 9 ; i > 1; i--)
        {
            if (t % i == 0)
            {
                simples.push_back (i);
                t /= i;
                break;
            }
        }

        if (tt == t)
        {
           simples.push_back (t);
           break;
        }

    }

    return simples;
}

vector<int> f1 (int k)
{
    if ( k == 0)
        return {10};

    if (k < 10)
    {
        return {k};
    }

    vector<int> simples = MakeSimples (k);


    for (int i : simples)
    {
        if (i > 9)
        {
            return {-1};
        }
    }

    sort (simples.begin (), simples.end ());

    return simples;
}

int digitsmult (int k)
{
    int m = 1;
    while (k != 0)
    {
        int t = k % 10;
        if (t == 0)
            return 0;

        m *= t;
        k /= 10;
    }

    return m;
}


int f2 (int k)
{
    if (k < 10)
    {
        return k;
    }

    for (int i = 0; i < 999999; i++)
    {
        if (digitsmult (i) == k)
            return i;
    }

    return -1;

}

int main ()
{
    ios_base::sync_with_stdio (false);

    int k = 0;
    cin >> k;
    vector<int> r1 = f1 (k);

    for ( int i : r1 )
        cout<<i;
    cout<<endl;



    //int r = f1 (24);

//    for (int i = 0; i < 1000; i++)
//    {
//        if ( i % 10 == 0 )
//            cout << i <<endl;
//
//        int r2 = f2 (i);
//        if (r1 != r2)
//            cout << "i: " << i << " ( f1: " << r1 << ", f2: " << r2 << " )" << endl;
//    }


    //vector<int> simples = f1(k);

    //for ( int i : simples )


}
