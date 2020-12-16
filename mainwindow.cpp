#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidget->addItem("Item from code");
    QListWidgetItem* listItem = new QListWidgetItem;
    listItem->setText("my second item from code");
    listItem->setData(100, 1000);
    ui->listWidget->addItem(listItem);
    qDebug() << listItem->data(100);

    QTreeWidgetItem* treeItem = new QTreeWidgetItem;
    treeItem->setText(0, "tree item from code");
    ui->treeWidget->addTopLevelItem(treeItem);
    QTreeWidgetItem* treeItem2 = new QTreeWidgetItem;
    treeItem2->setText(1, "sub item from code");
    treeItem->addChild(treeItem2);

    QTableWidgetItem* tableItem = new QTableWidgetItem;
    tableItem->setText("testing 1");
    ui->tableWidget->setItem(0, 0, tableItem);

    QTableWidgetItem* tableItem2 = new QTableWidgetItem;
    tableItem2->setText(tableItem->text() + "testing 2");
    ui->tableWidget->setItem(1, 2, tableItem2);

//   QMessageBox::information(this, "Info", "Just to let you know, something happened!");
//   QMessageBox::warning(this, "warning", "wow, this is so warning");
//   QMessageBox::question(this, "question", "hmm, what do you think?");
//   QMessageBox::critical(this, "critical", "why, critical.");
//    QMessageBox::about(this, "about", "no icon");
//    QMessageBox::question(this, "another question", "hello?", QMessageBox::Ignore, QMessageBox::Yes);
//    QMessageBox msgBox;
//    msgBox.setWindowTitle("How's your stomach?");
//    msgBox.setText("Just to let you know, mine is pretty full.");
//    msgBox.addButton("no no", QMessageBox::YesRole);
//    msgBox.addButton("yes or no", QMessageBox::NoRole);
//    msgBox.exec();
//    qDebug() << msgBox.clickedButton();

//    QString fileName = QFileDialog::getOpenFileName(this, "Your title", QDir::currentPath(), "All files (*) ;; Document files (*.doc *.rtf) ;; PNG files (*.png)");
//    qDebug() << fileName;
}

MainWindow::~MainWindow()
{
    delete ui;
}

