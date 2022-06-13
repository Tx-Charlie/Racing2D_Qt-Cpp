#include "game.h"

const int Game::num_checkpoints = 8;
const int Game::points[8][2]=
{
                               {300, 610},
                               {1270,430},
                               {1380,2380},
                               {1900,2460},
                               {1970,1700},
                               {2550,1680},
                               {2560,3150},
                               {500, 3300}
};
const QSize Game::RESOLUTION = QSize(640, 480);
const int Game::COUNT_OF_CARS = 5;

Game::Game()
    : PATH_TO_BACKGROUND_PIXMAP(":/images/background.png"), PATH_TO_CAR_PIXMAP(":/images/car.png"), ITERATION_VALUE(1000.0f/60.0f),
      car_R(22), speed(0), angle(0), maxSpeed(12), acc(0.2f), turnSpeed(0.08), offsetX(0), offsetY(0)
{
    for(int i=0; i < COUNT_OF_CARS;i++)
    {
      car[i] = Car(num_checkpoints, points);
      car[i].x = 300+i*50;
      car[i].y = 1700+i*80;
      car[i].speed = 7+i;
    }
}
