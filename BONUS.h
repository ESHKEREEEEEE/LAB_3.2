#pragma once
#define SHOP_NAME_SIZE 20
#define ITEM_NAME_SIZE 30
#define CODE_SIZE 30
#define SHOP_ITEMS_COUNT 30
#define SALE_ITEMS_COUNT 30
#define SALE_TEXT_LENGTH 100

struct item {
	char name[ITEM_NAME_SIZE] = "0";
	int price = 0;
	int discount = 0;
};

struct shop {
	char name[SHOP_NAME_SIZE] = "0";
	item items[SHOP_ITEMS_COUNT];
	int items_counter = 0;
};

struct expire {
	struct date {
		int day = 0;
		int month = 0;
		int year = 0;
	};
	struct time {
		int second = 0;
		int minute = 0;
		int hour = 0;
	};
};

struct promocode {
	item item;
	char code[CODE_SIZE] = "0";
	expire expire;
};

struct sale {
	item items[SALE_ITEMS_COUNT];
	char text[SALE_TEXT_LENGTH] = "0";
};

void create_shop(shop* shop_cr) {
	char shop_name[SHOP_NAME_SIZE];
	printf("Введите название магазина ");
	gets_s(shop_name, SHOP_NAME_SIZE);
	*shop_cr->name = *shop_name;
	printf("Создан магазин %s\n", shop_name);
}

void shop_add_item(shop* shop_add_item) {
	char item_name[ITEM_NAME_SIZE];
	int item_price, item_discount;
	printf("Введите название товара ");
	gets_s(item_name, ITEM_NAME_SIZE);
	*shop_add_item->items[shop_add_item->items_counter].name = *item_name;
	printf("Введите цену товара ");
	scanf("%d", &item_price);
	shop_add_item->items[shop_add_item->items_counter].price = item_price;
	printf("Введите скидку ");
	scanf("%d", &item_discount);
	shop_add_item->items[shop_add_item->items_counter].discount = item_discount;
	printf("\nДобавлен товар %s по цене %d со скидкой %d", item_name, item_price, item_discount);
	shop_add_item->items_counter++;
}

void item_info(item* current_item) {
	printf("%s по цене %d со скидкой %d", current_item->name, current_item->price, current_item->discount);
}

void change_item_name(item* current_item){
	char item_name[ITEM_NAME_SIZE];
	printf("Введите название товара ");
	gets_s(item_name, ITEM_NAME_SIZE);
	*current_item->name = *item_name;
}

void change_item_price(item* current_item) {
	int item_price;
	printf("Введите цену товара ");
	scanf("%d", &item_price);
	current_item->price = item_price;
}

void change_item_discount(item* current_item) {
	int item_discount;
	printf("Введите скидку на товар ");
	scanf("%d", &item_discount);
	current_item->price = item_discount;
}

void delete_item(shop* shop_delete_item, int item_to_delete) {
	item buffer;
	*shop_delete_item->items[item_to_delete].name = *("0");
	shop_delete_item->items[item_to_delete].price = 0;
	shop_delete_item->items[item_to_delete].discount = 0;
	shop_delete_item->items_counter--;
}