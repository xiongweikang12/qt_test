#ifndef MAINWINDOW_H
#define MAINWINDOW_H
class QTreeWidgetItem;
class QLabel;
class QSpinBox;


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_actionaddFile_triggered();

    void on_actionaddFolder_triggered();

    void on_actiondelectall_triggered();

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void changeitem(QTreeWidgetItem *item);

    void on_actionforecch_triggered();

    void on_actionzoomfixW_triggered();

    void on_actionzoomfixH_triggered();

    void on_actionZoomIn_triggered();

    void on_actionzoomout_triggered();

    void on_actionDockvisable_triggered(bool checked);

    void on_actionDockfloat_triggered(bool checked);

    void on_dockWidget_visibilityChanged(bool visible);

    void on_dockWidget_topLevelChanged(bool topLevel);

private:
    QLabel *labelfilename;
    QLabel *labelNodeText;
    QSpinBox *spinratio;
    QPixmap m_pixmap;
    float m_radio;


    enum treecolnum{
        colnum=0,
        colitemtype,
        colitemdate
    };
    enum treeitemtype{
        istopitem=1001,
        isforderitem,
        isfileitem,
        isimage
    };

    void display_image(QTreeWidgetItem *item);


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
