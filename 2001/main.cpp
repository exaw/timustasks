
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

    int a1=0, b1=0;
    cin>>a1>>b1;

    int a2=0, b2=0;
    cin>>a2>>b2;

    int a3=0, b3=0;
    cin>>a3>>b3;

    int k2 = b2;
    int k1 = a3;

    int y1 = a1 - k1;
    int y2 = b1 - k2;

    cout<<y1<<" "<<y2<<endl;

    return 0;
}
