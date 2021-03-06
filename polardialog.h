#ifndef POLARDIALOG_H
#define POLARDIALOG_H

#include <QDialog>

namespace Ui {
class PolarDialog;
}

class PolarDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PolarDialog(QWidget *parent,double);
    ~PolarDialog();

signals:
    void polar_changed(double arg);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::PolarDialog *ui;
};

#endif // POLARDIALOG_H
