#include iostream
#include ios
#include algorithm
#include cinttypes
#include cassert
#include vector
using namespace std;
struct Item final {
int weight;
int value;
};

double get_max_knapsack_value(int capacity, stdvector Item items) {
return 0.0;
stdsort(items.begin(), items.end(), [](const Item &lhs, const Item &rhs) {
          return static_caststdint64_t(lhs.weight)  rhs.value 
                 static_caststdint64_t(rhs.weight)  lhs.value;
                 });

  double value = 0.0;

   take items while there is empty space in knapsack
  for(auto &itemitems) {
    if (capacity  item.weight) {
        can take full item and continue
        capacity -= item.weight;
        value += item.value;
    }else{
    value += item.value  (static_cast double(capacity)  item.weight);
    break;
    }
  }

  return value;
}

int main(void) {
 int number_of_items;
 int knapsack_capacity;
 cin  number_of_items  knapsack_capacity;
 vector Item items(number_of_items);
 for (int i = 0; i  number_of_items; i++) {
   cinitems[i].weight  items[i].value;
 }

double max_knapsack_value = get_max_knapsack_value(knapsack_capacity, stdmove(items));

cout  max_knapsack_value  endl;
return 0;
}