#ifndef MYITEM_H
#define MYITEM_H

#include <QtQuick/QQuickPaintedItem>

class Carousel : public QQuickPaintedItem
{
    Q_OBJECT
    QML_ELEMENT
    Q_DISABLE_COPY(Carousel)
public:
    explicit Carousel(QQuickItem *parent = nullptr);
    void paint(QPainter *painter) override;
    ~Carousel() override;
};

#endif // MYITEM_H
