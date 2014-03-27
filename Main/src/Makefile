-include ../../build/Makefile_cmn

# exec name
TARGET=$(BINDIR)/sample
TARGET_DBG=$(BINDIR)/dbg_sample

# build flag
# 個別に追加のフラグが必要な場合はCPPFLAGS_DBG,CPPFLAGS_RELの両方に追加すること
# CPPFLAGS_DBG+=
# CPPFLAGS_REL+=
CPPFLAGS=$(CPPFLAGS_DBG)
# library for build 
# 個別に追加のライブラリが必要な場合はLIBS_DBG,LIBS_RELの両方に追加すること
# LIBS_DBG+=
# LIBS_REL+=
LIBS=$(LIBS_DBG)

# source file for build 
SRC=$(BUILDSRC)
# object file for build
OBJS = $(patsubst %.$(SRCEXT),$(OBJDIR)/%.o,$(notdir $(SRC)))
OBJS += $(CMNLIB)

-include ../../build/Makefile_exe_rule
-include ../../build/Makefile_util

# 追加のルールは（必要であれば）これより下に記述する

