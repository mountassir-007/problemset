#include <unistd.h>
void ft_putchar(char x){
	write(1, &x, 1);
	return 0;
}
void ft_print_reverse_alphabet(void){
	char i;
	i="z";
	while(i>="a"){
		ft_putchar(i);
		i--;
	}
}
