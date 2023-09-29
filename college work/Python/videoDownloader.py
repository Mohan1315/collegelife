from pytube import YouTube
link = input ("Enter the link : ")
yt = YouTube(link)

print("Title : ", yt.title)
print("Nunber of Views : ", yt.views)
print("Length of Video :  ", yt.length)
print("Description of Video : ", yt.description)

