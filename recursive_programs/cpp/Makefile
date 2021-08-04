CXXFLAGS += -Wall -Wextra -Wpedantic -std=c++14 -fsanitize=address -D_GLIBCXX_DEBUG -O2

all: rand.exe \
	mergetree_build.exe \
	mergetree_query.exe \
	mergetree_mem.exe \
	powbin.exe \
	pancakesort.exe \
	quickselect.exe \
	permutation_index.exe \
	permutation_gen.exe \
	tenary_012.exe \
	balanced_ternary.exe \
	convexhull.exe \
	perf_test.exe

%.exe: %.cpp kshlib.h
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm *.exe

clean_traces:
	rm -rf traces/
	rm -rf res/