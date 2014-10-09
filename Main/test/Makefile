-include ../../build/Makefile.common

# exec name
TARGET=$(BINDIR)/test
TARGET_DBG=$(BINDIR)/dbg_test

# build flag
CPPFLAGS=$(CPPFLAGS_DBG) $(TESTFLAGS)
# library for build 
LIBS=$(LIBS_TST)

# source file for build 
SRC=$(BUILDSRC)
SRC+=$(shell ls $(SRCDIR)/*.$(SRCEXT))
# 本体ソースコードでmain関数を含むファイル名（プロジェクト毎の設定）
MAINSRC=main.cpp

# object file for build
OBJS = $(patsubst %.$(SRCEXT),$(OBJDIR)/%.o,$(filter-out $(MAINSRC),$(notdir $(SRC))))
OBJS += $(CMNLIB)

-include ../../build/Makefile.exe_rule
-include ../../build/Makefile.util

$(OBJDIR)/%.o : $(SRCDIR)/%.$(SRCEXT)
	$(CPP) $(CPPFLAGS) $(INCLUDES) -c -o $@ $<

.PHONY: report list

report:
	$(TARGET) --gtest_output=xml

list:
	$(TARGET) --gtest_list_tests


