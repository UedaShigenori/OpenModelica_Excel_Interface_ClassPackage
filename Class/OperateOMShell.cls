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
'OMShell���s�ɕK�v�ȏ������܂Ƃ߂��N���X�ł�
'-----------------------------------------------------------------------------------

Private DQ As String    '�_�u���N�I�[�e�[�V����DoubleQuotation
Private PR As String '(��PR
Private PL As String  ')��PR
Private OMShellPath As String

' ����������
Private Sub Class_Initialize()
    DQ = """"
    PR = "{)}"
    PL = "{(}"
    OMShellPath = "C:\OpenModelica1.11.0-64bit\bin\OMShell.exe"
End Sub

'OMShell�̋N��
Public Sub StartOMShell()

    rc = Shell(OMShellPath, vbNormalFocus)
    AppActivate "OMShell - OpenModelica Shell", True
    Sleep 1000

End Sub

'�C�ӃR�}���h�̎��s
Public Sub ExecuteCommand(command As String)

    AppActivate "OMShell - OpenModelica Shell", True
    SendKeys command
    Sleep 500
    SendKeys "{ENTER}"

End Sub

'mos�X�N���v�g�����s
Public Sub runScript(scriptFileName As String)

    AppActivate "OMShell - OpenModelica Shell", True
    runCommand = "runScript" & PL & DQ & scriptFileName & ".mos" & DQ & PR
    SendKeys runCommand
    Sleep 500
    SendKeys "{ENTER}"

End Sub

'�J�����g�f�B���N�g���̈ړ�
Public Sub Cd(cdPath As String)

    AppActivate "OMShell - OpenModelica Shell", True
    cdCommand = "cd" & PL & DQ & cdPath & DQ & PR
    SendKeys cdCommand
    Sleep 500
    SendKeys "{ENTER}"

End Sub


