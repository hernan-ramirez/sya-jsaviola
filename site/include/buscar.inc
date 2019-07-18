<?
	if (!isset($paso)){ $paso=1; }
?> 
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR>
    <TD>
      <TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0">
        <TR BGCOLOR="#FFFFFF"> 
          <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
        </TR>
      </TABLE>
      <TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="18">
        <TR> 
          <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
          <TD WIDTH="478" ALIGN="right"><FONT FACE="Verdana, Arial, Helvetica, sans-serif"><B><FONT SIZE="2">Buscar</FONT>&nbsp;&nbsp;</B></FONT></TD>
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
          <TD WIDTH="357" VALIGN="top"> 
            <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
              <FORM NAME="buscar" METHOD="post" ACTION="<? echo $PHP_SELF ?>?paso=<? echo $paso ?>&inc=../include/buscar">
                <TR ALIGN="CENTER"> 
                  <TD> 
                    <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                      <TR BGCOLOR="#666666"> 
                        <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="14"></TD>
                      </TR>
                    </TABLE>
                    <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0" BGCOLOR="#FFFFFF">
                      <TR> 
                        <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                      </TR>
                    </TABLE>
                    <TABLE WIDTH="100%" BORDER="0" CELLSPACING="2" CELLPADDING="2" BGCOLOR="#000000">
                      <TR ALIGN="center"> 
                        <TD> 
                          <INPUT TYPE="text" NAME="palabra">
                          <INPUT TYPE="submit" NAME="buscar" VALUE="Buscar">
                        </TD>
                      </TR>
                    </TABLE>
                    <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0" BGCOLOR="#FFFFFF">
                      <TR> 
                        <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                      </TR>
                    </TABLE>
                  </TD>
                </TR>
              </FORM>
              <? 
if (isset($palabra)){ 
?> 
              <TR ALIGN="CENTER"> 
                <TD> <BR>
                  <?
	$tot = mysql_query("SELECT * FROM noticia WHERE texto LIKE '%$palabra%' or titulo LIKE '%$palabra%'"); 
	$total=mysql_num_rows($tot);
	
?> Total de Noticias encontradas <? echo $total ?>: <?
	$rango=18;
	$rango_i=($rango*$paso)-$rango;
 	$pasos=$total/$rango;
	$x=1;
	while ($x<=($pasos+1)){
?> <A HREF="<? echo $PHP_SELF ?>?paso=<? echo $x ?>&palabra=<? echo $palabra ?>&inc=../include/buscar" <? if ($x==$paso){ echo "style='color:#FF0000'"; }else{ echo "style='color:#0000FF'"; } ?>><? echo $x ?>&nbsp;</A> 
                  <?
		$x++;
	}
?> <BR>
                  &nbsp; </TD>
              </TR>
              <?
	$result = mysql_query("SELECT * FROM noticia WHERE texto LIKE '%$palabra%' or titulo LIKE '%$palabra%' ORDER BY id LIMIT $rango_i,$rango"); 
	if (mysql_num_rows($result)!=0){
		while($row = mysql_fetch_object($result)){ 
?> 
              <TR ALIGN="CENTER"> 
                <TD> 
                  <TABLE WIDTH="95%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                    <TR VALIGN="TOP"> 
                      <TD WIDTH="20%"><FONT COLOR="#000000"><? echo $row->fecha_creacion; ?>&nbsp;<IMG SRC="../img/general/title_1.gif" WIDTH="5" HEIGHT="5"></FONT></TD>
                      <TD WIDTH="80%"><A HREF="index.html?id=<? echo $row->id ?>&inc=nota&tipo=<? echo $row->tipo_contenido; ?>"><FONT COLOR="#FFFFFF"><? echo $row->titulo; ?></FONT></A></TD>
                    </TR>
                  </TABLE>
                </TD>
              </TR>
              <?
		}
	} else {
?> 
              <TR ALIGN="CENTER"> 
                <TD>No se encontr&oacute; resultado en su t&eacute;rmino de b&uacute;squeda</TD>
              </TR>
              <?
	}
}else{ 
?> 
              <TR ALIGN="CENTER"> 
                <TD>Ingres&aacute; tu b&uacute;squeda</TD>
              </TR>
              <?
}
?> 
            </TABLE>
            <BR>
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
</TD>
  </TR>
</TABLE>
