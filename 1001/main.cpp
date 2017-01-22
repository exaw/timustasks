
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



using namespace std;

int main ()
{
    ios_base::sync_with_stdio ();

    double value=0;
    vector<double> sqrts;
    sqrts.reserve (1024);
    while ( cin>>value )
    {
        double sqrtValue = sqrt(value);
        sqrts.push_back (sqrtValue);

    }

    if ( sqrts.empty () )
        return 0;

    for  ( auto it = sqrts.crbegin (); it != sqrts.crend (); ++it )
    {
        printf ("%.4f\n", *it );
    }

    return 0;

}
