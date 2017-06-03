#include "managevocabulary.h"
#include "ui_managevocabulary.h"

ManageVocabulary::ManageVocabulary(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManageVocabulary)
{
    ui->setupUi(this);
}

ManageVocabulary::~ManageVocabulary()
{
    delete ui;
}
