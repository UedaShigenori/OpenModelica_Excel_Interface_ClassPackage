Attribute VB_Name = "Examples1"
Sub Examples1()

    Dim ThisWorkbookPath As String
    Dim mosFileName As String
    Dim modelFile As String
    
    
    'mos�t�@�C���̐ݒ�C���X�^���X
    Dim mosScript As MosSetting
    Set mosScript = New MosSetting
     
    'OMShell�̑���C���X�^���X
    Dim OMShell As OperateOMShell
    Set OMShell = New OperateOMShell
    
    
    mosFileName = "Examples1"
    modelFile = "HelloWorld"
    ThisWorkbookPath = ThisWorkbook.path
    
    'mos�t�@�C���̐ݒ�
    Call mosScript.MakeMos(mosFileName)
    Call mosScript.loadFile(modelFile)
    Call mosScript.SimulationExecute(modelFile, 0, 1, 500, 0.0001, "dassl", "mat")      'simulate(HelloWorld, startTime=0, stopTime=1, numberOfIntervals=500, tolerance=1e-4, method="dassl", outputFormat="mat")
    Call mosScript.EndMos
        
    'OMShell����mos�t�@�C�������s
    Call OMShell.StartOMShell
    Call OMShell.Cd(ThisWorkbookPath)
    Call OMShell.runScript(mosFileName)
 
End Sub
