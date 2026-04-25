#include <SFML/Graphics.hpp>

int main() {
    // Change the window title to something cute!
auto window = sf::RenderWindow(sf::VideoMode({800, 600}), "Bike Adventure");

// ... inside the while loop ...

// Use a custom RGB color for a soft Pink/Lavender touch
// (Red, Green, Blue)
window.clear(sf::Color(255, 182, 193)); // Light Pink.
    return 0;
}