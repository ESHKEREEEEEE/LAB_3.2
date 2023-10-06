#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "BONUS.h"
#define SHOP_COUNT 30
#define SALE_COUNT 30
#define PROMOCODE_COUNT 30

int main()
{
    setlocale(LC_ALL, "Rus");
    shop shops[SHOP_COUNT];
    sale sales[SALE_COUNT];
    promocode promocodes[PROMOCODE_COUNT];
    create_shop(&(shops[0]));
    add_item(&(shops[0]));
    item_info(&(shops[0].items[0]));
    change_item_name(&(shops[0].items[0]));
    change_item_price(&(shops[0].items[0]));
    change_item_discount(&(shops[0].items[0]));
    item_info(&(shops[0].items[0]));
    delete_item(&(shops[0]), 0);
    delete_shop(&(shops[0]));
    create_promocode(&promocodes[0]);
    add_item(&promocodes[0]);
    promocode_info(&promocodes[0]);
    change_promocode_code(&promocodes[0]);
    change_promocode_discount(&promocodes[0]);
    change_date_day(&promocodes[0].expire.date);
    change_date_month(&promocodes[0].expire.date);
    change_date_year(&promocodes[0].expire.date);
    change_time_hour(&promocodes[0].expire.time);
    change_time_minute(&promocodes[0].expire.time);
    change_time_second(&promocodes[0].expire.time);
    promocode_info(&promocodes[0]);
    delete_item(&promocodes[0], 0);
    delete_promocode(&promocodes[0]);
    create_sale(&sales[0]);
    add_item(&sales[0]);
    change_sale_text(&sales[0]);
    sale_info(&sales[0]);
    delete_item(&sales[0], 0);
    delete_sale(&sales[0]);
}

