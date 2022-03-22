#include "Blockchain.h"

Blockchain::Blockchain () {
    data info;

    info.bizName = "NULL";
    info.bizType = "NULL";
    info.prodCode = "NULL";
    info.prodType = "NULL";
    info.prodPurity = "NULL";
    info.certification = "NULL";
    info.comments = "This is the Genesis Block";
    info.accepted = NULL;

    chain.emplace_back(Block (info, NULL, 0));
}

void Blockchain ::addBlock (data newData) {

    Block newBlock = Block (
        newData, 
        getLastBlock().getHash(), 
        getLastBlock().getIndex() + 1
    );

    chain.push_back (newBlock);
}

Block Blockchain :: getLastBlock () const {
    return chain.back();
}