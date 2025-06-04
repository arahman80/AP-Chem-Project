# create individual object files
clang++ -include ../includes/chem.hpp -cpp ../src/chem/balance.cpp
clang++ -include ../includes/chem.hpp -cpp ../src/chem/eq_eval.cpp
clang++ -include ../includes/chem.hpp -cpp ../src/chem/format_expr.cpp
clang++ -include ../includes/chem.hpp -cpp ../src/chem/parse.cpp
clang++ -include ../includes/chem.hpp -cpp ../src/chem/therm_eval.cpp

# link into final executable
clang++ -o chemproj balance.o eq_eval.o format_expr.o parse.o therm_eval.o
