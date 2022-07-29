#ifndef BREEZE_STYLESWEET_H
#define BREEZE_STYLESWEET_H

/*
 * SPDX-FileCopyrightText: 2022 MarekM-660 <kacper5szymanski@gmail.com>
 *
 * SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only OR LicenseRef-KDE-Accepted-GPL
 */

#include "renderdecorationbuttonicon.h"

#include <QPainter>

namespace Breeze
{

class RenderStyleSweet18By18 : public RenderDecorationButtonIcon18By18
{
public:
    /**
     * @brief Constructor - calls constructor of base class
     *
     * @param painter A QPainter object already initialised with an 18x18 reference window and pen.
     * @param notInTitlebar Indicates that button is not to be drawn in the title bar, but somewhere else in the UI -- ususally means will be smaller
     * @param boldButtonIcons When in titlebar this will draw bolder button icons if true
     */
    RenderStyleSweet18By18(QPainter *painter,
                           const bool notInTitlebar,
                           const bool boldButtonIcons,
                           const qreal devicePixelRatio,
                           const bool iconScaleFactor,
                           const QSharedPointer<InternalSettings> internalSettings)
        : RenderDecorationButtonIcon18By18(painter, notInTitlebar, boldButtonIcons, devicePixelRatio, iconScaleFactor)
        , m_internalSettings{internalSettings} {};

    void renderCloseIcon() override;
    void renderMaximizeIcon() override;
    void renderRestoreIcon() override;
    void renderMinimizeIcon() override;
    void renderKeepBehindIcon() override;
    void renderKeepInFrontIcon() override;
    void renderContextHelpIcon() override;
    void renderShadeIcon() override;
    void renderUnShadeIcon() override;
    void renderPinOnAllDesktopsIcon() override;
    void renderPinnedOnAllDesktopsIcon() override;
    void renderApplicationMenuIcon() override;

private:
    const QSharedPointer<InternalSettings> m_internalSettings;
};

}

#endif
