#include "FormZadanie4.h"

#include "Windows.h"

using namespace Zadanie4;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault;
	Application::Run(gcnew FormZadanie4);
	return 0;
}