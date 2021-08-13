################################################################################
# CPL
################################################################################
MAKEFILE_PATH := makefiles
include $(MAKEFILE_PATH)/global.mk
PROJECT_TYPE := header
SRC_DIRS :=
################################################################################
# TARGETS
################################################################################
# Default targets
include $(MAKEFILE_PATH)/targets.mk

.PHONY: gen
gen::
	python3 ./tool/gen_pp/gen_pp.py
