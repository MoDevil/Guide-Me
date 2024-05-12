#pragma once

#include <QtWidgets/QWidget>
#include "ui_guideme2.h"

class guideme2 : public QWidget
{
    Q_OBJECT

public:
    guideme2(QWidget *parent = nullptr);
    ~guideme2();

private:
    Ui::guideme2Class ui;
};
