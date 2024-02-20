<!-- Título -->
# Exercício 1

***Conteúdo da Aula:***

Escreva um programa em **C** que forneça o fatorial de um número fornecido pelo usuário.

Para lembrar:

* Por exemplo, o fatorial de 2 (`2!`) é igual `2 * 1`, que é igual a 2.
* O fatorial de 4 (`4!`) é igual a `4 * 3 * 2 * 1`, que é igual a 24.

[Resolução](main.c)

> [!IMPORTANT]\
> **Boas práticas**:
>
> * Comentários Descritivos:
>   * Utilize comentários para descrever a finalidade das funções e trechos de código, tornando mais fácil para outros programadores entenderem o seu código.
>
> * Evitar o Uso de Magic Numbers:
>   * Evite o uso de números mágicos diretamente no código.
>   * Considere a possibilidade de criar constantes para valores específicos, como 0 e 1.
>
> * Validação de Entrada:
>   * Adicione verificações para garantir que o usuário insira um número inteiro válido.

> [!WARNING]\
> **Sugestões de melhoria**:
>
> * Limite de Entrada:
>   * Considere limitar o intervalo de entrada para valores que não ultrapassem a capacidade do tipo de dado usado (int) ou considere o uso de tipos de dados de maior capacidade, como long long para a entrada.
>
> * Iterativo vs. Recursivo:
>   * Embora a abordagem recursiva para calcular o fatorial seja válida, pode haver preocupações de desempenho para entradas muito grandes.
>   * Pode-se considerar uma abordagem iterativa para evitar o risco de estouro de pilha em chamadas recursivas profundas.

> [!NOTE]\
> **Observações**:
>
> * Complexidade Recursiva:
>   * A função calcularFatorial utiliza uma abordagem recursiva.
>   * Embora seja elegante, pode haver desafios de desempenho para entradas muito grandes devido à natureza da pilha de chamadas recursivas.
>
> * Manuseio de Números Negativos:
>   * O código já lida adequadamente com números negativos, informando que o fatorial não está definido para esses casos.

<!-- Informações -->
## &#8505; Informações

![Visitors](https://api.visitorbadge.io/api/visitors?path=Devsgeeknerd%2Fcla-exe-1-hor-pra-3-log-par-pro-com-bas&label=Visitantes&labelColor=%23700070&labelStyle=none&countColor=%23000fff&style=plastic&color=%23ffffff "Total de Visitantes")
&nbsp;
![Followers](https://img.shields.io/github/followers/Devsgeeknerd?style=p&label=Seguidores&labelColor=800080&color=000fff "Total de Seguidores")
&nbsp;
![Watchers](https://img.shields.io/github/watchers/Devsgeeknerd/cla-exe-1-hor-pra-3-log-par-pro-com-bas?style=p&label=Observadores&labelColor=800080&color=000fff "Total de Observadores")
&nbsp;
![Stars](https://img.shields.io/github/stars/Devsgeeknerd/cla-exe-1-hor-pra-3-log-par-pro-com-bas?style=p&label=Estrelas&labelColor=800080&color=000fff "Total de Estrelas")
&nbsp;
![Forks](https://img.shields.io/github/forks/Devsgeeknerd/cla-exe-1-hor-pra-3-log-par-pro-com-bas?style=p&label=Bifurcações&labelColor=800080&color=000fff "Total de Bifurcações")
&nbsp;
![Repo Size](https://img.shields.io/github/repo-size/Devsgeeknerd/cla-exe-1-hor-pra-3-log-par-pro-com-bas?style=p&label=Tamanho&labelColor=800080&color=000fff "Tamanho do Repositório")
&nbsp;
![License](https://img.shields.io/github/license/Devsgeeknerd/cla-exe-1-hor-pra-3-log-par-pro-com-bas?style=p&label=Licença&labelColor=800080&color=000fff "Licença do Repositório")
