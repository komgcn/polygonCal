//
// Created by zhihui on 12/24/19.
//

#ifndef POLYGONCAL_BASICPTR_H
#define POLYGONCAL_BASICPTR_H

template <typename T>
class basicPtr{

public:
    explicit basicPtr(T* _data):data(_data),count(0){
         if(_data)
         {
             ++count;
         }
    }

    ~basicPtr(){
        if(0 == --count)
        {
            delete data;
        }
    }

    T& operator *(){
        return *data;
    }

    T& operator ->(){
        return *data;
    }

    basicPtr(const basicPtr<T> &) = delete;
    basicPtr& operator=(const basicPtr<T> &) = delete;

private:
    T *data;
    int count;
};


#endif //POLYGONCAL_BASICPTR_H
