#ifdef _DEBUG
#  pragma comment ( lib, "cryptlibd" )
#else
#  pragma comment ( lib, "cryptlib" )
#endif

#include "wordFortress.h"

using namespace std;

wxIMPLEMENT_APP_NO_MAIN(WordFortress);

int main()
{
	wxEntry();

	return 0;
}

bool WordFortress::OnInit()
{
	if (!wxApp::OnInit())
		return false;

	mainGuiLogic = new MainGuiLogic(database);
	mainGuiLogic->ShowGui();

	return true;
}
