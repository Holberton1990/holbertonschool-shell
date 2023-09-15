#include <stdio.h>
void print_alphabet_10(void) 
{
	    int i;
	    char  ch;

		    for (i = 0; i < 10; i++)
			        {
					        for (ch = "a"; ch <= "z"; ch++)
							    {
								            printf(" %c", ch);
									        }
						    printf("\n");
				}

		    int main()
		    {
			        print_alphabet_10();
				    return 0;
		    }
}
