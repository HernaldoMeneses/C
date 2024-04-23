/*  C - As Orgigens */
//      Dennis Ritchie - DEC PDP-11 SO - UNIX
//      Processo de desenvolvimento de uma linguagem mais antiga BCPL (ainda em uso) na Europa
//      ANSI (American National Standards Institute) versão de 1983 - Surge a Linguagem C Padronizada

/*  C - Linguagem de Médio Nível */
//      Poderosa
//      Desenvolvida
//      Fácil
//      distante de Assembly mas longe de Basic e Pascal
//      Combina Elementos de alto nível com a funcionalidade de linguagem assembly.
//
//Nível mais alto
//  Ada
//  modula-2
//  Pascal
//  Cobol
//  Fortran
//  Basic
//Médio nível
//  C++
//  C
//  Forth
//Nível mais Baixo
//  Assembly

//Médio nivel - manipula bits, bytes e endereços (elementos básicos do funcionamento do computador)
//Alto nivel - suportam o conceito de tipo sde dados.
//      tipo de dado - define um conjunto de valores que uma variável podke armazenar e o conjunto de operaç~eos que pode ser executado com essa variável.
//          tipos comuns - inteiro, caracter e real.
//          C - possue 5 tipos internos, mas não é rica em tipos como ADA e Pascal por exemplo

/*  C - Linguagem Estruturada */
    //Tecnicamente não. Porque linguagens estruturadas em blocos permitem que procedimentos e funções sejam declarados 
    // dentro de procedimentos e funções. C não permite.

    //Porém a compartimentalizaçao do código e dos dados faz de C uma linguagem estruturada
    // ainda que informalmente.

    //A compartimentalização utilizando sub-rotinas que empregam variáveis locais (temporárias)

    //Uma Linguagem estruturada permite muitas possibilidades na programçao.
    //Ela suporta, diretamente, diversas construções de laços (loops), como while, do-while e for.
    // Em linguagens estruturadas o uso de Goto é desencorajado ou proibido.
    // O principal componente estrutural de C é a Função.
    // Mas há também a compartimentalização via uso de blocos de código. (Grupo de comandos) entre chaves.

    if (x < 10) {
        printf("muito baixo, tente novamente\n");
        scanf("%d", &x);
    }


/* C - Uma Linguagem para Programadores */
    // Muitas linguagem são desenvolvidas para facilitar a vida dos utilizadores
    // Buscando que não programadores programem

    // C foi criada, influenciada e testada em campo por programadores profissionais.
    // C possui poucas restrições, poucas reclamações, estruturas de bloco, funções isoladas e um conjunto compacto de palavras-chave.

/* Compiladores Versus Interpretadores */
    // Os termos compiladores e interpretadores referen-se à maneira como um prorama é executado.
        //Existem dois métodos gerais (e não são definidos pela linguagem)
        //Compiladores e Interpretadores são programas que operam sobre o código-fonte de outro programa
            //Interpretadores lê o código-fonte linha por linha e executa a instrução da linha
            //Compiladores lê o o programa inteiro e converte-o em um código-objeto (binário)

            //Interpretadores sempre terão de estar presente na execução do programa
            //Compiladores apenas uma vez é o suficiente.


/* A Forma de um programa em C*/
    //32 palavras-chaves (reservadas) que, combinadas com a sintaxe formal de C, forma a linguagem.
    
    //C ANSI
    auto
    break
    case
    char
    const
    continue
    default
    do

    double
    else
    enum
    extern
    float
    for
    goto
    if

    int
    long
    register
    return
    short
    signed
    sizeof
    static

    struct
    switch
    typedef
    union
    unsigned
    void
    volatile
    while

    //Acrescentadas por compiladores C para explorar melhor a organização da memória da família de processadores 8088/8086
    // que suportam programação interlinguagens e interrupções.
    // As Mais Comuns
    asm
    _ss
    interrupt

    _cs
    cdecl
    near

    _ds
    far
    pascal

    _es
    huge

    //Uma palavra Chave não pode ser usada para nenhum outro propósito

    //Todo programa em C consiste em uma ou mais funçoes sendo a main() imprescindível.

/*A Biblioteca e a Linkedição*/
    //Todo Compilador C vem com a biblioteca C padrão de funções que realizam as tarefas necessárias mais comuns.
    // O Padrão C ANSI especifica o conjunto mínimo de funções, porém, os compiladores geralmente adicionam funções.
    // A biblioteca pode vir em um grande arquivo ou em arquivos separados.

    //Ao utilizar uma função contida na biblioteca padrão, o compilador C "memoriza" seu nome.
    //Em seguida, o linkeditor (linker) combina o código que você escreveu com o código-objeto já encontrado na biblioteca.
    //Alguns compiladores C têm seu próprio linkeditor, enquanto outros usam o padrão fornecido pelo sitema operacional.

/*Compilação Separada*/
    // C permite que um programa seja contido em muitos arquivos e que cada arquivo seja compilado separadamente.

/*Compilando um Programa em C*/
    // 1 - Criar
    // 2 - Compilar
    // 3 - Linkeditar

/*O Mapa de Memória de C*/
    // Pilha - diversus usos (endereço de retorno das chamdas de função, argumentos para funções, var locais e estado da CPU)
    // Heap - Livre, via funções de alocação dinâmicas, por exemplo, listas encadeadas e árvores.
    // Var Globais
    // Código

    // esse disposição exata pode variar de compilador para compilador e de ambiente para ambiente.

/*C Versus C++*/
    //C++ é uma versão extendida e melhorada de C, pois inclui a Orientação a Objeto


//pag. 22/816
//file:///L:/Linear_/Base-Jump_05/c-completo-total.pdf