#include "jwin.h"
#include "jui.h"
#include <iostream>
using namespace std;
int main()
{
    cout << "-----"<<endl;

    Jwin j(NULL, 10,10, 100, 50, GREY);
    Jui u(&j, 15,15, 100, 50, GREY);
    //u.draw();
    cout << "window at 10,10 size 100x50 with 100x50 ui at 15,15" << endl;
    j.showWin();

    cout << "-----"<<endl;
    Jwin jj(&j, 100,100, 100, 50, GREY);
    Jui uu(&jj, 16,16, 50, 50, GREY);
    Jui uuu(&jj, 26,16, 33, 33, GREY);
    cout << " window at 100,100 size 100x50 with 2 uis one 1t 16,16 (50x50)" << endl << " the other at 26,16 (33x33)"<<endl;
    jj.showWin();
    cout << "-----"<<endl;
}
