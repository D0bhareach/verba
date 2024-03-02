add_library(editpage
    editpage.ui
    editpage.cpp
    editpage.h
)
target_link_libraries(editpage PRIVATE Qt6::Widgets)  
