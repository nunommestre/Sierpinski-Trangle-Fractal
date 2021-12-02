// Copyright [2021] <Nuno Mestre>
#ifndef _HOME_NUNO_PS3_TRIANGLE_H_
#define _HOME_NUNO_PS3_TRIANGLE_H_

#include <iostream>
#include <cmath>
#include <string>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Triangle: public sf::Drawable{
 public:
                Triangle(double x, double y, double l);
                void begin_draw();
 private:
                virtual void draw(sf::RenderTarget&, sf::RenderStates) const;
                sf::ConvexShape triangle;
                double xpos;
                double ypos;
                double length;
                sf::Texture input_texture;
                sf::Image input_image;
};
#endif   // _HOME_NUNO_PS3_TRIANGLE_H_
