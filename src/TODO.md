# TODO
* Split into multiple files and libraries for modularity, each page must be separate class.
use Qt6 trick with assigning parent of new qt widgets to the new widget to manage memory. Pages: Home, Edit, Settings.
* Question dropdown geometry depending on window size???
* Make use of QMenuBar in the ui file. And add a ComboBox to select page. Combobox must be added to the ui file.
And it must display icon instead of text.
* Use slots and connectors to make QStackedWidget react on selections in the ComboBox.
* Make / think about making page creation and desrtuction more dynamic. It's a shame to have all pages created
at start up and use resources, because they may never be used in this application run cycle.
```cpp
// Create a QStackedWidget
QStackedWidget *stackedWidget = new QStackedWidget(parent);

// Create and add the first child widget
QWidget *child1 = new QWidget;
stackedWidget->addWidget(child1);

// Create and add the second child widget
QWidget *child2 = new QWidget;
stackedWidget->addWidget(child2);

// Set the current widget to child1
stackedWidget->setCurrentWidget(child1);

// Later, you can switch to child2
stackedWidget->setCurrentWidget(child2);

// When you no longer need a child widget, you can remove it from the stacked widget and free its memory
stackedWidget->removeWidget(child1);
delete child1;
```