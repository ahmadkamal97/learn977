#include <iostream>
#include <string>
using namespace std;

void choose (){

 cout << "please choose from \n" << " eat or play or sleep " ;
}

int main () {

cout << " please choose your option \n" ;
string x ,eat,sleep,play ;

cin >> x ;
do {
choose () ;
cin >> x ;
} while ( (x !="eat") && (x !="play") && ( "x != sleep") ) ;


return 0;
}
