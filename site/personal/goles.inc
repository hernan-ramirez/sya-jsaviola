 
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="18">
  <TR> 
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD WIDTH="478" ALIGN="right"><FONT FACE="Verdana, Arial, Helvetica, sans-serif"><B><FONT FACE="Verdana, Arial, Helvetica, sans-serif"><B><FONT COLOR="#FFFFFF">Todos 
      Mis Goles </FONT>&nbsp;</B></FONT><FONT COLOR="#FFFFFF"> </FONT>&nbsp;&nbsp;</B></FONT></TD>
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
          <TD VALIGN="top"> 
            <TABLE WIDTH="120" BORDER="0" CELLSPACING="0" CELLPADDING="0">
              <TR BGCOLOR="#666666"> 
                <TD>&nbsp;</TD>
              </TR>
              <TR BGCOLOR="#FFFFFF"> 
                <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1" HSPACE="1"></TD>
              </TR>
              <TR BGCOLOR="#000000"> 
                <TD HEIGHT="80"><IMG SRC="../img/trayectoria/goles1.jpg" WIDTH="120" HEIGHT="80"></TD>
              </TR>
              <TR BGCOLOR="#666666"> 
                <TD HEIGHT="1" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
              </TR>
              <TR BGCOLOR="#000000"> 
                <TD HEIGHT="80"><IMG SRC="../img/trayectoria/goles3.jpg" WIDTH="120" HEIGHT="80"></TD>
              </TR>
              <TR BGCOLOR="#666666"> 
                <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
              </TR>
              <TR BGCOLOR="#000000"> 
                <TD HEIGHT="80"><IMG SRC="../img/trayectoria/goles2.jpg" WIDTH="120" HEIGHT="80"></TD>
              </TR>
              <TR BGCOLOR="#FFFFFF"> 
                <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1" HSPACE="1"></TD>
              </TR>
             </TABLE>
			  <? include "menu.inc" ?>
          </TD>
        </TR>
      </TABLE>
    </TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD WIDTH="357" VALIGN="top"> <IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"> 
      <BR>
      <TABLE WIDTH="340" BORDER="0" CELLSPACING="0" CELLPADDING="0" ALIGN="center">
        <TR> 
          <TD> 
            <P></P>
            <TABLE WIDTH="340" BORDER="0" CELLSPACING="0" CELLPADDING="0">
              <TR BGCOLOR="#FFFFFF"> 
                <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
              </TR>
            </TABLE>
            <TABLE WIDTH="340" BORDER="0" CELLSPACING="0" CELLPADDING="0">
              <TR> 
                <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                <TD WIDTH="348"> 
                  <TABLE WIDTH="340" BORDER="0" CELLPADDING="1" CELLSPACING="1">
                    <TR BGCOLOR="#000000"> 
                      <TD WIDTH="60"> 
                        <DIV ALIGN="center"><B>Fecha</B></DIV>
                      </TD>
                      <TD> 
                        <DIV ALIGN="center"><B>Equipo</B></DIV>
                      </TD>
                      <TD> 
                        <DIV ALIGN="center"><B>L/V</B></DIV>
                      </TD>
                      <TD> 
                        <DIV ALIGN="center"><B>Rival</B></DIV>
                      </TD>
                      <TD> 
                        <DIV ALIGN="center"><B>Goles</B></DIV>
                      </TD>
                    </TR>
                    <?
	$result = mysql_query("SELECT * FROM partidos where goles > 0 ORDER By fecha_partido");  
	$ttg = 0;
		if ($result != 0){ 
			while ($row = mysql_fetch_object($result)){
?> 
                    <TR BGCOLOR="#666666"> 
                      <TD WIDTH="60"><? echo $row->fecha_partido ?></TD>
                      <TD><? echo $row->equipo ?></TD>
                      <TD ALIGN="center"><? echo $row->local ?></TD>
                      <TD><? echo $row->rival ?></TD>
                      <TD ALIGN="center"><? echo $row->goles ?>
<? 
$archi= mysql_query("SELECT * FROM multimedia where id=$row->audio");
$archivo= mysql_fetch_array($archi);
if ($row->audio==0){
?>
<IMG SRC="../img/general/spacer.gif" WIDTH="16" HEIGHT="16" BORDER="0">
<? }else{ ?>
<A HREF="../multimedia/ram/<? echo $archivo[nombre_arch] ?>"><IMG SRC="../img/general/audio.gif" WIDTH="16" HEIGHT="16" BORDER="0"></A>
<? } ?>
					</TD>
                    </TR>
                    <?
	$ttg = $ttg + $row->goles;
	}
}
?> 
                    <TR BGCOLOR="#000000"> 
                      <TD COLSPAN="4"> 
                        <DIV ALIGN="right">Total:&nbsp;</DIV>
                      </TD>
                      <TD ALIGN="center"><B><? echo $ttg ?></B></TD>
                    </TR>
                  </TABLE>
                </TD>
                <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
              </TR>
            </TABLE>
            <TABLE WIDTH="340" BORDER="0" CELLSPACING="0" CELLPADDING="0">
              <TR BGCOLOR="#FFFFFF"> 
                <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
              </TR>
            </TABLE>
          </TD>
        </TR>
      </TABLE>
      <BR>
      <BR>
      <TABLE WIDTH="340" BORDER="0" CELLSPACING="0" CELLPADDING="0" ALIGN="center">
        <TR>
          <TD WIDTH="19" VALIGN="top"><IMG SRC="../img/general/audio.gif" WIDTH="16" HEIGHT="16"></TD>
          <TD>Grabado y Masterizado por <B>RADIO RIVADAVIA</B><BR>
            Relatos de Walter Saavedra<BR>
            Compaginación y Edición Victor Viveros</TD>
        </TR>
      </TABLE>
      <BR>
    </TD>
<TD BGCOLOR="#FFFFFF" WIDTH="1" BACKGROUND="../img/general/title_1.gif"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
              
  </TR>
</TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="1">
  <TR> 
    <TD WIDTH="120"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="358"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
