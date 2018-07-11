#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include <QColor>
#include <QFont>

namespace Ui {
class SettingsDialog;
}

class SettingsDialog : public QDialog
{
    Q_OBJECT
protected:
    QColor activecolor,inactivecolor;
    QFont  activefont,inactivefont;

public:
    explicit SettingsDialog(QWidget *parent = 0);
    ~SettingsDialog();
    bool refresh;
    
private slots:
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

    void on_btnDirBrowse_clicked();

    void on_pb_fontDlgActive_clicked();

    void on_pb_fontDlgInactive_clicked();

    void on_pb_colorDlgActive_clicked();

    void on_pb_colorDlgInactive_clicked();

    void on_cb_hotKey_stateChanged(int arg1);

    void on_pb_warningColor_clicked();

    void on_pb_lateColor_clicked();

private:
    Ui::SettingsDialog *ui;
    void updateFonts();
};

#endif // SETTINGSDIALOG_H
