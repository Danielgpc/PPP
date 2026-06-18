// Try this 4.3.1 (page 86)

#include "PPPheaders.h"

double area(int x, int y) {
  return x * y;
}

/*
/Users/danielgp/Projects/PPP/chapter 4/try this 4.3.2.cpp:11:12: error: 
      use of undeclared identifier 'arena'; did you mean 'area'?
   11 |   int x0 = arena(7, 2);
      |            ^~~~~
      |            area
/Users/danielgp/Projects/PPP/chapter 4/try this 4.3.2.cpp:5:8: note: 
      'area' declared here
    5 | double area(int x, int y) {
      |        ^
/Users/danielgp/Projects/PPP/chapter 4/try this 4.3.2.cpp:12:12: error: 
      no matching function for call to 'area'
   12 |   int x1 = area(7);
      |            ^~~~
/Users/danielgp/Projects/PPP/chapter 4/try this 4.3.2.cpp:5:8: note: 
      candidate function not viable: requires 2 arguments, but 1 was
      provided
    5 | double area(int x, int y) {
      |        ^    ~~~~~~~~~~~~
/Users/danielgp/Projects/PPP/chapter 4/try this 4.3.2.cpp:13:12: error: 
      no matching function for call to 'area'
   13 |   int x2 = area("seven", 2);
      |            ^~~~
/Users/danielgp/Projects/PPP/chapter 4/try this 4.3.2.cpp:5:8: note: 
      candidate function not viable: no known conversion from
      'const char[6]' to 'int' for 1st argument
    5 | double area(int x, int y) {
      |        ^    ~~~~~
3 errors generated.
*/

int main()
{
  int x0 = arena(7, 2);
  int x1 = area(7);
  int x2 = area("seven", 2);
}