SET TxtDir="%~dp0"
SET /A N=90
CD /D %TxtDir%
FOR /F "tokens=1 delims=" %%I IN ('DIR /A /B *time2.json') DO ((MORE +%N% "%%I">"%%I_")&(DEL /A /F /Q "%%I")&(REN "%%I_" "%%I"))