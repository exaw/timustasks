
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

    int k1 = 0, k2 = 0;
    cin>>k1>>k2;

    if ( k1 % 2 == 0 || k2 % 2 == 1 )
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;




    return 0;
}
