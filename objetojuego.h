#ifndef OBJETOJUEGO_H
#define OBJETOJUEGO_H

#include <QGraphicsItem>
#include <QPainter>

class ObjetoJuego : public QGraphicsItem
{
public:
    ObjetoJuego(int tipo);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

protected:
    void advance(int phase) override;

private:
    int tipoObjeto;
};

#endif // OBJETOJUEGO_H
