#include <iostream>
#include "Card.h"


Card::Rank Card::getRank() const {
    return rank;
}

Card::Suit Card::getSuit() const {
    return suit;
}

std::string Card::toString() {
  static const std::string rankNames[] = {
    "2", "3", "4", "5",
    "6", "7", "8", "9", "T",
    "J", "Q", "K", "A"
  };
  static const std::string suitNames[] = {
    "♠︎", "❤", "♦", "♣"
  };

  std::string result = rankNames[(int)rank] + suitNames[(int)suit];
  return result;
}