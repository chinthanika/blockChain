#include "Blockchain.h"

Blockchain::Blockchain () {
    record info;

    info.bizName = "NULL";
    info.bizType = "NULL";
    info.prodCode = "NULL";
    info.prodType = "NULL";
    info.prodPurity = "NULL";
    info.certification = "NULL";
    info.comments = "This is the Genesis Block";
    info.accepted = true;

    chain.emplace_back(Block (info, "0", 0));
}

void Blockchain ::addBlock (record newRecord) {

    Block newBlock = Block (
        newRecord, 
        getLastBlock().getHash(), 
        getLastBlock().getIndex() + 1
    );

    chain.push_back (newBlock);
}

Block Blockchain :: getLastBlock () const {
    return chain.back();
}

size_t Blockchain :: chainSize () const {
    return chain.size();
}

void Blockchain :: printBlocks () {
    for (size_t i = 1; i < chain.size(); ++i){
        cout << chain.at(i).getInfo() << "\n\n";
    }
}