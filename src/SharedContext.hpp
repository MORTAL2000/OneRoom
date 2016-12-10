#pragma once

#include <Thor/Input/ActionMap.hpp>
#include <Thor/Resources/ResourceHolder.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>

struct SharedContext
{
    sf::RenderWindow window = {{1280, 720}, "One Room", sf::Style::Titlebar | sf::Style::Close, sf::ContextSettings{0, 0, 8}};
    thor::ResourceHolder<sf::Texture, std::string> textures;
    thor::ResourceHolder<sf::Font, std::string> fonts;
    thor::ActionMap<std::string> actionmap;
};
