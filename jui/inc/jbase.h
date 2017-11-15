#ifndef JBASE_H
#define JWBASE_H
#include "jtypes.h"

class Jbase
{
    public:
        Jbase(int x, int y, int w, int h, Colour bg):
            m_xPos(x),
            m_yPos(y),
            m_xSize(w),
            m_ySize(h),
            m_bgCol(bg),
            m_fgCol(BLACK) 
        {
        };
        Jbase(int x, int y):
            m_xPos(x),
            m_yPos(y),
            m_xSize(50),
            m_ySize(50),
            m_bgCol(GREY),
            m_fgCol(BLACK) 
        {
        }
        //virtual void attach()=0;
        virtual void draw()=0;
        //virtual void show()=0;
    
        void setXSize(int x)
        {
            this->m_xSize=x;
        }
        void setYSize(int y)
        {
            this->m_ySize=y;
        }
        Colour getBgColour()
        {
            return this->m_bgCol;
        }
        Colour getFgColour()
        {
            return this->m_fgCol;
        }

    protected:
        int m_xPos;
        int m_yPos;
        int m_xSize;
        int m_ySize;
        Colour m_bgCol;
        Colour m_fgCol; // text etc colour
};
#endif
