#ifndef BOARD_H
#define BOARD_H
#include "JJCardGame.h"
#include <vector>
#include "Card.h"

class Board
{
  public:
    Board();
    virtual ~Board();
    void AddCardToPlayerOne(Card* card, int slot);
    void AddCardToPlayer(int player, Card* p_card, int slot);
    void AddCardToPlayer(int player, Card* p_card);
    std::vector<Card*> GetCardsForPlayer(int player);
    int NumberOfCardsOnBoard(int player_nbr);
    void RemoveCardFromBoard(int player, int index);
    std::vector<Card*> ShowGraveyard(int player);
    void SetupTurn(int player_nbr);
  protected:
  private:
      Card* cards_on_board_player[2][5];
      std::vector<Card> player_one_cards;
      std::vector<Card*> cards_in_board_own;
      std::vector<Card*> cards_in_board_opp;
      std::vector<Card*> cards_in_graveyard_own;
      std::vector<Card*> cards_in_graveyard_opp;
      std::vector<std::vector<Card*>> cards_on_board;
      std::vector<std::vector<Card*>> graveyards;
      void AddCardtoGraveYard(int player, Card* p_card);
      void ActivateCardsOnBoard(int player_nbr);

};

#endif // BOARD_H
