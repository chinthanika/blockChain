#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

//Contains the blockchain's blocks
class Blockchain {
public:
    Blockchain ();  //Constructor

    void addBlock (record newRecord);   //Add new block to the chain

    size_t chainSize () const;    //Return the size of the blockchain

    void printBlocks ();    //Prints info of all blocks in the chain

    Block getBlock (int index) const;    //Returns block at index

private:
    vector<Block> chain;    //The vector to hold the blocks

    Block getLastBlock () const;    //Return the previous block
};

#endif