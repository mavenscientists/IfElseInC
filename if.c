  /**  
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    * 
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * Copyright 2013 Maven Scientists http://mavenscientists.com
    */

 /**
   * @author	Maven Scientists (http://mavenscientists.com) 
   * @email	info@mavenscientists.com
   * IfElse - This program describes the if-else construct in C
   */

#include <stdio.h>

int main()
{
	int number;
	
	printf("Enter Number: ");
	scanf("%d", &number);
	
	if(10 <= number)
	{
		printf("\nThe number is greater than or equal to 10");
	}
	else
	{
		printf("\nThe number is less than 10");
	}
	
	return 0;
}
