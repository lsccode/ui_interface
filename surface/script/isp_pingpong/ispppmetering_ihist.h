#ifndef ISPPPMETERING_IHIST_H
#define ISPPPMETERING_IHIST_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

class IspPPmetering_ihist : public QWidget
{
    Q_OBJECT
public:
    explicit IspPPmetering_ihist(QWidget *parent = 0);

    QPushButton *ptPBtn;
signals:

public slots:
    void clickedSlot(bool checked = false);

};

#endif // ISPPPMETERING_IHIST_H
