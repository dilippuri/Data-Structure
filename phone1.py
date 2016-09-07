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
	flag = 0
	with open(str1) as fobj:
		for line in fobj:
			if flag==0:
				if re.search('FN:', line):
					x = re.split('FN:', line)[1:]
					xx = x[0]
					xx.strip('\r\n')
					flag = 1
			if flag==1:
				if re.search('TEL;CELL:', line):
					y = re.split('TEL;CELL:', line)[1:]
					yy = y[0]
					yy.strip('\r\n')
					d[yy] = xx
					flag = 0
	return d

filename = 'contact.vcf'

d = processFile(filename)
	
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
#os.remove('dict.csv')

print "Phone no. pdf generated."
