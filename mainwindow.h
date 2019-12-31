/*-------------------------------------------------
#
# Project created by QtCreator
# Author: 沙振宇
# CreateTime: 2017-09-15
# UpdateTime: 2019-12-31
# Info: Qt添加Halcon窗体Demo（以及Halcon简单的灰化效果）
# Url:https://shazhenyu.blog.csdn.net/article/details/77994906
# Github:https://github.com/ShaShiDiZhuanLan/Demo_HalconAshing_Qt
#
#-------------------------------------------------*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
