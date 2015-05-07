#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_installButton_clicked()
{
    if(ui->ADM108_1C->isChecked())
    {
        system("lpadmin -p ADM108_1C -L \"ADM108_1C\" -E -v lpd://150.252.11.162 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRA4225ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None");
    }
    if(ui->ADM204_1C->isChecked())
    {
        system("lpadmin -p ADM204_1C -L \"ADM204_1C\" -E -v lpd://150.252.12.34 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC2225ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNStaple=True");
    }
}
