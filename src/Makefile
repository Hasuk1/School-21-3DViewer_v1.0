CC := gcc
CFLAGS := -Wall -Wextra -Werror -std=c11
GCOVFLAGS := -fprofile-arcs -ftest-coverage
LDFLAGS := -lcheck -lgcov -fprofile-arcs --coverage
ifeq ($(shell uname), Linux)
    LDFLAGS += -lpthread -lrt -lm -lsubunit
    OPEN_CMD := xdg-open
else ifeq ($(shell uname), Darwin)
    OPEN_CMD := open
endif

SRC := $(wildcard modules/*.c)
OBJ = $(patsubst modules/%.c, obj/%.o, $(SRC))
OBJ_GCOV = $(patsubst modules/%.c, gcov_obj/%.o, $(SRC))
TEST_SRC := $(wildcard tests/test_*.c)
TEST_OBJ = $(patsubst tests/%.c, tests/%.o, $(TEST_SRC))

all:
	@rm -rf *.o test
	@clear
	@$(CC) $(CFLAGS) tests.c ../modules/source/parser.c -o test
	@./test
	@rm -rf test

clang: 
	@clang-format -i *.c ../modules/source/*.c ../modules/header/*.h
