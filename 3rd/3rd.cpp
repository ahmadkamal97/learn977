#include <iostream>

using namespace std;
bool isPrime (int num) ;
int main()
{
bool isPrime (int num){
for ( int i = 2; i < num; i++)
{
if ( isDivisible( num, i ) )
{
return false;
}
}
return true;
}
return 0;
}
