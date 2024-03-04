#ifndef EXERCICESTRUCT_PRODUCT_H
#define EXERCICESTRUCT_PRODUCT_H

const int maxCodeLength = 9;
const int maxQuantity = 99;

struct product{
    char code[maxCodeLength];
    char name[maxQuantity];
    int quantity;
};


#endif
