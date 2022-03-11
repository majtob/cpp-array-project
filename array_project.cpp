//mujtaba alshabaan-Mohammed Swelah-
#include <iostream>
using namespace std;


int main(){
  string opration;
  char cont = 'y';

  while (cont == 'y') {
    //entring the opration
	cout<<"enter your opration \n"
		<<"add \t"
		<<"search \t"
		<<"update \t"
		<<"delete \t"
		<<"sort \t"
		<<"display \n";
    cin>>opration;

  	//get opration value.
    if(opration == "add")
    	cout<<"hello add";

    else if (opration == "search")
    	cout<<"hello search";

    else if(opration == "update")
    	cout<<"hello update";

    else
    	cout<<"plese enter one of the displayed oprations";

	cout << "\n want to continue the programe? (y/n)";
	cin>> cont;
  }

return 0;
}
