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

private slots:
    void time_delay();

private:
    Ui::Desktop *ui;
};

#endif // DESKTOP_H
