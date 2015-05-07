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
    if(ui->ADM212_1C->isChecked())
    {
        system("lpadmin -p ADM212_1C -L \"ADM212_1C\" -E -v lpd://150.252.125.150 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC5030ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=STFINC1");
    }
    if(ui->ADM215_1C->isChecked())
    {
        system("lpadmin -p ADM215_1C -L \"ADM215_1C\" -E -v lpd://150.252.125.61 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC5250ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=IFINE1 -o CNPuncher=PUNU23");
    }
    if(ui->ADM220_1C->isChecked())
    {
        system("lpadmin -p ADM220_1C -L \"ADM220_1C\" -E -v lpd://150.252.12.48 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC5030ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=STFINC1");
    }
    if(ui->ADM305_1C->isChecked())
    {
        system("lpadmin -p ADM305_1C -L \"ADM305_1C\" -E -v lpd://150.252.11.206 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC5045ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=STFINC1 -o CNPuncher=PUNU23");
    }
    if(ui->ADM324_1C->isChecked())
    {
        system("lpadmin -p ADM324_1C -L \"ADM324_1C\" -E -v lpd://150.252.11.226 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIR3225ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=FINAE1");
    }
    if(ui->BSB208_1C->isChecked())
    {
        system("lpadmin -p BSB208_1C -L \"BSB208_1C\" -E -v lpd://150.252.217.138 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC5030ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=STFINC1 -o CNPuncher=PUNU23");
    }
    if(ui->BSB214_1C->isChecked())
    {
        system("lpadmin -p BSB214_1C -L \"BSB214_1C\" -E -v lpd://150.252.217.141 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC5045ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=STFINC1 -o CNPuncher=PUNU23");
    }
    if(ui->BSB255_1C->isChecked())
    {
        system("lpadmin -p BSB255_1C -L \"BSB255_1C\" -E -v lpd://150.252.217.146 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIR3235ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=STFING1");
    }
    if(ui->BSB289_1C->isChecked())
    {
        system("lpadmin -p BSB289_1C -L \"BSB289_1C\" -E -v lpd://150.252.217.151 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIR3235ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=FINS1");
    }
    if(ui->DMC119_1C->isChecked())
    {
        system("lpadmin -p DMC119_1C -L \"DMC119_1C\" -E -v lpd://150.252.125.206 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC2225ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNStaple=True");
    }
    if(ui->DMC142_1C->isChecked())
    {
        system("lpadmin -p DMC142_1C -L \"DMC142_1C\" -E -v lpd://150.252.125.61 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC5250ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=IFINE1 -o CNPuncher=PUNU23");
    }
    if(ui->EDB102_1C->isChecked())
    {
        system("lpadmin -p EDB102_1C -L \"EDB102_1C\" -E -v lpd://150.252.161.150 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC5045ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNFinisher=IN2TRAYF1 -o CNPuncher=PUNU23 -o CNDuplex=None");
    }
    if(ui->EDB116_1C->isChecked())
    {
        system("lpadmin -p EDB116_1C -L \"EDB116_1C\" -E -v lpd://150.252.161.146 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC5030ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNFinisher=STFINJ1 -o CNPuncher=PUNU23 -o CNDuplex=None");
    }
    if(ui->FSB237_1C->isChecked())
    {
        system("lpadmin -p FSB237_1C -L \"FSB237_1C\" -E -v lpd://150.252.161.122 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC5235ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNFinisher=STFINJ1 -o CNPuncher=PUNU23 -o CNDuplex=None");
    }
    if(ui->HWC156_1C->isChecked())
    {
        system("lpadmin -p HWC156_1C -L \"HWC156_1C\" -E -v lpd://150.252.185.191 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC2225ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNStaple=True");
    }
    if(ui->HWC234_1C->isChecked())
    {
        system("lpadmin -p HWC234_1C -L \"HWC234_1C\" -E -v lpd://150.252.185.159 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC2225ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNStaple=True");
    }
    if(ui->LIB267_1C->isChecked())
    {
        system("lpadmin -p LIB267_1C -L \"LIB267_1C\" -E -v lpd://150.252.12.48 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC5030ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=STFINC1");
    }
    if(ui->MBB150_1C->isChecked())
    {
        system("lpadmin -p MBB150_1C -L \"MBB150_1C\" -E -v lpd://150.252.217.149 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRA6065ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=STFINJ1 -o CNPuncher=PUNU23");
    }
    if(ui->MCG25_1C->isChecked())
    {
        system("lpadmin -p MCG25_1C -L \"MCG25_1C\" -E -v lpd://150.252.125.128 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC5045ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNPuncher=PUNU23");
    }
    if(ui->MCG42_1C->isChecked())
    {
        system("lpadmin -p MCG42_1C -L \"MCG42_1C\" -E -v lpd://150.252.125.149 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIR3225ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=FINAE1");
    }
    if(ui->MCG43_1C->isChecked())
    {
        system("lpadmin -p MCG43_1C -L \"MCG43_1C\" -E -v lpd://150.252.125.150 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC5030ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=STFINC1");
    }
    if(ui->MCK126_1C->isChecked())
    {
        system("lpadmin -p MCK126_1C -L \"MCK126_1C\" -E -v lpd://150.252.161.112 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRA4245ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=mono -o CNDuplex=None -o CNSrcOption=OptCas2 -o CNPuncher=PUNU2 -o CNFinisher=STFING1");
    }
    if(ui->MCK142_1C->isChecked())
    {
        system("lpadmin -p MCK142_1C -L \"MCK142_1C\" -E -v lpd://150.252.161.73 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIR1020ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=mono -o CNDuplex=None -o CNSrcOption=OptCas1");
    }
    if(ui->MCK28_1C->isChecked())
    {
        system("lpadmin -p MCK28_1C -L \"MCK28_1C\" -E -v lpd://150.252.161.95 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC2225ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNStaple=True");
    }
    if(ui->MCK3_1C->isChecked())
    {
        system("lpadmin -p MCK3_1C -L \"MCK3_1C\" -E -v lpd://150.252.147.223 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIR1020ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=mono -o CNDuplex=None -o CNSrcOption=OptCas1");
    }
    if(ui->WPA120_1C->isChecked())
    {
        system("lpadmin -p WPA120_1C -L \"WPA120_1C\" -E -v lpd://150.252.217.109 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIRAC5250ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=IFINE1 -o CNPuncher=PUNU23");
    }
    if(ui->ZE300_1H->isChecked())
    {
        system("lpadmin -p ZE300_1H -L \"ZE300_1H\" -E -v lpd://150.252.155.132 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIR3235ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=mono -o CNDuplex=None -o CNMultiPunch=PUNU23 -o CNFinisher=STFINJ1");
    }
    if(ui->ZL201_1->isChecked())
    {
        system("lpadmin -p ZL201_1 -L \"ZL201_1\" -E -v lpd://150.252.217.151 -P /Library/Printers/PPDs/Contents/Resources/CNPZUIR3235ZU.ppd.gz -o printer-is-shared=false -o CNColorMode=Mono -o CNDuplex=None -o CNFinisher=FINS1");
    }
}
