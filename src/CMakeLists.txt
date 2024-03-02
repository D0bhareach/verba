qt_add_executable(verba
    mainwindow.ui
    mainwindow.cpp
    main.cpp
)

target_link_libraries(verba PRIVATE Qt6::Widgets homepage editpage settingspage)  
set_target_properties(verba PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)
