#pragma once

#include <vector>
#include "Card.h"

class Deck
{
private:
    std::vector<Card> cards;
    int cardIndex;

public:
    Deck();
    void shuffle();
    Card draw();
    std::vector<Card> getCards(int);
    bool isEmpty() const;
};
