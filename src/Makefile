CC=gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c11
TEST_LIBS = -lcheck -lm -lpthread
SRC=s21_abs.c	s21_fabs.c\
	s21_sin.c	s21_cos.c\
	s21_fmod.c	s21_tan.c\
	s21_pow.c	s21_asin.c\
	s21_exp.c	s21_acos.c\
	s21_log.c	s21_sqrt.c\
	s21_ceil.c	s21_floor.c\
	s21_atan.c	check_value_x.c\
#
HEADER=s21_math.h
NAME=s21_math.a
OBJ=$(patsubst %.c, %.o, $(SRC))

.PHONY: all build test test_1 test_2 check clean m

all: build
	
build: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $?
%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

test: build test_s21math.c
	osascript -e "set volume 0"
	$(CC) $(CFLAGS) -c test_s21math.c -o test.o
	$(CC) test.o $(NAME) $(TEST_LIBS) -o test

test_1: build s21_math_test.c
	$(CC) $(CFLAGS) -c s21_math_test.c -o test.o
	$(CC) test.o $(NAME) $(TEST_LIBS) -o test

test_2: build s21_math_test_other.c
	$(CC) $(CFLAGS) -c s21_math_test_other.c -o test.o
	$(CC) test.o $(NAME) $(TEST_LIBS) -o test

gcov_report: clean build
	$(CC) $(CFLAGS) --coverage test_s21math.c $(SRC) s21_math.a $(TEST_LIBS) -o gcov_test
	chmod +x *
	./gcov_test
	lcov -t "gcov_test" -o gcov_test.info --no-external -c -d .
	genhtml -o report/ gcov_test.info
	open ./report/index.html

check:
	@cp ../materials/linters/CPPLINT.cfg .
	@python3 ../materials/linters/cpplint.py --extensions=c $(SRC) $(HEADER) test_s21math.c s21_math_test_other.c s21_math_test.c
	@rm -rf CPPLINT.cfg
	@cppcheck --enable=all --suppress=missingIncludeSystem --inconclusive --check-config $(SRC) $(HEADER) test_s21math.c s21_math_test_other.c s21_math_test.c
	
clean:
	osascript -e "set volume 3"
	say -v Victoria clean directory
	rm -rf *.gch *.out *.o *.a m *.gcda *.gcdo *.gcno test gcov_test gcov_test.info ./report

m: build
	@ $(CC) $(CFLAGS) m.c $(NAME) -o m
	@./m
