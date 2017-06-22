//
// Created by sl on 18.04.17.
//

#ifndef ATOMGAME_ATOMGAME_H
#define ATOMGAME_ATOMGAME_H

#include <SFML/Window.hpp>
#include "../model/Model.h"
#include "../view/View.h"

class View;

class Model;

class Controller
{
public:

    Controller (Model *, View *);

    void onRightKeyPress (float stregth);

    void onLeftKeyPress (float stregth);

    void onUpKeyPress ();

    void onDownKeyPress (float stregth);

    void onSpacePress();

    void onRPress();

    void onNoMovementKeyPress ();

    void tick ();

    bool isPressed (sf::Keyboard::Key key);

    bool isEnd ();

    void onMapChange(const char* mapName);

    void onCoinPicked();

    void onDieBot(Actor*);

    void onShot();

private:
    static log4cpp::Category &logger;
    Model *model;
    View *view;
    const int restartTicksReq = 100;
    int restartTicks;
};

#endif //ATOMGAME_ATOMGAME_H
