#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

int get_max(vector<int> weights, vector<int> values)
{
   int max_index = 0;
   double maxi = 0;

   for(int i=0;i<weights.size();i++){
     if(weights[i] != 0 && (double)values[i]/weights[i] > maxi)
     {
       maxi = (double)values[i]/weights[i];
       max_index = i;
     }

   }
   return max_index;
}



double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;

  for(int i=0;i<weights.size();i++){
    if(capacity == 0)
    {
      return value;
    }
    int index = get_max(weights,values);  
    int a = std::min(capacity,weights[index]);
    value += a*(double)values[index]/weights[index];
    weights[index] -= a;
    capacity -= a; 
  }

  // write your code here

  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
