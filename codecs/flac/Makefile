#---------------------------------------------------------------------------------
.SUFFIXES:
#---------------------------------------------------------------------------------

ifeq ($(strip $(DEVKITPRO)),)
$(error "Please set DEVKITPRO in your environment. export DEVKITPRO=<path to>devkitPro")
endif

ifeq ($(strip $(DEVKITARM)),)
$(error "Please set DEVKITARM in your environment. export DEVKITARM=<path to>devkitARM")
endif

ifeq ($(strip $(FEOSSDK)),)
$(error "Please set FEOSSDK in your environment. export FEOSSDK=<path to>FeOS/sdk")
endif

FEOSMK = $(FEOSSDK)/mk

#---------------------------------------------------------------------------------
# TARGET is the name of the output
# BUILD is the directory where object files & intermediate files will be placed
# SOURCES is a list of directories containing source code
# DATA is a list of directories containing data files
# INCLUDES is a list of directories containing header files
#---------------------------------------------------------------------------------
TARGET        := $(shell basename $(CURDIR))
BUILD         := build
SOURCES       := source
DATA          := data
INCLUDES      := include ../../include

DEFARCH		:= -marm

CONF_DEFINES = -DFLAC__INTEGER_ONLY_LIBRARY \
               -DHAVE_CONFIG_H \
               -DFLaC__INLINE=inline
CONF_USERLIBS = soundStream
CONF_CFLAGS	= -O3
include $(FEOSMK)/dynlib.mk

install: all
	@mkdir -p $(FEOSDEST)/data/FeOS/lib
	@cp $(TARGET).fx2 $(FEOSDEST)/data/FeOS/lib/$(TARGET).fx2
