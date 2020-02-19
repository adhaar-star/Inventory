#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

void Inventory::sell()
{
  if(m_in_stock>0){
  m_in_stock--;
}
}


ostream& operator<<(ostream& stream, const Inventory& item)
{
  if(item.m_in_stock==0){
    stream << "Sorry, that item is out of stock";
  }
  else{
 
  stream << item.m_name << " $"
         << std::fixed << std::setprecision(2) << item.m_price;

}
return stream;
}
