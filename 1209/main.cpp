
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

int main ()
{
    ios_base::sync_with_stdio (false);

    size_t n=0;
    cin>>n;

    vector<size_t> K ( n );

    for ( size_t i=0; i<n; i++ )
    {
        cin >> K[i];
    }

    set<size_t> units;
    units.insert (1);
    units.insert (2);
//
//110100100010000
    size_t c =2;
    for ( size_t i=1; c<UINT32_MAX / 2; i += 1 )
    {
        c = c + i+1;
        units.insert (c);
    }

    //cout<<units.size ()<<endl;
    //for ( size_t i : units )
      //cout<<i<<" "<<endl;
    for ( size_t k : K )
    {
        if ( units.find (k) != units.end () )
            cout<<1<<" ";
        else
            cout<<0<<" ";
    }

    return 0;
}
