//
// Created by Malip on 13.01.2022.
//

#ifndef REMOTECONTROL_CALLERMAINWINDOW_H
#define REMOTECONTROL_CALLERMAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <iostream>

class CallerMainWindow : public QMainWindow {
    Q_OBJECT
private:
    bool isPower = false;
    int currentChannel = 0;
    int volume = 0;
    void showVolume(){
        lineEdit->setText("Volume: " +  QString().setNum(volume));
    }
    void showChannel(){
        lineEdit->setText("Current channel: " + QString().setNum(currentChannel));
    }
public:
    CallerMainWindow(QWidget* parent = nullptr): QMainWindow(parent){};
    QLineEdit* lineEdit = nullptr;
public slots:
    void btn_0(){
        if(isPower){
            currentChannel = 0;
            showChannel();
        }
    };
    void btn_1(){
        if(isPower){
            currentChannel = 1;
            showChannel();
        }
    };
    void btn_2(){
        if(isPower){
            currentChannel = 2;
            showChannel();
        }
    };
    void btn_3(){
        if(isPower){
            currentChannel = 3;
            showChannel();
        }
    };
    void btn_4(){
        if(isPower){
            currentChannel = 4;
            showChannel();
        }
    };
    void btn_5(){
        if(isPower){
            currentChannel = 5;
            showChannel();
        }
    };
    void btn_6(){
        if(isPower){
            currentChannel = 6;
            showChannel();
        }
    };
    void btn_7(){
        if(isPower){
            currentChannel = 7;
            showChannel();
        }
    };
    void btn_8(){
        if(isPower){
            currentChannel = 8;
            showChannel();
        }
    };
    void btn_9(){
        if(isPower){
            currentChannel = 9;
            showChannel();
        }
    };
    void btn_nextChannel(){
        if(isPower){
            currentChannel = (currentChannel == 9 ? 0 : currentChannel+1);
            showChannel();
        }
    };
    void btn_preChannel(){
        if(isPower){
            currentChannel = (currentChannel == 0 ? 9 : currentChannel-1);
            showChannel();
        }
    };
    void btn_increaseVol(){
        if(isPower) {
            volume += (volume != 100 ? 1 : 0);
            showVolume();
        }
    };
    void btn_decreaseVol(){
        if(isPower) {
            volume -= (volume != 0 ? 1 : 0);
            showVolume();
        }
    };
    void btn_power(){
        if(isPower){
            lineEdit->setText("The TV is turned off!");
            isPower = false;
        }else {
            isPower = true;
            lineEdit->setText("The TV is turned on!");
        }
    };
};


#endif //REMOTECONTROL_CALLERMAINWINDOW_H
