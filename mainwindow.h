#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QElapsedTimer"

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
    void button1();
    void button2();
    void button3();
    void button4();
    void button5();
    void button6();
    void button7();
    void button8();
    void button9();
    void button0();

private:
    Ui::MainWindow *ui;
    int volume;
    int channel;
    bool volOn;
    QElapsedTimer timer;
    void addButVol(int b);

};
#endif // MAINWINDOW_H
