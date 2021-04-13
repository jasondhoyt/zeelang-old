
CC := g++
RM := rm -rf
MKDIR := mkdir -p
AR=ar -r

CFLAGS := -Wall --std=c++17 -Isrc/compiler -Isrc/compiler/ast

ifdef RELEASE
CFLAGS += -O3
else
CFLAGS += -O0 -g
endif

UNIT_TEST_LIB := lib/unit_test.a
UNIT_TEST_LIB_OBJECTS := \
	obj/unit_test_main.o

UNIT_TEST_CFLAGS := -Itests/unit/include

BINARY := zeelang
OBJECTS := \
	obj/ast.o \
	obj/main.o

all: $(BINARY) $(UNIT_TEST_LIB)

clean:
	$(RM) obj
	$(RM) lib

$(UNIT_TEST_LIB): $(UNIT_TEST_LIB_OBJECTS) | lib
	$(AR) $(UNIT_TEST_LIB) $(UNIT_TEST_LIB_OBJECTS)

$(BINARY): $(OBJECTS)
	$(CC) -o $(BINARY) $(OBJECTS)

obj/%.o: tests/unit/%.cpp | obj
	$(CC) $(CFLAGS) $(UNIT_TEST_CFLAGS) -c -o $@ $<

obj/%.o: src/%.cpp | obj
	$(CC) $(CFLAGS) -c -o $@ $<

obj/%.o: src/compiler/%.cpp | obj
	$(CC) $(CFLAGS) -c -o $@ $<

obj/%.o: src/compiler/ast/%.cpp | obj
	$(CC) $(CFLAGS) -c -o $@ $<

obj:
	$(MKDIR) obj

lib:
	$(MKDIR) lib
