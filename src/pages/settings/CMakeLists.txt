add_library(settingspage
    settingspage.ui
    settingspage.cpp
    settingspage.h
)
target_link_libraries(settingspage PRIVATE Qt6::Widgets)  