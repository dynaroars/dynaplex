CXXFLAGS += -Wall -Wextra -Wpedantic -std=c++14 -fsanitize=address -D_GLIBCXX_DEBUG

all: rand.exe \
	mergetree_build.exe \
	mergetree_query.exe \
	mergetree_mem.exe

%.exe: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm *.exe
