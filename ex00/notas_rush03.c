/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03 copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:15:03 by hbaldino          #+#    #+#             */
/*   Updated: 2021/04/04 22:09:50 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// declaração dos protótipos das funções que vao ser usadas aqui na função rush
void	ft_putchar(char c); // imprime 1 caractere
void	lateral_columns(int column, int line, int last_column, int last_line); // imprime as colunas laterais (pães)
void	middle_columns(int column, int line, int last_column, int last_line); // imprime as colunas do meio (recheio)

void	rush(int column, int line)
{
	// declaração das variaveis/ingredientes adicionais
	int last_column;
	int last_line;

	//inicialização das variaveis de ultima coluna e ultima linha 
	//com os valores passados como argumento na função rush
	last_column = column; 7
	last_line = line; 5

	// começamos com 1 pq nao estamos usando vetor (que por padrao começa no 0)
	// a gnt quis assim pq n tem dedo 0 na mão
	// inicializa com 1 pra que a condição seja falsa ao entrar no loop
	// senao, a condição seria eternamente verdade (ex. 7 = 7) e travariamos o pc do coleguinha
	line = 1;
	// while de fora nao imprime nada ele só controla o crescimento das linhas pra baixo
	while (line <= last_line) // pra controle das linhas (cresce vertical pra baixo)
	{
		// inicializa com 1 pra que a consição seja falsa ao entrar no loop
		// senao, a condição seria eternamente verdade (ex. 7 = 7) e travariamos o pc do coleguinha
		
		// e tbm serve pra voltar o cursor pro começo (pra escrever as colunas a partir da 1)
		column = 1;
		while (column <= last_column) // pra controle das colunas e aparecer as coisas (cresce horizontal pra direita)
		{
			lateral_columns(column, line, last_column, last_line); // pães
			middle_columns(column, line, last_column, last_line); //recheio
			column++;
		}
		ft_putchar('\n'); // pula linha
		line++; // aumenta o contador de linha em +1
	}
}

// função pães
// imprime primeira coluna e ultima coluna (vertical)
void	lateral_columns(int column, int line, int last_column, int last_line)
{
	// os dois if aqui cuidam dos cantos do retangulo
	
	// coluna 1 = coluna da esquerda E na primeira linha (canto de cima) 
	// ou na ultima (canto de baixo) ==> imprime A
	if (column == 1 && (line == 1 || line == last_line))
	{
		ft_putchar('A');
	}
	// coluna last column = coluna da direita E na primeira linha (canto de cima) 
	// ou na ultima (canto de baixo) ==> imprime C
	else if (column == last_column && (line == 1 || line == last_line))
	{
		ft_putchar('C');
	}
	
	// o que for coluna vertical (primeira ou ultima) mas nao for um canto
	else if (column == 1 || column == last_column)
	{
		ft_putchar('B');
	}
}

// função recheio
void	middle_columns(int column, int line, int last_column, int last_line)
{
	// se nao for primeira coluna E nao for a ultima coluna
	// ou seja, se eu tiver nas colunas do meio
	if (column > 1 && column < last_column)
	{
		// se nao for primeira linha E nao for a ultima linha
		// imprime espaço
		if (line > 1 && line < last_line)
		{
			ft_putchar(' ');
		}
		// se eu tiver na primeira ou na ultima linha 
		else
		{
			ft_putchar('B');
		}
	}
}
