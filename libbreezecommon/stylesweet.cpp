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
    m_painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        m_painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        m_painter->setBrush(QBrush(QGradient(QGradient::FruitBlend)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            m_painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            m_painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRect(QRectF(2, 2, 14, 14));
        else
            m_painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            m_painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        m_pen.setWidthF(1.5);
        m_pen.setColor(QColor(159, 29, 43));
        m_painter->setPen(m_pen);
        if (m_boldButtonIcons) {
            // thicker pen in titlebar
            m_pen.setWidthF(m_pen.widthF() * 1.75);
        }

        RenderDecorationButtonIcon18By18::renderCloseIcon();
    }
}

void RenderStyleSweet18By18::renderMaximizeIcon()
{
    m_painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        m_painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        m_painter->setBrush(QBrush(QGradient(QGradient::MillenniumPine)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            m_painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            m_painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRect(QRectF(2, 2, 14, 14));
        else
            m_painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            m_painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        m_pen.setWidthF(1.5);
        m_pen.setColor(QColor(20, 115, 25));
        m_pen.setJoinStyle(Qt::BevelJoin);
        m_painter->setPen(m_pen);
        if (m_boldButtonIcons) {
            // thicker pen in titlebar
            m_pen.setWidthF(m_pen.widthF() * 1.666666);
        }

        // large square
        m_painter->drawRoundedRect(QRectF(QPointF(5, 5), QPointF(13, 13)), 0.025, 0.025, Qt::RelativeSize);
    }
}

void RenderStyleSweet18By18::renderRestoreIcon()
{
    m_painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        m_painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        m_painter->setBrush(QBrush(QGradient(QGradient::MillenniumPine)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            m_painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            m_painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRect(QRectF(2, 2, 14, 14));
        else
            m_painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            m_painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        m_pen.setWidthF(1.5);
        m_pen.setColor(QColor(20, 115, 25));
        m_pen.setJoinStyle(Qt::BevelJoin);
        m_painter->setPen(m_pen);
        if (m_boldButtonIcons) {
            // thicker pen in titlebar
            m_pen.setWidthF(m_pen.widthF() * 1.3);
        }

        // overlapping windows icon
        // foregreound square
        m_painter->drawRect(QRectF(QPointF(4.5, 6.5), QPointF(11.5, 13.5)));

        // background square
        m_painter->drawPolyline(QVector<QPointF>{QPointF(6.5, 6), QPointF(6.5, 4.5), QPointF(13.5, 4.5), QPointF(13.5, 11.5), QPointF(12, 11.5)});
    }
}

void RenderStyleSweet18By18::renderMinimizeIcon()
{
    m_painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        m_painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        m_painter->setBrush(QBrush(QGradient(QGradient::SunnyMorning)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            m_painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            m_painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRect(QRectF(2, 2, 14, 14));
        else
            m_painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            m_painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        m_pen.setWidthF(1.75);
        m_pen.setColor(QColor(205, 110, 25));
        m_painter->setPen(m_pen);
        if (m_boldButtonIcons) {
            // thicker pen in titlebar
            m_pen.setWidthF(m_pen.widthF() * 1.75);
        }

        // horizontal line
        m_painter->drawLine(QPointF(4.5, 9.5), QPointF(13.5, 9.5));
    }
}

void RenderStyleSweet18By18::renderKeepBehindIcon()
{
    m_painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        m_painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        m_painter->setBrush(QBrush(QGradient(QGradient::AngelCare)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered || isChecked)
            m_painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            m_painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered || isChecked)
            m_painter->drawRect(QRectF(2, 2, 14, 14));
        else
            m_painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered || isChecked)
            m_painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            m_painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered || isChecked) {
        m_pen.setWidthF(1.5);
        m_pen.setColor(QColor(113, 55, 57));
        m_painter->setPen(m_pen);
        if (m_boldButtonIcons) {
            // thicker pen in titlebar
            m_pen.setWidthF(m_pen.widthF() * 1.1);
        }

        // two down arrows
        m_painter->drawPolyline(QVector<QPointF>{QPointF(4, 5), QPointF(9, 10), QPointF(14, 5)});

        m_painter->drawPolyline(QVector<QPointF>{QPointF(4, 9), QPointF(9, 14), QPointF(14, 9)});
    }
}

void RenderStyleSweet18By18::renderKeepInFrontIcon()
{
    m_painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        m_painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        m_painter->setBrush(QBrush(QGradient(QGradient::SleeplessNight)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered || isChecked)
            m_painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            m_painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered || isChecked)
            m_painter->drawRect(QRectF(2, 2, 14, 14));
        else
            m_painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered || isChecked)
            m_painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            m_painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered || isChecked) {
        m_pen.setWidthF(1.5);
        m_pen.setColor(QColor(46, 36, 75));
        m_painter->setPen(m_pen);
        if (m_boldButtonIcons) {
            // thicker pen in titlebar
            m_pen.setWidthF(m_pen.widthF() * 1.1);
        }

        // two up arrows
        m_painter->drawPolyline(QVector<QPointF>{QPointF(4, 9), QPointF(9, 4), QPointF(14, 9)});

        m_painter->drawPolyline(QVector<QPointF>{QPointF(4, 13), QPointF(9, 8), QPointF(14, 13)});
    }
}

void RenderStyleSweet18By18::renderContextHelpIcon()
{
    m_painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        m_painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        m_painter->setBrush(QBrush(QGradient(QGradient::SandStrike)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            m_painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            m_painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRect(QRectF(2, 2, 14, 14));
        else
            m_painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            m_painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        m_pen.setWidthF(1.5);
        m_pen.setColor(QColor(46, 36, 75));

        if (m_boldButtonIcons) {
            // thicker pen in titlebar
            m_pen.setWidthF(m_pen.widthF() * 1.6);
        }

        m_pen.setJoinStyle(Qt::RoundJoin);
        m_painter->setPen(m_pen);

        RenderDecorationButtonIcon18By18::renderContextHelpIcon();
    }
}

void RenderStyleSweet18By18::renderShadeIcon()
{
    m_painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        m_painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        m_painter->setBrush(QBrush(QGradient(QGradient::GrassShampoo)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            m_painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            m_painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRect(QRectF(2, 2, 14, 14));
        else
            m_painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            m_painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        m_pen.setWidthF(1.5);
        m_pen.setColor(QColor(5, 110, 30));
        m_painter->setPen(m_pen);

        if (m_boldButtonIcons) {
            // thicker pen in titlebar
            m_pen.setWidthF(m_pen.widthF() * 1.3);
        }
        m_painter->drawLine(QPointF(5, 4.5), QPointF(13, 4.5));
        m_painter->drawPolyline(QVector<QPointF>{QPointF(5, 13), QPointF(9, 8), QPointF(13, 13)});
    }
}

void RenderStyleSweet18By18::renderUnShadeIcon()
{
    m_painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        m_painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        m_painter->setBrush(QBrush(QGradient(QGradient::GrassShampoo)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        m_painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        m_painter->drawRect(QRectF(2, 2, 14, 14));
    } else {
        // draw a square-shaped button
        m_painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        m_pen.setWidthF(1.5);
        m_pen.setColor(QColor(5, 110, 30));
        m_painter->setPen(m_pen);

        if (m_boldButtonIcons) {
            // thicker pen in titlebar
            m_pen.setWidthF(m_pen.widthF() * 1.3);
        }
        m_painter->drawLine(QPointF(5, 4.5), QPointF(13, 4.5));
        m_painter->drawPolyline(QVector<QPointF>{QPointF(5, 8), QPointF(9, 13), QPointF(13, 8)});
    }
}

void RenderStyleSweet18By18::renderPinOnAllDesktopsIcon()
{
    m_painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        m_painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        m_painter->setBrush(QBrush(QGradient(QGradient::CrystalRiver)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            m_painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            m_painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRect(QRectF(2, 2, 14, 14));
        else
            m_painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            m_painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        m_pen.setWidthF(1.5);
        m_pen.setColor(QColor(50, 74, 125));
        m_painter->setPen(m_pen);

        if (m_boldButtonIcons) {
            // thicker pen in titlebar
            m_pen.setWidthF(m_pen.widthF() * 1.3);
        }
        RenderDecorationButtonIcon18By18::renderPinOnAllDesktopsIcon();
    }
}

void RenderStyleSweet18By18::renderPinnedOnAllDesktopsIcon()
{
    m_painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        m_painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        m_painter->setBrush(QBrush(QGradient(QGradient::CrystalRiver)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        m_painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        m_painter->drawRect(QRectF(2, 2, 14, 14));
    } else {
        // draw a square-shaped button
        m_painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        m_pen.setWidthF(1.5);
        m_pen.setColor(QColor(50, 74, 125));
        m_painter->setPen(m_pen);

        if (m_boldButtonIcons) {
            // thicker pen in titlebar
            m_pen.setWidthF(m_pen.widthF() * 1.3);
        }
        RenderDecorationButtonIcon18By18::renderPinnedOnAllDesktopsIcon();
    }
}

void RenderStyleSweet18By18::renderApplicationMenuIcon()
{
    m_painter->setPen(Qt::NoPen);

    // set button color
    if (isInactive) {
        m_painter->setBrush(QBrush(QColor(91, 92, 99)));
    } else {
        m_painter->setBrush(QBrush(QGradient(QGradient::AquaGuidance)));
    }

    if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeCircle) {
        // draw a button in a circle shape
        if (isHovered)
            m_painter->drawEllipse(QPointF(9, 9), 8.5, 8.5);
        else
            m_painter->drawEllipse(QPointF(9, 9), 7, 7);
    } else if (m_internalSettings->customButtonShape() == InternalSettings::EnumCustomButtonShape::ShapeSquare) {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRect(QRectF(2, 2, 14, 14));
        else
            m_painter->drawRect(QRectF(3, 3, 12, 12));
    } else {
        // draw a square-shaped button
        if (isHovered)
            m_painter->drawRoundedRect(QRectF(2, 2, 14, 14), 30, 30, Qt::RelativeSize);
        else
            m_painter->drawRoundedRect(QRectF(3, 3, 12, 12), 30, 30, Qt::RelativeSize);
    }

    if (isHovered) {
        m_pen.setWidthF(1.5);
        m_pen.setColor(QColor(40, 70, 130));
        m_painter->setPen(m_pen);

        if (m_boldButtonIcons) {
            // thicker pen in titlebar
            m_pen.setWidthF(m_pen.widthF() * 1.3);
        }
        m_painter->drawRect(QRectF(5, 4.5, 8, 0.75));
        m_painter->drawRect(QRectF(5, 8.5, 8, 0.75));
        m_painter->drawRect(QRectF(5, 12.5, 8, 0.75));
    }
}

}
