#include "Block.h"
#include "sha256.h"
#include <cstdlib>
#include <ctime>
#include <sstream>

//Block constructor
Block :: Block (record information, string prev, uint32_t i) {
    
    //Using current system time as timestamp
    time_t currTime;
    currTime = time(0);

    timeStamp = ctime(&currTime);

    //Assigning information as relevant
    info = information;
    prevHash = prev;
    index = i;

    currHash = calculateHash ();    //Generating hash value
}

//Generating hash string
inline string Block :: calculateHash () const {
    stringstream hashString;

    //Converting all hash inputs into a string
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

    return sha256(hashString.str());    //Hashing through sha256
}

//Returning block hash
string Block :: getHash () const{
    return currHash;
}

//Returning printable string of information
string Block :: getDetails () const {
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

//Returning block index
uint32_t Block :: getIndex () const {
    return index;
}

record Block :: getInfo () const {
    return info;
}
