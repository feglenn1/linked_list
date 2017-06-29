#ifndef SLNODE_H
#define SLNODE_H

class SLNode
{
public:
    SLNode(int data, SLNode * next=NULL)
        :data_(data), next_(next)
    {}  
    
    int get_data() const
    {
        return data_;
    }
    SLNode * get_next()const
    {
        return next_; 
    }

    void set_next(SLNode * node)
    {        
        next_ = (node);        
    }
    
    ~SLNode()
    {
        //  std::cout << "node deleted" << std::endl;
    }
private:
    int data_;
    SLNode * next_;
};

std::ostream & operator<<(std::ostream & cout, const SLNode & node)
{
    cout << "<node data: " << node.get_data()
         << " next: " << node.get_next()
         << ">\n";

    return cout;
}
#endif

