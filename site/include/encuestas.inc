<SCRIPT LANGUAGE="JavaScript">
<!-- 

function sub(){
window.open("","encuesta","width=320,height=150,scrollbars=1");
document.encuesta.submit();
}

function openwin(theURL,winName,features) {
  window.open(theURL,winName,features);
} 
-->
</SCRIPT>
<?
$sql=mysql_query("SELECT id, pregunta, respuestas FROM encuesta_preguntas WHERE nivel='actual'");
$row=mysql_fetch_array($sql);
?>
<BR>
<TABLE WIDTH="233" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <FORM NAME="encuesta" METHOD="post" ACTION="../include/encuesta_ow.html" TARGET="encuesta">
  <TR> 
    <TD><IMG SRC="../img/general/noticias/encuesta.gif" WIDTH="233" HEIGHT="9"></TD>
  </TR>
	<TR ALIGN="CENTER"> 
      <TD HEIGHT="22"><FONT COLOR="#FFFFFF"><? echo $row[pregunta] ?></FONT></TD>
  </TR>
    <TR BACKGROUND="../img/general/title_1.gif" BGCOLOR="#FFFFFF"> 
      <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
  <?
$respuestas=strtok($row[respuestas], ";");
$x=1;
while ($respuestas){
	$respuesta[$x]=$respuestas;
	$respuestas=strtok(";");
?> 
  <TR> 
    <TD> 
      <TABLE WIDTH="233" BORDER="0" CELLSPACING="0" CELLPADDING="0">
        <TR> 
          <TD WIDTH="89%" ALIGN="right"><FONT COLOR="#FFFFFF"><? echo $respuesta[$x] ?></FONT></TD>
          <TD WIDTH="11%"> 
            <INPUT TYPE="radio" NAME="voto" VALUE="<? echo $respuesta[$x] ?>" STYLE="background-color:#98C088">
          </TD>
        </TR>
      </TABLE>
    </TD>
  </TR>
    <TR BACKGROUND="../img/general/title_1.gif" BGCOLOR="#FFFFFF"> 
      <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
  <?
	$x++;
}
?>
  <TR ALIGN="right"> 
    <TD HEIGHT="9"><IMG SRC="../img/general/noticias/resultados_vota.gif" WIDTH="137" HEIGHT="14" HSPACE="8" USEMAP="#Map" BORDER="0"><MAP NAME="Map"><AREA SHAPE="RECT" COORDS="84,0,132,14" HREF="#" onClick="javascript:sub()"><AREA SHAPE="RECT" COORDS="2,0,82,14" HREF="javascript:openwin('../include/encuesta_ow.html','encuesta','width=320,height=150,scrollbars=1')"></MAP> 
    </TD>
  </TR>
</FORM>
</TABLE>
<BR>