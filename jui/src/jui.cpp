#include "jui.h"
#include "haldraw.h" 

void Jui::draw()
{
    haldraw_rect(m_xPos, m_yPos, m_xSize, m_ySize, m_bgCol);
}
