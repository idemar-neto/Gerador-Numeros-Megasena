#import random as random

from random import sample

#random.seed() #inicia a semente dos número pseudo randômicos
#random.randrange(0, 9, 2) # pares entre 0 e 9
#random.choice('abcdefghij') # seleciona um dos elementos aleatoriamente
#items = [1, 2, 3, 4, 5, 6, 7]
#random.shuffle(items) # embaralha os itens aleatoriamente*

i=1
num = []
#mega = [17, 20, 22, 35, 41, 42] #RESULTADO DA MEGASENA PARA VERIFICAÇÃO

comando = input()
while comando != 'q': #num != mega

	num = sample(range(1,60), 6)
	#num.sort()

	print('Jogo', i, 'da megasena:') # PRINTA OS JOGOS E QUANTOS JOGOS JÁ FORAM FEITOS
	print(num)

	# VERIFICA OS JOGOS NECESSÁRIOS PARA TER O RESULTADO DA MEGASENA
	#if num == mega:
		#print('Jogo', i, 'da megasena verncedor:')
		#print(num)
		#pass
	
	i=i+1
	
	comando = input()
