/*
 * This is a supply chain for a precious metal
 * In this example, we will use Gold, code 'Au'
 * We will follow the supply chain from mining to trade at the
 * LBMA
*/

#include <iostream>
#include "blockchain.h"
#include "search.h"
#include "list.h"

int main () {
    Blockchain metalSupply = Blockchain ();     //The metal supply chain

    record block_1;     //First block

    block_1.bizName = "eagle mines";
    block_1.bizType = "mine";
    block_1.prodCode = "123456";
    block_1.prodType = "au";
    block_1.prodPurity = "18k";
    block_1.certification = "fairmined";
    block_1.comments = "undamaged, 100 ounces";
    block_1.accepted = true;

    metalSupply.addBlock(block_1);

    record block_2;     //Second block

    block_2.bizName = "bohrani & co";
    block_2.bizType = "transport";
    block_2.prodCode = "893239";
    block_2.prodType = "au";
    block_2.prodPurity = "18k";
    block_2.certification = "none";
    block_2.comments = "N/A";
    block_2.accepted = true;

    metalSupply.addBlock(block_2);

    record block_3;     //Third block

    block_3.bizName = "ewinds refineries";
    block_3.bizType = "refinery";
    block_3.prodCode = "433425";
    block_3.prodType = "au";
    block_3.prodPurity = "18k";
    block_3.certification = "scs";
    block_3.comments = "N/A";
    block_3.accepted = true;

    metalSupply.addBlock(block_3);

    record block_4;     //Fourth block

    block_4.bizName = "trans-johor company";
    block_4.bizType = "transport";
    block_4.prodCode = "468957";
    block_4.prodType = "au";
    block_4.prodPurity = "22k";
    block_4.certification = "none";
    block_4.comments = "85 ounces";
    block_4.accepted = true;

    metalSupply.addBlock(block_4);

    record block_5;     //Fifth block

    block_5.bizName = "b-mark precious metals, inc";
    block_5.bizType = "investment";
    block_5.prodCode = "227450";
    block_5.prodType = "au";
    block_5.prodPurity = "22k";
    block_5.certification = "lbma";
    block_5.comments = "pending sale to consumer";
    block_5.accepted = true;

    metalSupply.addBlock(block_5);

    //Beginning display for user
    cout << "Below is the Supply Chain for a precious metal, from mining to trade at the LBMA.\n" << endl;

    //Display all blocks
    metalSupply.printBlocks();

    //Whether to continue or exit the loop
    bool flag;
    flag = true;

    int indexType;      //The type of data desired
    int indexOption;     //The filter
    string searchTerm;    //What to search on   
    Search newSearch = Search(metalSupply);     //New search object
    List newList = List(metalSupply);       //New list object

    //Loop while the user wants to continue
    while (flag == true) {
        cout << "\nWould you like to:\n1. filter the blocks?\n2. see a list of items (e.g. all companies)?\n3. exit?\n\n Please enter the number." << endl;
        cin >> indexType;

        cin.ignore(256, '\n');

        cout << "\nYou've selected " << indexType << "." << endl;

        //If the user wants to filter blocks
        if (indexType == 1) {

            cout << "\nWhat would you like to search on? Please enter the number." << endl;

            cout << "\n1. Company Name\n2. Industry\n3. Certification\n4. Product Code\n5. Product Type\n6. Product Purity\n7. Acceptance\n" << endl;
            cin >> indexOption;
            cin.ignore(256, '\n');

            cout << "\nPlease enter your search term (lowercase only)." << endl;
            getline(cin, searchTerm);

            cout << "\nLoading...\n" << endl;

            newSearch.searchType(indexOption, searchTerm);
        }

        //If the user wants to display a list
        else if (indexType == 2) {
            
            cout << "WHat list would you like? Please enter the number." << endl;

            cout << "\n1.Company Names\n2. Industries\n3. Certifications\n4. Product Codes\n5. Product Purities\n" << endl;

            cin >> indexOption;
            cin.ignore(256, '\n');

            cout << "\nLoading...\n" << endl;
            newList.listType(indexOption);

        }

        //If the user wants to exit the program
        else if (indexType == 3) {
            flag = false;

            cout << "\nOkay, thank you!" << endl;
        }
        //The user has entered something other that the relevant values
        else {
            cout << "Please enter '1', '2' or '3'.\n" << endl;
        }
    } 
}