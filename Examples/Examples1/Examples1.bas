Attribute VB_Name = "Examples1"
Sub Examples1()

    Dim ThisWorkbookPath As String
    Dim mosFileName As String
    Dim modelFile As String
    
    
    'mosファイルの設定インスタンス
    Dim mosScript As MosSetting
    Set mosScript = New MosSetting
     
    'OMShellの操作インスタンス
    Dim OMShell As OperateOMShell
    Set OMShell = New OperateOMShell
    
    
    mosFileName = "Examples1"
    modelFile = "HelloWorld"
    ThisWorkbookPath = ThisWorkbook.path
    
    'mosファイルの設定
    Call mosScript.MakeMos(mosFileName)
    Call mosScript.loadFile(modelFile)
    Call mosScript.SimulationExecute(modelFile, 0, 1, 500, 0.0001, "dassl", "mat")      'simulate(HelloWorld, startTime=0, stopTime=1, numberOfIntervals=500, tolerance=1e-4, method="dassl", outputFormat="mat")
    Call mosScript.EndMos
        
    'OMShellからmosファイルを実行
    Call OMShell.StartOMShell
    Call OMShell.Cd(ThisWorkbookPath)
    Call OMShell.runScript(mosFileName)
 
End Sub
