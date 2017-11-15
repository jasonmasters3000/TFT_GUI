#include "jwin.h"
#include "jui.h"
#include "jbutton.h"

int main()
{
    Jwin j(NULL, 10,10, 100, 50, GREY);
//    Jbutton b(&j, 5,5, "OK"); 
    Jui b(&j, 5,5); 
    j.showWin();
}
