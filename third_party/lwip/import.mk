LWIP_MODULE_NAME = lwip
LWIP_MODULE_PATH ?= $(PROJECT_ROOT)/third_party/$(LWIP_MODULE_NAME)
include $(LWIP_MODULE_PATH)/include.mk

LWIP_BUILD_PATH_EXT = $(BUILD_TARGET_PLATFORM)
LWIP_LIB_DIR = $(BUILD_PATH_BASE)/$(LWIP_MODULE_NAME)/$(LWIP_BUILD_PATH_EXT)
LWIP_LIB_DEP = $(LWIP_LIB_DIR)/lib$(LWIP_MODULE_NAME).a