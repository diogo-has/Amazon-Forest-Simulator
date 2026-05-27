#include "Menu.h"

Menu::Menu() : Ente(), pJogo(NULL) {

}
Menu::Menu(Jogo* pj) {

	pJogo = pj;
}
Menu::~Menu() {

	pJogo = NULL;
}
void Menu::executar() {
	
	pJogo->executar();
}