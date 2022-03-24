#include "Blockchain.h"

Blockchain::Blockchain () {
    record info;

    //Create the genesis block with dummy info
    info.bizName = "NULL";
    info.bizType = "NULL";
    info.prodCode = "NULL";
    info.prodType = "NULL";
    info.prodPurity = "NULL";
    info.certification = "NULL";
    info.comments = "This is the Genesis Block";
    info.accepted = true;

    //Insert the genesis block at the end (currently beginning)
    //of the blockchain
    chain.emplace_back(Block (info, "0", 0));
}

//Add a new block to the chain
void Blockchain :: addBlock (record newRecord) {

    Block newBlock = Block (
        newRecord,  //The new data
        getLastBlock().getHash(),   //The previous hash
        getLastBlock().getIndex() + 1   //The new index value
    );

    chain.push_back (newBlock);
}

//Return the previous block
Block Blockchain :: getLastBlock () const {
    return chain.back();
}

//Returns the block at index
Block Blockchain :: getBlock (int i) const {
    return chain.at(i);
}

//Return the size of the blockchain
size_t Blockchain :: chainSize () const {   
    return chain.size();
}

//Prints info of all the blocks in the chain
void Blockchain :: printBlocks () {

    //Loop through all blocks in the chain
    for (size_t i = 1; i < chain.size(); ++i){
        cout << chain.at(i).getDetails() << "\n\n";
    }
}