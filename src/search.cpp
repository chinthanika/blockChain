
#include "search.h"

Search :: Search (Blockchain chain) {
    searchChain = chain;
}

//Find the correct search type
void Search :: searchType (int num, string searchTerm) const {

    //Switch to correct search function
    switch (num) {
        case 1:
            byBizName (searchTerm);
            break;
        case 2:
            byBizType (searchTerm);
            break;
        case 3:
            byCertification (searchTerm);
            break;
        case 4:
            byProdCode (searchTerm);
            break;
        case 5:
            byProdType (searchTerm);
            break;
        case 6:
            byProdPurity (searchTerm);
            break;
        case 7:
            byAcceptance (searchTerm);
            break;
    }
}


//Find all block with a business name
void Search :: byBizName (string searchTerm) const {
    
    bool found;   //Whether the item has been found or not
    found = false;

    //Loop through the blocks
    for (size_t i = 1; i < searchChain.chainSize(); ++i){
        
        //Check for the correct block
        if (searchChain.getBlock(i).getInfo().bizName.compare(searchTerm) == 0 ) {
            
            cout << searchChain.getBlock(i).getDetails() << endl;
            found = true;
        }
    }

    //If search term not found
    if (found == false) {
        cout << "Item not found." << endl;
    }
}

//Find all blocks in an industry
void Search :: byBizType (string searchTerm) const {
    
    bool found;   //Whether the item has been found or not
    found = false;

    //Loop through the blocks
    for (size_t i = 1; i < searchChain.chainSize(); ++i){
        
        //Check for the correct block
        if (searchChain.getBlock(i).getInfo().bizType.compare(searchTerm) == 0 ) {
            
            cout << searchChain.getBlock(i).getDetails() << endl;
            found = true;
        }
    }

    //If search term not found
    if (found == false) {
        cout << "Item not found." << endl;
    }
}

//Find all blocks with a certification
void Search :: byCertification (string searchTerm) const {
    
    bool found;   //Whether the item has been found or not
    found = false;

    //Loop through the blocks
    for (size_t i = 1; i < searchChain.chainSize(); ++i){
        
        //Check for the correct block
        if (searchChain.getBlock(i).getInfo().certification.compare(searchTerm) == 0 ) {
            
            cout << searchChain.getBlock(i).getDetails() << endl;
            found = true;
        }
    }

    //If search term not found
    if (found == false) {
        cout << "Item not found." << endl;
    }
}

//Find all blocks with a product code
void Search :: byProdCode (string searchTerm) const {
    
    bool found;   //Whether the item has been found or not
    found = false;

    //Loop through the blocks
    for (size_t i = 1; i < searchChain.chainSize(); ++i){
        
        //Check for the correct block
        if (searchChain.getBlock(i).getInfo().prodCode.compare(searchTerm) == 0 ) {
            
            cout << searchChain.getBlock(i).getDetails() << endl;
            found = true;
        }
    }

    //If search term not found
    if (found == false) {
        cout << "Item not found." << endl;
    }
}

//Find all blocks with a product type
void Search :: byProdType (string searchTerm) const {
    
    bool found;   //Whether the item has been found or not
    found = false;

    //Loop through the blocks
    for (size_t i = 1; i < searchChain.chainSize(); ++i){
        
        //Check for the correct block
        if (searchChain.getBlock(i).getInfo().prodType.compare(searchTerm) == 0 ) {
            
            cout << searchChain.getBlock(i).getDetails() << endl;
            found = true;
        }
    }

    //If search term not found
    if (found == false) {
        cout << "Item not found." << endl;
    }
}

//Find all blocks with a product purity
void Search :: byProdPurity (string searchTerm) const {
    
    bool found;   //Whether the item has been found or not
    found = false;

    //Loop through the blocks
    for (size_t i = 1; i < searchChain.chainSize(); ++i){
        
        //Check for the correct block
        if (searchChain.getBlock(i).getInfo().prodPurity.compare(searchTerm) == 0 ) {
            
            cout << searchChain.getBlock(i).getDetails() << endl;
            found = true;
        }
    }

    //If search term not found
    if (found == false) {
        cout << "Item not found." << endl;
    }
}

//Find all blocks with their acceptance status
void Search :: byAcceptance (string searchTerm) const {
    
    bool found;   //Whether the item has been found or not
    found = false;

    //Loop through the blocks
    if (searchTerm.compare("true") == 0) {
        for (size_t i = 1; i < searchChain.chainSize(); ++i){
            
            //Check for the correct block
            if (searchChain.getBlock(i).getInfo().accepted == true) {
                
                cout << searchChain.getBlock(i).getDetails() << endl;
                found = true;
            }
        }

        //If search term not found
        if (found == false) {
            cout << "Item not found." << endl;
        }
    }
    else if (searchTerm.compare("false") == 0) {
        for (size_t i = 1; i < searchChain.chainSize(); ++i){
            
            //Check for the correct block
            if (searchChain.getBlock(i).getInfo().accepted == false) {
                
                cout << searchChain.getBlock(i).getDetails() << endl;
                found = true;
            }
        }

        //If search term not found
        if (found == false) {
            cout << "Item not found." << endl;
        }
    }
    else {
        cout << "Please enter 'true' or 'false'." << endl;
    }
}
