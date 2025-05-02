#pragma once

#include "Player.h"
#include "Shop.h"

class ShopManager //   player - Shop
{
    Player* player;
    Shop* shop;

public:
    ShopManager()
    {
        player = new Player();
        shop = new Shop();
    }
};

