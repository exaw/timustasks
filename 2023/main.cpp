
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




int Place ( char c )
{
    if ( c == 'A' ||
         c == 'P' ||
         c == 'O' ||
         c == 'R' )
        return 1;

    if ( c == 'B' ||
         c == 'M' ||
         c == 'S' )
        return 2;

    if ( c == 'D' ||
         c == 'G' ||
         c == 'J' ||
         c == 'K' ||
         c == 'T' ||
         c == 'W' )
        return 3;

    return 0;
}


int main ()
{
    ios_base::sync_with_stdio (false);

    int n=0;
    cin>>n;

    int dist = 0;
    int curPlace = 1;
    for ( int i=0; i<n; i++ )
    {
        string name;
        cin>>name;
        int nextPlace = Place (name[0]);
        int step = abs (nextPlace-curPlace);
        dist += step;
        curPlace = nextPlace;
    }

    cout<<dist<<endl;

    return 0;
}
