// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� WIN323_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// WIN323_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef WIN323_EXPORTS
#define WIN323_API __declspec(dllexport)
#else
#define WIN323_API __declspec(dllimport)
#endif

// �����Ǵ� Win32.3.dll ������
class WIN323_API CWin323 {
public:
	CWin323(void);
	// TODO:  �ڴ�������ķ�����
};

class WIN323_API FAC {
public:
	FAC() {};
	float convert(float deg);

};

extern WIN323_API int nWin323;

WIN323_API int fnWin323(void);
WIN323_API int factorial(int n);
