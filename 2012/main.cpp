
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

    int f = 0;
    cin>>f;

    int nbTask = 12-f;

    if ( 45 * nbTask <= 4 * 60 )
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
