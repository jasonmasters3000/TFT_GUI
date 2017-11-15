#ifndef JUI_H
#define JUI_H
#include "jwin.h"

class Jui: public Jbase
{
    // TODO initialise linked list somewhere
    // TODO delegating constructors? does AVR gcc support them?
    public:
        Jui(Jwin * parent, int x, int y, int w, int h, Colour bg):
            Jbase(x, y, w, h, bg),
            m_parent(parent)
            {
                if(parent)
                {
                    parent->attachJui(this);
                }
            };

        Jui(Jwin * parent, int x, int y):
            Jbase(x, y),
            m_parent(parent)
            {
                     // if we are a child, attach this window as a child of the parent
                if(parent)
                {
                    parent->attachJui(this);
                }
            };
        virtual void draw();

        
        //virtual void attach(Jui *parent, Jui * child)=0;
    protected:
        Jbase *m_parent;
        
        //item * m_children;
//        static item *m_items;//=NULL;
};
#endif
