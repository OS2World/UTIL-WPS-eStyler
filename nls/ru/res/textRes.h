/* --------------------------------------------------------------------------
 textres.h : text definitions used by dialog templates and string tables
 2004-05-29 - Alessandro Felice Cantatore

- Notes : ----------------------------------------------------------------
- Contents: --------------------------------------------------------------
 COMMON            text strings shared among multiple dialogs
 MAINWINDOW        text displayed by the settings notebook parent
 TITLEBARGEN       general titlebar options
 TITLEBAR          titlebar background and text options
 PUSHBUTTON        pushbutton options
 DIALOG            dialog font options
 PRODINFO          product information dialog
 SHUTDOWNGEN       shutdown - general options dialog
 DLG_SDTIMING      shutdown - general options dialog
 REBOOTLIST        shutdown - reboot list options dialog
 WAITGETBOOTLIST   wait-while-searching-bootable-volumes dialog
 SHUTDOWNPROGRAMS  shutdown - shutdown programs list dialog
 SHUTDOWNKILLLIST  shutdown - list of programs to be killed on shutdown dialog
 SHUTDOWNSELECTION shutdown selection dialog
 SHUTDOWNPROGRESS  shutdown progress dialog
 WINKEY            windows keys options dialog
 PREVIEW           preview window
 STRINGRES         string resources
 ERRORMSGS         error messages string resources
-------------------------------------------------------------------------- */

#ifndef _TEXT_RES_H_
   #define _TEXT_RES_H_


/* --------------------------------------------------------------------------
 COMMON            text strings shared among multiple dialogs
*/
#define SZ__ADD               "~��������"
#define SZ__REM               "~�����"
#define SZ__EDIT              "~������஢���"
#define SZ__OK                "~��"
#define SZ__CANCEL            "��~������"
#define SZ__OPEN              "�~�����..."
#define SZ__SAVE              "~���࠭���..."
#define SZ__SAVEAS            "���࠭��� ~���..."
#define SZ__EXIT              "�~�室"
#define SZ__FIND              "~����..."
#define SZ_ADDTOTHELIST       "�������� � ᯨ᮪"
#define SZ_FONT_              "~����:   %s   . . . . . . . . . . . . . . . ."\
                              " . . . . . . . . . . . . . . . . . . . . . . ."\
                              " . . . . . . . . . . . . . . . . . . . . . . ."\
                              " . . . . . . . . . . . . . . . . . . . . . . ."


/* --------------------------------------------------------------------------
 MAINWINDOW        text displayed by the settings notebook parent
*/
// help title
#define SZ_APPNAME               "Styler"
#define SZ_APPLY                 "~�ਬ�����"
#define SZ_UNDO                  "~�⪠���"
#define SZ__DEFAULT              "�� ~㬮�砭��"
#define SZ_PREVIEW               "~�।��ᬮ��"
#define SZ_HELP                  "��ࠢ��"
// settings notebook titles
#define SZ_UITITLE               "����襭�� ����䥩� ���짮��⥫�"
#define SZ_SHUTDOWNTITLE         "�몫���� ��⥬�"
#define SZ_WINKEYTITLE           "������ Windows"

/* --------------------------------------------------------------------------
 UIGEN             general User interface options
*/
#define SZ_UIENABLE              "~������� ���襭�� ����䥩� ���짮��⥫�"
#define SZ_EXCEPTIONS            "~�� �ਬ����� ���襭�� �:"

/* --------------------------------------------------------------------------
 TITLEBARGEN       general titlebar options
*/
#define SZ_TBENABLE              "~������� ���襭�� ��ப� ���������"
#define SZ_TBOVERRIDEPP          "~��८�।����� ��ࠬ���� �।�⠢�����"
#define SZ__FONT                 "~����:"
#define SZ_TEXTATLIGN            "~��ࠢ������� ⥪��:"
#define SZ_LEFTCENTER            "�� ������ ���\t�� 業���\t"

/* --------------------------------------------------------------------------
 TITLEBAR          titlebar background and text options
*/
#define SZ_TYPEOFBKGND           "~��� 䮭�:"
#define SZ_COMBOBKGND            "����譮� 梥�\t�ࠤ����\t����ࠦ����\t"
// solid color mode controls
#define SZ_BKGNDCOLOR            "~���� 䮭�"
// gradient mode controls
#define SZ_SHADEDIRECTION        "~���ࠢ����� �ࠤ����:"
#define SZ_COMBOSHADE            "��ਧ��⠫쭮\t���⨪��쭮\t" \
                                 "��ਧ��⠫쭮 - � ���� ��஭\t���⨪��쭮 - � ���� ��஭\t"
#define SZ_SWAPCOLORS            "~�������� 梥� =>"
#define SZ_OUTERCOLOR            "���� ~᭠�㦨"
#define SZ_INNERCOLOR            "���� ��~���"
#define SZ_LEFTCOLOR             "���� ᫥��"
#define SZ_RIGHTCOLOR            "���� �ࠢ�"
#define SZ_TOPCOLOR              "���� ᢥ���"
#define SZ_BOTTOMCOLOR           "���� ᭨��"
// image mode controls
#define SZ_BKGNDIMAGE            "������� ~����ࠦ����:"

// !!! NOTE !!! when translating the following string do not remove the
// 3 leading blank spaces !!!!!!!!
#define SZ_DEFIMAGE              "   ����ࠦ���� �� 㬮�砭��"
#define SZ_SCALEIMAGE            "~����⠡�஢��� ����ࠦ����"
//#define SZ_IMAGEOPTIONS        "��ࠬ���� �~���ࠦ����..."
#define SZ_ADDIMAGE              "�������� ~����� ����ࠦ����..."
// border controls
#define SZ_SHOWBORDER            "��~������ ࠬ�� ��ப� ���������"
#define SZ_LEFTTOPCLR            "���� ������/���~孥��"
#define SZ_RIGHTBTMCLR           "���� �ࠢ���/��~�����"
// text options controls
#define SZ_TEXTSHADOW            "��~�� �� ⥪��"
#define SZ_TEXTCOLOR             "�~��� ⥪��"
#define SZ_TEXTSHADOWCLR         "���~� ⥭�"

/* --------------------------------------------------------------------------
 PUSHBUTTON        pushbutton options
*/
#define SZ_BTNON                 "����襭�� ~������"
#define SZ_BTNTHICK              "~�⮫�񭭠� ࠬ��"
#define SZ_BTNFLAT               "~���᪠� ࠬ��"
#define SZ_BTNOVRCLR             "���~��।����� 梥� �� �� 㬮�砭��"
#define SZ_BTN3DDEF              "~3D-�⨫� ������ �� 㬮�砭��"
#define SZ_BTN3DDIS              "3~D-�⨫� ����⨢��� ������"
#define SZ_BTNSOLID              "~����譮� 梥� 䮭�"
//#define SZ_BKGNDIMAGE            "������� ~����ࠦ����:"
//#define SZ_BKGNDCOLOR            "~���� 䮭�"

/* --------------------------------------------------------------------------
 DIALOG            dialog font options
*/
#define SZ_DLGFONTON             "~��⠭����� ���� �� 㬮�砭�� ��� ���������� ����"
#define SZ_DLGOVERPP             "~��८�।����� ����� �� �� 㬮�砭��"

/* --------------------------------------------------------------------------
 PRODINFO          product information dialog
*/
#define SZ_PRODUCT               "Styler for OS/2"
#define SZ_PIVERSION             "����� %d.%d - ᡮઠ � %d"
#define SZ_PICPYRIGHT            "(c) 1998-2004 Alessandro Felice Cantatore"
#define SZ_PICPYRIGHT2           "����筮 (c) 2008-2019 Alexander Taylor"
#define SZ_PIURL                 "https://github.com/altsan/os2-estyler"
#define SZ_PILICENSE             "��� ��業���� GNU General Public License ���ᨨ 3"

/* --------------------------------------------------------------------------
 SHUTDOWNGEN       shutdown - general options dialog
*/
#define SZ_SDWNON                "~�ᯮ�짮���� ���७��� �몫�祭��"
#define SZ_SDWNINCLUDE           "������ ᫥���騥 ��ࠬ���� �몫�祭��: "
#define SZ_SDWNLKSUSP            "~�������஢��� � �ਮ�⠭�����"
#define SZ_SDWNSUSP              "�ਮ~�⠭�����"
#define SZ_SDWNOFF               "~�⪫���� ��⠭��"
#define SZ_SDWNORD               "~�몫����"
#define SZ_SDWNREBOOT            "~��१���㧨��"
#define SZ_SDWNANIMATE           "~�����஢���� ������ �몫�祭��"
#define SZ_SDWNSTEPS             "~����� �����樨:"
#define SZ_SDWNADVOPTS           "~����७�� ��樨..."

/* --------------------------------------------------------------------------
 DLG_SDTIMING      shutdown - general options dialog
*/
#define SZ_SDTIMTITLE            "�몫�祭�� - �६���� ��ࠬ����"
#define SZ_SDTIMWARNING          "�� ����� ᫥���騥 ���祭��, �᫨ �� "\
                                 "��������� �� �ᮧ���� ��᫥��⢨�."
#define SZ_SDTIMDELAY            "����ன�� ����প� (������ ᥪ㭤�) :"
#define SZ_SDTIMLKUPSUSP         "~�������஢��� � �ਮ�⠭����� :"
#define SZ_SDTIMSUSPEND          "�ਮ~�⠭����� :"
#define SZ_SDTIMWARPCENTER       "���࠭��� ����ன�� ~WarpCenter :"
#define SZ_SDTIMUNROLLWIN        "~��������� ���� :"
#define SZ_SDTIMSYSMSGBOX        "���� ᮮ~�饭�� � �몫�祭�� ��⥬� :"
#define SZ_SDTIMWINSD            "WinS~hutdownSystem :"
#define SZ_SDTIMDOSSD            "DosShu~tdown :"
#define SZ_SDTIMOFF              "~�⪫���� ��⠭�� :"
#define SZ_SDTIMKILL             "Dos~KillProcess :"
#define SZ_SDTIMOK               SZ__OK
#define SZ_SDTIMCANCEL           SZ__CANCEL
#define SZ_SDTIMDEFAULT          SZ__DEFAULT
#define SZ_SDTIMHELP             SZ_HELP

/* --------------------------------------------------------------------------
 REBOOTLIST        shutdown - reboot list options dialog
*/
#define SZ_SDWNVOLLIST           "~������� ��१���㧪� ᫥����� ⮬��:"
#define SZ_SDWNVOLNAME           "~��� ⮬�:"
#define SZ_SDWNVOLDDESCR         "~���ᠭ�� ⮬�:"
#define SZ_SDWNREBOOTADD         SZ__ADD
#define SZ_SDWNREBOOTREM         SZ__REM
#define SZ_SDWNREBOOTEDIT        SZ__EDIT
#define SZ_SDWNREBOOTFIND        SZ__FIND

/* --------------------------------------------------------------------------
 WAITGETBOOTLIST   wait-while-searching-bootable-volumes dialog
*/
#define SZ_SDGETBOOTLIST        "�饬 ����㧮�� ⮬�.\x0a\x0a" \
                                "�������� ��������..."

/* --------------------------------------------------------------------------
 SHUTDOWNPROGRAMS  shutdown - shutdown programs list dialog
*/
#define SZ_SDWNRUNPROG           "~�믮����� ᫥���騥 �ணࠬ�� �� �몫�祭��:"
#define SZ_SDWNPROG              "~�ணࠬ��:"
#define SZ_SDWNPARMS             "���~�����:"
#define SZ_SDWNWIN               "~����:"
#define SZ_SDWNCOMBOWINS         "���筮�\t����\t����\t"
#define SZ_SDWNPROGADD           SZ__ADD
#define SZ_SDWNPROGREM           SZ__REM
#define SZ_SDWNPROGEDIT          SZ__EDIT

/* --------------------------------------------------------------------------
 SHUTDOWNKILLLIST  shutdown - list of programs to be killed on shutdown dialog
*/
#define SZ_SDWNKILLPROG          "~��ࢠ�� ࠡ��� ᫥����� �ணࠬ� �� �몫�祭��:"

/* --------------------------------------------------------------------------
 SHUTDOWNSELECTION shutdown selection dialog
*/
// the strings have been already defined above :
// #define SZ_SHUTDOWNTITLE         "�몫���� ��⥬�"
// #define SZ_SDWNLKSUSP            "~�������஢��� � �ਮ�⠭�����"
// #define SZ_SDWNSUSP              "�ਮ~�⠭�����"
// #define SZ_SDWNOFF               "~�⪫���� ��⠭��"
// #define SZ_SDWNORD               "~�몫����"
// #define SZ_SDWNREBOOT            "~��१���㧨��"
#define SZ_SDWNRUNPRGRS          "�믮������ ��~�ࠬ�� �몫�祭��"

/* --------------------------------------------------------------------------
 SHUTDOWNPROGRESS  shutdown progress dialog
*/
#define SZ_SSDWNSDWNWAIT    "��������, ���� ��⥬� �몫����� . . ."
#define SZ_SSDWNCOMPLETE    "�몫�祭�� �����襭�."
#define SZ_SSDWNREBOOTING   "��᫥ �ᯥ譮�� �몫�祭�� ��⥬� ��१���㧨���."
#define SZ_SSDWNPWRINGOFF   "�⪫�祭�� ��⠭�� ��᫥ �ᯥ譮�� �몫�祭��."
#define SZ_SSDWNSWTCHOFF    "�� ����� ������᭮ �⪫���� ��⠭�� ��������."

/* --------------------------------------------------------------------------
 WINKEY            windows keys options dialog
*/
#define SZ_WINKEYON         "~�ᯮ�짮���� ������ Windows"
#define SZ_WKEYLEFT         "~����� ������ Windows:"
#define SZ_WKEYRIGHT        "~�ࠢ�� ������ Windows:"
#define SZ_WKEYMENU         "������ Windows ~����:"

/* --------------------------------------------------------------------------
 PREVIEW           preview window
*/
#define SZ_PREVIEWTITLE     "�⠩��� - ���� �।���⥫쭮�� ��ᬮ��"
#define SZ_STATICSAMPLE     "��ࠧ�� ���筮�� ⥪��"
#define SZ_BTNSAMPLES       "�ਬ��� ������: "
#define SZ__NORMAL          "~���筠�"
#define SZ__DISABLED        "~����⨢���"


/* --------------------------------------------------------------------------
 COLORWHEEL        Color selection dialog
*/
#define SZ_CLRWTITLE        "�롨ࠥ� 梥�"
#define SZ__RED             "~����"
#define SZ__GREEN           "~�����"
#define SZ__BLUE            "~�����"


/* --------------------------------------------------------------------------
 STLRBMPED         Styler bitmap editor - implementation suspended
*/
// #define SZ_DLGSBMPED        "������� ���஢�� ����ࠦ���� �⠩���"
// #define SZ_SBMPSCALING      "��ࠬ���� ����⠡�஢���� ����ࠦ����"
// #define SZ_SBMPTILE         "~������� ����ࠦ���� (��� ����⠡�஢����)"
// #define SZ_SBMPWHOLE        "����⠡�஢��� ~��� ����ࠦ����"
// #define SZ_SBMPLRBORDER     "~�����/�ࠢ�� �࠭�� + �।��� ����"
// #define SZ_SBMPBTBORDER     "~������/������ �࠭�� + �।��� ����"
// #define SZ_SBMP9PARTS       "~���� + �࠭��� + �।��� ����"
// #define SZ_SBMPBCWIDTH      "~��ਭ� ࠬ��/���:"
// #define SZ_SBMPBCHEIGHT     "~���� ࠬ��/���:"
// #define SZ_SBMPPREVIEW      "�।��ᬮ�� ����ࠦ����"
// #define SZ_SBMPSAMPLEHEIGHT "���� �।��ᬮ�� ����ࠦ���� (~���ᥫ��) :"


/* --------------------------------------------------------------------------
 STRINGRES         string resources.
*/
#define SZ_PAGE1OF3         "��࠭�� 1 �� 3"
#define SZ_PAGE2OF3         "��࠭�� 2 �� 3"
#define SZ_PAGE3OF3         "��࠭�� 3 �� 3"
#define SZ_GENOPTIONS       "��騥 ����ன��"
#define SZ_TITLEBAR         "��ப� ���������"
#define SZ_ACTIVEWIN        "��⨢��� ����"
#define SZ_INACTIVEWIN      "����⨢��� ����"
#define SZ_PUSHBUTTON       "������"
#define SZ_DIALOGOPTS       "�������"
#define SZ_PRODINFO         "���ଠ�� � �த��"
#define SZ_SHUTDOWN         "�몫����"
#define SZ_REBOOT           "��१���㧨��"
#define SZ_SHUTDOWNPROGS    "�ணࠬ��"
#define SZ_KILLLIST         "��ନ����� ᯨ᮪"
#define SZ_VERSION          "�����: %d.%d.%d"
#define SZ_WKEYITEM01       "�� �믮���� ������� ����⢨�"
#define SZ_WKEYITEM02       "������/�������� �� ����"
#define SZ_WKEYITEM03       "�������� ᯨ᮪ ����"
#define SZ_WKEYITEM04       "�������� ���⥪�⭮� ����"
#define SZ_WKEYITEM05       "�������஢��� ���⮯"
#define SZ_WKEYITEM06       "������ ����� ������⥫�"
#define SZ_WKEYITEM07       "������ ����� ����ன�� ��⥬�"
#define SZ_WKEYITEM08       "������ ���� ��������� ��ப�"
#define SZ_WKEYITEM09       "�������� ���� ���⮯ WarpCenter"
#define SZ_WKEYITEM10       "�������� ᯨ᮪ ���� WarpCenter"
#define SZ_WKEYITEM11       "�������� ᯨ᮪ ����ᮢ WarpCenter"
#define SZ_WKEYITEM12       "�������� ᯨ᮪ ��⪮� WarpCenter"
#define SZ_WKEYITEM13       "���室 � ᫥���饬� ���� WarpCenter"
#define SZ_WKEYITEM14       "�������� ���ଠ樮���� ���� WarpCenter"
#define SZ_WKEYITEM15       "�������� ���� XButton (ᢥ��� XCenter)"
#define SZ_WKEYITEM16       "�������� ���� XButton (᭨�� XCenter)"
#define SZ_WKEYITEM17       "�������� ᯨ᮪ ��⪮� XCenter"
#define SZ_WKEYITEM18       "���室 � ᫥���饬� ���� XCenter"
#define SZ_WKEYITEM19       "�������� XCenter ��⮪ 1"
#define SZ_WKEYITEM20       "�������� XCenter ��⮪ 2"
#define SZ_WKEYITEM21       "�������� XCenter ��⮪ 3"
#define SZ_WKEYITEM22       "�������� XCenter ��⮪ 4"
#define SZ_WKEYITEM23       "�������� XCenter ��⮪ 5"
#define SZ_WKEYITEM24       "�������� XCenter ��⮪ 6"
#define SZ_WKEYITEM25       "�������� XCenter ��⮪ 7"
#define SZ_WKEYITEM26       "�������� XCenter ��⮪ 8"
#define SZ_WKEYITEM27       "�������� XCenter ��⮪ 9"
#define SZ_WKEYITEM28       "�������� XCenter ��⮪ 10"
#define SZ_WKEYITEM29       "��६����� XCenter ��/������ ��㣨� ����"
#define SZ_TITLEBARFONT     "���� ��ப� ���������"
#define SZ_FONTDLGSAMPLE    "�⠩��� - ���⮩ ⥪��"
#define SZ_GRADIENTCOLOR    "%s 梥� �ࠤ����"
#define SZ_CLRSHADELEFT     "�����"
#define SZ_CLRSHADTOP       "������"
#define SZ_CLRSHADOUTER     "����㦨"
#define SZ_CLRSHADRIGHT     "��ࠢ�"
#define SZ_CLRSHADBOTTOM    "�����"
#define SZ_CLRSHADINNER     "�����"
#define SZ_DIALOGFONT       "������ �����"

/* --------------------------------------------------------------------------
 ERRORMSGS         error messages string resources
*/

#define SZERR_WORKERSEMAPHORE \
   "�� 㤠���� ᮧ���� ᥬ��� ᨭ�஭���樨 ��⮪�."

#define SZERR_WORKERTHREAD \
   "�� 㤠���� ᮧ���� ࠡ�稩 ��⮪."

#define SZERR_LOADRUNTIMEMODULE \
   "�� 㤠���� ����㧨�� �믮��塞� ����� ("SZ_MODULENAME".DLL)."

#define SZERR_QUERYPROCADDR \
   "�� 㤠���� ������஢��� ��楤��� �믮��塞��� �����."

#define SZERR_GETCUROPTIONS \
   "�� 㤠���� ������� ⥪�騥 ��ࠬ���� �⠩���."

#define SZERR_ALLOCATION \
   "�� 㤠���� �뤥���� ������."

#define SZERR_OPENPRF \
   "�� 㤠���� ������ STYLER.INI."

#define SZERR_READPRFDATA \
   "�� 㤠���� ������ ����� 䠩�� INI."

#define SZERR_INITPM \
   "�� 㤠���� ���樠����஢��� Presentation Manager."

#define SZERR_REGBOXCLASS \
   "�� 㤠���� ��ॣ����஢��� ����� �ࠢ����� ����ᮬ box/bar."

#define SZERR_REGXCOMBOCLASS \
   "�� 㤠���� ��ॣ����஢��� ����� �ࠢ����� ���७�� ���뢠�騬�� ᯨ᪮�."

#define SZERR_REGCLRBTNCLASS \
   "�� 㤠���� ��ॣ����஢��� ����� �ࠢ����� ����ᮬ 梥⭮� ������."

#define SZERR_GETBMPHANDLES \
   "�� 㤠���� ������� ���ਯ��� ���஢��� ����ࠦ���� ��� ���� �।���⥫쭮�� ��ᬮ��."

#define SZERR_SETNOTEBOOKPAGES \
   "�� 㤠���� ��⠢��� ��࠭��� �������� � ������� ����஥�."

#define SZERR_REGEXITLIST \
   "�� 㤠���� ��ॣ����஢��� ��楤��� ��室� ��� ����᪠ �� ��஭� �ਫ������."

#define SZERR_TOOMANYENTRIES \
   "� ᯨ᪥ ᫨誮� ����� ����ᥩ. ����� ᯨ᪠ �� ����� ���� ��࠭��� � "\
   "䠩�� INI. ������ ������� ������ � ���஡�� ��� ࠧ."

#define SZERR_SAVEEXCPLIST \
   "�� 㤠���� ��࠭��� ᯨ᮪ �ணࠬ�, ��� ������ �� ᫥��� "\
   "�ਬ����� ���襭�� ����䥩� ���짮��⥫�."

#define SZERR_READFILE \
   "�� 㤠���� ������ 䠩�: %s."

#define SZERR_INVALIDFILE \
   "��ଠ� 䠩��: %s ������⢨⥫��."

#define SZERR_BMPTOOLARGE \
   "����஢�� ����ࠦ����: %s �ॢ�蠥� �।�� � 64 ��."

#define SZERR_SAVEDATA \
   "�� 㤠���� ��࠭��� ����� � STYLER.INI."

#define SZERR_APPLYBMP \
   "�� 㤠���� ��⠭����� ��࠭��� ���஢�� ����ࠦ����."

#define SZERR_GETHPSFORHBMP \
   "�訡�� ����祭�� ������ ���஢��� ����ࠦ����: �� 㤠���� ������� ���ਯ�� ����࠭�⢠ �।�⠢�����."

#define SZERR_GETBMPHANDLE \
   "�訡�� ����祭�� ������ ���஢��� ����ࠦ����: �� 㤠���� ������� ���ਯ�� ���஢��� ����ࠦ����."

#define SZERR_COPYFILE \
   "�� 㤠���� ᪮��஢��� 䠩� %s � %s."

#define SZERR_SOURCEEQDEST \
   "��室�� ���� ᮢ������ � ���� �����祭��."

#define SZERR_PROGLISTCOUNT \
   "� ᯨ᪥ �ணࠬ� ᫨誮� ����� ����⮢. "\
   "��᫥���� ������ �� ���� ��࠭���."

#define SZERR_INVALIDEXE \
   "���� %s �� ����� �����⨬��� ���७�� �ᯮ��塞��� 䠩�� "\
   "("".CMD"", "".COM"", "".EXE"")."

#define SZERR_INSPAGE \
   "�� 㤠���� ��⠢��� ��࠭��� � ������� ����஥�."

#define SZERR_DELPAGE \
   "�� 㤠���� 㤠���� ��࠭��� � ������� ����஥�."

#define SZERR_GETBOTTLIST \
   "������� ᯨ᮪ ����㧮��� ⮬��: �� 㤠���� �������� ��⮪ � ��������."

#define SZERR_HELPSYS \
   "\x0a" "��� ����祭�� �������⥫쭮� ���ଠ樨 ������ HELPSYS%04u � ���� ��������� ��ப�."

#define SZERR_GBLDISKHANDLE \
   "�� 㤠���� ������� ���ਯ�� ��᪠."SZERR_HELPSYS

#define SZERR_GBLREADSECT1  \
   "�� 㤠���� ������ ���� ᥪ�� ���⪮�� ��᪠."SZERR_HELPSYS

#define SZERR_GBLAIRBOOTVER \
   "���ࠢ��쭠� ����� AiRBOOT. ��������, ��⠭���� ����� �����."

#define SZERR_GBLREADSECT2  \
   "�� 㤠���� ������ ᥪ�� ��᪠, ᮤ�ঠ騩 ����� ���䨣��樨 AiRBOOT." \
   SZERR_HELPSYS

#define SZERR_GBLINVALIDDATA \
   "���ࠢ��쭠� ᨣ����� ������ ���䨣��樨 AiRBOOT."

#define SZERR_GBLREADSECT3  \
   "�� 㤠���� ������ ᥪ�� ��᪠, ᮤ�ঠ騥 ᯨ᮪  " \
   "����㧮��� ⮬�� AiRBOOT."SZERR_HELPSYS

#define SZERR_LVMCODE \
   " (��� �訡�� LVM: %d)."

#define SZERR_GBLOPENLVM    \
   "�� 㤠���� ������ ��⥬� LVM"SZERR_LVMCODE

#define SZERR_GBLLVMDRVLIST \
   "�� 㤠���� ������� ᯨ᮪ ��᪮�"SZERR_LVMCODE

#define SZERR_GBLLVMPARTLIST \
   "�� 㤠���� ������� ᯨ᮪ ࠧ�����"SZERR_LVMCODE

#define SZERR_GBLLVMVOLINFO \
   "�� 㤠���� ������� ����� LVM ��� ⮬�"SZERR_LVMCODE

#define SZERR_INITHELP \
   "�� 㤠���� ����㧨�� 䠩� �ࠢ�� STYLER.HLP."

#endif // #ifndef _TEXT_RES_H_
