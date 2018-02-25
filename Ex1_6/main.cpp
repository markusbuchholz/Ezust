# required if you want to see qDebug() messages
CONFIG += debug

# place auto-generated files in "invisible" subdirectories
win32 {
        MOC_DIR = _MOC
        UI_DIR = ui
        OBJECTS_DIR = _OBJ
} else {
        UI_DIR = .ui
        MOC_DIR = .moc
        OBJECTS_DIR = .obj
}

# rules below apply to TEMPLATE=app projects only:
app {
        # place executable in same folder:
        DESTDIR=$$OUT_PWD

# don`t place executables in an app bundle on mac os
# this also permits console apps to work on the mac

mac {
     CONFIG -= app_bundle
    }

# open a console for stdin, stdout, and stderr Windows:
Win32 {
        CONFIG += console
        }

}
