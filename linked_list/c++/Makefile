.SUFFIXES: .o .c .cpp
.PHONY: clean all dep

CFLAGS = -g -D_DEBUG -std=c++11

INCLUDES := -I.

SOURCES  := $(patsubst unit_test.cpp,,$(wildcard *.c *.cpp))
ALLOBJS  := $(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(SOURCES)))
OBJS     := $(patsubst unit_test%,,$(ALLOBJS))

#LIBS     := -lrt -lpthread

TARGET   := runme
DEPEND   := .depend

all: check dep $(TARGET) run

$(TARGET): $(OBJS)
	g++ -o $@ $^ $(LDFLAGS) $(LIBS)

run:
	./$(TARGET)

.c.o:
	g++ $(CFLAGS) $(INCLUDES) -c $< -o $@

.cpp.o:
	g++ $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(ALLOBJS) $(TARGET) $(DEPEND)

dep: $(SOURCES)
	g++ $(INCLUDES) -MM $^ > $(DEPEND)

check: cpplint cppcheck

cppcheck:
	@hash cppcheck 2>&- || (echo "cppcheck is not installed!!"&&exit 1)
	@cppcheck $(INCLUDES) --enable=all --inconclusive --std=c++11 \
		--suppress=missingIncludeSystem --debug-warnings --check-config $(SOURCES) \
		|| exit 1

cpplint:
	@hash cpplint 2>&- \
		|| (echo "cpplint is not installed!!. Run 'pip install cpplint'" && exit 1)
	@cpplint $(wildcard *.cpp *.hpp *.h)

-include $(DEPEND)