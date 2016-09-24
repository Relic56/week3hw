#include <iostream>
//#include "Parser.h"
using namespace std;

void pyramid(string* loc, int levels)
{
  for(int i = 0; i < levels; i++)
  {
    for(int j = 0; j < levels - i; j++)
    {
      *loc += " ";
    }
    for(int k = 0; k <= i; k++)
    {
      *loc += "* ";
    }
    *loc += "\n";
  }
}

int main(int argc, char* argv[])
{
  //Parser p;
  //if(string(argv[1]).compare("-h") == 0)
  //{
  //  if(argc > 2)
  //  {
  //    cout<<p.getCommandRef(string(argv[2]);
  //  }
  //  else
  //  {
  //    cout << "Reference";
  //  }
  //}
  //else
  //{
    string pr = "";
    string* prLoc = &pr;
    int layers = atoi(*argv[1]);
    pyramid(prLoc,layers);
    cout<<*prLoc;
  //}
  //cout<<p.getCommandRef("nano");
  return 0;
}
