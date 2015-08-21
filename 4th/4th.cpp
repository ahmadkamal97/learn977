#include <iostream>

using namespace std;
int main () {
enum RainbowColor {
RC_RED, RC_ORANGE, RC_YELLOW, RC_GREEN, RC_BLUE, RC_INDIGO, RC_VIOLET
};
RainbowColor chosen_Color ;
cout << "Choose from \n " << " RC_RED, RC_ORANGE, RC_YELLOW, RC_GREEN, RC_BLUE, RC_INDIGO, RC_VIOLET \n" ;
cin >> RainbowColor chosen_Color ;
switch (chosen_color)
{
case RC_RED: cout << "red " ; break ;
case RC_ORANGE: cout << "orange" ; break ;
case RC_YELLOW: /* paint screen yellow */
case RC_GREEN: /* paint screen green */
case RC_BLUE: /* paint screen blue */
case RC_INDIGO: /* paint screen indigo */
case RC_VIOLET: /* paint screen violet */
default: cout << "none" ; break ;
}
return 0;
}
