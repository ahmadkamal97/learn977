#include <iostream>

using namespace std;
void play(){

 cout << "don't play \n" ;
  }
template < class FIRST , class SECOND >
FIRST number ( FIRST a , SECOND b){
return  a +b  ;
}
int main()
{
play() ;
int j=7,f=6,i, x=9 ,y ,result ;
double g=35.1 ;
cout << "please enter an integer number \n " ;
cin >> y ;
result = x*y ;
switch (result) {
case 0 :
     cout << " you enter 0 \n" ;
     break ;

case 81 :
    cout << " you enter 9 \n" ;
    break ;
default :
    cout << " you didn't enter 0 or 9 \n " ;
    break ;

}
for (i=0 ; i<8 ; i++){
cout << i+j << "\n" ;
}

cout << "now we will sum int and double \n" <<number ( g , f) << endl ;


cout << " please press enter to out the program \n" ;

    return 0;
}
