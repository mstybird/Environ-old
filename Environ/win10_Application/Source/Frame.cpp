#include <System\Window.hpp>
#include <System\CoreSystem.hpp>

#include "__Window.hpp"
#include"__Frame.hxx"

bool Environ::Frame::Create(const int aParent,
	const int aPosX,
	const int aPosY,
	const int aWidth,
	const int aHeight,
	const std::string& aIDString)
{
	auto lWindow = wxWindow::FindWindowById(aParent);
	//存在していれば作成してそのフレーム(wxPanel)のIDを返す
	//していなければ作成せず0を返す
	if (!lWindow)return false;
	auto lFrame = new __Frame(lWindow, aPosX, aPosY, aWidth, aHeight, aIDString);
	return true;
}

