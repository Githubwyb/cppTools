cc = g++  -pthread -g -Wall -std=c++11
prom = getBin
deps = $(shell find ./ -name "*.hpp")
src = $(shell find ./ -name "*.cpp")
obj = $(src:%.cpp=%.o)

$(prom): $(obj)
	$(cc) -o $(prom) $(obj)

%.o: %.cpp $(deps)
	$(cc) -c $< -o $@

clean:
	rm -rf $(obj) $(prom)
