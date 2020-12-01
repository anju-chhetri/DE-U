#ifndef DESKTOP_H
#define DESKTOP_H

#include <QMainWindow>

namespace Ui {
class Desktop;
}

class Desktop : public QMainWindow
{
    Q_OBJECT

public:
    void resizeEvent(QResizeEvent *DesktopResize);
    explicit Desktop(QWidget *parent = nullptr);
    ~Desktop();
    void to_do_list_button();

private slots:
    void time_delay();

    void on_commandLinkButton_view_clicked();

    void on_commandLinkButton_append_clicked();

    void on_commandLinkButton_new_clicked();

    void on_commandLinkButton_font_clicked();

    void on_commandLinkButton_undo_clicked();

    void on_commandLinkButton_redo_clicked();

    void on_pushButton_gameplay_clicked();

    void on_pushButton_desktop_log_out_clicked();

    void on_pushButton_restart_clicked();

private:
    Ui::Desktop *ui;
};

#endif // DESKTOP_H
