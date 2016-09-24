#include "Parser.h"

Parser::Parser()
{

}
string Parser::getCommandRef(string cmd)
{
  if(cmd == "nano")
  {
    return "A basic text editor\n";
  }
  else if(cmd == "ls")
  {
    return "Lists files in directory\n";
  }
  else if(cmd == "sl")
  {
    return "Not what you think it does\n";
  }
  return "reference \n";
}
