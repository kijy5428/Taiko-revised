#ifndef TEXT_H
#define TEXT_H

#include <QWidget>

namespace Ui {
class text;
}

class text : public QWidget
{
    Q_OBJECT

public:
    explicit text(QWidget *parent = 0);
    ~text();

private:
    Ui::text *ui;
};

#endif // TEXT_H
