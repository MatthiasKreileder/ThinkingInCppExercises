

CC = g++
FLAGS = -g -c

BOOST_INCLUDE := /home/matthias/Development/install_dir
BOOST_LIB := /home/matthias/Development/install_dir/boost_install_dir/lib/
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

MYLIB := mattslib.a
OUTPUT_FILES := exe main.o $(MYLIB) check

all: dir exe

dir:
	mkdir -p $(BUILDDIR) $(TESTBUILD)

#
# Executable
#
exe : main.cpp lib 
	$(CC) $< $(MYLIB) -o $@

#
# Library
#
lib: $(OBJECTS)
	ar rvs $(MYLIB) $^

$(OBJECTS): $(BUILDDIR)/%.o : $(SOURCEDIR)/%.cpp $(HEADERS)
	$(CC) $(FLAGS) $< -o $@

#
# Test
#
check : $(TESTOBJ) $(MYLIB)
	$(CC) $^ -L ${BOOST_LIB} $(BOOST_LIB_NAMES) -Wl,-rpath=${BOOST_LIB} -o $@

# This lines means: "All files in the list $(TESTOBJ) should be created by compiling the corresponding .cpp file into a .o file"
$(TESTOBJ): $(TESTBUILD)/%.o : $(TESTDIR)/%.cpp
	$(CC) -I ${BOOST_INCLUDE} $(FLAGS) $< -o $@

#
# Phony
#
.PHONY : clean
clean:
	rm -f $(BUILDDIR)/*o $(TESTBUILD)/*o $(OUTPUT_FILES) $(TESTDIR)/*~ *~ *.txt
