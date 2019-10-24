
using namespace System::Runtime::InteropServices;
using namespace System::Windows::Forms;
using namespace System::Windows;
using namespace System;

bool estaVacia(int tope)
{
	if (tope == 0) return true;
	else return false;
}

bool estaLlena(int tope, int limite)
{
	if (tope == limite) return true;
	else return false;
}

#pragma region Insertar_Nodo_Simple

void insertarNodo(NodoSCurso *&I, NodoSCurso *&F, Curso dato) {
	NodoSCurso *aux = new NodoSCurso;
	aux->dato = dato;
	aux->puntero = NULL;

	if (I == NULL && F == NULL) I = F = aux;
	else {
		F->puntero = aux;
		F = aux;
		F->puntero = NULL;
	}
}

void insertarNodo(NodoSDocente *&I, NodoSDocente *&F, Docente dato) {
	NodoSDocente *aux = new NodoSDocente;
	aux->dato = dato;
	aux->puntero = NULL;

	if (I == NULL && F == NULL) I = F = aux;
	else {
		F->puntero = aux;
		F = aux;
		F->puntero = NULL;
	}
}

void insertarNodo(NodoSRegistro *&I, NodoSRegistro *&F, Registro dato) {
	NodoSRegistro *aux = new NodoSRegistro;
	aux->dato = dato;
	aux->puntero = NULL;

	if (I == NULL && F == NULL) I = F = aux;
	else {
		F->puntero = aux;
		F = aux;
		F->puntero = NULL;
	}
}

#pragma endregion Insertar_Nodo_Simple

#pragma region Insertar_Nodo_Doble

void insertarNDID(NodoDAlumno *&I, NodoDAlumno *&D, Alumno dato) {
	NodoDAlumno *aux = new NodoDAlumno;
	aux->dato = dato;
	aux->izq = aux->der = NULL;
	if (I == NULL && D == NULL) I = D = aux;
	else {
		D->der = aux;
		aux->izq = D;
		D = aux;
		D->der = NULL;
	}
}

void insertarNDDI(NodoDAlumno *&I, NodoDAlumno *&D, Alumno dato) {
	NodoDAlumno *aux = new NodoDAlumno;
	aux->dato = dato;
	aux->izq = aux->der = NULL;
	if (I == NULL && D == NULL) I = D = aux;
	else {
		I->izq = aux;
		aux->der = I;
		I = aux;
		I->izq = NULL;
	}
}


void insertarNDID(NodoDRegistro *&I, NodoDRegistro *&D, Registro dato) {
	NodoDRegistro *aux = new NodoDRegistro;
	aux->dato = dato;
	aux->izq = aux->der = NULL;
	if (I == NULL && D == NULL) I = D = aux;
	else {
		D->der = aux;
		aux->izq = D;
		D = aux;
		D->der = NULL;
	}
}

void insertarNDDI(NodoDRegistro *&I, NodoDRegistro *&D, Registro dato) {
	NodoDRegistro *aux = new NodoDRegistro;
	aux->dato = dato;
	aux->izq = aux->der = NULL;
	if (I == NULL && D == NULL) I = D = aux;
	else {
		I->izq = aux;
		aux->der = I;
		I = aux;
		I->izq = NULL;
	}
}

#pragma endregion Insertar_Nodo_Doble

#pragma region Pilas_Simples
void apilar(int &tope, int limite, NodoSCurso *&pilaI, NodoSCurso *&pilaF, Curso dato) {
	if (!estaLlena(tope, limite)) {
		insertarNodo(pilaI, pilaF, dato);
		tope++;
	}
}

Curso desaPilar(int &tope, NodoSCurso *&Ini, NodoSCurso *&Fin) {
	Curso dato;
	if (Fin != NULL) dato = Fin->dato;
	if (!estaVacia(tope)) {
		if (Ini == Fin && Ini != NULL) Ini = Fin = NULL;
		else {
			NodoSCurso *x = Ini;
			for (; x->puntero != Fin; x = x->puntero);
			Fin = x;
			Fin->puntero = NULL;
		}
		tope--;
	}
	return dato;
}

void apilar(int &tope, int limite, NodoSDocente *&pilaI, NodoSDocente *&pilaF, Docente dato) {
	if (!estaLlena(tope, limite)) {
		insertarNodo(pilaI, pilaF, dato);
		tope++;
	}
}

Docente desaPilar(int &tope, NodoSDocente *&Ini, NodoSDocente *&Fin) {
	Docente dato;
	if (Fin != NULL) dato = Fin->dato;
	if (!estaVacia(tope)) {
		if (Ini == Fin && Ini != NULL) Ini = Fin = NULL;
		else {
			NodoSDocente *x = Ini;
			for (; x->puntero != Fin; x = x->puntero);
			Fin = x;
			Fin->puntero = NULL;
		}
		tope--;
	}
	return dato;
}

#pragma endregion Pilas_Simples

#pragma region Colas_Simples
void enColar(int &tope, int limite, NodoSCurso *&Ini, NodoSCurso *&Fin, Curso dato)
{
	if (!estaLlena(tope, limite))
	{
		insertarNodo(Ini, Fin, dato);
		tope++;
	}
}



Curso desenColar(int &tope, NodoSCurso *&Ini, NodoSCurso *&Fin) {
	Curso dato;
	if (Ini != NULL) dato = Ini->dato;
	if (!estaVacia(tope)) {
		if (Ini == Fin && Ini != NULL) Ini = Fin = NULL;
		else {
			Ini = Ini->puntero;
		}
		tope--;
	}
	return dato;
}

void enColar(int &tope, int limite, NodoSDocente *&Ini, NodoSDocente *&Fin, Docente dato)
{
	if (!estaLlena(tope, limite))
	{
		insertarNodo(Ini, Fin, dato);
		tope++;
	}
}



Docente desenColar(int &tope, NodoSDocente *&Ini, NodoSDocente *&Fin) {
	Docente dato;
	if (Ini != NULL) dato = Ini->dato;
	if (!estaVacia(tope)) {
		if (Ini == Fin && Ini != NULL) Ini = Fin = NULL;
		else {
			Ini = Ini->puntero;
		}
		tope--;
	}
	return dato;
}

#pragma endregion Colas_Simples

#pragma region Pilas_Colas_Dobles

void enColarID(int &tope, int limite, NodoDAlumno *&I, NodoDAlumno *&D, Alumno dato) {
	if (!estaLlena(tope, limite)) {
		insertarNDID(I, D, dato);
		tope++;
	}
}

void enColarDI(int &tope, int limite, NodoDAlumno *&I, NodoDAlumno *&D, Alumno dato) {
	if (!estaLlena(tope, limite)) {
		insertarNDDI(I, D, dato);
		tope++;
	}
}

void enColarID(int &tope, int limite, NodoDRegistro *&I, NodoDRegistro *&D, Registro dato) {
	if (!estaLlena(tope, limite)) {
		insertarNDID(I, D, dato);
		tope++;
	}
}

void enColarDI(int &tope, int limite, NodoDRegistro *&I, NodoDRegistro *&D, Registro dato) {
	if (!estaLlena(tope, limite)) {
		insertarNDDI(I, D, dato);
		tope++;
	}
}

Alumno desenColarID(int &tope, NodoDAlumno *&I, NodoDAlumno *&D) {
	Alumno dato;
	if (I != NULL) dato = I->dato;
	if (!estaVacia(tope)) {
		if (I == D && I != NULL) I = D = NULL;
		else {
			I = I->der;
			I->izq = NULL;
		}
		tope--;
	}
	return dato;
}

Alumno desenColarDI(int &tope, NodoDAlumno *&I, NodoDAlumno *&D) {
	Alumno dato;
	if (D != NULL) dato = D->dato;
	if (!estaVacia(tope)) {
		if (I == D && D != NULL) I = D = NULL;
		else {
			D = D->izq;
			D->der = NULL;
		}
		tope--;
	}
	return dato;
}


Alumno desapilarDI(int &tope, NodoDAlumno *&I, NodoDAlumno *&D) {
	return desenColarID(tope, I, D);
}

#pragma endregion Pilas_Colas_Dobles



#pragma region Otras_Funciones
string ZeroPadNumber(int num, int length = 9)
{
	std::string s = std::to_string(num);
	string ret = s;
	int str_length = s.length();
	for (int i = 0; i < length - str_length; i++)
		ret = "0" + ret;
	return ret;
}


char *StringToChar(System::Windows::Forms::TextBox^ textBox) {
	String^ val = textBox->Text;
	IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(val);
	char* r = static_cast<char*>(ptrToNativeString.ToPointer());
	return r;
}

char *StringToChar(String^ val) {
	IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(val);
	char* r = static_cast<char*>(ptrToNativeString.ToPointer());
	return r;
}

void limpiarTextBoxs(System::Windows::Forms::Control::ControlCollection ^ controls) {
	for each (Object ^ c in controls)
	{
		if (c->GetType()->Name == "TextBox") {
			System::Windows::Forms::TextBox^ txtBox = (System::Windows::Forms::TextBox^)c;
			txtBox->Text = "";
		}
	}
}

#pragma endregion Otras_Funciones

#pragma region Setters
Curso setCurso(char* codigo, char* nombre, int creditos){
	Curso curso;
	strcpy(curso.codigo, codigo);
	strcpy(curso.nombre, nombre);
	curso.creditos = creditos;
	return curso;
}

Docente setDocente(char *codigo, char *nombreAP, double sueldoxhora){
	Docente d;
	strcpy(d.codigo, codigo);
	strcpy(d.nombresAP, nombreAP);
	d.sueldoxHora = sueldoxhora;
	return d;
}

Alumno setAlumno(char *codigo, char *nombre, char *apellido, int estado){
	Alumno a;
	strcpy(a.codigo, codigo);
	strcpy(a.nombre, nombre);
	strcpy(a.Apellido, apellido);
	a.estado = estado;
	return a;
}

#pragma endregion Setters

#pragma region Busquedas
Curso buscarPilaCurso(int tope, int limite, NodoSCurso *&IniPila, NodoSCurso *&FinPila, char* codigo){
	Curso datoR;

	int ta = 0;
	NodoSCurso *Ini, *Fin;
	Ini = NULL, Fin = NULL;

	while (!estaVacia(tope))
	{
		Curso ex = desaPilar(tope, IniPila, FinPila);
		if (strcmp(ex.codigo, codigo) == 0)
			datoR = ex;

		apilar(ta, limite, Ini, Fin, ex);
	}
	while (!estaVacia(ta))
	{
		Curso ex = desaPilar(ta, Ini, Fin);
		apilar(tope, limite, IniPila, FinPila, ex);
	}

	return datoR;
}

Docente buscarPilaDocente(int tope, int limite, NodoSDocente *&IniPila, NodoSDocente *&FinPila, char* codigo){
	Docente datoR;

	int ta = 0;
	NodoSDocente *Ini, *Fin;
	Ini = NULL, Fin = NULL;

	while (!estaVacia(tope))
	{
		Docente ex = desaPilar(tope, IniPila, FinPila);
		if (strcmp(ex.codigo, codigo) == 0)
			datoR = ex;

		apilar(ta, limite, Ini, Fin, ex);
	}
	while (!estaVacia(ta))
	{
		Docente ex = desaPilar(ta, Ini, Fin);
		apilar(tope, limite, IniPila, FinPila, ex);
	}

	return datoR;
}

Alumno buscarColaDAlumno(int tope, int limite, NodoDAlumno *&IniPila, NodoDAlumno *&FinPila, char* codigo){
	Alumno datoR;

	int ta = 0;
	NodoDAlumno *Ini, *Fin;
	Ini = NULL, Fin = NULL;

	while (!estaVacia(tope))
	{
		Alumno ex = desenColarID(tope, IniPila, FinPila);
		if (strcmp(ex.codigo, codigo) == 0)
			datoR = ex;

		enColarID(ta, limite, Ini, Fin, ex);
	}
	while (!estaVacia(ta))
	{
		Alumno ex = desenColarID(ta, Ini, Fin);
		enColarID(tope, limite, IniPila, FinPila, ex);
	}

	return datoR;
}

#pragma endregion Busquedas


int compararElementos(Alumno al1, Alumno al2)
{
	int a = strcmpi(al1.Apellido, al2.Apellido);

	if (a == 0){
		a = strcmpi(al1.nombre, al2.nombre);
		if (a == 0)
			a = -1;
	}

	return a;
}
void EncolarAlumnoOrdenadamente(int &tope, int limite, NodoDAlumno *&I, NodoDAlumno *&D, Alumno dato){
	bool yaSeAgrego = false;
	if (estaVacia(tope)){
		enColarID(tope, limite, I, D, dato);
	}
	else{

		int ta = 0;
		int topeTotal = tope;
		NodoDAlumno *Izq, *Der;
		Izq = NULL, Der = NULL;
		Alumno alumno;

		while (!estaVacia(tope))
		{
			alumno = desenColarDI(tope, I, D);
			enColarDI(ta, limite, Izq, Der, alumno);
		}


		enColarID(tope, limite, I, D, alumno);
		if (ta == 1){
			int a = compararElementos(alumno, dato);
			if (a < 0)
				enColarID(tope, limite, I, D, dato);
			else
				enColarDI(tope, limite, I, D, dato);
		}
		else{
			char *apellido;

			Alumno ex = desenColarID(ta, Izq, Der);
			while (!estaVacia(ta)){

				ex = desenColarID(ta, Izq, Der);

				int a = compararElementos(dato, ex);
				if (a > 0)
					enColarID(tope, limite, I, D, ex);
				else{

					a = compararElementos(D->dato, dato);
					if (yaSeAgrego == false){
						if (a > 0)
							enColarDI(tope, limite, I, D, dato);
						else
							enColarID(tope, limite, I, D, dato);
					}
					enColarID(tope, limite, I, D, ex);

					yaSeAgrego = true;
				}


			}
			if (yaSeAgrego == false){
				enColarID(tope, limite, I, D, dato);
			}
		}


	}


}


void SetDefaultData(){
	//EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000003", "A", "5", 0));
	//EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000003", "A", "1", 0));
	//EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000003", "A", "7", 0));
	//EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000003", "A", "2", 0));
	//EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000003", "A", "9", 0));
	//EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000003", "A", "3", 0));
	//EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000003", "A", "0", 0));
	//EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000003", "A", "4", 0));
	//EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000003", "A", "8", 0));
	//EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000003", "A", "6", 0));
	//EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000003", "B", "7", 0));
	//EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000003", "G", "7", 0));
	//EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000003", "F", "7", 0));
	apilar(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, setCurso("C0000001", "Cálculo I", 5));
	apilar(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, setCurso("C0000002", "Cálculo II", 5));
	apilar(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, setCurso("C0000003", "Cálculo III", 5));
	apilar(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, setCurso("C0000004", "Fundamentos de Programación", 5));
	apilar(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, setCurso("C0000005", "Estructura de Datos", 4));
	apilar(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, setCurso("C0000006", "Base de datos", 4));
	apilar(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, setCurso("C0000007", "Taller de base de datos", 4));
	apilar(topePilaCurso, limitePilaCurso, PilaCursoI, PilaCursoF, setCurso("C0000008", "Técnicas de programación orientada a objetos", 4));

	apilar(topePilaDocente, limitePilaDocente, PilaDocenteI, PilaDocenteF, setDocente("D00001", "Charles Dummar Camasca", 25));
	apilar(topePilaDocente, limitePilaDocente, PilaDocenteI, PilaDocenteF, setDocente("D00002", "Paulo Cesar Olivares Taipe", 23));

	EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000001", "Diego Sebastián", "Calderón Alvarado", 0));
	EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000002", "Diego Sebastián", "Calderón Acuña", 0));
	EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000003", "Diego Sebastián", "Calderón Acua", 0));
	EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000004", "Diego Sebastián", "Calderón Alvarez", 0));
	EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000005", "Diego Sebastián", "Quezada Perez", 0));
	EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000006", "Diego Sebastián", "Calderón Zambrano", 0));

	EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000007", "Alfonso Giampierre", "Rios Rodriguez", 0));
	EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000008", "Brenda Solanch", "Encarnacion Quiroz", 0));
	EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000009", "Bryan Martin", "Chilque Antayhua", 0));
	EncolarAlumnoOrdenadamente(topeColaDAlumno, limiteColaDAlumno, ColaDAlumnoI, ColaDAlumnoD, setAlumno("N0000009", "Diego Fernando", "Calderón Alvarado", 0));



}