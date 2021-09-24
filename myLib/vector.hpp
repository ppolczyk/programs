
template <class TType>
class Vector
{
    public:
        Vector()
        {
            mptr = new Vector[capacity];
        }

        void push_back(int element)
        {
            currentElement++;
       
            if(capacity < currentElement)
            {
                capacity *=2;
                Vector* tmp = new Vector[capacity];
                delete[] mptr;
                mptr = tmp;
            }
       
            mptr[currentElement] = element;
        }
        
        ~Vector()
        {
            delete[] mptr;
        }

    private:
        Vector* mptr;
        int capacity = 2;
        int currentElement = 2;  
    
};
