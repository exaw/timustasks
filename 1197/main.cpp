
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

int check ( char b, int c )
{
    return ( 'a' <= b && b <= 'h' && 1 <= c && c <= 8 ) ? 1 : 0;
}


int f ( const string& pos )
{
    int n = 0;
    char b = pos[0];
    int c = stoi(string(1,pos[1]));

    n += check ( b+2, c-1 );
    n += check ( b+1, c-2 );
    n += check ( b-1, c-2 );
    n += check ( b-2, c-1 );

    n += check ( b-2, c+1 );
    n += check ( b-1, c+2 );
    n += check ( b+1, c+2 );
    n += check ( b+2, c+1 );

    return n;

}

int main ()
{
    ios_base::sync_with_stdio (false);

    int n=0;
    cin>>n;

    for ( int i=0;i<n;i++ )
    {
        string pos;
        cin>>pos;
        int res = f (pos);
        cout<<res<<endl;
    }

    return 0;
}
