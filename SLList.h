#ifndef SLLIST_H
#define SLLIST_H

#include "SLNode.h"

class SLList
{
public:
    SLList()
        :head_(NULL), size_(0)
    {}
   
    SLNode * get_head() const
    {        
        return head_; 
    }

    int size()
    {
        return size_;
    }
    SLNode * get_next() const
    {
        return head_->get_next();
    }
    void insert_head(int key)
    {      
        head_ = new SLNode(key, head_);
        ++size_;
    }

    bool is_empty()
    {
        if (head_ == NULL)
            return 1;
        else
            return 0;
    }
    SLNode * find(const int key) const
    {
        SLNode * node = head_;
        bool data_not_found = true;
        
        if (head_ != NULL)
        {
             while (data_not_found)
             {                 
                 if (node->get_data() == key)
                 {
                     data_not_found = false; 
                     std::cout << "data found at address: ";
                     return node;                     
                 }
                 node = node->get_next();                          
             }
        }       
    }

    void insert_tail(int key)
    {      
        SLNode * n = head_;
        bool not_at_tail = true; 
        
        while (not_at_tail)
        {
            if (n->get_next() == NULL)
            {
                SLNode * p = new SLNode(key);
                n->set_next(p);
                ++size_;
                not_at_tail = false;
            }
            n = n->get_next();
        }
    }
    
    void delete_head()
    {
        if (head_ != NULL)
        {
            SLNode * temp = head_;
            head_ = temp->get_next();
            delete temp;
            --size_;
        }
    }

    void delete_tail()
    {
        if (head_ != NULL)
        {
            SLNode *previous_node, *current_node;
            current_node = head_;
        
            while (current_node -> get_next() != NULL)
            {
                previous_node = current_node;
                current_node = current_node -> get_next();
            }

            previous_node -> set_next(NULL);
            delete current_node;
            --size_;
        }         
    }    
    
private:
    SLNode * head_;
    int size_;
};

std::ostream & operator<<(std::ostream & cout, const SLList & list)
{    
    SLNode * p = list.get_head();
      
    while(p != NULL)
    {
        cout << (*p);
        p = p->get_next();
    }
    
    return cout; 
}

#endif
