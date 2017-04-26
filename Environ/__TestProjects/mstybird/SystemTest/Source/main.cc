#include"Configure\Integration.hh"
#include<System/Window.hpp>
#include<Frame\Frame.hpp>
#include <System/EntryPoint.hpp>
#include<Math\Arithmetic\Float3.hpp>
#include<Math\Arithmetic\Vector3.hpp>
#include<Math\Arithmetic\Vector2.hpp>
#include <string>

bool Environ::SetupWizard() {

	int id= Environ::Window::Create("Sample", 100, 100, 300, 300);
	Float3 f{ 1,2,3 };
	Vector3 f2;
	f2 += 4;
	f *= f2;
	auto f3 = f2 + f;
	
	Float2 ff{ 3,5 };
	Vector2 ff2{ 0,5 };

	ff2 += ff;
	ff2 *= 2.5;

	Environ::Frame::Create(id, 10, 20, 100, 100, "Frame");
	
	//Float f;
//	f = 10.0f;
	//auto v = f.max;
	//auto v2 = Float::min;
	//Int i;
	//i = 10;

	//Win10GUIのコーディング

	return true;
}


