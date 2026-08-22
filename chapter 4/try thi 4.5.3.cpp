// Try this 4.5.3 (page 94)

#include "PPPheaders.h"

constexpr int frame_width = 2;

int area(int x, int y) {
  if (x <= 0 || y <= 0)
    return -1;
  else return x * y;
}
int framed_area(int x, int y) {
  return area(x-frame_width, y-frame_width);
}

int main()
{
  int x, y, z;
  cin >> x >> y >> z;
  int area1 = area(x, y);
  if (area1 <= 0) 
    error("non-positive area");
  int area2 = framed_area(1, z);
  int area3 = framed_area(y, z);
  double ratio = double(area1)/area3;

  cout << "area1: " << area1 << '\n' << "area2: " << area2 << '\n' << "area3: " << area3 << '\n' << "ratio: " << ratio;
}