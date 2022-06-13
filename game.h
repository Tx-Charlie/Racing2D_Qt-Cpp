#ifndef GAME_H
#define GAME_H
#include "car.h"
#include <QSize>


class Game
{
public:
    Game();
    static const int num_checkpoints;
    static const int points[8][2];
    static const QSize RESOLUTION;
    const QString PATH_TO_BACKGROUND_PIXMAP;
    const QString PATH_TO_CAR_PIXMAP;
    const float ITERATION_VALUE;
};

#endif // GAME_H
