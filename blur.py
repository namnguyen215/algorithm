from PIL import Image, ImageFilter

before=Image.open("eyes.jpg")
after=before.filter(ImageFilter.BLUR)
after.save("out.jpg")