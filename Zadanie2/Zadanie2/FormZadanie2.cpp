#include "FormZadanie2.h"

#include "Windows.h"

using namespace Zadanie2;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault;
	Application::Run(gcnew FormZadanie2);
	return 0;
}