#ifndef PROJECT_ZOO_H
#define PROJECT_ZOO_H

#include <iostream>
#include <cstdlib>

#include <SFML/Graphics.hpp>

using namespace sf;

const int ZOO_RUN = 1;
const int INFO = 2;
const int EXIT = 3;

const int RIGHT = 4;
const int LEFT = 5;
const int UP = 6;
const int DOWN = 7;

void zoo_run(RenderWindow& window);
void run_about(RenderWindow& window);

class ANIMAL
{
private:
    float a, b, x, y, w, h;
    float   dx = 0,
            dy = 0;
public:
    float speed = 0;
    int direction = 0;
    String File;
    Image image;
    Texture texture;
    Sprite sprite;

    ANIMAL(String F, float X, float Y, float A, float B, float W, float H);
    ~ANIMAL();
    bool interactionWithMap(String zoo_map[], float time);
    bool update(float time, String zoo_map[]);
    bool control(ANIMAL& ANIMAL, float time, float& CurrentFrame, int dir, String zoo_map[], int sprite_num_frames);
    void talk();
};

#endif //PROJECT_ZOO_H
