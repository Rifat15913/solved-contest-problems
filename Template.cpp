/* Namespace Declaration */
using namespace std;


/* Header Files */
#include <bits/stdc++.h>


/* Typedef Segment */
typedef long long int ll;
typedef unsigned long long int llu;
typedef string s;
typedef double d;
typedef float f;


/* Define Segment */

// Values
#define inf (int)1e9
#define eps 0.000000001

// Macro
#define mset(array, character) memset(array, character, sizeof array)
#define sqr(number) (number * number)
#define cube(number) (number * sqr(number))


/* Inline Segment */
inline int max3( int a, int b, int c )
{
    return max( max( a, b ), c );
}

inline int min3( int a, int b, int c )
{
    return min( min( a, b ), c );
}

inline void swap( int* a, int* b )
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

inline int gcd( int a, int b ) { return b == 0 ? a : gcd( b, a%b ); }

inline int lcm( int a, int b ) { return ( a / gcd( a, b ) ) * b; }

/* Global Segment */



/* Other Functions */



/* Main Function */
int main( void )
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    // Do Code

    return 0;
}
