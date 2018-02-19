// Coderbyte challenge one
// find the factorial of a number

#include <iostream>
using namespace std;


int first_factorial (int);


int main ()
{
  int user_entry;
  bool off_on = true;
  
  cout << "enter an integer between 1 and 18. The program will then return it's factorial" << endl;
  
  while (off_on)
    {
      cin >> user_entry;
      
      if ( user_entry < 1 || user_entry > 18)
	{ cout << "please enter a integer between 1 and 18 ";
	  off_on = true;
	}
      else
	{
	  off_on = false;;
	}
    }
  
  int result = first_factorial(user_entry);
  cout << endl << " The factorial is: " << result;
}



int first_factorial (int Usr_entr)
{
 
  
  for (counter; counter > 0; counter--)
    {

      cout << " counter " << counter << " product of fact " << Prodcut_of_factorial << endl;
      Prodcut_of_factorial = Prodcut_of_factorial * counter;
    }

  return(Prodcut_of_factorial);
  
}
