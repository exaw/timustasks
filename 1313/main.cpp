
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

    int n=0;
    scanf ("%d", &n);

    vector<vector<int>> A ( n, vector<int>(n) );

    for ( int i=0; i<n; i++ )
    {
        for ( int j=0; j<n; j++ )
        {
            int p=0;
            scanf ("%d", &p );
            A[i][j] = p;
        }
    }

    for ( int i=0;i<n;i++)
    {
        for ( int j=0;j<i+1;j++)
        {
            printf ("%d ", A[i-j][j] );
        }
    }

    for ( int i=1; i<n;i++ )
    {
        for ( int j=0;j<n-i;j++)
        {
            if ( i == n-1 && j == n-i-1 )
                printf ("%d", A[n-1-j][j+i] );
            else
                printf ("%d ", A[n-1-j][j+i] );
        }
    }


    return 0;
}
