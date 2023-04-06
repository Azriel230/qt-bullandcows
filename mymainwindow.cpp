#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include "profile.h"
#include "record.h"

MyMainWindow::MyMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}


void MyMainWindow::on_m_pb_newGame_clicked()
{
    Profile* profile = new Profile(this);
    profile->exec();
}


void MyMainWindow::on_m_pb_records_clicked()
{
    Record* record = new Record(this);
    record->exec();

}

