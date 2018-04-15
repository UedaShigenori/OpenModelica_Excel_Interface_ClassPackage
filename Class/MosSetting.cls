VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "MosSetting"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = False
Public modelName As String

Private DQ As String    '�_�u���N�I�[�e�[�V����DoubleQuotation
Private PR As String '(��PR
Private PL As String  ')��PR

' ����������
Private Sub Class_Initialize()
    DQ = """"

End Sub

Public Sub MakeMos(mosFileName As String)
    Dim datFile As String
    datFile = ActiveWorkbook.path & "\" & mosFileName & ".mos"
    Open datFile For Output As #1

End Sub

Public Sub EndMos()

    Close #1

End Sub

'mo�t�@�C����ǂݍ���(loadFileName�Ɋg���q�͕K�v����܂���)
Public Sub loadFile(loadFileName As String)
    Dim loadFilecommand As String
    loadFilecommand = "loadFile(" & DQ & loadFileName & ".mo" & DQ & ");"
    Print #1, loadFilecommand
End Sub

Public Sub Cd(mosPath As String)
    Dim cdCommand As String
    
    cdCommand = "cd(" & DQ & mosPath & DQ & ");"
    Print #1, cdCommand
    
End Sub

'Modelica StandardLibrary��ǂݍ���
Public Sub loadMSL()
    Dim mslCommand As String
    mslCommand = "loadModel(Modelica);"
    Print #1, mslCommand
End Sub

'�V�~�����[�V�����̎��s�R�}���h

Public Sub SimulationExecute( _
    exeModelName As String, _
    startTime As Double, _
    stopTime As Double, _
    numberOfIntervals As Integer, _
    tolerance As Double, _
    method As String, _
    outputFormat As String)
    
    'simulate(HelloWorld, startTime=0, stopTime=1, numberOfIntervals=500, tolerance=1e-4, method="dassl", outputFormat="mat")
    
    Dim simulationCommand As String
    
    simulationCommand = "simulate(" & _
                            exeModelName & ", " & _
                            "startTime=" & startTime & ", " & _
                            "stopTime=" & stopTime & ", " & _
                            "numberOfIntervals=" & numberOfIntervals & ", " & _
                            "tolerance=" & tolerance & ", " & _
                            "method=" & DQ & method & DQ & ", " & _
                            "outputFormat=" & DQ & outputFormat & DQ & _
                            ");"


    
    Print #1, simulationCommand
End Sub