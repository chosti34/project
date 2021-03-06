#pragma once

class CAsteroid
{
public:
    CAsteroid();

    CAnimation animation;

    float speed;
    bool isAlive;
    float radius;

    sf::Vector2f position;
    sf::Vector2f movement;

    void Initialize(const sf::Texture &texture, const float screenWidth, const float screenHeight);
    void Update(const float elapsedTime);
private:
    float screenWidth;
    float screenHeight;

    void HandleOutOfScopes();
};
