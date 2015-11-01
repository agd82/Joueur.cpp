// Generated by Creer at 04:49PM on November 01, 2015 UTC, git hash: '1b69e788060071d644dd7b8745dca107577844e1'
// Two player grid based game where each player tries to burn down the other player's buildings. Let it burn!

#include "game.h"
#include "gameManager.h"

// <<-- Creer-Merge: includes -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
// you can add additional #includes(s) here.
// <<-- /Creer-Merge: includes -->>




void Anarchy::Game::deltaUpdateField(const std::string& fieldName, boost::property_tree::ptree& delta)
{
    Joueur::BaseGame::deltaUpdateField(fieldName, delta);

    if (fieldName == "baseBribesPerTurn")
    {
        this->baseBribesPerTurn = this->gameManager->unserializeInt(delta);
    }
    else if (fieldName == "buildings")
    {
        this->buildings = this->gameManager->unserializeVectorOfGameObjects<Anarchy::Building*>(delta, &this->buildings);
    }
    else if (fieldName == "currentForecast")
    {
        this->currentForecast = (Anarchy::Forecast*)this->gameManager->unserializeGameObject(delta);
    }
    else if (fieldName == "currentPlayer")
    {
        this->currentPlayer = (Anarchy::Player*)this->gameManager->unserializeGameObject(delta);
    }
    else if (fieldName == "currentTurn")
    {
        this->currentTurn = this->gameManager->unserializeInt(delta);
    }
    else if (fieldName == "forecasts")
    {
        this->forecasts = this->gameManager->unserializeVectorOfGameObjects<Anarchy::Forecast*>(delta, &this->forecasts);
    }
    else if (fieldName == "mapHeight")
    {
        this->mapHeight = this->gameManager->unserializeInt(delta);
    }
    else if (fieldName == "mapWidth")
    {
        this->mapWidth = this->gameManager->unserializeInt(delta);
    }
    else if (fieldName == "maxFire")
    {
        this->maxFire = this->gameManager->unserializeInt(delta);
    }
    else if (fieldName == "maxForecastIntensity")
    {
        this->maxForecastIntensity = this->gameManager->unserializeInt(delta);
    }
    else if (fieldName == "maxTurns")
    {
        this->maxTurns = this->gameManager->unserializeInt(delta);
    }
    else if (fieldName == "nextForecast")
    {
        this->nextForecast = (Anarchy::Forecast*)this->gameManager->unserializeGameObject(delta);
    }
    else if (fieldName == "players")
    {
        this->players = this->gameManager->unserializeVectorOfGameObjects<Anarchy::Player*>(delta, &this->players);
    }
    else if (fieldName == "session")
    {
        this->session = this->gameManager->unserializeString(delta);
    }
}




// <<-- Creer-Merge: methods -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
// if you forward declaired additional methods to the Game then you can code them here.
// <<-- /Creer-Merge: methods -->>
