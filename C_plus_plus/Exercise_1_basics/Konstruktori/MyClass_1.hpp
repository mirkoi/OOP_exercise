#ifndef MYCLASS_1
#define MYCLASS_1

class CMyClass_1 {
    private:
        int iVar;
        char cVar;
        float fVar;
        int*  piVar;

    public:
        /* Constructors */
        CMyClass_1 ();
        CMyClass_1 (int iArg, char cArg, float fArg);
        CMyClass_1 (const CMyClass_1& oArg);
       ~CMyClass_1 ();

        /* Set methods */
        void set_iVar (int iArg);
        void set_iVar (char cArg);
        void set_iVar (float fArg);
        void set_iVar (int* piArg);

        /* Get methods */
        int get_iVar (int iArg) const;
        char get_iVar (char cArg) const;
        float get_iVar (float fArg) const;
        int get_iVar (int* piArg) const;
};
#endif // MYCLASS_1
