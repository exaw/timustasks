
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

int f1 ( const vector<int>& v )
{
    vector<int> vv(v);
    sort ( vv.begin (), vv.end (), std::greater<int> () );

    int a=0, b=0;
    for ( auto w : vv )
    {
        //cout << " " << w[i];
        if ( a < b )
            a += w;
        else
            b += w;
    }

    int m = abs(a-b);
    return m;
}

int f2 ( const vector<int> v )
{
    bitset<20> mask;

    int m = 9999999;

    int sum = accumulate (v.cbegin(), v.cend (), 0 );

    int border = int(pow ( 2, v.size() ));

    for ( int i=0;i<border;i++)
    {
        mask = i;

        int a = 0, b = 0;
        for (int w = 0; w < v.size (); w++)
        {
            //cout << " " << w[i];
            if (mask[w] == true)
                a += v[w];
        }


        m = std::min (m, abs (a - (sum-a)));
    }


    return m;
}

int main ()
{
    ios_base::sync_with_stdio (false);

    int n = 0;

    cin >> n;
    vector<int> weights (n);
    for ( int i=0;i<n;i++ )
    {
        cin >> weights[i];
    }

    int m = f2(weights);

    cout<<m<<endl;

    return 0;

}
