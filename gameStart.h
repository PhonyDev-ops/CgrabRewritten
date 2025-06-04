#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFMl/System.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <random>

using namespace sf;
using namespace std;

class gameStart
{
public:
	menuAssets assets;
	gameSettings settings;

	void run();
	void checkEvent();

};

class menuAssets
{
	menuAssets();
	Sprite* spritebuttonPlay, spritebuttonQuit, spritebuttonSettings, spriteLogo;
	Sound onClick, onHover;
	Music* bgmMusic;
};

class gameSettings
{
	Sprite* spritemutebutton;
};

