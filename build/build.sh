# create individual object files
clang++ -o balance.o     -include ../includes/chem.hpp -cpp ../src/chem/balance.cpp
clang++ -o eq_eval.o     -include ../includes/chem.hpp -cpp ../src/chem/eq_eval.cpp
clang++ -o format_expr.o -include ../includes/chem.hpp -cpp ../src/chem/format_expr.cpp
clang++ -o parse.o       -include ../includes/chem.hpp -cpp ../src/chem/parse.cpp
clang++ -o therm_eval.o  -include ../includes/chem.hpp -cpp ../src/chem/therm_eval.cpp

# link into final executable
clang++ -o chemproj balance.o eq_eval.o format_expr.o parse.o therm_eval.o
