#include <exception>

using std::exception;

class FalhaNaLeitura : public exception
{
public:
	const char* what(){
		return "O arquivo foi passado incorretamente! Tente novamente!.";
	}
};