#include "Blockchain.h"

Blockchain::Blockchain() {
    data info;

    info.bizID = "NULL";
    info.bizType = "NULL";
    info.prodCode = "NULL";
    info.certification = "NULL";
    info.comments = "This is the Genesis Block";
    info.accepted = NULL;

    chain.emplace_back(Block (info, NULL, 0));
}

void Blockchain ::addBlock (Block newBlock) {
    newBlock.prevHash = getLastBlock().getHash();
    chain.push_back (newBlock);
}

Block Blockchain :: getLastBlock() const {
    return chain.back();
}