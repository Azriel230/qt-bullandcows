#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MyMainWindow; }
QT_END_NAMESPACE

class MyMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MyMainWindow(QWidget *parent = nullptr);
    ~MyMainWindow();

private slots:

    void on_m_pb_newGame_clicked();

    void on_m_pb_records_clicked();

private:
    Ui::MyMainWindow *ui;
};
#endif // MYMAINWINDOW_H
