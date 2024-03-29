#ifndef BLOCK_H
#define BLOCK_H

#include <cstdint>
#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

//Contains relevant supply chain information
struct record {

    string bizName;    //The name of the business receiving the product
   
    string bizType;    //The type of business receiving the product
  
    string prodCode;    //The product code at the time of sale
  
    string prodType;    //The type pf product

    string prodPurity;    //The purity of the metal

    string certification;    //The quality certification of the product received/seller company
   
    string comments;    //Any additional comments from the seller about the product
    
    bool accepted;    //Whether the product has been accepted by the business
};

class Block {
public:

    string prevHash;    //Hash of the previous block

    Block(const record information, string prev, uint32_t i);    //Constructor

    string getHash () const;    //Getter for the block's hash

    string getDetails () const;   //Returns all supply block information

    uint32_t getIndex () const;    //Returns the index of the block

    record getInfo () const;

private:

    uint32_t index;    //Block number

    record info;    //Relevant block information

    string currHash;    //Block hash value

    string timeStamp;    //Time at which the block was created

    string calculateHash () const;    //Hash function
};

#endif // BLOCK_H