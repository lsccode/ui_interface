#ifndef ISPPPMETERING_AF_H
#define ISPPPMETERING_AF_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

class IspPPmetering_af : public QWidget
{
    Q_OBJECT
public:
    explicit IspPPmetering_af(QWidget *parent = 0);

    QPushButton *ptPBtn;
signals:

public slots:
    void clickedSlot(bool checked = false);

};

#endif // ISPPPMETERING_AF_H
