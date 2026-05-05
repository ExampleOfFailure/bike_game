#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "GameObject.h" 
using namespace std;
class bike : public GameObject {
private:
    float speed;
    sf::Vector2f position;
    sf::RectangleShape shape;

    sf::Clock speedClock; // timer for speed increase

public:
    bike() {
        /*position = {100.f, 100.f};
        speed = 60.f;

        shape.setSize(sf::Vector2f(20.f, 10.f));
        shape.setFillColor(sf::Color::Green);
        shape.setPosition(position);*/
    }

    void update(float dt) override {

        /*
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            position.y -= speed * dt;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            position.y += speed * dt;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            position.x -= speed * dt;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            position.x += speed * dt;

        // apply position to shape
        shape.setPosition(position);

        // ⏱️ SPEED INCREASE OVER TIME
        if (speedClock.getElapsedTime().asSeconds() > 5.f)
        {
            speed += 20.f;        // increase speed
            speedClock.restart(); // reset timer
        }*/
    }
 

float getTime(sf::Clock &clock) {
   // return clock.getElapsedTime().asSeconds();hqd to add sf::Clock &clock in ga,e to calculae time
} 


    void speedUp() {
        
    }//ON bqsis of tiME

    void speedDown() {
        
    }

    void draw(sf::RenderWindow& window) override {
       
    }
    int score(int time) {}


};
#endif