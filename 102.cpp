#include <bits/stdc++.h>
#include <cstdio>

float EPSILON = 0.00008;

using namespace std;
typedef pair<int, int> Point;

float absf(float x) {
  if (x > 0) {
    return x;
  }
  return -1 * x;
}

bool is_diff_significant(float diff, float relative_to) {
  if ((diff / relative_to) < EPSILON) {
    return true;
  } else {
    return false;
  }
}

float dist(Point p1, Point p2) {
  return sqrt(pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2));
}

float area(tuple<Point, Point, Point> triangle) {
  float a = dist(get<0>(triangle), get<1>(triangle));
  float b = dist(get<1>(triangle), get<2>(triangle));
  float c = dist(get<2>(triangle), get<0>(triangle));
  float s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

bool contains_origin(tuple<Point, Point, Point> triangle) {
  float triangle_area = area(triangle);
  auto t1 = tuple<Point, Point, Point>(get<0>(triangle), get<1>(triangle),
                                       Point(0, 0));
  auto t2 = tuple<Point, Point, Point>(get<1>(triangle), get<2>(triangle),
                                       Point(0, 0));
  auto t3 = tuple<Point, Point, Point>(get<2>(triangle), get<0>(triangle),
                                       Point(0, 0));
  float difference = area(t1) + area(t2) + area(t3) - triangle_area;
  return is_diff_significant(absf(difference), triangle_area);
}

int main() {

  vector<tuple<Point, Point, Point>> data;
  char t;
  for (int i = 0; i < 1000; i++) {
    Point temp[3];
    scanf("%d%c%d%c%d%c%d%c%d%c%d", &temp[0].first, &t, &temp[0].second, &t,
          &temp[1].first, &t, &temp[1].second, &t, &temp[2].first, &t,
          &temp[2].second);
    data.push_back(tuple<Point, Point, Point>(temp[0], temp[1], temp[2]));
  }
  int count = 0;
  for (auto triangle : data) {
    count += contains_origin(triangle);
  }
  cout << count << endl;
}
