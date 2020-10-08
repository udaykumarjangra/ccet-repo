#Bresenham's Circle Drawing Algorithm
from PIL import Image, ImageDraw
img = Image.new("RGB",(500,500))
def symPlot(x,y,X,Y):
    global img
    img.putpixel((X+x,Y+y), (255,0,0))
    img.putpixel((X+x,-Y+y), (255,255,0))    
    img.putpixel((-X+x,-Y+y), (0,255,0))
    img.putpixel((-X+x,Y+y), (0,0,255))
    img.putpixel((Y+x,X+y), (0,0,255))
    img.putpixel((Y+x,-X+y), (0,255,0))
    img.putpixel((-Y+x,-X+y), (255,255,0))
    img.putpixel((-Y+x,X+y), (255,0,0))
def solve(x,y,r):
    global img
    d = 3 - (2 * r)
    img1 = ImageDraw.Draw(img)
    X = 0
    Y = r
    while( X <= Y ):
        symPlot(x,y,X,Y)
        if ( d <= 0 ):
            d = d + (4 * X) + 6
        else:
            d = d + (4 * X) - (4 * Y) + 10
            Y = Y - 1
        X = X + 1
    string = "Circle having Center " + str(x) + ", " + str(y) + "and radius " + str(r)
    img1.text((150,10), string)
    img.show()


print("Enter X Y Center of Circle:")
x = int(input())
y = int(input())
print("Enter Radius of Circle :")
r = int(input())


solve(x,y,r)
