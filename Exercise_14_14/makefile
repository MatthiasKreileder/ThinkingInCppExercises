

CC = g++
FLAGS = -g -c

BOOST_ROOT := /home/matt/Dev/boost_install_dir/
BOOST_INCLUDE := $(BOOST_ROOT)/include/
BOOST_LIB := $(BOOST_ROOT)/lib/
BOOST_LIB_NAMES := -lboost_test_exec_monitor -lboost_unit_test_framework

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

project = bin
MYLIB := mattslib.a
OUTPUT_FILES := exe main.o $(MYLIB) check $(project)

all: dir $(project)

dir:
	mkdir -p $(BUILDDIR) $(TESTBUILD)

#
# Executable
#
$(project) : main.cpp $(MYLIB) 
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
	./check

# This lines means: "All files in the list $(TESTOBJ) should be created by compiling the corresponding .cpp file into a .o file"
$(TESTOBJ): $(TESTBUILD)/%.o : $(TESTDIR)/%.cpp
	$(CC) -I ${BOOST_INCLUDE} $(FLAGS) $< -o $@

#
# Phony
#
.PHONY : clean
clean:
	rm -f $(BUILDDIR)/*o $(TESTBUILD)/*o $(OUTPUT_FILES) $(TESTDIR)/*~ *~ *.txt
