#include "FormZadanie5.h"

#include "Windows.h"

using namespace Zadanie5;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault;
	Application::Run(gcnew FormZadanie5);
	return 0;
}