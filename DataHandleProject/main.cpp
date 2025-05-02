/*
*  목표 : 메모장에 있는 게임 데이터를 코드로 읽는 방법을 구현한다.
*/

#include "ShopManager.h"

int main()
{
	Shop shop;

	shop.ShowItems();

	Player player;

	player.Upgrade(shop.GetItems(3));
	player.ShowPlayerInfo();

	//DataHandler loader;
	//
	//Item items[MAX_ITEMS];
	//int count = loader.LoadItems("data.txt", items);
	//
	//// items 정보를 보여줘
	//std::cout << "판매하는 아이템" << std::endl;
	//
	//for (int i = 0; i < count; i++)
	//{
	//	std::cout << items[i].index << "\t" << items[i].name << "\t" << items[i].price << "coin" << std::endl;
	//}

	// items 데이터를 읽어와줘
}