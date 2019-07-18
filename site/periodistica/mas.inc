<?
	if (!isset($paso)){ $paso=1; }
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
    <TD WIDTH="478" ALIGN="right"><FONT FACE="Verdana, Arial, Helvetica, sans-serif"><B>M&aacute;s 
      <? echo $tipo ?>s: &nbsp;&nbsp;</B></FONT></TD>
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
                      
          <TD> <? include "../include/fotos.inc" ?></TD>
                    </TR>
                  </TABLE>
                </TD>
                <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                
    <TD WIDTH="357" VALIGN="top" ALIGN="CENTER"> 
      <TABLE WIDTH="95%" BORDER="0" CELLSPACING="1" CELLPADDING="1">
        <TR ALIGN="CENTER"> 
          <TD><BR>
            <?
	$tot = mysql_query("SELECT * FROM noticia WHERE tipo_contenido='$tipo' ORDER BY fecha_creacion DESC LIMIT 30"); 
	$total=mysql_num_rows($tot);
	
?> &Uacute;ltimas 30 <? echo $tipo ?>s: <?
	$rango=15;
	$rango_i=($rango*$paso)-$rango;
 	$pasos=$total/$rango;
	$x=1;
	while ($x<=($pasos+1)){
?> <A HREF="<? echo $PHP_SELF ?>?paso=<? echo $x ?>&inc=mas&tipo=<? echo $tipo ?>" <? if ($x==$paso){ echo "style='color:#FF0000'"; }else{ echo "style='color:#0000FF'"; } ?>><? echo $x ?>&nbsp;</A> 
            <?
		$x++;
	}
?><BR>&nbsp;
          </TD>
        </TR>
      </TABLE>
      <TABLE WIDTH="95%" BORDER="0">
        <?
	$result = mysql_query("SELECT * FROM noticia WHERE tipo_contenido='$tipo' ORDER BY fecha_creacion DESC LIMIT $rango_i,$rango");  
		if ($result != 0){ 
			while ($row = mysql_fetch_object($result)){
?> 
        <TR VALIGN="TOP"> 
          <TD WIDTH="20%"><FONT COLOR="#000000"><? echo $row->fecha_creacion ?>&nbsp;<IMG SRC="../img/general/title_1.gif" WIDTH="5" HEIGHT="5"></FONT></TD>
          <TD WIDTH="80%"><A HREF="<? echo $PHP_SELF ?>?id=<? echo $row->id ?>&inc=nota&tipo=<? echo $tipo ?>"><FONT COLOR="#FFFFFF"><? echo $row->titulo ?></FONT></A></TD>
        </TR>
        <?
	}
}
?> 
      </TABLE>
      <P> <A HREF="<? echo $PHP_SELF ?>?inc=../include/buscar"><FONT COLOR="#FFFFFF">&gt;&gt; 
        buscar</FONT></A></P>
      <P>&nbsp;</P>
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
