char my_putchar(char c);

void my_print_comb2(void) {
  char first;
  char second;
  char third;
  char fourth;
  char coma;
  char space;
  first = '0';
  second = '0';
  third = '0';
  coma = ',';
  space = ' ';

  for (first = '0' ; first < 58 ; first = first + 1)
    {
      for (second = '0' ; second < 58 ; second = second + 1)
	{
	  for (third = '0' ; third < 58 ; third = third + 1)
	    {
	      for (fourth = '0' ; fourth < 58 ; fourth = fourth + 1)
		{
		  if (first != third || second != fourth )
		    {
		      if (first <= third && second <= fourth)
			{
			  my_putchar(first);
			  my_putchar(second);
			  my_putchar(space);
			  my_putchar(third);
			  my_putchar(fourth);

			  if (first != '9' || second != '8' || third != '9' || fourth != '9')
			    {
			      my_putchar(coma);
			      my_putchar(space);
			    }
			}
		      else if (first < third)
			{
			  my_putchar(first);
			  my_putchar(second);
			  my_putchar(space);
			  my_putchar(third);
			  my_putchar(fourth);

			  if ( first != '9' || second != '8' || third != '9' || fourth != '9')
			    {
			      my_putchar(coma);
			      my_putchar(space);
			    }
			}
		    }
		}
	    }
	}
    }
}
