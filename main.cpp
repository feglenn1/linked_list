#include <iostream>

#include "SLNode.h"
#include "SLList.h"

void print(SLNode * phead);

int main()
{
    SLList list;
    SLList list2;
    list2.delete_head();
    // list2.insert_head(3);
    list.insert_head(4);
    list.insert_head(74);
    list.insert_head(48);
    list.insert_head(8);
    list.insert_head(9);  
    list.insert_tail(234);
    list.insert_tail(213);
    // std::cout << list << std::endl;
    list.delete_head();
    // std::cout << list << std::endl;
    list.delete_tail();
    list.delete_tail();
    std::cout << list << std::endl; 
    std::cout << list.size() << std::endl;
    std::cout << list2.is_empty() << std::endl;
    
    
    //print(head);
    
    return 0;
}

void print(SLNode * p)
{    
    while(p != NULL)
    {
        std::cout << (*p) << std::endl;
        p = p->get_next();
    }
}
