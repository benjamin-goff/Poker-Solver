#include <algorithm>
#include <random>
#include "Deck.h"

Deck::Deck() {
    for(int s=0; s<4; s++) {
        for(int r=0; r<13; r++) {
            Card::Rank rank = (Card::Rank)(r);
            Card::Suit suit = (Card::Suit)(s);
            Card c(rank, suit);
            cards.push_back(c);
        }
    }
}

void Deck::shuffle() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::shuffle(cards.begin(), cards.end(), mt);
    cardIndex = 0;
}

Card Deck::draw() {
    Card card = cards[cardIndex];
    cardIndex ++;
    return card;
}

std::vector<Card> Deck::getCards(int n) {
    std::vector<Card> drawnCards;
    for(int i=0; i<n; i++) {
        drawnCards.push_back(draw());
    }
    return drawnCards;
}

bool Deck::isEmpty() const {
    return cards.empty();
}