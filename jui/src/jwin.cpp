#include "jwin.h"
#include "haldraw.h" 

item * Jwin::m_windowList=NULL;

void Jwin::showWin()
{
    this->draw();
    item *i = m_juiList;
    if(i)
    {
        do{
            i->element->draw();
            i=i->next;
        } while(i);
    }
}
void Jwin::draw()
{
   haldraw_rect(m_xPos, m_yPos, m_xSize, m_ySize, m_bgCol);
}
