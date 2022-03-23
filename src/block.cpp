#include "Block.h"
#include "sha256.h"
#include <cstdlib>
#include <time.h>
#include <sstream>

Block :: Block (record information, string prev, uint32_t i) {
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

string Block :: getHash () const{
    return currHash;
}

string Block :: getInfo () const {
    stringstream infoString;
    infoString <<
        "Block " <<
        index << 
        "\nPrevious Hash: " << prevHash <<
        "\nBlock Hash: " << currHash << 
        "\nTimestamp: " <<  timeStamp <<
        "\nCompany: " << info.bizName <<
        "\nIndustry: " << info.bizType <<
        "\nCertification: " << info.certification <<
        "\nProduct Code: " << info.prodCode <<
        "\nProduct Type: " << info.prodType <<
        "\nProduct Purity: " << info.prodPurity <<
        "\nComments: " << info.comments << endl;

    return (infoString.str());
}

uint32_t Block :: getIndex () {
    return index;
}
