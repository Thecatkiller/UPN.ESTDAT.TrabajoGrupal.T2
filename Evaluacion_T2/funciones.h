
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

#pragma endregion Setters

Curso buscarPilaCurso(int tope, int limite, NodoSCurso *&IniPila, NodoSCurso *&FinPila, Curso dato){
	Curso datoR;

	int ta = 0;
	NodoSCurso *Ini, *Fin;
	Ini = NULL, Fin = NULL;

	while (!estaVacia(tope))
	{
		Curso ex = desaPilar(tope, IniPila, FinPila);
		if (strcmp(datoR.codigo, ex.codigo) == 0)
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

void SetDefaultData(){
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
}