#ifndef SEARCH_H
#define SEARCH_H

#include <cstdint>
#include "blockchain.h"

using namespace std;

//Class to perform all searches
class Search {
public:
    Search(Blockchain chain);   //Constructor

    void searchType (int searchNo, string searchTerm) const;   //Find the type of search
    
private:

    Blockchain searchChain;   //The chain being searched

    void byBizName (string searchTerm) const;     //Search by business name
    
    void byBizType (string searchTerm) const;     //Search by industry

    void byCertification (string searchTerm) const;    //Search by certification

    void byProdCode (string searchTerm) const;   //Search by product code

    void byProdType (string searchTerm) const;   //Search by product type

    void byProdPurity (string searchTerm) const;   //Search by product purity

    void byAcceptance (string searchTerm) const;    //Search by acceptance
};

#endif