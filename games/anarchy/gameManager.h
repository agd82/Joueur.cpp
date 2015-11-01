// Generated by Creer at 04:49PM on November 01, 2015 UTC, git hash: '1b69e788060071d644dd7b8745dca107577844e1'
// This is a class that manages the Anarchy Game and it's GameObjects. Competitors should never have to care about this class's existance.

#ifndef JOUEUR_ANARCHY_GAMEMANAGER_H
#define JOUEUR_ANARCHY_GAMEMANAGER_H

#include "anarchy.h"
#include "../../joueur/baseGameManager.h"

/// <summary>
/// This is a class that manages the Anarchy Game and it's GameObjects. Competitors should never have to care about this class's existance.
/// </summary>
class Anarchy::GameManager : public Joueur::BaseGameManager
{
    private:
        Anarchy::AI* anarchyAI;
        Anarchy::Game* anarchyGame;

        Joueur::BaseGameObject* createGameObject(const std::string& gameObjectName);

    public:
        GameManager();

        void setupAI(const std::string& playerID);
        boost::property_tree::ptree* orderAI(const std::string& order, boost::property_tree::ptree* args);
};

#endif
