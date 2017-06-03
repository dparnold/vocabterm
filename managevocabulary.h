#ifndef MANAGEVOCABULARY_H
#define MANAGEVOCABULARY_H

#include <QWidget>

namespace Ui {
class ManageVocabulary;
}

class ManageVocabulary : public QWidget
{
    Q_OBJECT

public:
    explicit ManageVocabulary(QWidget *parent = 0);
    ~ManageVocabulary();

private:
    Ui::ManageVocabulary *ui;
};

#endif // MANAGEVOCABULARY_H
