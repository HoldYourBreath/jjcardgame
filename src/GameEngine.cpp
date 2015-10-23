#include "GameEngine.h"

GameEngine::GameEngine()
{
    //ctor
    //add players to the players vector
    players.push_back(&player1);
    players.push_back(&player2);
}

GameEngine::~GameEngine()
{
    //dtor
}

void GameEngine::Run()
{
    GameLoop();
}

void GameEngine::GameLoop()
{
  bool die = false;

  //initialize game components (board, player, etc.)
  InitGame();

  std::cout << "Player 1 info: HitPoints: ";
  std::cout << player1.GetHitPoints() << ", Mana: " << player1.GetMana();
  std::cout << ", First Card in Hand: " << player1.ShowHand().at(0)->GetCardName() << "\n";

  std::cout << "Player 2 info: HitPoints: ";
  std::cout << player2.GetHitPoints() << ", Mana: " << player2.GetMana();
  std::cout << ", First Card in Hand: " << player2.ShowHand().at(0)->GetCardName() << "\n";

//game loop
int turn = 1;
  while(!die) {
    StartTurn();
    std::cout << "Player 1 info: Mana: " << player1.GetMana() << "\n";
    std::cout << "Player 2 info: Mana: " << player2.GetMana() << "\n";
    EndTurn();
    ++turn;

    //run ten turns at this point.
    if (turn > 10)
    {
      die = true;
    }

  }
}

void GameEngine::InitGame()
{
  //Set-up player 1 for game
  InitPlayer(&player1);
  //Set-up player 2 for game
  InitPlayer(&player2);
}

void GameEngine::StartTurn()
{
  for(uint i = 0; i < players.size(); ++i)
  {
    players.at(i)->SetUpTurn();
  }
}

void GameEngine::EndTurn()
{

}

void GameEngine::InitPlayer(Player* player)
{
//  player->SetDeck(card_deck);
  player->SetUpGame();
}

void GameEngine::PlayCard( Board* p_board, Player* p_player, Card* p_card, int slot)
{
  p_board->AddCardToPlayerOne(p_player->player_hand.PlayCard(p_card), slot);
}
