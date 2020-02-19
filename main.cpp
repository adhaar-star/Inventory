#include <iostream>
#include "Inventory.h"

using std::cin;
using std::cout;
using std::string;

int main()
{
  char choice = 'q';
  Inventory stock("Cupcake",2.99,100);

  do
  {
    cout<<"\nMENU\n====\n(S)ell item\n(Q)uit\n>";
    cin>>choice;
    if( choice == 'S' || choice == 's' )
    {
      stock.sell();
      cout<<stock<<"\n";
    }
    else if( choice != 'q' && choice != 'Q' )
    {
      cout<<"Please enter S or Q\n";
    }
  }while( choice != 'q' && choice != 'Q');

  return 0;
}
