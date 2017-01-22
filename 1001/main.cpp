
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

    long long value = 0;
    vector<double> sqrts;
    sqrts.reserve (1024);
    while (scanf("%llu", &value) != EOF)
    {
        double sqrtValue = sqrt ((double)value);
        sqrts.push_back (sqrtValue);

    }

    size_t n = sqrts.size ();
    for (size_t i = n; i > 0; --i)
    {
        printf ("%.4f\n", sqrts[i-1]);
    }

    return 0;

}
