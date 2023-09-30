#pragma once
#define SHOP_NAME_SIZE 20
#define ITEM_NAME_SIZE 30
#define CODE_SIZE 30
#define SHOP_ITEMS_COUNT 30
#define SALE_ITEMS_COUNT 30
#define SALE_TEXT_LENGTH 100

struct item {
	char name[ITEM_NAME_SIZE];
	int price;
	int discount;
};

struct shop {
	char name[SHOP_NAME_SIZE];
	item items[SHOP_ITEMS_COUNT];
};

struct expire {
	struct date {
		int day;
		int month;
		int year;
	};
	struct time {
		int second;
		int minute;
		int hour;
	};
};

struct promocode {
	item item;
	char code[CODE_SIZE];
	expire expire;
};

struct sale {
	item items[SALE_ITEMS_COUNT];
	char text[SALE_TEXT_LENGTH];
};

void create_shop(int* shop_num, shop shops[]) {
	char shop_name[SHOP_NAME_SIZE];
	printf("Введите название магазина");
	scanf("%c", shop_name);
	*(shops[*(shop_num)]).name = *(shop_name);
	printf("Теперь %d магазин называется %c", *shop_num, *shop_name);
}