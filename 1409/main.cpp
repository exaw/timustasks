
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

    int a=0, b=0;
    cin>>a>>b;

    int all = (a-1)+(b-1) + 1;

    int na = all - a;
    int nb = all - b;

    cout<<na<<" "<<nb<<endl;
}
