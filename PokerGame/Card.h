#pragma once

class Card
{
  public:
    enum Rank
    {
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING,
        ACE
    };
    
    enum Suit
    {
        SPADES,
        HEARTS,
        DIAMONDS,
        CLUBS
    };

    Card(Rank r, Suit s) : rank(r), suit(s) {}

    Rank getRank() const;
    Suit getSuit() const;

    std::string toString();

  private:
    Rank rank;
    Suit suit;
};