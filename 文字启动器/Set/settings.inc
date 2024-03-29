[Rainmeter]
Update=1000

;用以设置整体宽度
[Background]
Meter=Image
X=260
Y=0

[TextStyle]
FontColor=255,255,255
FontSize=15
StringEffect=SHADOW
StringAlign=CENTER
StringStyle=bold
AntiAlias=1

[ItemNamesRSS]
Measure=Plugin
Plugin=WebParser
Url=file://#CURRENTPATH#ItemNames\ItemNames.inc
RegExp="(?siU)Name1=(.*)Name2=(.*)Name3=(.*)Name4=(.*)Name5=(.*)Name6=(.*)Name7=(.*)Name8=(.*)Name9=(.*)Name10=(.*)Name11=(.*)Name12=(.*)Name13=(.*)Name14=(.*)Name15=(.*)Name16=(.*)Name17=(.*)Name18=(.*)Name19=(.*)Name20=(.*)Name21=(.*)Name22=(.*)Name23=(.*)Name24=(.*)Name25=(.*)Name26=(.*)Name27=(.*)Name28=(.*)Name29=(.*)Name30=(.*)Name31=(.*)Name32=(.*)Name33=(.*)Name34=(.*)Name35=(.*)Name36=(.*)Name37=(.*)Name38=(.*)Path1="
UpdateRate=10
Disabled=0
FinishAction=!execute [!UpdateMeterGroup Icons "#CURRENTCONFIG#"]
CodePage=1200 ; ItemNames.inc 编码为 utf-16 le 时，codepage 为 1200

[Name1]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=1

[Name2]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=2

[Name3]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=3

[Name4]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=4

[Name5]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=5

[Name6]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=6

[Name7]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=7

[Name8]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=8

[Name9]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=9

[Name10]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=10

[Name11]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=11

[Name12]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=12

[Name13]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=13

[Name14]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=14

[Name15]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=15

[Name16]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=16

[Name17]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=17

[Name18]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=18

[Name19]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=19

[Name20]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=20

[Name21]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=21

[Name22]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=22

[Name23]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=23

[Name24]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=24

[Name25]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=25

[Name26]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=26

[Name27]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=27

[Name28]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=28

[Name29]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=29

[Name30]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=30

[Name31]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=31

[Name32]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=32

[Name33]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=33

[Name34]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=34

[Name35]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=35

[Name36]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=36

[Name37]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=37

[Name38]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=38

[a1txt]
Meter=STRING
MeterStyle=TextStyle
MeasureName=Name1
X=65
Y=80
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item1.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 1 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a2txt]
Meter=STRING
MeasureName=Name2
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item2.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,162,232,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 2 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a3txt]
Meter=STRING
MeasureName=Name3
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item3.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 255,127,39,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 3 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a4txt]
Meter=STRING
MeasureName=Name4
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item4.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 34,177,76,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 4 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a5txt]
Meter=STRING
MeasureName=Name5
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item5.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 5 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a6txt]
Meter=STRING
MeasureName=Name16
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item16.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 16 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a7txt]
Meter=STRING
MeasureName=Name17
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item17.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 17 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a8txt]
Meter=STRING
MeasureName=Name18
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item18.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 18 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a9txt]
Meter=STRING
MeasureName=Name19
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item19.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 19 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a10txt]
Meter=STRING
MeasureName=Name26
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item26.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 26 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a11txt]
Meter=STRING
MeasureName=Name27
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item27.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 27 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a12txt]
Meter=STRING
MeasureName=Name28
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item28.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 28 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a13txt]
Meter=STRING
MeasureName=Name29
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item29.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 29 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a14txt]
Meter=STRING
MeasureName=Name30
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item30.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 30 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a15txt]
Meter=STRING
MeasureName=Name31
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item31.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 31 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a16txt]
Meter=STRING
MeasureName=Name33
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item33.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 33 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a17txt]
Meter=STRING
MeasureName=Name34
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item34.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 34 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a18txt]
Meter=STRING
MeasureName=Name35
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item35.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 35 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a19txt]
Meter=STRING
MeasureName=Name38
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item38.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 38 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[MeasureBin]
Measure=Plugin
Plugin=RecycleManager.dll
RecycleType=COUNT
Drives=ALL
Update=1

[hszexe]
Meter=Image
SolidColor=255,0,0,150
X=26
Y=37r
W=80
H=20
Hidden=1

[回收站空]
Meter=STRING
X=65
Y=-3r
MeterStyle=TextStyle
Text="回收站空"
Group=Icons
UpdateDivider=1
SolidColor=0,0,0,1
DynamicVariables=1
LeftMouseUpAction=!PluginBang "MeasureBin OpenBin"
Hidden=0

[回收站满]
Meter=STRING
X=r
Y=r
MeterStyle=TextStyle
Text="回收站满"
Group=Icons
UpdateDivider=1
SolidColor=0,0,0,1
DynamicVariables=1
LeftMouseUpAction=!PluginBang "MeasureBin OpenBin"
MiddleMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 15 "#PROGRAMPATH#" "#CURRENTCONFIG#"]
RightMouseDownAction=!PluginBang "MeasureBin EmptyBin"
Hidden=1

[bin_action]
Measure=Calc
Formula=MeasureBin
IfAboveAction=!execute [!HideMeter 回收站空][!ShowMeter 回收站满][!ShowMeter hszexe]
IfAboveValue=0
IfEqualAction=!execute [!HideMeter 回收站满][!ShowMeter 回收站空][!HideMeter hszexe]
IfEqualValue=0

[b1txt]
Meter=STRING
MeasureName=Name6
X=190
Y=95
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item6.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,162,232,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 6 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b2txt]
Meter=STRING
MeasureName=Name7
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item7.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 255,127,39,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 7 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b3txt]
Meter=STRING
MeasureName=Name8
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item8.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 34,177,76,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 8 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b4txt]
Meter=STRING
MeasureName=Name9
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item9.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 9 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b5txt]
Meter=STRING
MeasureName=Name10
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item10.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,162,232,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 10 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b6txt]
Meter=STRING
MeasureName=Name11
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item11.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 255,127,39,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 11 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b7txt]
Meter=STRING
MeasureName=Name12
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item12.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 34,177,76,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 12 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b8txt]
Meter=STRING
MeasureName=Name13
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item13.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 13 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b9txt]
Meter=STRING
MeasureName=Name14
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item14.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,162,232,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 14 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b10txt]
Meter=STRING
MeasureName=Name20
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item20.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 20 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b11txt]
Meter=STRING
MeasureName=Name21
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item21.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 21 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b12txt]
Meter=STRING
MeasureName=Name22
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item22.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 22 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b13txt]
Meter=STRING
MeasureName=Name23
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item23.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 23 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b14txt]
Meter=STRING
MeasureName=Name24
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item24.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 24 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b15txt]
Meter=STRING
MeasureName=Name25
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item25.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 25 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b16txt]
Meter=STRING
MeasureName=Name32
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item32.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 32 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b17txt]
Meter=STRING
MeasureName=Name36
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item36.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 36 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b18txt]
Meter=STRING
MeasureName=Name37
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item37.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 37 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b19txt]
Meter=STRING
MeasureName=Name15
X=r
Y=35r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item15.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 15 "#PROGRAMPATH#" "#CURRENTCONFIG#"]
