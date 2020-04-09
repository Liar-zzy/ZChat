#ifndef PICTUREEDITWIDGET_H
#define PICTUREEDITWIDGET_H

#include <QWidget>

class CutDialog;
class PhotoShotDialog;

namespace Ui {
class PictureEditWidget;
}

class PictureEditWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PictureEditWidget(QWidget *parent = 0);
    ~PictureEditWidget();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::PictureEditWidget *ui;

    QPixmap scaledPix;
    PhotoShotDialog *pdialog;

private:
    void LoadPicture();
private slots:
     void SltCutDlgMoved(QRect rect);
     void on_btnLoad_clicked();
     void on_btnSave_clicked();
};

#endif // PICTUREEDITWIDGET_H
