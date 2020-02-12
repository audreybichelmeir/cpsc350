#include "HelloWorld.h"
#include <iostream>

using namespace std;
int main(int argc, char**argv)
{
  string hello = "Hello World";

Hello *h = new Hello();
cout << h->Print(hello) << endl;
delete h;

return 0;
}
