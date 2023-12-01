#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    volOn = true;
    volume = 50;
    channel = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}


//логика кнопки выключения звука
void MainWindow::volOff(){
    volOn = !volOn;
    if(volOn)ui->lcdVol->display(volume);
    else ui->lcdVol->display(0);
}

//логика кнопок регулировки громкости
void MainWindow::volAdd(){
    if(volOn && (volume < 100)){
        volume+= 10;
        ui->lcdVol->display(volume);
    }

}
void MainWindow::volMinus(){
    if(volOn && (volume > 0)){
        volume-= 10;
        ui->lcdVol->display(volume);
    }
}

//логика переключения каналов
void MainWindow::channelAdd(){
    if(channel < 999){
        channel+=1;
        ui->lcdChannel->display(channel);
    }
}
void MainWindow::channelMinus(){
    if(channel > 1){
        channel-=1;
        ui->lcdChannel->display(channel);
    }
}

void MainWindow::stopTimer(){
    t.stop();
}

void MainWindow::button1start(){
    t.start();
    connect(ui->button1, SIGNAL(released()), this, SLOT(stopTimer()));
}

