#ifndef BAR_H
#define BAR_H

#include <SFML/Graphics.hpp>
#include "Player.h"
#include <string>

class Bar : public Entity
{
public:
    Bar(sf::Vector2f size, sf::Color color);
    void draw(sf::RenderTarget& target) override;

    void arUpdate(Player* player, std::string type);
    void arSetPosition(sf::Vector2f pos);
    void arFill(float percentage);

private:
    sf::RectangleShape m_shape;
    float m_percentage;
};

#endif //BAR_H
