#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>   // First include QTimer
#include <QLabel>
QT_BEGIN_NAMESPACE
#include <QPushButton>
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void my_function();    //Third ceclaration function
    void button_click();

private:
    Ui::MainWindow *ui;
    QTimer * timer; // Second declaration object

    QLabel * label_data_time;

    QPushButton * button;
};
#endif // MAINWINDOW_H
