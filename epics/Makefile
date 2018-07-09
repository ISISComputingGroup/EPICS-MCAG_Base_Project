TOP = ../../../../extensions/master
include $(TOP)/configure/CONFIG

# only build one of these
#DIRS := m-epics-eemcu
DIRS := epicsIOC

DIRS += simulator

simulator_DEPEND_DIRS += epicsIOC

include $(TOP)/configure/RULES_DIRS_INT
