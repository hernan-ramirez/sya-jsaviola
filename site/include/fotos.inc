
<TABLE WIDTH="120" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR BGCOLOR="#666666"> 
    <TD>&nbsp;</TD>
  </TR>
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1" HSPACE="1"></TD>
  </TR>
  <TR BGCOLOR="#000000"> <? $imas=mysql_query("SELECT nombre_arch, ancho, alto FROM fotos WHERE id='$noticia[id_foto1]'");
	$imasa=mysql_fetch_array($imas); ?> 
    <TD HEIGHT="80"><IMG SRC="../img/clipart/<? if ($imasa[0]==""){echo "default/01.jpg";}else{echo $imasa[0]; } ?>" WIDTH="120" HEIGHT="80"></TD>
  </TR>
  <TR BGCOLOR="#666666"> 
    <TD HEIGHT="1" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
  <TR BGCOLOR="#000000"> <? $imas=mysql_query("SELECT nombre_arch, ancho, alto FROM fotos WHERE id='$noticia[id_foto2]'");
	$imasa=mysql_fetch_array($imas); ?> 
    <TD HEIGHT="80"><IMG SRC="../img/clipart/<? if ($imasa[0]==""){echo "default/02.jpg";}else{echo $imasa[0]; } ?>" WIDTH="120" HEIGHT="80"></TD>
  </TR>
  <TR BGCOLOR="#666666"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
  <TR BGCOLOR="#000000"> <? $imas=mysql_query("SELECT nombre_arch, ancho, alto FROM fotos WHERE id='$noticia[id_foto3]'");
	$imasa=mysql_fetch_array($imas); ?> 
    <TD HEIGHT="80"><IMG SRC="../img/clipart/<? if ($imasa[0]==""){echo "default/03.jpg";}else{echo $imasa[0]; } ?>" WIDTH="120" HEIGHT="80"></TD>
  </TR>
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR></TABLE>
                      