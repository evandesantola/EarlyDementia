#read in files, 1 = not lost, -1 = lost

import json 
from pprint import pprint

def parser(ratio):
	with open('data.json') as data_file:
		data = json.load(data_file)
	pprint(data)

	numlost = 0
	numnotlost = 0

	for number in data:
		if number == 1:
			numnotlost += 1
		else:
			numlost += 1

	ratio = numlost/numnotlost
	return ratio