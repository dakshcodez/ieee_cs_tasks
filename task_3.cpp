#include<iostream>

struct block{
    int key;
    int value;
    int expiry;

    block(int key, int value, int expiry){
        this->key = key;
        this->value = value;
        this->expiry = expiry;
    }
};

using Block = block;

class Cache{
    public:
        Block newBlock;
        
};