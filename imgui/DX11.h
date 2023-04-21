#pragma once
#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include <d3d11.h>
#include <tchar.h>

class DX11
{
private:
	static ID3D11Device*  g_pd3dDevice;
	static ID3D11DeviceContext* g_pd3dDeviceContext;
	static IDXGISwapChain* g_pSwapChain;
	static ID3D11RenderTargetView* g_mainRenderTargetView;
	
	static LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
public:
	static bool CreateDeviceD3D(HWND hWnd);
	static void CleanupDeviceD3D();
	static void CreateRenderTarget();
	static void CleanupRenderTarget();
	static void CreateFrame();
	static int main(int, char**);
 

};



