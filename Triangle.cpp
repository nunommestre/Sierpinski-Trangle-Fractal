// Copyright [2021] <Nuno Mestre>
#include "Triangle.h"

Triangle::Triangle(double x, double y, double l) : xpos(x), ypos(y), length(l) {
        double height = (sqrt(3) / 2) * length;
        triangle.setPointCount(3);
        triangle.setPoint(0, sf::Vector2f(0.0, 0.0));
        triangle.setPoint(1, sf::Vector2f(length, 0.0));
        triangle.setPoint(2, sf::Vector2f(length / 2, height));
        triangle.setPosition(xpos, ypos);
        this->begin_draw();
}
// Makes the triangles sf::Drawable
void Triangle::draw(sf::RenderTarget& target, sf::RenderStates states) const {
        target.draw(triangle, states);
}
void Triangle::begin_draw() {
        input_image.loadFromFile("Dog.png");
        input_texture.loadFromImage(input_image);
        triangle.setTexture(&input_texture);
}

