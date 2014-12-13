#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"

class Player : public Entity
{
public:
    Player();
    Player(sf::Vector2f);

    void arUpdate();

    float arGetStamina();
    sf::Vector2f arGetBodyCenter();
    sf::Vector2f arGetViewDir();

    void arSetViewDir(sf::Vector2f);

private:
    float m_stamina;
    sf::Vector2f m_viewDir;
};

#endif // PLAYER_H_INCLUDED
