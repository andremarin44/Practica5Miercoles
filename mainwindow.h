#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QGraphicsScene>
#include "objetojuego.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onAgregarTijeras();
    void onAgregarPiedra();
    void onAgregarPapel();
    void onIngresarJugador();
    void onIniciarJuego();
    void onTiempoAgotado();
    void moverObjetos();
    void generarNuevoObjeto();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QTimer *timerGeneracion;
};

#endif // MAINWINDOW_H

