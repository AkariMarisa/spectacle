/*
 *  Copyright (C) 2015 Boudhayan Gupta <me@BaloneyGeek.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 */

#ifndef KSIMAGEWIDGET_H
#define KSIMAGEWIDGET_H

#include <QLabel>
#include <QColor>
#include <QMouseEvent>
#include <QPoint>
#include <QPixmap>
#include <QGraphicsDropShadowEffect>

class KSImageWidget : public QLabel
{
    Q_OBJECT

    public:

    explicit KSImageWidget(QWidget *parent = 0);
    void setScreenshot(const QPixmap &pixmap);

    signals:

    void dragInitiated();

    protected:

    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    private:

    QGraphicsDropShadowEffect *mDSEffect;
    QPoint                     mDragStartPosition;
};

#endif // KSIMAGEWIDGET_H