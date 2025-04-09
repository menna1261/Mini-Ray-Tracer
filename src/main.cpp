#include<iostream>
#include<fstream>
#include<Vec3.h>
#include<Color.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace std ;


int main(){

    const int width = 1280, height = 760;
    sf::RenderWindow window (sf::VideoMode(width, height) , "Ray tracer");

    while(window.isOpen()){
        
        sf::Event event;
        if(window.pollEvent(event)){

            if(event.type == sf::Event::Closed) window.close();
            if(event.type == sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();
            
        }

        // image -> texture -> sprite -> draw -> display
        sf::Image image;
        image.create(width, height , sf::Color::Black);
        
        sf::Texture texture;
        texture.loadFromImage(image);

        sf::Sprite sprite(texture);

        //Create a circle
        sf::CircleShape circle (40);
        circle.setFillColor(sf::Color::White);
        circle.setOrigin({-30,-60});

        //Display everything on window 
        window.clear();
        window.draw(sprite);
        window.draw(circle);
        window.display();

    }
}
