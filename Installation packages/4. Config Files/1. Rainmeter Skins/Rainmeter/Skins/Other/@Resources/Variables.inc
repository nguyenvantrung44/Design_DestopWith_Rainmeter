[Variables]

LocationCode=SPXX0050
UnitOfMeasure=m
ScrollMouseIncrement=0.05
Format=#I
Hidden=1
Hidden2=0
Player=Winamp
Color1=255,255,255
Color2=85,78,73

;NOTES:

;This below is the settings for the dock with icons.
;I will try to explain to you as much as i can.This "#@#\" is shortened for "@Resources" folder.It's a folder where the icons and other parts of the skin are located.
;If you want to change icon-s,new icon-s,you must put in "@Resources" folder.Also,icons must be in PNG file format.
;When you change "icon and name path",for example if you want to change "My Computer" icon to "CCleaner",it should look like this:

;This is example for some program:

;Icon1NameAndPath=#@#\CCleaner.png
;Icon1Text=CCleaner
;LocationPath1=["C:\Program Files\CCleaner\CCleaner64.exe"]

;This is example for some internet links:

;Icon4NameAndPath=#@#\Twitter.png
;Icon4Text=Twitter
;LocationPath4=["https://twitter.com/?lang=en"]


;----------------------Dock Settings--------------------------
;-------------------------------------------------------------


Icon1NameAndPath=#@#\Mobile2.png
Icon1Text=My Computer
LocationPath1=[Shell:::{20D04FE0-3AEA-1069-A2D8-08002B30309D}]

Icon2NameAndPath=#@#\Message2.png
Icon2Text=Facebook
LocationPath2=["https://facebook.com/"]

Icon3NameAndPath=#@#\Mail2.png
Icon3Text=E-Mail
LocationPath3=["https://mail.google.com/mail/"]
