

CC = g++
FLAGS = -g -c

BOOST_INCLUDE := /home/matt/Dev/boost_install_dir/include/
BOOST_LIB := /home/matt/Dev/boost_install_dir/lib/
BOOST_LIB_NAMES := -lboost_test_exec_monitor -lboost_unit_test_framework

PROJECT := backwards_printer

INCLUDEDIR = include
SOURCEDIR = src
BUILDDIR = build
TESTDIR = test
TESTBUILD = testbuild

SOURCES = $(wildcard $(SOURCEDIR)/*.cpp)
OBJECTS = $(patsubst $(SOURCEDIR)/%.cpp,$(BUILDDIR)/%.o,$(SOURCES))
HEADERS = $(wildcard $(INCLUDEDIR)/*.h)
TESTSRC = $(wildcard $(TESTDIR)/*.cpp)
TESTOBJ = $(patsubst $(TESTDIR)/%.cpp,$(TESTBUILD)/%.o,$(TESTSRC))

MYLIB := mattslib.a
OUTPUT_FILES := $(PROJECT) main.o $(MYLIB) check $(PROJECT)

all: dir $(PROJECT)

dir:
	mkdir -p $(BUILDDIR) $(TESTBUILD)

#
# Executable
#
$(PROJECT) : main.cpp $(MYLIB) 
	$(CC) $< $(MYLIB) -o $@

#
# Library
#
$(MYLIB): $(OBJECTS)
	ar rvs $(MYLIB) $^

$(OBJECTS): $(BUILDDIR)/%.o : $(SOURCEDIR)/%.cpp $(HEADERS)
	$(CC) $(FLAGS) $< -o $@

#
# Test
#
check : $(TESTOBJ) $(MYLIB)
	$(CC) $^ -L ${BOOST_LIB} $(BOOST_LIB_NAMES) -Wl,-rpath=${BOOST_LIB} -o $@

# This lines means: "All files in the list $(TESTOBJ) should be created by compiling the corresponding .c files into .o files"
$(TESTOBJ): $(TESTBUILD)/%.o : $(TESTDIR)/%.cpp
	$(CC) -I ${BOOST_INCLUDE} $(FLAGS) $< -o $@

#
# Phony
#
.PHONY : clean
clean:
	rm -f $(BUILDDIR)/*o $(TESTBUILD)/*o $(OUTPUT_FILES) $(TESTDIR)/*~ *~ *.txt
