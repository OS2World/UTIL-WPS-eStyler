/* --------------------------------------------------------------------------
 This script creates the eStylerLite resources DLL file.
 Usage:
 BUILDRES <language>
 where language can be:
     DE (German), EN (English), ES (Spanish), FR (French), IT (Italian),
     JA (Japanese), NL (Dutch), RU (Russian), TW (Chinese-Traditional).
-------------------------------------------------------------------------- */
/*"@echo off"*/

call "..\estlrenv.cmd"
author    = "Alessandro Cantatore";
applVer   = "1.1.200";
applStart = "Styler";
applEnd   = "resources v. 1.1 - (c) 1998-2004 "author;
module    = "ESTLRLRS"       /* module name                */
srcFile   = "estylerRes"     /* main rc file               */
/* these paths are relative to the path of this script !!! */
hPath1    = "..\headers"     /* eStylerLite common headers */
hPath2    = value("APIEXINCL",,"OS2ENVIRONMENT") /* GUIDPROC/APIexDLL headers  */
if hPath2 == '' then hPath2 = "..\shared\headers"

arg lang
lang = filespec(name, lang)

curPath = directory();
scriptPath = getScriptPath();
targetPath = scriptPath""lang"\res";
srcPath = scriptPath"res";

description = getDescription(lang, author, applVer, applStart, applEnd);
if "" = description then
   exit

rcOptions = getRcOptions(lang, targetPath, headerPath);
if "" = rcOptions then
   exit
/* add the include paths */
rcOptions = rcOptions" -i "targetPath
rcOptions = rcOptions" -i "getAbsolutePath(scriptPath""hPath1)
rcOptions = rcOptions" -i "hPath2


"mode co80,102"


call makeDLL srcPath, targetPath, rcOptions, module, srcFile, description
"pause"
call directory curPath
exit

/* ----------------------------------------------------------------------- */

makeDLL: procedure
   parse arg srcPath, targetPath, rcOptions, module, rcname, description
   nl = "0d0a"x
/*
   Cfile = module".c"
   if "" \= stream(Cfile, "c", "QUERY EXISTS") then
      call SysFileDelete Cfile
   call charout Cfile, "/* "module".c */"
   call charout Cfile
   "@icc /C+" cfile
*/
   call directory targetPath;
   /* create/update the module definition file */
   DEFfile = module".def"
   if "" \= stream(DEFfile, "c", "QUERY EXISTS") then
      call SysFileDelete DEFfile
   call charout DEFfile, "LIBRARY "module""nl
   call charout DEFfile, "DESCRIPTION '"description"'"nl
   call charout DEFfile

   /* call the linker to create the DLL */
   "ILINK "srcPath"\@.OBJ" DEFfile" /A:4 /O:"module".dll"

   /* call the resource compiler to create the resource file */
   call directory srcPath
   "RC "rcOptions" "srcPath"\"rcname".rc "targetPath"\"rcname".res"

   call directory targetPath
   /* aggiunge le risorse alla DLL */
   "RC /X2 "rcname".res" module".dll"
return


/* build the DLL description data ---------------------------------------- */
getDescription: procedure
   parse arg lang, author, applVer, applStart, applEnd

   nlvs = "German English Spanish French Italian Japanese Dutch Russian Chinese-Traditional";
   nlvcodes = "DE EN ES FR IT JA NL RU TW";
   wordidx = wordpos(lang, nlvcodes);
   if 0 = wordidx then
      do
         call help
         return ""
      end
   langver = word(nlvs, wordidx);
   if "" = langver then
      do
         call help
         return ""
      end /* do */
   description = "@#"author":"applVer"#@"applStart" "langver" "applEnd
return description


/* build the IPFC parameters --------------------------------------------- */
getRcOptions: procedure
   parse arg language, incpath, headers

   nlvcodes =  "DE  EN  ES  FR  IT  JA  NL  RU  TW";
   ctrycodes = "049 001 034 033 039 081 031 007 088";
   codepages = "850 850 850 850 850 932 850 866 950";
   wordidx = wordpos(language, nlvcodes);
   if 0 = wordidx then
      do
         call help
         return ""
      end
   country = word(ctrycodes, wordidx);
   codepage = word(codepages, wordidx);
   if ("" = country) | ("" = codepage) then
      do
         call help
         return ""
      end /* do */
   rcOptions = "-d NLV_"language" -r -cp "codepage" -cc "country
return rcOptions


/* show the help message ------------------------------------------------- */
help: procedure
   do i = 2 to 7
      say sourceline(i);
   end /* do */
   "pause"
return


/* get the path of this script ------------------------------------------- */
getScriptPath: procedure
   parse source . . scriptspec
return filespec("DRIVE", scriptspec) || filespec("PATH", scriptspec)

/* get an absolute path from a relative one ------------------------------ */
getAbsolutePath: procedure
   parse arg relativePath
   curPath = directory();
   headerPath = directory(relativePath);
   call directory curPath;
   return headerPath
