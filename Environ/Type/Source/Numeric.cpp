#include<Type/Numeric.hpp>
namespace Environ {

	//0初期化
	template<typename T>
	Numeric<T>::Numeric():mValue(0) {}

	//指定値で初期化
	template<typename T>
	Numeric<T>::Numeric(const T aValue):mValue(aValue) {}

	//デストラクタ。することない
	template<typename T>
	Numeric<T>::~Numeric() {}

	//Tは組み込み型。Environ::Intならintを返す
	template<typename T>
	Numeric<T>::operator T() const noexcept {
		return mValue;
	}


	//代入処理
	template<typename T>
	Numeric<T>& Numeric<T>::operator=(const T aVal) {
		mValue = aVal; 
		return *this;
	}

	//現在値に加算したものを代入する
	template<typename T>
	Numeric<T>& Numeric<T>::operator+=(const T aVal) {
		mValue += aVal;
		return *this;
	}

	//数値を減算した結果を代入する
		template<typename T>
	Numeric<T>& Numeric<T>::operator-=(const T aVal){
		mValue -= aVal;
		return *this;

	}



	//数値を除算した結果を代入する
	template<typename T>
	Numeric<T>& Numeric<T>::operator/=(const T aVal){
		mValue /= aVal;
		return *this;

	}

}