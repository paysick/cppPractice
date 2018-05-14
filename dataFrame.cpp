// result = df [( df["price "] + 5.0 > 10.0) & (df["sales "] > 3)
// & ~df["taxed "]]["SKU"]
// print ( result )

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>

class Series
{
public:
  void *values;
  int size;

public:
  Series(std::vector<T> &arr)
      : values(arr) {}
};

main()
{
  std::vector<std::string> SKU = {"X4E", "S2B", "las", "C7X"};
  std::vector<double> Price = {7.0, 3.5, 7.3, 6.0};
  std::vector<int> Sales = {5, 3, 4, 10};
  std::vector<bool> Taxed = {false, false, true, false};

  Series<int> sales(Sales);
  Series<bool> taxed(Taxed);
  Series<std::string> sku(SKU);
  Series<double> price(Price);

  std::map<std::string, Series> DataFrame;
  std::map<std::string, Series> DataFrame;
  std::map<std::string, Series> DataFrame;
  std::map<std::string, Series> DataFrame;

  DataFrame.insert(std::pair<std::string, Series<int>>("sales", sales));
  DataFrame.insert(std::pair<std::string, Series<bool>>("taxed", taxed));
  DataFrame.insert(std::pair<std::string, Series<std::string>>("SKU", sku));
  DataFrame.insert(std::pair < std::string, Series<double>("price", price));

  std::cout << DataFrame["sales"].value[0] << std::endl;

  return 0;
}
