#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode({630, 430}), "2D Terrain", sf::Style::Close);

    while (window.isOpen()) {

        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);
        // end the current frame

        window.display();
    }
}