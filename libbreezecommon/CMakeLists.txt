################# dependencies #################
### Qt/KDE
find_package(Qt${QT_MAJOR_VERSION} ${QT_MIN_VERSION} REQUIRED CONFIG COMPONENTS Widgets)
find_package(KF5 ${KF5_MIN_VERSION} REQUIRED COMPONENTS Config GuiAddons ConfigWidgets)

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

kconfig_add_kcfg_files(breezecommon_LIB_SRCS ../kdecoration/breezesettings.kcfgc)

add_library(customcommon5 ${breezecommon_LIB_SRCS})

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
        KF5::ConfigWidgets)

set_target_properties(customcommon5 PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION_MAJOR})

install(TARGETS customcommon5 ${KDE_INSTALL_TARGETS_DEFAULT_ARGS} LIBRARY NAMELINK_SKIP)
