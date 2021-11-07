// https://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define MAX_NUMS 100

int main()
{
  string inp;
  string delimeter = "+";
  
  int nums[MAX_NUMS] = {0};
  int numCount = 0;

  getline(cin, inp);
  
  size_t pos = 0;
  while ((pos = inp.find(delimeter)) != string::npos) {
    nums[numCount++] = stoi(inp.substr(0, pos));

    inp.erase(0, pos + delimeter.length());
  }

  nums[numCount++] = stoi(inp.substr(0, pos));

  sort(nums, nums + numCount);
  
  for (int i = 0; i < numCount; ++i) {
    if (i > 0) cout << "+";
    cout << nums[i];
  }

  return 0;
}
