VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "OperateOMShell"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = False
Private Declare Sub Sleep Lib "kernel32" (ByVal dwMilliseconds As Long)

'-----------------------------------------------------------------------------------
'OMShell実行に必要な処理をまとめたクラスです
'-----------------------------------------------------------------------------------

Private DQ As String    'ダブルクオーテーションDoubleQuotation
Private PR As String '(はPR
Private PL As String  ')はPR
Private OMShellPath As String

' 初期化処理
Private Sub Class_Initialize()
    DQ = """"
    PR = "{)}"
    PL = "{(}"
    OMShellPath = "C:\OpenModelica1.11.0-64bit\bin\OMShell.exe"
End Sub

'OMShellの起動
Public Sub StartOMShell()

    rc = Shell(OMShellPath, vbNormalFocus)
    AppActivate "OMShell - OpenModelica Shell", True
    Sleep 1000

End Sub

'任意コマンドの実行
Public Sub ExecuteCommand(command As String)

    AppActivate "OMShell - OpenModelica Shell", True
    SendKeys command
    Sleep 500
    SendKeys "{ENTER}"

End Sub

'mosスクリプトを実行
Public Sub runScript(scriptFileName As String)

    AppActivate "OMShell - OpenModelica Shell", True
    runCommand = "runScript" & PL & DQ & scriptFileName & ".mos" & DQ & PR
    SendKeys runCommand
    Sleep 500
    SendKeys "{ENTER}"

End Sub

'カレントディレクトリの移動
Public Sub Cd(cdPath As String)

    AppActivate "OMShell - OpenModelica Shell", True
    cdCommand = "cd" & PL & DQ & cdPath & DQ & PR
    SendKeys cdCommand
    Sleep 500
    SendKeys "{ENTER}"

End Sub



