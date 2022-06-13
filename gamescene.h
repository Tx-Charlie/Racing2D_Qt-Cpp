#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QGraphicsScene>
#include <QPixmap>
#include "game.h"

class QTimer;
class GameScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit GameScene(QObject *parent = nullptr);

signals:
private slots:
    void update();

private:
    void loadPixmap();

    Game m_game;
    QTimer* m_timer;
    QPixmap m_bgPixmap, m_carPixmap;
};

#endif // GAMESCENE_H
