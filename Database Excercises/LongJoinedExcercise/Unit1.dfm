object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 481
  ClientWidth = 704
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 704
    Height = 481
    ActivePage = TabSheet5
    Align = alClient
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = '1stEx'
      object dbgrdAll: TDBGrid
        Left = 32
        Top = 136
        Width = 609
        Height = 249
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'Tahoma'
        TitleFont.Style = []
      end
      object cmbInstructors: TComboBox
        Left = 32
        Top = 64
        Width = 145
        Height = 21
        TabOrder = 1
        OnChange = cmbInstructorsChange
      end
    end
    object TabSheet2: TTabSheet
      Caption = '2ndEx'
      ImageIndex = 1
      object Label1: TLabel
        Left = 280
        Top = 48
        Width = 80
        Height = 13
        Caption = 'InstructorPersID'
        FocusControl = DBEdit1
      end
      object Label2: TLabel
        Left = 280
        Top = 88
        Width = 72
        Height = 13
        Caption = 'InstructorSAID'
        FocusControl = DBEdit2
      end
      object Label3: TLabel
        Left = 280
        Top = 128
        Width = 75
        Height = 13
        Caption = 'InstructorName'
        FocusControl = DBEdit3
      end
      object Label4: TLabel
        Left = 280
        Top = 168
        Width = 90
        Height = 13
        Caption = 'InstructorSurname'
        FocusControl = DBEdit4
      end
      object Label5: TLabel
        Left = 280
        Top = 208
        Width = 97
        Height = 13
        Caption = 'InstructorContactNr'
        FocusControl = DBEdit5
      end
      object Label6: TLabel
        Left = 280
        Top = 248
        Width = 113
        Height = 13
        Caption = 'InstructorLicenceCodes'
        FocusControl = DBEdit6
      end
      object Label7: TLabel
        Left = 280
        Top = 288
        Width = 71
        Height = 13
        Caption = 'EmpBasicSalPA'
        FocusControl = DBEdit7
      end
      object btnHighSal: TButton
        Left = 8
        Top = 158
        Width = 177
        Height = 25
        Caption = 'Highest Salary (SQL)'
        TabOrder = 0
        OnClick = btnHighSalClick
      end
      object btnHighSalNo: TButton
        Left = 8
        Top = 99
        Width = 177
        Height = 25
        Caption = 'Highest Salary (No SQL)'
        TabOrder = 1
        OnClick = btnHighSalNoClick
      end
      object DBEdit1: TDBEdit
        Left = 280
        Top = 64
        Width = 82
        Height = 21
        DataField = 'InstructorPersID'
        DataSource = DataSource1
        TabOrder = 2
      end
      object DBEdit2: TDBEdit
        Left = 280
        Top = 104
        Width = 173
        Height = 21
        DataField = 'InstructorSAID'
        DataSource = DataSource1
        TabOrder = 3
      end
      object DBEdit3: TDBEdit
        Left = 280
        Top = 144
        Width = 329
        Height = 21
        DataField = 'InstructorName'
        DataSource = DataSource1
        TabOrder = 4
      end
      object DBEdit4: TDBEdit
        Left = 280
        Top = 184
        Width = 329
        Height = 21
        DataField = 'InstructorSurname'
        DataSource = DataSource1
        TabOrder = 5
      end
      object DBEdit5: TDBEdit
        Left = 280
        Top = 224
        Width = 134
        Height = 21
        DataField = 'InstructorContactNr'
        DataSource = DataSource1
        TabOrder = 6
      end
      object DBEdit6: TDBEdit
        Left = 280
        Top = 264
        Width = 160
        Height = 21
        DataField = 'InstructorLicenceCodes'
        DataSource = DataSource1
        TabOrder = 7
      end
      object DBEdit7: TDBEdit
        Left = 280
        Top = 304
        Width = 264
        Height = 21
        DataField = 'EmpBasicSalPA'
        DataSource = DataSource1
        TabOrder = 8
      end
      object DBNavigator1: TDBNavigator
        Left = 312
        Top = 17
        Width = 240
        Height = 25
        DataSource = DataSource1
        TabOrder = 9
      end
    end
    object TabSheet3: TTabSheet
      Caption = '3rdExA'
      ImageIndex = 2
      object dbgrd2: TDBGrid
        Left = 48
        Top = 200
        Width = 561
        Height = 120
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'Tahoma'
        TitleFont.Style = []
      end
      object Button1: TButton
        Left = 48
        Top = 120
        Width = 169
        Height = 25
        Caption = 'Increase by 5 years'
        TabOrder = 1
        OnClick = Button1Click
      end
    end
    object TabSheet4: TTabSheet
      Caption = '3rdExB'
      ImageIndex = 3
      object ListBox1: TListBox
        Left = 48
        Top = 176
        Width = 593
        Height = 265
        ItemHeight = 13
        TabOrder = 0
        TabWidth = 25
      end
      object Button2: TButton
        Left = 48
        Top = 88
        Width = 137
        Height = 25
        Caption = 'Print'
        TabOrder = 1
        OnClick = Button2Click
      end
    end
    object TabSheet5: TTabSheet
      Caption = '4thEx'
      ImageIndex = 4
      object Button3: TButton
        Left = 0
        Top = 3
        Width = 161
        Height = 25
        Caption = 'Master ON'
        TabOrder = 0
        OnClick = Button3Click
      end
      object Button4: TButton
        Left = 200
        Top = 3
        Width = 177
        Height = 25
        Caption = 'Master OFF'
        TabOrder = 1
        OnClick = Button4Click
      end
      object DBGrid1: TDBGrid
        Left = 3
        Top = 64
        Width = 566
        Height = 249
        TabOrder = 2
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'Tahoma'
        TitleFont.Style = []
      end
    end
  end
  object DataSource1: TDataSource
    Left = 376
    Top = 56
  end
end
