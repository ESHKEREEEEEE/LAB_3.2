#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "BONUS.h"
#define SHOP_COUNT 30

int main()
{
    setlocale(LC_ALL, "Rus");
    shop shops[SHOP_COUNT];
    create_shop(&(shops[0]));
    shop_add_item(&(shops[0]));
}

