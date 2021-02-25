#ifndef PROJECT_ZOO_H
#define PROJECT_ZOO_H

#include <iostream>
#include <cstdlib>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;

const int ZOO_RUN = 1;
const int INFO = 2;
const int EXIT = 3;

const int RIGHT = 4;
const int LEFT = 5;
const int UP = 6;
const int DOWN = 7;

const int simba_frames = 0;
const int timon_frames =0;
const int pumba_frames = 0;
const int zazu_frames = 0;
const int bear_frames = 0;
const int hare_frames = 0;
const int fox_frames = 0;
const int wolf_frames = 0;
const int hadgehog_frames = 0;
const int owl_frames = 0;

const int DAY = 10;
const int NIGHT = 100;
const long long int mode_master = 5000000;



void zoo_run(RenderWindow& window);
void run_about(RenderWindow& window);


//Day_Animals: Timon, Simba, Pumba, Zazu, Bear, Hare, Fox - 7 at all
//Night Animals: Wolf, Hedgehog, Owl - 3 at all

class ANIMAL
{
protected:
    float a, b, x, y, w, h;
    float   dx = 0,
            dy = 0;
public:
    float speed = 0;
    int direction = 0;
    String File_I;
    String File_S;
    Image image;
    Texture texture;
    Sprite sprite;
    SoundBuffer buffer;
    Sound sound;

    ANIMAL(String F_I, String F_S, float X, float Y, float A, float B, float W, float H);
    ~ANIMAL();
    bool interactionWithMap(String zoo_map[], float time);
    bool update(float time, String zoo_map[]);
    bool control(ANIMAL& ANIMAL, float time, float& CurrentFrame, int dir, String zoo_map[], int sprite_num_frames, int mode);
    virtual void feed(int cage);
};

class Day_Animal: public ANIMAL
{
    public:
        const int sprite_num_frames = 0;
        Day_Animal(String F_I, String F_S, float X, float Y, float A, float B, float W, float H) : ANIMAL(F_I, F_S, X, Y, A, B, W, H)
        {
            std::cout << "Day animals here!" << std::endl;
        };
        ~Day_Animal() {};
};


class Night_Animal: public ANIMAL
{
    public:
        Night_Animal(String F_I, String F_S, float X, float Y, float A, float B, float W, float H) : ANIMAL(F_I, F_S, X, Y, A, B, W, H)
        { std::cout << "Night animals here too!" << std::endl; };
        ~Night_Animal() {};
};

//----------------------------Day_Animals:

class simba: public Day_Animal
{
    public:
        simba(String F_I, String F_S, float X, float Y, float A, float B, float W, float H, int cage = 0) : Day_Animal(F_I, F_S, X, Y, A, B, W, H)
        { std::cout << "Press " << cage << " to feed Simba " <<  std::endl; }
};

class pumba: public Day_Animal
{
    public:
        pumba(String F_I, String F_S, float X, float Y, float A, float B, float W, float H, int cage = 1) : Day_Animal(F_I, F_S, X, Y, A, B, W, H)
        { std::cout << "Press " << cage << " to feed Pumba " <<  std::endl; }
};

class timon: public Day_Animal
{
    public:
        timon(String F_I, String F_S, float X, float Y, float A, float B, float W, float H, int cage = 2) : Day_Animal(F_I, F_S, X, Y, A, B, W, H)
        { std::cout << "Press " << cage << " to feed Timon " <<  std::endl; }
};

class zazu: public Day_Animal
{
    public:
        zazu(String F_I, String F_S, float X, float Y, float A, float B, float W, float H, int cage = 3) : Day_Animal(F_I, F_S, X, Y, A, B, W, H)
        { std::cout << "Press " << cage << " to feed Zazu " << std::endl; }
};

class hare: public Day_Animal
{
    public:
        hare(String F_I, String F_S, float X, float Y, float A, float B, float W, float H, int cage = 4) : Day_Animal(F_I, F_S, X, Y, A, B, W, H)
        { std::cout << "Press " << cage << " to feed Hare " <<  std::endl; }
};

class bear: public Day_Animal
{
    public:
        bear(String F_I, String F_S, float X, float Y, float A, float B, float W, float H, int cage = 5) : Day_Animal(F_I, F_S, X, Y, A, B, W, H)
        { std::cout << "Press " << cage << " to feed Bear " << std::endl; }
};

class fox: public Day_Animal
{
    public:
        fox(String F_I, String F_S, float X, float Y, float A, float B, float W, float H, int cage = 6) : Day_Animal(F_I, F_S, X, Y, A, B, W, H)
        { std::cout << "Press " << cage << " to feed Fox " <<  std::endl; }
};

//-------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------Night_Animals

class hedgehog: public Night_Animal
{
    public:
        hedgehog(String F_I, String F_S, float X, float Y, float A, float B, float W, float H, int cage = 7) : Night_Animal(F_I, F_S, X, Y, A, B, W, H)
        { std::cout << "Press " << cage << " to feed Hedgehog " <<  std::endl; }
};

class wolf: public Night_Animal
{
    public:
        wolf(String F_I, String F_S, float X, float Y, float A, float B, float W, float H, int cage = 8) : Night_Animal(F_I, F_S, X, Y, A, B, W, H)
            { std::cout << "Press " << cage << " to feed Wolf " <<  std::endl; }
};

class owl: public Night_Animal
{
    public:
        owl(String F_I, String F_S, float X, float Y, float A, float B, float W, float H, int cage = 9) : Night_Animal(F_I, F_S, X, Y, A, B, W, H)
            { std::cout << "Press " << cage << " to feed Owl " <<  std::endl; }

};

#endif PROJECT_ZOO_H
