#include "gamescene.h"
#include <QTimer>
#include <QDebug>
#include <QGraphicsPixmapItem>
GameScene::GameScene(QObject *parent)
    : QGraphicsScene{parent}, m_game(), m_timer(new QTimer(this))
{
    loadPixmap();
    setSceneRect(0, 0, Game::RESOLUTION.width(), Game::RESOLUTION.height());
    connect(m_timer, &QTimer::timeout, this, &GameScene::update);
    m_timer->start(m_game.ITERATION_VALUE);
}

void GameScene::loadPixmap()
{
    if(m_bgPixmap.load(m_game.PATH_TO_BACKGROUND_PIXMAP))
    {
        qDebug() << "BgPixmap is loaded successfully";
    }
    else
    {
        qDebug() << "BgPixmap is not loaded successfully";
    }

    if(m_carPixmap.load(m_game.PATH_TO_CAR_PIXMAP))
    {
        qDebug() << "CarPixmap is loaded successfully";
    }
    else
    {
        qDebug() << "CarPixmap is loaded successfully";
    }
}

void GameScene::update()
{
    clear();
    QGraphicsPixmapItem* bgItem = new QGraphicsPixmapItem(m_bgPixmap.scaled(2*m_bgPixmap.width(), 2*m_bgPixmap.height()));
    addItem(bgItem);

    QGraphicsPixmapItem* carItem = new QGraphicsPixmapItem(m_carPixmap);
    addItem(carItem);
}
