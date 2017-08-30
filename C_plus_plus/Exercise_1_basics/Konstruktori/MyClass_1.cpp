#include "MyClass_1.hpp"
#include <iostream>

using namespace std;

 CMyClass_1 ::CMyClass_1 ()
 {
     cout << "Constructor: CMyClass_1 ()" << endl;
 }

 CMyClass_1 ::       CMyClass_1 (int iArg, char cArg, float fArg)
 {
     cout << "Constructor: CMyClass_1 (int iArg, char cArg, float fArg)" << endl;
 }

 CMyClass_1 ::       CMyClass_1 (const CMyClass_1& oArg)
 {
     cout << "Constructor of copy: CMyClass_1 (const CMyClass_1& oArg)" << endl;
 }
 CMyClass_1 ::      ~CMyClass_1 ()
 {
     cout << "Destructor: ~CMyClass_1 ()" << endl;
 }

/* Set methods */
void CMyClass_1 ::set_iVar (int iArg);
void CMyClass_1 ::set_iVar (char cArg);
void CMyClass_1 ::set_iVar (float fArg);
void CMyClass_1 ::set_iVar (int* piArg);

/* Get methods */
int CMyClass_1 ::get_iVar (int iArg) const;
char CMyClass_1 ::get_iVar (char cArg) const;
float CMyClass_1 ::get_iVar (float fArg) const;
int CMyClass_1 ::get_iVar (int* piArg) const;

