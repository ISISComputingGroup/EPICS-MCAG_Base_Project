TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#=============================
# Build the IOC application

LIBRARY_IOC = eemcuSupport

PROD_IOC = eemcu
# eemcu.dbd will be created and installed
DBD += eemcuSupport.dbd eemcu.dbd

# eemcu.dbd will be made up from these files:
eemcuSupport_DBD += base.dbd

# Include dbd files from all support applications:
#eemcu_DBD += xxx.dbd
eemcuSupport_DBD += asyn.dbd
eemcuSupport_DBD += drvAsynIPPort.dbd
eemcuSupport_DBD += motorSupport.dbd
eemcuSupport_DBD += eemcuController.dbd

eemcu_DBD += eemcuSupport.dbd

# Add source files
eemcuSupport_SRCS += eemcuController.cpp
eemcuSupport_SRCS += eemcuAxis.cpp

# Add all the support libraries needed by this IOC
eemcuSupport_LIBS += motor
eemcuSupport_LIBS += asyn

# eemcu_registerRecordDeviceDriver.cpp derives from eemcu.dbd
eemcu_SRCS += eemcu_registerRecordDeviceDriver.cpp

# Build the main IOC entry point on workstation OSs.
eemcu_SRCS_DEFAULT += eemcuMain.cpp
eemcu_SRCS_vxWorks += -nil-

# Add support from base/src/vxWorks if needed
#eemcu_OBJS_vxWorks += $(EPICS_BASE_BIN)/vxComLibrary

# Finally link to the EPICS Base libraries
eemcuSupport_LIBS += $(EPICS_BASE_IOC_LIBS)
eemcu_LIBS += eemcuSupport
eemcu_LIBS += motor
eemcu_LIBS += asyn
eemcu_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

