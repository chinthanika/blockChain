#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain {
public:
    Blockchain ();

    void addBlock (record newRecord);

    size_t chainSize () const; 

    void printBlocks ();

private:
    vector<Block> chain;

    Block getLastBlock () const;
};

#endif