from reportlab.pdfgen import canvas
from reportlab.lib.pagesizes import letter
from reportlab.lib.pagesizes import landscape
import csv
import re
import os
import os.path
import sys

d = {}
def processFile( str1 ):
	xx = None
	yy = None
	with open(str1) as fobj:
		for line in fobj:
			if re.search('CHARSET=UTF-8;ENCODING=8BIT:;', line):
				x = re.split('CHARSET=UTF-8;ENCODING=8BIT:;', line)[1:]
				xx = x[0]
#				xx.strip('\r\n')
			if re.search('PREF;VOICE;ENCODING=8BIT:', line):
				y = re.split('PREF;VOICE;ENCODING=8BIT:', line)[1:]
				yy = y[0]
#				yy.strip('\r\n')
	return xx, yy;

for filename in os.listdir('contacts'):
	x, y = processFile('contacts/'+filename)
	d[y] = x
	
#with open('phoneno.json', 'w') as fp:
#	json.dump(d, fp)		
	
with open('dict.csv', 'wb') as csv_file:
    writer = csv.writer(csv_file)
    for key, value in d.items():
       writer.writerow([key, value])

data_file = "dict.csv"

phonedata = csv.reader(open(data_file,"rb"))
x=750
p=0
c = canvas.Canvas('phone.pdf',pagesize=letter)
for row in phonedata:
    no = row[0]
    name = row[1]
    strg = name +"   "+ no
    x=x-14
#   c.drawCentredString(300,x,strg)
    c.drawString(100,x,strg)
    p=p+1
    if(p==50):
        c.showPage()
        p=0
        x=750

c.save()
os.remove('dict.csv')

print "Phone no. pdf generated."
