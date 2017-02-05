
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

    int a=0, b=0, c=0;
    cin>>a>>b>>c;

    int m = std::min ({
                            a-b-c,
                            a-b+c,
                            a-b*c,

                            a+b-c,
                            a+b+c,
                            a+b*c,

                            a*b-c,
                            a*b+c,
                            a*b*c
                      });

    cout<<m<<endl;

    return 0;
}
