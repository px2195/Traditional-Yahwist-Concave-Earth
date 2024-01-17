#!/usr/bin/python
from numpy import *
from math import *
import matplotlib.pyplot as plt 
import matplotlib.patches as pat
import matplotlib.colors as colors
from matplotlib.path import *
import sys

#przygotowanie obiektow biblioteki

fig, ax = plt.subplots()
#aby pelne okno wykorzystac i nie bylo problemu z biblioteka
fig.subplots_adjust(wspace=0,hspace=0,left=0,bottom=0,right=1,top=1)
fig.suptitle("Promienie swiatla we wkleslej Ziemi")

#wspolrzedne transformowane swiatla nad linia Karmana
xcoords=[]
ycoords=[]
#wspolrzedne transformowane swiatla po zalamaniu i rozszczepieniu przez firmament
xcoords_firm=[]
ycoords_firm=[]

RelIOR=.7 #przykladowy wzgledny wspolczynnik zalamania firmamentu
r=an=0
R=2.5
R_2=R*R
_2R=2*R
KarmanR=R*(1+100/6371.008)

start_a=-1
end_a=1
b=0
Da=abs(end_a-start_a)
#okrag skorupy ziemskiej
pat=ax.add_patch(plt.Circle((0,0),KarmanR,fill=False,edgecolor='#773300'))
pat.zorder=-8

#pod firmamentem
for a in arange(start_a,end_a,0.004):
    for x in arange(_2R,  .03,-.03):
        try:
            a_firm=tan(asin(sin(atan(a))/RelIOR))
        except:
            continue
        y=a_firm*(_2R-x)+b
        hyppow2=x*x+y*y
        if sqrt(hyppow2)<=R-0.1:
            break
        kwr=R_2/hyppow2
        X=x*kwr
        Y=y*kwr
        xcoords_firm.append(X)
        ycoords_firm.append(Y)
    ax.plot(xcoords_firm,ycoords_firm,color=colors.hsv_to_rgb((abs(a-start_a)/Da/6,1,0.88)),clip_path=pat,clip_on=True,zorder=-8)
    xcoords_firm=[]
    ycoords_firm=[]

#okrag szkla nieba na linii Karmana
pat_firm=ax.add_patch(plt.Circle((0,0),R,fill=True,facecolor='#FFFFFF',edgecolor='#1177ff'))
pat_firm.set_zorder=-4

#nad
for a in arange(start_a,end_a,0.1):
    for x in arange(_2R,0,-.023):
        y=a*(_2R-x)+b
        hyppow2=x*x+y*y
        if sqrt(hyppow2)<=KarmanR:
            break
        kwr=R_2/hyppow2
        X=x*kwr
        Y=y*kwr
        xcoords.append(X)
        ycoords.append(Y)
    #promien swiatla przed zalamaniem
    ax.plot(xcoords,ycoords,color=(0.8,0.8,0),clip_path=pat_firm,clip_on=True,zorder=20)
    xcoords=[]
    ycoords=[]

plt.show()
