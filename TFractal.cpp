// Copyright [2021] <Nuno Mestre>
#include "Triangle.h"
void fTree(sf::RenderWindow* window, double x, double y, double length, int n) {
        Triangle first(x, y, length);
        window->draw(first);
        double scale = (static_cast<int> (length) >> 1);
        double divide_4 = (static_cast<int> (length) >> 2);
        double delta_y = ((sqrt(3) / 2) * length) / 2;
        if (n > 0) {
                fTree(window, x - divide_4, y - delta_y, scale, n-1);
                fTree(window, x + length, y, scale, n-1);
                fTree(window, x, y + (sqrt(3) / 2) * length, scale, n-1);
        }
}
int main(int argc, char* argv[]) {
    double Length = std::__cxx11::stod(argv[1]);
    double iterations = std::__cxx11::stoi(argv[2]);
    std::string window_name = "Sierpinski Triangle";
    sf::RenderWindow window(sf::VideoMode(Length * 3, Length * 4), window_name);
    sf::Music music;
        if (!music.openFromFile("music.wav")) {
                return -1;     // error
        }
        music.play();
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::Blue);
        fTree(&window, (Length), (Length * 2), Length, iterations);
        window.display();
    }
    return 0;
}
