#include <iostream>

using namespace std;
string getRandomCard() ;
string card[5] ;
int main()
{
for ( int i = 0; i < 5; i++ )
{
card[ i ] =getRandomCard() ;
}
cout << getRandomCard() ;
    return 0;
}
