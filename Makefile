.PHONY: debug release test report gcov clean tag count dox indent

all:
	-@make -C Lib
	-@make -C Main

debug:
	-@make -C Lib debug
	-@make -C Main debug

release:
	-@make -C Lib release
	-@make -C Main release

test:
	-@make -C Lib test
	-@make -C Main test

report:
	-@make -C Lib report
	-@make -C Main report

gcov:
	-@make -C Lib gcov
	-@make -C Main gcov

clean:
	-@make -C Lib clean
	-@make -C Main clean

tag:
	-@make -C Lib tag
	-@make -C Main tag

count:
	-@make -C Lib count
	-@make -C Main count

dox:
	-@make -C Lib dox
	-@make -C Main dox

indent:
	-@make -C Lib indent
	-@make -C Main indent

