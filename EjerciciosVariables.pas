// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

Program ejerciciovariables;

Type
	// Para las variables que no se pudo determinar el tipo se utiliza la constante
	// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado.
	SIN_TIPO = Real;
Var
	cero: SIN_TIPO;
	dato: SIN_TIPO;
	dato1: Integer;
	dato10: Boolean;
	dato2: String;
	dato3: String;
	dato4: Real;
	dato5: Real;
	dato6: Array [1..4] Of String;
	dato7: String;
	dato8: Boolean;
	dato9: Boolean;
Begin
	// definir dato4 como entero;
	dato1 := 2;
	dato2 := '2';
	dato3 := '2';
	dato4 := -6;
	dato5 := 7.14;
	dato6[0] := '3';
	dato6[1] := '0';
	dato6[2] := '4';
	dato6[3] := '7';
	dato7 := '2015';
	dato8 := True;
	dato9 := False;
	dato10 := cero;
	WriteLn(dato1);
	WriteLn(dato2);
	WriteLn(dato3);
	WriteLn(dato4);
	WriteLn(dato5);
	WriteLn(dato6[0],dato6[1],dato6[2],dato6[3]);
	WriteLn(dato);
	WriteLn(dato8);
	WriteLn(dato,9);
	WriteLn(dato,10);
End.

