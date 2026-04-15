#pragma once
#include "HashTableClosed.hpp"

template <typename T>
class QuadraticProbing : public HashTableClosed<T> {
public:
    explicit QuadraticProbing(int size = 101)
        : HashTableClosed<T>(size) {}

    int probeIndex(const T& key, int i) const override {
        int start = this->hash1(key);
        int offset = i * i;
        int index = (start + offset) % this->M;
        return index;
    }

   
};
