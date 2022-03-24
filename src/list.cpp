#include "list.h"
#include <array>

List :: List (Blockchain chain) {
    listChain = chain;
}

//Find the correct list type
void List :: listType (int listNum) const{

    //Switch to correct search function
    switch (listNum) {
        case 1:
            bizNameList ();
            break;
        case 2:
            bizTypeList ();
            break;
        case 3:
            certificationList ();
            break;
        case 4:
            prodCodeList ();
            break;
        case 5:
            prodPurityList ();
            break;
    }
}

//A list of businesses in the supply chain
void List :: bizNameList () const {

    bool inList;    //Whether the item has already been listed

    vector <string> list = {" "};    //Vector of items that have been listed

    //Loop through the blockchain
    for (size_t m = 1; m < listChain.chainSize(); ++m){     
        inList = false;
        
        //If the vector is not empty
        if (!list.empty()) {

            //Loop through the vector of listed items
            for (size_t n = 0; n < list.size(); ++n) {
                
                //If the item is in the list, stop
                if (listChain.getBlock(m).getInfo().bizName.compare(list[n]) == 0) {
                    inList = true;
                }
            }
        }
        else {

            //If the list is empty, add the first item
            list.emplace_back(listChain.getBlock(m).getInfo().bizName);
        }


        //If the item is not in the list, add it
        if (inList == false) {
            cout << listChain.getBlock(m).getInfo().bizName << endl;
            list.push_back(listChain.getBlock(m).getInfo().bizName);
        }
    }
}

//A list of industries in the supply chain
void List :: bizTypeList () const {

    bool inList;    //Whether the item has already been listed

    vector <string> list;    //Vector of items that have been listed

    //Loop through the blockchain
    for (size_t m = 1; m < listChain.chainSize(); ++m){  
        inList = false;   
        
        //If the vector is not empty
        if (!list.empty()) {
            //Loop through the vector of listed items
            for (size_t n = 0; n < list.size(); ++n) {

                //If the item is in the list, stop
                if (listChain.getBlock(m).getInfo().bizType.compare(list[n]) == 0) {
                    inList = true;
                    break;
                }
            }
        }
        else {

            //If the list is empty, add the first item
            list.emplace_back(listChain.getBlock(m).getInfo().bizType);
        }


        //If the item is not in the list, add it
        if (inList == false) {
            cout << listChain.getBlock(m).getInfo().bizType << endl;
            list.push_back(listChain.getBlock(m).getInfo().bizType);
        }
    }
}

//A list of certifications in the supply chain
void List :: certificationList () const {

    bool inList;    //Whether the item has already been listed

    vector <string> list;    //Vector of items that have been listed

    //Loop through the blockchain
    for (size_t m = 1; m < listChain.chainSize(); ++m){  
        inList = false;   
        
        //If the vector is not empty
        if (!list.empty()) {
            //Loop through the vector of listed items
            for (size_t n = 0; n < list.size(); ++n) {

                //If the item is in the list, stop
                if (listChain.getBlock(m).getInfo().certification.compare(list[n]) == 0) {
                    inList = true;
                    break;
                }
            }
        }
        else {

            //If the list is empty, add the first item
            list.emplace_back(listChain.getBlock(m).getInfo().certification);
        }


        //If the item is not in the list, add it
        if (inList == false) {
            cout << listChain.getBlock(m).getInfo().certification << endl;
            list.push_back(listChain.getBlock(m).getInfo().certification);
        }
    }
}

//A list of product codes in the supply chain
void List :: prodCodeList () const {

    bool inList;    //Whether the item has already been listed

    vector <string> list;    //Vector of items that have been listed

    //Loop through the blockchain
    for (size_t m = 1; m < listChain.chainSize(); ++m){  
        inList = false;   
        
        //If the vector is not empty
        if (!list.empty()) {
            //Loop through the vector of listed items
            for (size_t n = 0; n < list.size(); ++n) {

                //If the item is in the list, stop
                if (listChain.getBlock(m).getInfo().prodCode.compare(list[n]) == 0) {
                    inList = true;
                    break;
                }
            }
        }
        else {

            //If the list is empty, add the first item
            list.emplace_back(listChain.getBlock(m).getInfo().prodCode);
        }


        //If the item is not in the list, add it
        if (inList == false) {
            cout << listChain.getBlock(m).getInfo().prodCode << endl;
            list.push_back(listChain.getBlock(m).getInfo().prodCode);
        }
    }
}

//A list of product purities in the supply chain
void List :: prodPurityList () const {

    bool inList;    //Whether the item has already been listed

    vector <string> list;    //Vector of items that have been listed

    //Loop through the blockchain
    for (size_t m = 1; m < listChain.chainSize(); ++m){  
        inList = false;   
        
        //If the vector is not empty
        if (!list.empty()) {
            //Loop through the vector of listed items
            for (size_t n = 0; n < list.size(); ++n) {

                //If the item is in the list, stop
                if (listChain.getBlock(m).getInfo().prodPurity.compare(list[n]) == 0) {
                    inList = true;
                    break;
                }
            }
        }
        else {

            //If the list is empty, add the first item
            list.emplace_back(listChain.getBlock(m).getInfo().prodPurity);
        }


        //If the item is not in the list, add it
        if (inList == false) {
            cout << listChain.getBlock(m).getInfo().prodPurity << endl;
            list.push_back(listChain.getBlock(m).getInfo().prodPurity);
        }
    }
}

