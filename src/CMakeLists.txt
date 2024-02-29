qt_add_executable(verba
    mainwindow.ui
    mainwindow.cpp
    main.cpp
)
# add other libraries when you need them
# for now add only Qt6 because we use it
target_link_libraries(verba PRIVATE Qt6::Widgets)

set_target_properties(verba PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)
