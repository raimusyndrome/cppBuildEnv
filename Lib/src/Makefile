-include ../../build/Makefile.common

# exec name
TARGET=$(BINDIR)/$(LIBNAME)
TARGET_DBG=$(BINDIR)/dbg_$(LIBNAME)

# build flag
# 個別に追加のフラグが必要な場合はCXXFLAGS_DBG,CXXFLAGS_RELの両方に追加すること
# CXXFLAGS_DBG+=
# CXXFLAGS_REL+=
CXXFLAGS=$(CXXFLAGS_DBG)
# library for build 
# 個別に追加のライブラリが必要な場合はLIBS_DBG,LIBS_RELの両方に追加すること
# LIBS_DBG+=
# LIBS_REL+=
LIBS=$(LIBS_DBG)

# source file for build 
SRC=$(BUILDSRC)
# object file for build
OBJS = $(patsubst %.$(SRCEXT),$(OBJDIR)/%.o,$(notdir $(SRC)))

-include ../../build/Makefile.lib_rule
-include ../../build/Makefile.util

# 追加のルールは（必要であれば）これより下に記述する

