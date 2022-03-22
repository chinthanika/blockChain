#include "Block.h"
#include "sha256.h"
#include <cstdlib>
#include <time.h>
#include <sstream>

Block :: Block (data information, string prev, uint32_t i) {
    timeStamp = time(NULL);
    info = information;
    prevHash = prev;
    index = i;
    currHash = calculateHash ();
}

inline string Block::calculateHash () const {
    stringstream hashString;
    hashString <<
        index <<
        prevHash <<
        currHash <<
        timeStamp <<
        info.bizName <<
        info.bizType <<
        info.certification <<
        info.prodCode <<
        info.prodType <<
        info.prodPurity;

    return sha256(hashString.str());
}

string Block :: getHash () {
    return currHash;
}

string Block :: getInfo () {
    stringstream infoString;
    infoString <<
        index << " | " <<
        prevHash << " | " <<
        currHash << " | " <<
        timeStamp << " |\n" <<
        info.bizName << " | " <<
        info.bizType << " | " <<
        info.certification << " | " <<
        info.prodCode << " | " <<
        info.prodType << " | " <<
        info.prodPurity << " |";

    return (infoString.str());
}

uint32_t Block :: getIndex () {
    return index;
}
