How to start an EPICS IOC ?

This driver has been tested against:
EPICS base (R3.14.12.5, R3.15.2)
motor record 6.8.1 or latest from github.

Beside that, we at ESS use an advanced make-system, which allows
to have different versions of different EPICS base/modules installed
side-by-side.

A shell script is included, which should find your EPICS installation
automaticaly and run the appropriate make steps, including starting the IOC.

You can try to use it like this:
$ cd epics/m-epics-TwinCATmotor
$ ./doit.sh

If you want to test other versions of base/asyn/motor, they can be installed
like this:
$ cd epics
$ ./install-epics.sh

This script will generate a "hidden file" like
.epics.somehost.example.com.Linux.x86_64, which is the used by doit.sh
