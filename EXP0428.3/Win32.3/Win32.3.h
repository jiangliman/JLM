// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 WIN323_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// WIN323_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef WIN323_EXPORTS
#define WIN323_API __declspec(dllexport)
#else
#define WIN323_API __declspec(dllimport)
#endif

// 此类是从 Win32.3.dll 导出的
class WIN323_API CWin323 {
public:
	CWin323(void);
	// TODO:  在此添加您的方法。
};

class WIN323_API FAC {
public:
	FAC() {};
	float convert(float deg);

};

extern WIN323_API int nWin323;

WIN323_API int fnWin323(void);
WIN323_API int factorial(int n);
