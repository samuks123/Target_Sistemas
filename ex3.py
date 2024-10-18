import json

# Carregando o arquivo
def calcular_faturamento(arquivo_json):
    with open(arquivo_json, 'r') as file:
        dados = json.load(file)

    # Filtra os valores para ignorar faturamento zero
    faturamento_validos = [dia['valor'] for dia in dados if dia['valor'] > 0]

    # Obtendo valores mínimos, máximos e média
    if faturamento_validos:
        menor_faturamento = min(faturamento_validos)
        maior_faturamento = max(faturamento_validos)
        media_faturamento = sum(faturamento_validos) / len(faturamento_validos)
    else:
        menor_faturamento = 0
        maior_faturamento = 0
        media_faturamento = 0

    # Conta os dias com faturamento acima da média
    dias_acima_da_media = len([valor for valor in faturamento_validos if valor > media_faturamento])

    # Imprimindo os resultados
    print(f'Menor faturamento: R${menor_faturamento:.2f}')
    print(f'Maior faturamento: R${maior_faturamento:.2f}')
    print(f'Dias com faturamento acima da média: {dias_acima_da_media}')

# Chamada da função
calcular_faturamento('dados.json')