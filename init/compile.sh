#!/bin/bash

# Solicita o nome do arquvio C
echo "Digite o nome do arquivo C (sem a extensão .c):"
read file

# Verifica se o arquivo existe
if [ -f "$file.c" ]; then
	echo "Compilando $file.c..."
	# compila o arquivo
	gcc "$file.c" -o "$file"

	# Veify
	if [ $? -eq 0 ]; then
		echo "Compilação ben-sucedida!"
		echo "Executando o programa..."
		echo "__--------------------__"

		# Executa o programa Compilado
		./"$file"
	else
		echo "Erro na compilação!"
	fi
else
	echo "Arquivo $file.c não encontrado!"
	echo "Arquivos C disponível no diretóiro:"
	ls *.c 2>/dev/null || echo "Nenum arquivo .c encontrado"
fi
