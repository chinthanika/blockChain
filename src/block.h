#ifndef BLOCK_H
#define BLOCK_H

#include <cstdint>
#include <iostream>

using namespace std;

//Contains relevant supply chain information
struct data {

    string bizID;    //The ID of the business receiving the product
   
    string bizType;    //The type of business receiving the product
  
    string prodCode;    //The product code at the time of sale
  
    string certification;    //The quality certification of the product
   
    string comments;    //Any additional comments from the seller about the product
    
    bool accepted;    //Whether the product has been accepted by the business
};

class Block {
public:

    string prevHash;    //Hash of the previous block

    Block(const data information, string prev, uint32_t i);    //Constructor

    string getHash();    //Getter for the current block's hash

private:

    uint32_t index;    //Block number

    data info;    //Relevant block information

    string currHash;    //Block hash value

    time_t timeStamp;    //Time at which the block was created

    string calculateHash() const;    //Hash function
};

#endif // BLOCK_H