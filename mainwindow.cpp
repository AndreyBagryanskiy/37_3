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
    timer.start();
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
    if(channel > 0){
        channel-=1;
        ui->lcdChannel->display(channel);
    }
}
//логика нажатия кнопок 0-9
void MainWindow::addButVol(int b){
    if(timer.restart() > 2500){
        channel = b;
    }else{
        channel = (channel * 10 + b);
        if(channel > 999) channel = 0;
    }
}

void MainWindow::button1(){
    addButVol(1);
    ui->lcdChannel->display(channel);
}

void MainWindow::button2(){
    addButVol(2);
    ui->lcdChannel->display(channel);
}

void MainWindow::button3(){
    addButVol(3);
    ui->lcdChannel->display(channel);
}

void MainWindow::button4(){
    addButVol(4);
    ui->lcdChannel->display(channel);
}

void MainWindow::button5(){
    addButVol(5);
    ui->lcdChannel->display(channel);
}

void MainWindow::button6(){
    addButVol(6);
    ui->lcdChannel->display(channel);
}

void MainWindow::button7(){
    addButVol(7);
    ui->lcdChannel->display(channel);
}

void MainWindow::button8(){
    addButVol(8);
    ui->lcdChannel->display(channel);
}

void MainWindow::button9(){
    addButVol(9);
    ui->lcdChannel->display(channel);
}

void MainWindow::button0(){
    addButVol(0);
    ui->lcdChannel->display(channel);
}
