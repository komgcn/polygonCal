//
// Created by zhihui on 12/24/19.
//

#ifndef POLYGONCAL_BASICPTR_H
#define POLYGONCAL_BASICPTR_H

template <typename T>
class basicPtr{

public:
    explicit basicPtr(T* _data):data(_data){}

    ~basicPtr(){
        delete data;
    }

    T& operator *() const{
        return *data;
    }

    T* operator->() const{
        return data;
    }

    T& get() const{
        return *data;
    }

    basicPtr(const basicPtr<T> &) = delete;
    basicPtr& operator=(const basicPtr<T> &) = delete;

private:
    T *data;
};


#endif //POLYGONCAL_BASICPTR_H
