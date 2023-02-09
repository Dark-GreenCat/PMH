#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Hopdong.h"
#include <QString>
#include <string>
#include <QDebug>
#include <QListWidgetItem>
//#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnFind_released()
{
    QString hoten = ui->lineEdit->text();
    QString loaixe = ui->lineEdit->text();

    for(int i = 0; i < m_Hopdong.size();i++) {
        if(
           ((m_Hopdong[i]->gethoten().toStdString()).find(hoten.toStdString()) != std::string::npos) ||
            ((m_Hopdong[i]->getloaixe().toStdString()).find(loaixe.toStdString()) != std::string::npos)
                )
        {
            ui->linehoten->setText(m_Hopdong[i]->gethoten());
            ui->linecmt->setText(m_Hopdong[i]->getcmt());
            ui->lineloaixe->setText(m_Hopdong[i]->getloaixe());
            ui->linengaythue->setText(QString::number(m_Hopdong[i]->getngaythue()));
            ui->linethangthue->setText(QString::number(m_Hopdong[i]->getthangthue()));
            ui->linenamthue->setText(QString::number(m_Hopdong[i]->getnamthue()));
            ui->linengaytra->setText(QString::number(m_Hopdong[i]->getngaytra()));
            ui->linethangtra->setText(QString::number(m_Hopdong[i]->getthangtra()));
            ui->linenamtra->setText(QString::number(m_Hopdong[i]->getnamtra()));
            break;
        }

    }
}






void MainWindow::on_btntinhtong_released()
{

}


void MainWindow::on_btnHdngay_released()
{
    Hopdong* temp = new Hd_ngay;
    temp->sethoten(ui->linehoten->text());
    temp->setcmt(ui->linecmt->text());
    temp->setloaixe(ui->lineloaixe->text());
    temp->setngaythue(ui->linengaythue->text().toInt());
    temp->setthangthue(ui->linethangthue->text().toInt());
    temp->setnamthue(ui->linenamthue->text().toInt());
    temp->setngaytra(ui->linengaytra->text().toInt());
    temp->setthangtra(ui->linethangtra->text().toInt());
    temp->setnamtra(ui->linenamtra->text().toInt());
    m_Hopdong.push_back(temp);

    ui->linehoten->setText("");
    ui->linecmt->setText("");
    ui->lineloaixe->setText("");
    ui->linengaythue->setText("");
    ui->linethangthue->setText("");
    ui->linenamthue->setText("");
    ui->linengaytra->setText("");
    ui->linethangtra->setText("");
    ui->linenamtra->setText("");
    //QMessageBox::information ( this, ,("Đã thêm thành công"));
}


void MainWindow::on_btnHdthang_released()
{
    Hopdong* temp = new Hd_thang;
    temp->sethoten(ui->linehoten->text());
    temp->setcmt(ui->linecmt->text());
    temp->setloaixe(ui->lineloaixe->text());
    temp->setngaythue(ui->linengaythue->text().toInt());
    temp->setthangthue(ui->linethangthue->text().toInt());
    temp->setnamthue(ui->linenamthue->text().toInt());
    temp->setngaytra(ui->linengaytra->text().toInt());
    temp->setthangtra(ui->linethangtra->text().toInt());
    temp->setnamtra(ui->linenamtra->text().toInt());
    m_Hopdong.push_back(temp);

    ui->linehoten->setText("");
    ui->linecmt->setText("");
    ui->lineloaixe->setText("");
    ui->linengaythue->setText("");
    ui->linethangthue->setText("");
    ui->linenamthue->setText("");
    ui->linengaytra->setText("");
    ui->linethangtra->setText("");
    ui->linenamtra->setText("");
}

