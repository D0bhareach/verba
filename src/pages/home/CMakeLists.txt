add_library(homepage
    homepage.ui
    homepage.cpp
    homepage.h
)
target_link_libraries(homepage PRIVATE Qt6::Widgets)  