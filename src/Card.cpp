#include "Card.h"

Card::Card()
{
 card_class = "basic";
 card_text = "default text";//ctor



}

Card::~Card()
{
    //dtor
}

<<<<<<< HEAD
std::string Card::GetName()
=======
std::string Card::GetCardName()
>>>>>>> f60e2023aec360768bdac9b803bcccc14ff8da63
{
  return card_name;
}

<<<<<<< HEAD
void Card::SetName(std::string name)
{
  card_name = name;
}
=======
void Card::SetCardName(std::string name1)
{
  card_name = name1;
}

std::string Card::GetCardType()
{
  return card_type;
}

void Card::SetCardType(std::string type1)
{
  card_type = type1;
}

void Card::SetCastingCost(int cost)
{
  casting_cost = cost;
}

int Card::GetCastingCost()
{
  return casting_cost;
}



















>>>>>>> f60e2023aec360768bdac9b803bcccc14ff8da63
