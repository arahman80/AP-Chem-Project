#include <iostream>
#include <vector>
#include <string>

/* 
 * function prototype descriptions:
 *
 * std::vector<Coumpounnd> parse(std::string expr)
 * meant to scan and parse an inputted chemical equation to a machine readable format
 *
 * std::vector<Compound> balance(std::vector<Compound> expr)
 * takes a chemical expression and produces a balanced chemical equation (unit 1)
 *
 * int therm_eval(std::vector<Compound> expr) 
 * takes a chemical expression and returns the enthalpy (unit 6)
 *
 * equilexppr eq_eval(std::vector<Compound> expr)
 * takes a chemical equation and returns an equilibrium expression for it (unit 7)
 *
 * void format_expr(std::vector<Compound> expr)
 * prints out a formatted chemical expression
 */

/* function prototypes */
std::vector<Compound> parse       (std::string           expr);
std::vector<Compound> balance     (std::vector<Compound> expr);
int                   therm_eval  (std::vector<Compound> expr);
equilexpr             eq_eval     (std::vector<Compound> expr);
void                  format_expr (std::vector<Compound> expr);

/* entry point (idk why i'm labelling this) */
int
main()
{
  /*
   * project goals:
   * - display balanced chemical equation
   * - display thermochemical stuff
   * - show the equilibrium constant expression
   */
}

/* function implementations */
std::vector<Compound>
parse (std::string expr)
{}

std::vector<Compound>
balance (std::vector<Compound> expr)
{}

int
therm_eval (std::vector<Compound> expr)
{}

equilexpr
eq_eval (std::vector<Compound> expr)
{}

void
format_expr (std::vector<Compound> expr)
{}
