#pragma once
#include "Window.h"
#include "IPartWndProc.h"
#include "IDrawWndProc.h"

class GraphicsArchitectureSetter
{
public:
    //explicit GraphicsArchitectureSetter(ytyaru::Framework::WndProc::Window* pWindow);
    GraphicsArchitectureSetter();
    ~GraphicsArchitectureSetter();
	void Initialize();
	void Finalize();
    void Set(const std::basic_string<TCHAR> &name);
	IDrawWndProc* Get();
	IDrawWndProc* Get(const std::basic_string<TCHAR> &name);
private:
	void Change(IDrawWndProc* newProc);
    //ytyaru::Framework::WndProc::Window* m_pWindow;
	IDrawWndProc* m_selected;
	IDrawWndProc* m_gdi;
	IDrawWndProc* m_gdiPlus;
	IDrawWndProc* m_directX9;
};
