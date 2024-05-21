#include "objetojuego.h"

void ObjetoJuego::advance(int phase)
{
    if (!phase) return;

    switch (tipoObjeto)
    {
    case 0:
        setPos(mapToParent(2, 0));
        break;
    case 1:
        setPos(mapToParent(0, 2));
        break;
    case 2:
        setPos(mapToParent(2, 2));
        break;
    }

    QList<QGraphicsItem *> colisiones = collidingItems();
    for (QGraphicsItem *colision : colisiones)
    {
        ObjetoJuego *objetoColision = dynamic_cast<ObjetoJuego *>(colision);
        if (objetoColision)
        {
            if (tipoObjeto == 0 && objetoColision->tipoObjeto == 1)
            {
                scene()->removeItem(this);
                delete this;
            }
            else if (tipoObjeto == 1 && objetoColision->tipoObjeto == 2)
            {
                scene()->removeItem(this);
                delete this;
            }
            else if (tipoObjeto == 2 && objetoColision->tipoObjeto == 0)
            {
                scene()->removeItem(this);
                delete this;
            }
        }
    }

    if (scene()->sceneRect().contains(sceneBoundingRect())) return;
    scene()->removeItem(this);
    delete this;
}
