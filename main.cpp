#include <iostream>
#include "calculatorFunctions.cpp"

using namespace std;

int main() {
  node node1;
  node1.val = 6.0;
  node node2;
  node2.val = 7.0;
  enum opperator opp = ADD;

  float equation = calculate(node1.val, node2.val, opp);
  cout << "the solution to your equation is " << equation << endl;
  return 0;
}