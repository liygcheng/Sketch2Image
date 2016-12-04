#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sketch.h"

class Sketch : public QMainWindow
{
    Q_OBJECT

public:
    Sketch(QWidget *parent = Q_NULLPTR);

private:
    Ui::SketchClass ui;
};
