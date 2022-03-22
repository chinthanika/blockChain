#include "Block.h"
#include "sha256.h"
#include <cstdlib>
#include <time.h>

Block :: Block (data information, string prev, uint32_t i) {
    timeStamp = time(NULL);
    index = i;
    info = information;
    prevHash = prev;
    currHash = calculateHash();
}

string Block :: getCurrHash() {
    return currHash;
}

inline string Block::calculateHash() const {
    string hashString;
    hashString = info.bizID + info.bizType + info.certification + info.prodCode;

    return sha256(hashString);
}

Block::~Block()
{
    //dtor
}
