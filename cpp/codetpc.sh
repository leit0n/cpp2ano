#!/bin/bash


touch temp_file


current_hour=$(date +%H)
mv temp_file "${current_hour}.txt"

echo "Ficheiro criado com o nome: ${current_hour}.txt"
