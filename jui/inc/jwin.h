#ifndef JWINDOW_H
#define JWINDOW_H
#include <cassert>
#include "jbase.h"

class Jwin : public Jbase
{
    public:
        Jwin(Jwin * parent, int x, int y, int w, int h, Colour bg):
            Jbase(x, y, w, h, bg),
            m_parent(parent),
            m_juiList(NULL)
        {
            m_init();
        };

        Jwin(Jwin * parent, int x, int y):
            Jbase(x, y),
            m_parent(parent),
            m_juiList(NULL)
        {
            m_init();
        }; 
        ~Jwin()
        {
            //TODO iterate linked list and free memory
        }
        
    // attach an item to the end of the window list
        void attach(item *list, Jbase *child)
        {
            item *last = list;
                // go to end of list
            while(list->next)    // m_items should never be NULL
            {
                last = list->next;
            }
                // temp is last item on list
                // create new item and attach to end of list
            item * newItem = new item;
            newItem->element = child;
            newItem->next = NULL;
            last->next = newItem;
        }
        void attachJui(Jbase *child)
        {
            if(m_juiList)           // perhaps there is a more elegant way to init
                                    // both lists
            {
                attach(m_juiList, child);
            }
            else
            {
                m_juiList = new item;
                m_juiList->element = child;
                m_juiList->next = NULL;
            }
        }
    virtual void draw();
    void showWin();
    private:
        void m_init()
        {
            if(m_parent)
            {
                //parent->attach(parent, this);
                // attach to linked list
                // but where - at the end, or  after the parent
                // ;does it matter?
                // may as well have parameter as root=True|False
                // put at end
                // but we can use a common attach function here
                attach(m_windowList, this);
            }
            else
            {
                // root window, so initialise linked list with this at root
                assert(m_windowList == NULL);
            
                // create new linked list of items on this window
                m_windowList = new item;
                m_windowList->element = this;
                m_windowList->next = NULL;
            }
        };
    protected:
        
        //void attachJwin(Jwin *item)
        //{
            //attach(m_juiList, item);
        //}
        static item *m_windowList;  // only one list of windows
        item *m_juiList;            // each window has a list of juis
        Jwin * m_parent;
};
#endif
