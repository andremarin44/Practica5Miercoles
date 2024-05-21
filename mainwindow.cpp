#include "mainwindow.h"
class PiedraPapelTijeraGame : public QWidget {
    Q_OBJECT

public:
    PiedraPapelTijeraGame(QWidget *parent = nullptr);

private slots;
    void onAgregarTijeras();
    void onAgregarPiedra();
    void onAgregarPapel();
    void onIngresarJugador();
    void onIniciarJuego();
    void onTiempoAgotado();

private:
    void crearObjeto(TipoObjeto tipo);
    void moverObjetos();
    void verificarColisiones();
    void destruirObjeto(Objeto* objeto);
    void actualizarPuntajes();
    void actualizarTiempoRestante();
};
class Objeto : public QGraphicsItem {
};
class IndicadorJugador : public QGraphicsItem {
};
class Temporizador : public QTimer {
};

