################# dependencies #################
### Qt/KDE
find_package(Qt${QT_MAJOR_VERSION} ${QT_MIN_VERSION} REQUIRED CONFIG COMPONENTS Widgets
             DBus)
find_package(KF5 ${KF5_MIN_VERSION} REQUIRED COMPONENTS Config GuiAddons ConfigWidgets
            WindowSystem I18n IconThemes)

################# Checking X11 and wayland ###########
#if(X11_FOUND AND XCB_XCB_FOUND)
#    set(HAVE_X11 ON)
#    set(X11_LIBRARIES XCB::XCB)
#endif()


# Wayland
#find_package (KF5 COMPONENTS
#    Wayland
#)

#if(KF5Wayland_FOUND)
#    set(HAVE_Wayland ON)
#    set(Wayland_LIBRARIES KF5::WaylandClient)
#endif()


#configure_file(lim/BuildConfig.h.cmake ${CMAKE_CURRENT_BINARY_DIR}/BuildConfig.h)

#add_subdirectory (lim/libdbusmenuqt)

################# breezestyle target #################
set(breezecommon_LIB_SRCS
    breezeboxshadowrenderer.cpp
    colortools.cpp
    decorationexceptionlist.cpp
    renderdecorationbuttonicon.cpp
    styleklassy.cpp
    stylekite.cpp
    styleoxygen.cpp
    styleredmond.cpp
    styleredmond10.cpp
    stylemacos.cpp
    stylesweet.cpp
    stylesystemicontheme.cpp
    setqdebug_logging.h
)

#set(breezecommon_LIM_SRCS
#    lim/AppMenuModel.cpp
#    lim/AppMenuButton.cpp
#    lim/AppMenuButtonGroup.cpp
#    lim/MenuOverflowButton.cpp
#    lim/Button.cpp
#    lim/TextButton.cpp
#)

#set(breezecommon_LIM_SRCS
#    lim/AppMenuModel.cpp
#    lim/AppMenuButton.cpp
#    lim/AppMenuButtonGroup.cpp
#    lim/BoxShadowHelper.cpp
#    lim/Button.cpp
#    lim/Decoration.cpp
#    lim/MenuOverflowButton.cpp
#    lim/TextButton.cpp
#)

kconfig_add_kcfg_files(breezecommon_LIB_SRCS ../kdecoration/breezesettings.kcfgc)

add_library(customcommon5 ${breezecommon_LIB_SRCS} ${breezecommon_LIM_SRCS})

generate_export_header(customcommon5
    BASE_NAME breezecommon
    EXPORT_FILE_NAME breezecommon_export.h)

target_link_libraries(customcommon5
    PUBLIC
        Qt::Core
        Qt::Gui
        KF5::GuiAddons
        KF5::ConfigCore
        KF5::ConfigGui
        KF5::ConfigWidgets


        #KF5::I18n
        #KF5::IconThemes
        #Qt::DBus
        #KF5::WindowSystem
        KDecoration2::KDecoration)

set_target_properties(customcommon5 PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION_MAJOR})

install(TARGETS customcommon5 ${KDE_INSTALL_TARGETS_DEFAULT_ARGS} LIBRARY NAMELINK_SKIP)
