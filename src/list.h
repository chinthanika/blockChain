#ifndef LIST_H
#define LIST_H

#include <cstdint>
#include "blockchain.h"

using namespace std;

//Class to produce lists of items
class List {
public:
    List(Blockchain chain);   //Constructor

    void listType (int listNo) const;   //Find the type of list
    
private:

    Blockchain listChain;   //The chain being searched

    void bizNameList () const;     //List business names
    
    void bizTypeList () const;     //List industries

    void certificationList () const;    //List certifications

    void prodCodeList () const;   //List product codes

    void prodPurityList () const;   //List product purities
};

#endif