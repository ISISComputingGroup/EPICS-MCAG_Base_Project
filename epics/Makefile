TOP = ../../../../extensions/master
include $(TOP)/configure/CONFIG

DIRS := m-epics-eemcu epicsIOC
ifneq ($(findstring linux,$(EPICS_HOST_ARCH)),)
DIRS := $(DIRS) simulator
endif

include $(TOP)/configure/RULES_DIRS_INT
