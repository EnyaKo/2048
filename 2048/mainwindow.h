#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "blank.h"
#include <cstdlib>
#include <ctime>
#include <QMainWindow>
#include <QDebug>
#include <QKeyEvent>
#include <QString>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void start();
    void initialize();
    void initialize_A();
    void initialize_M();
    void setMap(blank &b);
    void setRandom();
    void keyPressEvent(QKeyEvent *event);
    bool anyMoved();
    bool isWin();
    bool isLose();
    void setScore();
private slots:
    void on_restart_clicked();

private:
    Ui::MainWindow *ui;
    blank b[17];
    bool trigger;
    int score_int;
    QString score_str;
};

#endif // MAINWINDOW_H
