#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int year = 2019;
    for(int i = 1; i <= 31; i++){
        ui->cbDay->addItem(QString::number(i));
    }
    ui->cbMouth->addItem(QString("January"));
    ui->cbMouth->addItem(QString("February"));
    ui->cbMouth->addItem(QString("March"));
    ui->cbMouth->addItem(QString("April"));
    ui->cbMouth->addItem(QString("May"));
    ui->cbMouth->addItem(QString("June"));
    ui->cbMouth->addItem(QString("July"));
    ui->cbMouth->addItem(QString("August"));
    ui->cbMouth->addItem(QString("September"));
    ui->cbMouth->addItem(QString("October"));
    ui->cbMouth->addItem(QString("November"));
    ui->cbMouth->addItem(QString("December"));

    for(int i = 1; i <= 100;i++){
        ui->cbYear->addItem(QString::number(year--));
    }
    //SIGNALS AND SLOTS
    //Signals and Slots is a way to connect two elements of a GUI automatically, calling some
    //of their functions.
    //For using Signals and Slots in QT there are two ways to using, the first one is
    //in the file .ui in the design frame, clicking in the top of the page that says
    //"Edit Signals/Slots", then you can choose signal and the slot and also choose the
    //event for these elements.
    //The second way to use it is using the function "connect" and sending the information
    //of the Signal and Slots:
    //connect([Sender element], SIGNAL[Sender's Event/Function], [receiver Element],
    //SLOT(Receiver's Event/Function))
    connect(ui->txtName,SIGNAL(textChanged(QString)),ui->lblName,SLOT(setText(QString)));
    connect(ui->txtLastName,SIGNAL(textChanged(QString)),ui->lblLastName,SLOT(setText(QString)));
    //Also you can disconnect two elements using the function called "disconnect" and in
    //its arguments utilizing the same connect's structure.
    //disconnect(ui->txtName,SIGNAL(textChanged(QString)),ui->lblName,SLOT(setText(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
