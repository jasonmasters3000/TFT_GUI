#ifndef JBUTTON_H
#define JBUTTON_H
#include <cstring>
#include "jui.h"

class Jbutton: public Jui
{
    public:
        // TODO colour - inherit from parent?
        Jbutton(Jwin * parent, int x, int y, const char *text):
            Jui(parent, x, y)
        {
            // TODO work out size of button base on length of text
            setYSize(20);  // TODO based on text size
            setXSize(50);   // TODO based on text size * length text
            this->m_text = new char [(strlen(text)+1)];
            strcpy(this->m_text, text);
            if (parent)
            {
                this->m_bgCol = parent->getBgColour();
                this->m_fgCol = parent->getFgColour();
            }
        };
        // dtor needed?
        ~Jbutton()
        {
            delete [] m_text;
        };
        virtual void draw();
    private:
        callback onClicked();
        char *m_text;
};
#endif
