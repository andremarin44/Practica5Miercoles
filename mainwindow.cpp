// Clase principal del juego
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
    // Funciones privadas para la lógica del juego
    void crearObjeto(TipoObjeto tipo);
    void moverObjetos();
    void verificarColisiones();
    void destruirObjeto(Objeto* objeto);
    void actualizarPuntajes();
    void actualizarTiempoRestante();

    // Otros miembros privados necesarios
    // ...
};

// Clase para representar los objetos del juego
class Objeto : public QGraphicsItem {
    // Implementación de la clase Objeto
    // ...
};

// Clase para representar el indicador del jugador
class IndicadorJugador : public QGraphicsItem {
    // Implementación de la clase IndicadorJugador
    // ...
};

// Clase para representar el temporizador
class Temporizador : public QTimer {
    // Implementación de la clase Temporizador
    // ...
};

