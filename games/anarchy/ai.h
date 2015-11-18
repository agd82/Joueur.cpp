// This is where you build your AI for the Checkers game.

#ifndef JOUEUR_ANARCHY_AI_H
#define JOUEUR_ANARCHY_AI_H

#include "anarchy.h"
#include "game.h"
#include "building.h"
#include "fireDepartment.h"
#include "forecast.h"
#include "gameObject.h"
#include "player.h"
#include "policeDepartment.h"
#include "warehouse.h"
#include "weatherStation.h"

#include "../../joueur/baseAI.h"

/// <summary>
/// This the header file for where you build your AI for the Anarchy game.
/// </summary>
class Anarchy::AI : public Joueur::BaseAI
{
    public:
        /// <summary>
        /// This is a pointer to the Game object itself, it contains all the information about the current game
        /// </summary>
        Anarchy::Game* game;

        /// <summary>
        /// This is a pointer to your AI's player. This AI class is not a player, but it should command this Player.
        /// </summary>
        Anarchy::Player* player;

        /// <summary>
        /// This returns your AI's name to the game server. Just replace the string.
        /// </summary>
        /// <returns>string of you AI's name.</returns>
        std::string getName();

        /// <summary>
        /// This is automatically called when the game first starts, once the Game object and all GameObjects have been initialized, but before any players do anything.
        /// </summary>
        void start();

        /// <summary>
        /// This is automatically called every time the game (or anything in it) updates.
        /// </summary>
        void gameUpdated();

        /// <summary>
        /// This is automatically called when the game ends.
        /// </summary>
        /// <param name="won">true if your player won, false otherwise</param>
        /// <param name="reason">a string explaining why you won or lost</param>
        void ended(bool won, std::string reason);


        /// <summary>
        /// This is called every time the AI is asked to respond with a command during their turn
        /// </summary>
        /// <returns>represents if you want to end your turn. true means end the turn, false means to keep your turn going and re-call runTurn()</returns>
        bool runTurn();

        // This is an example of a method added to the AI, you can
        // add other functions too
        // This returns true if a building can be bribed, false otherwise
        bool canBribe(const Building* toTest) const;
};

#endif
