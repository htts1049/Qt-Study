# Codes below must be written.

# TEMPLATE is type to build.
TEMPLATE = app

# TARGET is name of application or library.
TARGET = name_of_the_app

# QT is library to use in this project.
QT = core gui

# We need to define the version of QT we use.
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# Header and Source files also can be added by developer.
# HEADERS += first_file.h second_file.h
# SOURCES += first_file.cpp second_file.cpp

SOURCES += \
    main.cpp
