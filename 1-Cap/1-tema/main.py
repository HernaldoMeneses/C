class Topico:
    def __init__(self, tema, tese, def_tese, solution, brain_storm, frases, tab):
        self.tema = tema
        self.tese = tese
        self.def_tese = def_tese
        self.solution = solution
        self.brain_storm = brain_storm
        self.frases = frases
        self.tab = tab

    def definir_tema(self, new_tema):
        self.tema = new_tema

    def definir_tese(self, new_tese):
        self.tese = new_tese
    
    def definir_def_tese(self, new_def_tese):
        self.def_tese = new_def_tese
    
    def definir_solution(self, new_solution):
        self.solution = new_solution
    
    def definir_brain_srotm(self, new_brain_srotm):
        self.brain_storm = new_brain_srotm

    def definir_frases(self, new_frases):
        self.frases = new_frases
    
    def definir_tab(self, new_tab):
        self.tab = new_tab

    def imprimir_informacoes(self):
        print(f"\nTema - : {self.tema}")
        print(f"\n\tTese - : {self.tese}")
        print(f"\n\tDefence - : {self.def_tese}")
        print(f"\n\tSolution - : {self.solution}")
        print(f"\nBrain_Storm - : {self.brain_storm}\n")
        cout =1
        for i in (self.frases):
            print(f"Frase - : {cout} {i}")
            cout = cout +1
        print(f"\nTab - : {self.tab}\n")

#_____________________________________________________________________/

file_ = 'desenv.txt'
def read_file(file_):
    # Nome do arquivo
    nome_arquivo = file_

    # Tente abrir o arquivo para leitura
    try:
        with open(nome_arquivo, 'r') as arquivo:
            # Leia o conteúdo do arquivo e armazene-o em uma variável
            conteudo = arquivo.read()

            # Exiba o conteúdo lido (opcional)
            #print("Conteúdo do arquivo:")
            #print(conteudo)
            return conteudo

    except FileNotFoundError:
        print(f"O arquivo '{nome_arquivo}' não foi encontrado.")
    except Exception as e:
        print(f"Ocorreu um erro: {e}")

#_____________________________________________________________________/

# Exemplo de uso da classe
tema_ = 'Origens de C e Padrão (ANSI)'
tese_ = 'Inventada e implementada por Dennis Ritchie em um DEC PDP-11 Muitas Variantes'
def_tese_ = read_file(file_)
solution_ = 'O ANSI (American National Standards Institute) em 1983, estabeleceu um comitê que definiria a Linguagem C'
brain_storm_ = [
    'Dennis Ritchie',
    'UNIX',
    'BCPL',
    'Martin Richards',
    'Ken Thompson',
    'Popularidade dos Microcomputadores',
    'Ausência de Padrões',
    'ANSI - American National Standards institute',
    'Compiladores']
frases_ = [
    'frase1','frase2']
tab_ =  {
    'Campo1': ['registe1', 'registe2', 'registe3', 'registe4'],
    'Campo2': [1, 2, 3, 4],
    'Campo3': ['registe1', 'registe2', 'registe3', 'registe4']
}

#print(tab)

topic1 = Topico(
    tema=tema_, 
    tese=tese_, 
    def_tese=def_tese_, 
    solution=solution_, 
    brain_storm=brain_storm_,
    frases=frases_,
    tab=tab_)
topic1.imprimir_informacoes()
