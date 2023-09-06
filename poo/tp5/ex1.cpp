#include <iostream>
#include <cassert>
#include <assert.h>

using namespace std;

class vector_t {
private:
    int* data_;
    size_t size_;

public:
    vector_t() : data_(nullptr), size_(0) {}

    vector_t(size_t size) : data_(new int[size]), size_(size) {
        for (size_t i = 0; i < size_; i++) {
            data_[i] = rand() % 100;
        }
    }

    vector_t(const vector_t& other) : data_(new int[other.size_]), size_(other.size_) {
        for (size_t i = 0; i < size_; i++) {
            data_[i] = other.data_[i];
        }
    }

    ~vector_t() {
        delete[] data_;
    }
    
    vector_t& operator=(const vector_t& other) {
        if (this != &other) {
            delete[] data_;
            data_ = new int[other.size_];
            size_ = other.size_;
            for (size_t i = 0; i < size_; i++) {
                data_[i] = other.data_[i];
            }
        }
        return *this;
    }

    int& operator[](size_t index) {
        assert(index < size_);
        return data_[index];
    }

    

    int max() const {
        if (size_ == 0) {
            throw out_of_range("vecteur vide");
        }
        int result = data_[0];
        for (size_t i = 1; i < size_; i++) {
            if (data_[i] > result) {
                result = data_[i];
            }
        }
        return result;
    }

    int min() const {
        if (size_ == 0) {
            throw out_of_range("vecteur vide");
        }
        int result = data_[0];
        for (size_t i = 1; i < size_; i++) {
            if (data_[i] < result) {
                result = data_[i];
            }
        }
        return result;
    }

};

int main(){
    vector_t v(5); // tableau de 5 cases allouée (par exemple toute à 0)
    vector_t r(500000); // tableau de 5000000 cases allouées
    v[3]=2;
    int a=v[3];
    v[6];
    v.max();
    v.min();
    vector_t b=v*3;
    assert(b[3]!=v[3]); // b et v sont différent
    r = 4*v;
    return 0;

}  

