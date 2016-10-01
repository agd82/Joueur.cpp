// A player in this game. Every AI controls one player.

#include "player.h"
#include "gameManager.h"

// <<-- Creer-Merge: includes -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
// you can add additional #includes(s) here.
// <<-- /Creer-Merge: includes -->>




void Saloon::Player::deltaUpdateField(const std::string& fieldName, boost::property_tree::ptree& delta)
{
    Saloon::GameObject::deltaUpdateField(fieldName, delta);

    if (fieldName == "clientType")
    {
        this->clientType = this->gameManager->unserializeString(delta);
    }
    else if (fieldName == "cowboys")
    {
        this->cowboys = this->gameManager->unserializeVectorOfGameObjects<Saloon::Cowboy*>(delta, &this->cowboys);
    }
    else if (fieldName == "kills")
    {
        this->kills = this->gameManager->unserializeInt(delta);
    }
    else if (fieldName == "lost")
    {
        this->lost = this->gameManager->unserializeBool(delta);
    }
    else if (fieldName == "name")
    {
        this->name = this->gameManager->unserializeString(delta);
    }
    else if (fieldName == "opponent")
    {
        this->opponent = (Saloon::Player*)this->gameManager->unserializeGameObject(delta);
    }
    else if (fieldName == "reasonLost")
    {
        this->reasonLost = this->gameManager->unserializeString(delta);
    }
    else if (fieldName == "reasonWon")
    {
        this->reasonWon = this->gameManager->unserializeString(delta);
    }
    else if (fieldName == "rowdyness")
    {
        this->rowdyness = this->gameManager->unserializeInt(delta);
    }
    else if (fieldName == "score")
    {
        this->score = this->gameManager->unserializeInt(delta);
    }
    else if (fieldName == "timeRemaining")
    {
        this->timeRemaining = this->gameManager->unserializeDouble(delta);
    }
    else if (fieldName == "won")
    {
        this->won = this->gameManager->unserializeBool(delta);
    }
}



Saloon::Cowboy* Saloon::Player::sendIn(std::string job)
{
    boost::property_tree::ptree args;
    args.put_child("job", *this->gameManager->serialize((job)));

    auto returned = this->gameManager->runOnServer(*this, "sendIn", args);
    return (Saloon::Cowboy*)this->gameManager->unserializeGameObject(*returned);
}


// <<-- Creer-Merge: methods -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
// if you forward declaired additional methods to the Player then you can code them here.
// <<-- /Creer-Merge: methods -->>