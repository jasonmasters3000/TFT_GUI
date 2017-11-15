#include "jbutton.h"
#include "haldraw.h" 

void Jbutton::draw()
{
    Jui::draw();
    haldraw_text(m_xPos, m_yPos, m_fgCol, m_text);
}
