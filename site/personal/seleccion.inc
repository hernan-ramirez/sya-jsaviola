 
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="18">
  <TR> 
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD WIDTH="478" ALIGN="right"><FONT FACE="Verdana, Arial, Helvetica, sans-serif"><B><FONT FACE="Verdana, Arial, Helvetica, sans-serif"><B><FONT COLOR="#FFFFFF">Trayectoria 
      en la Selecci&oacute;n Mayor</FONT> &nbsp;</B></FONT><FONT COLOR="#FFFFFF"> 
      </FONT>&nbsp;&nbsp;</B></FONT></TD>
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
    <TD WIDTH="478" BGCOLOR="#000000" ALIGN="right"><A HREF="?inc=river"><FONT COLOR="#FFFFFF">River 
      Plate </FONT></A> <FONT COLOR="#FFFFFF">I </FONT><A HREF="?inc=juveniles"><FONT COLOR="#FFFFFF">Selecciones 
      Juveniles</FONT></A>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</TD>
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
          <TD BGCOLOR="#FFFFFF" WIDTH="1" HEIGHT="355"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
          <TD HEIGHT="355" VALIGN="top"> 
            <TABLE WIDTH="120" BORDER="0" CELLSPACING="0" CELLPADDING="0">
              <TR BGCOLOR="#666666"> 
                <TD>&nbsp;</TD>
              </TR>
              <TR BGCOLOR="#FFFFFF"> 
                <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1" HSPACE="1"></TD>
              </TR>
              <TR BGCOLOR="#000000"> 
                <TD HEIGHT="80"><IMG SRC="../img/trayectoria/mayor1.jpg" WIDTH="120" HEIGHT="80"></TD>
              </TR>
              <TR BGCOLOR="#666666"> 
                <TD HEIGHT="1" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
              </TR>
              <TR BGCOLOR="#000000"> 
                <TD HEIGHT="80"><IMG SRC="../img/trayectoria/mayor2.jpg" WIDTH="120" HEIGHT="80"></TD>
              </TR>
              <TR BGCOLOR="#666666"> 
                <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
              </TR>
              <TR BGCOLOR="#000000"> 
                <TD HEIGHT="80"><IMG SRC="../img/trayectoria/mayor3.jpg" WIDTH="120" HEIGHT="80"></TD>
              </TR>
              <TR BGCOLOR="#FFFFFF"> 
                <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1" HSPACE="1"></TD>
              </TR>
            </TABLE>
            <? include "menu.inc" ?> </TD>
        </TR>
      </TABLE>
    </TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD WIDTH="357" VALIGN="top"> 
      <TABLE WIDTH="100%" BORDER="0" CELLSPACING="2" CELLPADDING="2">
        <TR> 
          <TD> 
            <P><B><IMG SRC="../img/general/title_1.gif" WIDTH="5" HEIGHT="5"> 
              Selecci&oacute;n Mayor</B><BR>
              Su debut en la Selecci&oacute;n Mayor se produjo el 16 de agosto 
              de este a&ntilde;o, en el empate 1 a 1 ante Paraguay, por la s&eacute;ptima 
              fecha de las Eliminatorias Sudamericanas, clasificatorias para el 
              Mundial 2002, en el estadio Monumental. Fue hasta el momento el 
              &uacute;nico partido de Javier Saviola en el equipo del entrenador 
              argentino Marcelo Bielsa, ya que ante Per&uacute;, en Lima, ocup&oacute; 
              el banco de los suplentes, y no ingres&oacute;.</P>
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
                        <TABLE WIDTH="100%" BORDER="0" CELLSPACING="1" CELLPADDING="1">
                          <TR> 
                            <TD WIDTH="200" ALIGN="center" BGCOLOR="#000000">Motivo</TD>
                            <TD ALIGN="center" WIDTH="70" BGCOLOR="#000000">Partidos</TD>
                            <TD WIDTH="70" ALIGN="center" BGCOLOR="#000000">Goles</TD>
                          </TR>
                          <? 
	$totalp = 0;
	$totalg = 0;
	$zona = mysql_query("SELECT * from partidos_campeonato WHERE zona='seleccion'");
	while($row=mysql_fetch_object($zona)){ 
		$part = mysql_query("SELECT * from partidos WHERE campeonato='$row->campeonato'");
		$partidos = mysql_num_rows($part);
		$g = mysql_query("SELECT * from partidos WHERE campeonato='$row->campeonato'");
			$cantidad=0;
			while($gol=mysql_fetch_object($g)){
			$cantidad=$cantidad+$gol->goles;
			}
?> 
                          <TR> 
                            <TD WIDTH="200" ALIGN="center" BGCOLOR="#666666"><A HREF="javascript:openwin('partidos_ow.html?id=<? echo $row->id ?>','Estadística','width=506,height=250,scrollbars=1')"> 
                              <FONT FACE="Ms Sans Serif" SIZE="1" COLOR="#FFFFFF"><? echo $row->campeonato ?> 
                              &nbsp; &gt;&gt; </FONT></A></TD>
                            <TD ALIGN="center" WIDTH="70" BGCOLOR="#666666"><? echo $partidos ?></TD>
                            <TD WIDTH="70" ALIGN="center" BGCOLOR="#666666"><? echo $cantidad ?></TD>
                          </TR>
                          <? 
		$totalp = $totalp+$partidos;
		$totalg = $totalg+$cantidad;
} 
?> 
                          <TR BGCOLOR="#555555"> 
                            <TD WIDTH="200" ALIGN="center"><B>TOTAL</B></TD>
                            <TD ALIGN="center" WIDTH="70"><B><? echo $totalp ?></B></TD>
                            <TD WIDTH="70" ALIGN="center"><B><? echo $totalg ?></B></TD>
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
