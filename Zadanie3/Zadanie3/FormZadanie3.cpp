#include "FormZadanie3.h"

#include "Windows.h"

using namespace Zadanie3;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault;
	Application::Run(gcnew FormZadanie3);
	return 0;
}