#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QTime"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void volOff();
    void volAdd();
    void volMinus();
    void channelAdd();
    void channelMinus();
    void stopTimer();
    void button1start();

private:
    Ui::MainWindow *ui;
    int volume;
    int channel;
    bool volOn;
    QTime t;

};
#endif // MAINWINDOW_H
