/*
 * This is a supply chain for a metal
*/

#include "blockchain.h"

int main () {
    Blockchain metalSupply = Blockchain ();

    data block_1;

    block_1.bizName = "Eagle Mines";
    block_1.bizType = "Mine";
    block_1.prodCode = "123456";
    block_1.prodType = "Au";
    block_1.prodPurity = "18K";
    block_1.certification = "Fairmined";
    block_1.comments = "Undamaged, 100 ounces";
    block_1.accepted = true;

    metalSupply.addBlock(block_1);

    data block_2;

    block_2.bizName = "Bohrani & Co";
    block_2.bizType = "Transport";
    block_2.prodCode = "123456";
    block_2.prodType = "Au";
    block_2.prodPurity = "18K";
    block_2.certification = "none";
    block_2.comments = "N/A";
    block_2.accepted = true;

    metalSupply.addBlock(block_2);

    data block_3;

    block_3.bizName = "eWinds Refineries";
    block_3.bizType = "Refinery";
    block_3.prodCode = "123456";
    block_3.prodType = "Au";
    block_3.prodPurity = "18K";
    block_3.certification = "none";
    block_3.comments = "N/A";
    block_3.accepted = true;

    metalSupply.addBlock(block_3);

    data block_4;

    block_4.bizName = "Trans-Johor Company";
    block_4.bizType = "Transport";
    block_4.prodCode = "123456";
    block_4.prodType = "Au";
    block_4.prodPurity = "22K";
    block_4.certification = "SCS";
    block_4.comments = "85 ounces";
    block_4.accepted = true;
}