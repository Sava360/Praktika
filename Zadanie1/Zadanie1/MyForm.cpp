#include "MyForm.h"

#include "Windows.h"

using namespace Zadanie1;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault;
	Application::Run(gcnew MyForm);
	return 0;
}