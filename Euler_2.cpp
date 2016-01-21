#include <iostream>
#include <cstring>



int main()
{
	
	int terms = 100;
	
	int x = 0;
	int y = 1;
	int z = 1;
	
	for(int i = 0; i < terms; i++)
	{
		std::cout << x << std::endl;
		
		x = y;
		y = z;
		z = x + y;
		
		if(z > 4000000){
		std::cout << "Nums getting too big, aborting" << std::endl;
			break;
		}
	}
	
	



	
	return 0;
}
