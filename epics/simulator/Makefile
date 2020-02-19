TOP=../epicsIOC

include $(TOP)/configure/CONFIG

PROD_IOC = MCGASim
 
USR_CFLAGS_WIN32 += -DSTART_WINSOCK2 -DUSE_WINSOCK2 -D__attribute__=//
#USR_CFLAGS_WIN32 += /W4 /Wall /TP /wd4820

MCGASim_SRCS_WIN32 += startWinSock.c
MCGASim_SYS_LIBS_WIN32 += ws2_32

MCGASim_SRCS += \
    cmd_EAT.c \
    cmd_IcePAP.c \
    cmd_TCPsim.c \
    hw_motor.c \
    main.c \
    sock-util.c \
    cmd.c \
    cmd_buf.c

MCGASim_SRCS_WIN32 += gettimeofday.c

MCGASim_LIBS += $(EPICS_BASE_IOC_LIBS)

include $(TOP)/configure/RULES

uninstall:
distclean: realclean
