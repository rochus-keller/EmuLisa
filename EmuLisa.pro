QT       -= core gui widgets

TARGET = emulisa

TEMPLATE = app

INCLUDEPATH += .. . /home/me/Downloads/wx3.0.5-gtk/include/wx-3.0 /home/me/Downloads/wx3.0.5-gtk/lib/wx/include/gtk2-unicode-static-3.0

DEFINES += _DEBUG __WXGTK__

# ALLOW2MBRAM FULL2MBRAM ALLOWSERIALA IPC_COMMENTS IPC_COMMENT_REGS USE_RAW_BITMAP_ACCESS NO_RAW_BITMAP_ACCESS
# DEBUG DEBUGMEMCALLS DEBUGLOG_ON_START TRACE

QMAKE_CFLAGS += -std=c99

QMAKE_CXXFLAGS += -Wno-reorder -Wno-unused-parameter -Wno-unused-function -Wno-unused-variable

LIBS += -L/home/me/Downloads/wx3.0.5-gtk/lib -pthread   /home/me/Downloads/wx3.0.5-gtk/lib/libwx_gtk2u_qa-3.0.a /home/me/Downloads/wx3.0.5-gtk/lib/libwx_baseu_net-3.0.a /home/me/Downloads/wx3.0.5-gtk/lib/libwx_gtk2u_html-3.0.a /home/me/Downloads/wx3.0.5-gtk/lib/libwx_gtk2u_adv-3.0.a /home/me/Downloads/wx3.0.5-gtk/lib/libwx_gtk2u_core-3.0.a /home/me/Downloads/wx3.0.5-gtk/lib/libwx_baseu-3.0.a -pthread -lgthread-2.0 -lX11 -lXxf86vm -lSM -lgtk-x11-2.0 -lgdk-x11-2.0 -latk-1.0 -lgio-2.0 -lpangoft2-1.0 -lpangocairo-1.0 -lgdk_pixbuf-2.0 -lcairo -lpango-1.0 -lfontconfig -lgobject-2.0 -lglib-2.0 -lfreetype -lwxregexu-3.0 -lwxtiff-3.0 -lwxjpeg-3.0 -lwxpng-3.0 -lz -ldl -lm

LIBS += -lSDL2

HEADERS += \
    common.h \
    hqx.h \
    cops.h \
    extra-defines.h \
    extrablue.h \
    fliflo_queue.hpp \
    floppy.h \
    icon_bitmap.h \
    keyscan.h \
    keytable.h \
    lisa_cpp_configs.h \
    lisaemframe.h \
    lisawin.h \
    mem68k.h \
    mmu.h \
    ui.h \
    unglobals.h \
    vars.h \
    z8530_structs.h \ 
    built_by.h \
    common.h \
    cpu68k.h \
    def68k-funcs.h \
    def68k-iibs.h \
    def68k-proto.h \
    generator.h \
    hqx.h \
    libdc42.h \
    machine.h \
    reg68k.h \
    registers.h \
    cpu68k-inline.h \
    reg68k.h \
    diss68k.h \
    gui/LisaConfig.h \
    gui/LisaConfigFrame.h \
    gui/LisaSkin.h \
    gui/LisaVKB.h \
    gui/terminalwx_frame.h \
    term/terminalinputevent.h \
    term/terminalwx.h \
    term/wxterm.h \
    term/gterm.hpp \
    printer/imagewriter-wx.h \
    printer/iwfonts.h

SOURCES += \
    crt/hq3x-3x.cpp \
    crt/hq3x.cpp \
    cpu_board/irq.c \
    cpu_board/memory.c \
    cpu_board/mmu.c \
    cpu_board/rom.c \
    cpu_board/romless.c \
    io_board/cops.c \
    io_board/floppy.c \
    io_board/via6522.c \
    io_board/z8530.c \
    io_board/z8530-pty.c \
    io_board/z8530-tty.c \
    io_board/z8530-telnetd.c \
    motherboard/fliflo_queue.c \
    motherboard/glue.c \
    motherboard/symbols.c \
    motherboard/unvars.c \
    motherboard/vars.c \
    libdc42/libdc42.c \
    cpu68k/cpu68k-0.c \
    cpu68k/cpu68k-1.c \
    cpu68k/cpu68k-2.c \
    cpu68k/cpu68k-3.c \
    cpu68k/cpu68k-4.c \
    cpu68k/cpu68k-5.c \
    cpu68k/cpu68k-6.c \
    cpu68k/cpu68k-7.c \
    cpu68k/cpu68k-8.c \
    cpu68k/cpu68k-9.c \
    cpu68k/cpu68k-a.c \
    cpu68k/cpu68k-b.c \
    cpu68k/cpu68k-c.c \
    cpu68k/cpu68k-d.c \
    cpu68k/cpu68k-e.c \
    cpu68k/cpu68k-f.c \
    cpu68k/reg68k.c \
    cpu68k/cpu68k.c \
    gui/LisaConfig.cpp \
    gui/LisaConfigFrame.cpp \
    gui/lisaem_wx.cpp \
    gui/LisaSkin.cpp \
    gui/z8530-terminal.cpp \
    gui/lisaem_static_resources.cpp \
    term/actions.cpp \
    term/gterm.cpp \
    term/keytrans.cpp \
    term/states.cpp \
    term/utils.cpp \
    term/vt52_states.cpp \
    term/wxterm.cpp \
    printer/imagewriter-wx.cpp \
    term/terminalinputevent.cpp \
    storage/profile.c \
    storage/hle.c \
    cpu68k/ui_log.c
