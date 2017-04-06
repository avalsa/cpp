//
// Created by sl on 06.04.17.
//

#ifndef ATOMGAME_GAMEOBJECT_H
#define ATOMGAME_GAMEOBJECT_H
class GameObject
{
public:

    GameObject()
    {}

    GameObject(int id): id_(id)
    {}

    int GetId() { return id_; }

    void SetId(int id) { id_ = id; }

private:
    int id_; //id image to draw it
};
#endif //ATOMGAME_GAMEOBJECT_H
