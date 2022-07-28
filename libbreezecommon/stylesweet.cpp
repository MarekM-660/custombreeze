/*
 * SPDX-FileCopyrightText: 2022 MarekM-660 <kacper5szymanski@gmail.com>
 *
 * SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only OR LicenseRef-KDE-Accepted-GPL
 */

#include "stylesweet.h"

namespace Breeze
{
void RenderStyleSweet18By18::renderCloseIcon()
{
    painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        painter->setBrush(QBrush(QGradient(QGradient::FruitBlend)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRect(QRectF(2, 2, 14, 14));
        else
            painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        pen.setWidthF(1.5);
        pen.setColor(QColor(159, 29, 43));
        painter->setPen(pen);
        if (boldButtonIcons) {
            // thicker pen in titlebar
            pen.setWidthF(pen.widthF() * 1.75);
        }

        RenderDecorationButtonIcon18By18::renderCloseIcon();
    }
}

void RenderStyleSweet18By18::renderMaximizeIcon()
{
    painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        painter->setBrush(QBrush(QGradient(QGradient::MillenniumPine)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRect(QRectF(2, 2, 14, 14));
        else
            painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        pen.setWidthF(1.5);
        pen.setColor(QColor(20, 115, 25));
        pen.setJoinStyle(Qt::BevelJoin);
        painter->setPen(pen);
        if (boldButtonIcons) {
            // thicker pen in titlebar
            pen.setWidthF(pen.widthF() * 1.666666);
        }

        // large square
        painter->drawRoundedRect(QRectF(QPointF(5, 5), QPointF(13, 13)), 0.025, 0.025, Qt::RelativeSize);
    }
}

void RenderStyleSweet18By18::renderRestoreIcon()
{
    painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        painter->setBrush(QBrush(QGradient(QGradient::MillenniumPine)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRect(QRectF(2, 2, 14, 14));
        else
            painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        pen.setWidthF(1.5);
        pen.setColor(QColor(20, 115, 25));
        pen.setJoinStyle(Qt::BevelJoin);
        painter->setPen(pen);
        if (boldButtonIcons) {
            // thicker pen in titlebar
            pen.setWidthF(pen.widthF() * 1.3);
        }

        // overlapping windows icon
        // foregreound square
        painter->drawRect(QRectF(QPointF(4.5, 6.5), QPointF(11.5, 13.5)));

        // background square
        painter->drawPolyline(QVector<QPointF>{QPointF(6.5, 6), QPointF(6.5, 4.5), QPointF(13.5, 4.5), QPointF(13.5, 11.5), QPointF(12, 11.5)});
    }
}

void RenderStyleSweet18By18::renderMinimizeIcon()
{
    painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        painter->setBrush(QBrush(QGradient(QGradient::SunnyMorning)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRect(QRectF(2, 2, 14, 14));
        else
            painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        pen.setWidthF(1.75);
        pen.setColor(QColor(205, 110, 25));
        painter->setPen(pen);
        if (boldButtonIcons) {
            // thicker pen in titlebar
            pen.setWidthF(pen.widthF() * 1.75);
        }

        // horizontal line
        painter->drawLine(QPointF(4.5, 9.5), QPointF(13.5, 9.5));
    }
}

void RenderStyleSweet18By18::renderKeepBehindIcon()
{
    painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        painter->setBrush(QBrush(QGradient(QGradient::AngelCare)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered || isChecked)
            painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered || isChecked)
            painter->drawRect(QRectF(2, 2, 14, 14));
        else
            painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered || isChecked)
            painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered || isChecked) {
        pen.setWidthF(1.5);
        pen.setColor(QColor(113, 55, 57));
        painter->setPen(pen);
        if (boldButtonIcons) {
            // thicker pen in titlebar
            pen.setWidthF(pen.widthF() * 1.1);
        }

        // two down arrows
        painter->drawPolyline(QVector<QPointF>{QPointF(4, 5), QPointF(9, 10), QPointF(14, 5)});

        painter->drawPolyline(QVector<QPointF>{QPointF(4, 9), QPointF(9, 14), QPointF(14, 9)});
    }
}

void RenderStyleSweet18By18::renderKeepInFrontIcon()
{
    painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        painter->setBrush(QBrush(QGradient(QGradient::SleeplessNight)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered || isChecked)
            painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered || isChecked)
            painter->drawRect(QRectF(2, 2, 14, 14));
        else
            painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered || isChecked)
            painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered || isChecked) {
        pen.setWidthF(1.5);
        pen.setColor(QColor(46, 36, 75));
        painter->setPen(pen);
        if (boldButtonIcons) {
            // thicker pen in titlebar
            pen.setWidthF(pen.widthF() * 1.1);
        }

        // two up arrows
        painter->drawPolyline(QVector<QPointF>{QPointF(4, 9), QPointF(9, 4), QPointF(14, 9)});

        painter->drawPolyline(QVector<QPointF>{QPointF(4, 13), QPointF(9, 8), QPointF(14, 13)});
    }
}

void RenderStyleSweet18By18::renderContextHelpIcon()
{
    painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        painter->setBrush(QBrush(QGradient(QGradient::SandStrike)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRect(QRectF(2, 2, 14, 14));
        else
            painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        pen.setWidthF(1.5);
        pen.setColor(QColor(46, 36, 75));

        if ((!notInTitlebar) && boldButtonIcons) {
            // thicker pen in titlebar
            pen.setWidthF(pen.widthF() * 1.6);
        }

        pen.setJoinStyle(Qt::RoundJoin);
        painter->setPen(pen);

        RenderDecorationButtonIcon18By18::renderContextHelpIcon();
    }
}

void RenderStyleSweet18By18::renderShadeIcon()
{
    painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        painter->setBrush(QBrush(QGradient(QGradient::GrassShampoo)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRect(QRectF(2, 2, 14, 14));
        else
            painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        pen.setWidthF(1.5);
        pen.setColor(QColor(5, 110, 30));
        painter->setPen(pen);

        if ((!notInTitlebar) && boldButtonIcons) {
            // thicker pen in titlebar
            pen.setWidthF(pen.widthF() * 1.3);
        }
        painter->drawLine(QPointF(5, 4.5), QPointF(13, 4.5));
        painter->drawPolyline(QVector<QPointF>{QPointF(5, 13), QPointF(9, 8), QPointF(13, 13)});
    }
}

void RenderStyleSweet18By18::renderUnShadeIcon()
{
    painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        painter->setBrush(QBrush(QGradient(QGradient::GrassShampoo)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        painter->drawRect(QRectF(2, 2, 14, 14));
    } else {
        // draw a square-shaped button
        painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        pen.setWidthF(1.5);
        pen.setColor(QColor(5, 110, 30));
        painter->setPen(pen);

        if ((!notInTitlebar) && boldButtonIcons) {
            // thicker pen in titlebar
            pen.setWidthF(pen.widthF() * 1.3);
        }
        painter->drawLine(QPointF(5, 4.5), QPointF(13, 4.5));
        painter->drawPolyline(QVector<QPointF>{QPointF(5, 8), QPointF(9, 13), QPointF(13, 8)});
    }
}

void RenderStyleSweet18By18::renderPinOnAllDesktopsIcon()
{
    painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        painter->setBrush(QBrush(QGradient(QGradient::CrystalRiver)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRect(QRectF(2, 2, 14, 14));
        else
            painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        pen.setWidthF(1.5);
        pen.setColor(QColor(50, 74, 125));
        painter->setPen(pen);

        if ((!notInTitlebar) && boldButtonIcons) {
            // thicker pen in titlebar
            pen.setWidthF(pen.widthF() * 1.3);
        }
        RenderDecorationButtonIcon18By18::renderPinOnAllDesktopsIcon();
    }
}

void RenderStyleSweet18By18::renderPinnedOnAllDesktopsIcon()
{
    painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        painter->setBrush(QBrush(QGradient(QGradient::CrystalRiver)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        painter->drawRect(QRectF(2, 2, 14, 14));
    } else {
        // draw a square-shaped button
        painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        pen.setWidthF(1.5);
        pen.setColor(QColor(50, 74, 125));
        painter->setPen(pen);

        if ((!notInTitlebar) && boldButtonIcons) {
            // thicker pen in titlebar
            pen.setWidthF(pen.widthF() * 1.3);
        }
        RenderDecorationButtonIcon18By18::renderPinnedOnAllDesktopsIcon();
    }
}

void RenderStyleSweet18By18::renderApplicationMenuIcon()
{
    painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        painter->setBrush(QBrush(QGradient(QGradient::AquaGuidance)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRect(QRectF(2, 2, 14, 14));
        else
            painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        pen.setWidthF(1.5);
        pen.setColor(QColor(40, 70, 130));
        painter->setPen(pen);

        if ((!notInTitlebar) && boldButtonIcons) {
            // thicker pen in titlebar
            pen.setWidthF(pen.widthF() * 1.3);
        }
        painter->drawRect(QRectF(5, 4.5, 8, 0.75));
        painter->drawRect(QRectF(5, 8.5, 8, 0.75));
        painter->drawRect(QRectF(5, 12.5, 8, 0.75));
    }
}

}
