
<?
	$not = mysql_query("SELECT * FROM noticia where id='$id'");  
   	$noticia = mysql_fetch_array($not);
?> 
<BR>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="18">
  <TR> 
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD WIDTH="478" ALIGN="right"><FONT FACE="Verdana, Arial, Helvetica, sans-serif"><B><? echo $noticia[titulo] ?>&nbsp;&nbsp;</B></FONT></TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR> 
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD WIDTH="478" BGCOLOR="#000000">&nbsp;</TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="20">
  <TR> 
                
    <TD WIDTH="121" VALIGN="top"> 
      <TABLE WIDTH="121" BORDER="0" CELLSPACING="0" CELLPADDING="0">
        <TR> 
          <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
          <TD> <? include "../include/fotos.inc" ?><? include "menu.inc" ?></TD>
        </TR>
      </TABLE>
    </TD>
                <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                <TD WIDTH="357" VALIGN="top">
                  <TABLE WIDTH="100%" BORDER="0" CELLSPACING="2" CELLPADDING="2">
                    <TR>
                      <TD>
            <P><? echo $noticia[texto] ?></P>
                      </TD>
                    </TR>
                  </TABLE>
                  <IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                
    <TD BGCOLOR="#FFFFFF" WIDTH="1" BACKGROUND="../img/general/title_1.gif"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
              </TR>
            </TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="1">
  <TR> 
    <TD WIDTH="120"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="358"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
