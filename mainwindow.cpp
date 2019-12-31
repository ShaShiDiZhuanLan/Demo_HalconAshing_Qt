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
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Halcon/Include/halconcpp/HalconCpp.h"
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>

using namespace HalconCpp;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString filename;
    filename=QFileDialog::getOpenFileName(this, tr("选择图像"), "", tr("Images (*.png *.bmp *.jpg *.tif *.GIF )"));
    if(filename.isEmpty()) {
        return;
    } else {
        QImage* img=new QImage;
        if(! ( img->load(filename) ) ) { //加载图像
            QMessageBox::information(this, tr("打开图像失败"), tr("打开图像失败!"));
            delete img;
            return;
        }
        ui->label->setPixmap(QPixmap::fromImage(*img));
    }
    ui->label->setScaledContents(true);


    HObject ho_Image;
    HObject ok_Image;
    HTuple hv_WindowID;
    long widid = this->winId();
    HTuple widid2 = widid;
    ReadImage(&ho_Image, HTuple(filename.toStdString().c_str())); // 此方法Halcon提供
    Rgb1ToGray(ho_Image, &ok_Image); // 此方法Halcon提供
    OpenWindow(9, 337, ui->label_2->width(),ui->label_2->height(),widid2,"","",&hv_WindowID);
    DispImage(ok_Image,hv_WindowID);
}

MainWindow::~MainWindow()
{
    delete ui;
}
