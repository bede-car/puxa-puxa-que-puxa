
#include "../include/push_swap.h"

void parsing_is_digit(char **argv)
{
	int 	index;
	int 	caracter;
	char	*arg;

	index = 0;
	while(argv[index])
	{
		caracter = 0;
		arg = ft_strtrim(argv[index], " "); //remove os espaços
		if(arg[caracter] == '+' || arg[caracter] == '-' ) // se o primeiro caracter for + ou - eu aceito e prossegue
			caracter++;
		if(arg[caracter] == '\0') // string não é nula
			{
			free(arg);
			exit(ERROR);
			}
		while(arg[caracter])//enquanto tiver caracter da string para conferir
		{
			if(ft_isdigit(arg[caracter]) == 0)
			{
				ft_printf("não é digito");
				exit(ERROR);
			}
			caracter++;//verifica o proximo
		}
		index++;//proxima string
	free(arg);
	}
}


void parse(char **argv)
{
	parsing_is_digit(argv);
}


	// parse
	// (recebe argumentos do terminal)
	// 	aceitar:
	// 		somente números [done]
	//		(int máx | int mín)
	// 		não duplicados
	// 		não ordenados