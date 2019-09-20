TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#=============================
# Build the IOC application

LIBRARY_IOC = eemcuSupport

PROD_IOC = EssMCAGmotor
# EssMCAGmotor.dbd will be created and installed
DBD += eemcuSupport.dbd EssMCAGmotor.dbd

# Include dbd files from all support applications:
#eemcu_DBD += xxx.dbd
eemcuSupport_DBD += EssMCAGmotorController.dbd

# EssMCAGmotor.dbd will be made up from these files:
EssMCAGmotor_DBD += base.dbd
EssMCAGmotor_DBD += asyn.dbd
EssMCAGmotor_DBD += drvAsynIPPort.dbd
EssMCAGmotor_DBD += motorSupport.dbd
EssMCAGmotor_DBD += eemcuSupport.dbd

# Add source files
eemcuSupport_SRCS += EssMCAGmotorController.cpp
eemcuSupport_SRCS += EssMCAGmotorAxis.cpp

# Add all the support libraries needed by this IOC
eemcuSupport_LIBS += motor
eemcuSupport_LIBS += asyn
eemcuSupport_LIBS += $(EPICS_BASE_IOC_LIBS)

# EssMCAGmotor_registerRecordDeviceDriver.cpp derives from EssMCAGmotor.dbd
EssMCAGmotor_SRCS += EssMCAGmotor_registerRecordDeviceDriver.cpp

# Build the main IOC entry point on workstation OSs.
EssMCAGmotor_SRCS_DEFAULT += EssMCAGmotorMain.cpp
EssMCAGmotor_SRCS_vxWorks += -nil-

# Add support from base/src/vxWorks if needed
#EssMCAGmotor_OBJS_vxWorks += $(EPICS_BASE_BIN)/vxComLibrary

# Finally link to the EPICS Base libraries
EssMCAGmotor_LIBS += eemcuSupport
EssMCAGmotor_LIBS += motor
EssMCAGmotor_LIBS += asyn
EssMCAGmotor_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE
EssMCAGmotor.dbd$(DEP): $(COMMON_DIR)/eemcuSupport.dbd
$(COMMON_DIR)/EssMCAGmotor.dbd: $(COMMON_DIR)/eemcuSupport.dbd

