#!/bin/bash
# by H.Meneses
# To Learning C
#
# To push in gitHub

# Navegue até o diretóiro do projeto
cd ~/Desktop/C

# Verifiue os Status
#
git status

# Adicion os rquivos
#
git add .

echo "How Sms to identify Comiite?"
read sms_
# Do commit  whit sms indentify
git commit -m "$sms_"

# Set branch
git branch -M main

# Push
git push -u origin main
