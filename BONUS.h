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
	int items_counter;
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

void create_shop(shop* shop_cr) {
	char shop_name[SHOP_NAME_SIZE];
	printf("������� �������� �������� ");
	gets_s(shop_name, SHOP_NAME_SIZE);
	*shop_cr->name = *shop_name;
	shop_cr->items_counter = 0;
	printf("������ ������� %s\n", shop_name);
}

void shop_add_item(shop* shop_add_item) {
	char item_name[ITEM_NAME_SIZE];
	int item_price, item_discount;
	printf("������� �������� ������ ");
	gets_s(item_name, ITEM_NAME_SIZE);
	*shop_add_item->items[shop_add_item->items_counter].name = *item_name;
	printf("������� ���� ������ ");
	scanf("%d", &item_price);
	shop_add_item->items[shop_add_item->items_counter].price = item_price;
	printf("������� ������ ");
	scanf("%d", &item_discount);
	shop_add_item->items[shop_add_item->items_counter].discount = item_discount;
	printf("\n�������� ����� %s �� ���� %d �� ������� %d", item_name, item_price, item_discount);
	shop_add_item->items_counter++;
}

void item_info(item* current_item) {
	printf("%s �� ���� %d �� ������� %d", current_item->name, current_item->price, current_item->discount);
}

