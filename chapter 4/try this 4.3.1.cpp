// Try this 4.3.1 (page 86)

#include "PPPheaders.h"

double area(int x, int y) {
  return x * y;
}

/*
/Users/danielgp/Projects/PPP/chapter 4/try this 4.3.1.cpp:7:21: error: 
      expected ')'
    7 |   int s1 = area(7, 2;
      |                     ^
/Users/danielgp/Projects/PPP/chapter 4/try this 4.3.1.cpp:7:16: note: 
      to match this '('
    7 |   int s1 = area(7, 2;
      |                ^
/Users/danielgp/Projects/PPP/chapter 4/try this 4.3.1.cpp:8:22: error: 
      expected ';' at end of declaration
    8 |   int s2 = area(7, 2)
      |                      ^
      |                      ;
/Users/danielgp/Projects/PPP/chapter 4/try this 4.3.1.cpp:10:17: warning: 
      missing terminating ' character [-Winvalid-pp-token]
   10 |   int s4 = area('7, 2);
      |                 ^
/Users/danielgp/Projects/PPP/chapter 4/try this 4.3.1.cpp:10:17: error: 
      expected expression
/Users/danielgp/Projects/PPP/chapter 4/try this 4.3.1.cpp:11:2: error: 
      expected ';' at end of declaration
   11 | }
      |  ^
      |  ;
/Users/danielgp/Projects/PPP/chapter 4/try this 4.3.1.cpp:11:2: error: 
      expected '}'
/Users/danielgp/Projects/PPP/chapter 4/try this 4.3.1.cpp:6:1: note: 
      to match this '{'
    6 | {
      | ^
1 warning and 6 errors generated.
*/

int main()
{
  int s1 = area(7, 2;
  int s2 = area(7, 2)
  Int s3 = area(7, 2);
  int s4 = area('7, 2);
}