// If not using ZColorStringGrid
// ���� �� ������������ ZColorStringGrid 
{$DEFINE NOZCOLORSTRINGGRID}

// Conditional formatting
// �������� ��������������
{$DEFINE ZUSE_CONDITIONAL_FORMATTING}

// ���������� ������ XML, ��� �������� � ��������� �����
// Compact XML without indents and newlines
{$DEFINE NOXMLINDENTS}

// Charts
// �������
{$DEFINE ZUSE_CHARTS}

// Drawings
// �������
{$DEFINE ZUSE_DRAWINGS}

// Archivers for Delphi, not used for Free Pascal / Lazarus
// ���������� ��� Delphi, �� ������������ ��� Free Pascal / Lazarus
{ use Delphi XE2 and above }
{$ifndef FPC}
{$if CompilerVersion >= 23.0}         // bds xe2 (2012)
  {$define XE2ZIP}
{$ifend}
{$endif}

{ use KaZip (recommended) ) }
{$define KAZIP}

{ use JEDI Code Library (via 7z) }
{//$define JCL7Z}

{ use TurboPower Abbrevia }
{//$define ABZIP}

{ use SciZipFile }
{//$define SCIZIP}

{ use Synopse }
{//$define SYNZIP}

// Free Pascal / Lazarus
{$IFDEF FPC}
  //��� FPC ���� ���� ZColorStringGrid-�
  {$DEFINE NOZCOLORSTRINGGRID}
  //���� ����� ������������ ������ ������������� LConvEncoding.pas
  {$DEFINE USELCONVENCODING}
{$ELSE}
  {$UNDEF USELCONVENCODING}
{$ENDIF}
