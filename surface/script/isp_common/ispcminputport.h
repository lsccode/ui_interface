#ifndef ISPCMINPUTPORT_H
#define ISPCMINPUTPORT_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

#include "script/ispcommonstep.h"

class IspCminputport : public QWidget,public IspCommonStep
{
    Q_OBJECT
public:
    explicit IspCminputport(QWidget *parent = 0);

public:
    QLabel *ptLabel_FrStatusHold;
    QLineEdit *ptEdit_FrStatusHold;

    QLabel *ptLabel_FrStatusReset;
    QLineEdit *ptEdit_FrStatusReset;

    QLabel *ptLabel_reg_hc_limit;
    QLineEdit *ptEdit_reg_hc_limit;

    QLabel *ptLabel_reg_hc_size0;
    QLineEdit *ptEdit_reg_hc_size0;

    QLabel *ptLabel_reg_hc_size1;
    QLineEdit *ptEdit_reg_hc_size1;

    QLabel *ptLabel_reg_mode_request;
    QLineEdit *ptEdit_reg_mode_request;

    QLabel *ptLabel_reg_preset;
    QLineEdit *ptEdit_reg_preset;

    QLabel *ptLabel_reg_vc_start;
    QLineEdit *ptEdit_reg_vc_start;

    QPushButton *ptPBtn;

public:
    QString str_FrStatusReset ;
    QString str_FrStatusHold ;
    QString strt_reg_hc_limit ;
    QString str_reg_hc_size0 ;
    QString str_reg_hc_size1 ;
    QString str_reg_mode_request  ;
    QString str_reg_preset ;
    QString str_reg_vc_start ;
public:
    virtual void step1();
signals:

public slots:
    void clickedSlot(bool checked = false);

};

#endif // ISPCMINPUTPORT_H
