#include "AuthorizationForm.h"
#include <Windows.h>
#include "LibraryInjector.h"
#include "Input.h"

using namespace HomeLibrary;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Input);

	return 0;

}