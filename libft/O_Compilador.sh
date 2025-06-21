#!/bin/bash

# Caminho do arquivo C a ser monitorado
FILE_TO_MONITOR="ft_strtrim.c"

# Verificar se o arquivo existe
if [[ ! -f "$FILE_TO_MONITOR" ]]; then
  echo "Erro: O arquivo $FILE_TO_MONITOR não foi encontrado!"
  exit 1
fi

echo "Monitorando o arquivo $FILE_TO_MONITOR para alterações..."

# Obtém o timestamp da última modificação do arquivo
LAST_MODIFICATION=$(stat -c %Y "$FILE_TO_MONITOR")

while true; do
  # Obtém a última modificação atual
  CURRENT_MODIFICATION=$(stat -c %Y "$FILE_TO_MONITOR")

  # Verifica se houve alteração no arquivo
  if [[ "$CURRENT_MODIFICATION" != "$LAST_MODIFICATION" ]]; then
    clear
    echo "O arquivo $FILE_TO_MONITOR foi alterado. Compilando e executando..."

    # Compila o código C
    gcc "$FILE_TO_MONITOR" -o output_program

    # Verifica se a compilação foi bem-sucedida
    if [[ $? -eq 0 ]]; then
      # Executa o programa compilado
      ./output_program "$FILE_TO_MONITOR"
    else
      echo "Erro: A compilação falhou."
    fi

    # Atualiza o timestamp da última modificação
    LAST_MODIFICATION=$CURRENT_MODIFICATION
  fi

  # Aguarda 1 segundo antes de verificar novamente
  sleep 1
done

