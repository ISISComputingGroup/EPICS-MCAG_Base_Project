TOP = ../../../../extensions/master
include $(TOP)/configure/CONFIG

# only build one of these
#DIRS := m-epics-eemcu
DIRS := epicsIOC
ifneq ($(findstring linux,$(EPICS_HOST_ARCH)),)
DIRS := $(DIRS) simulator
endif

include $(TOP)/configure/RULES_DIRS_INT
