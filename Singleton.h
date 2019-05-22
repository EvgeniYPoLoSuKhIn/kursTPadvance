#ifndef ADM
class Singleton {

   private:
   Singleton( const Singleton& );
   Singleton& operator=( Singleton& );
    char* name;
    char* razmer;
    char* cvet;
    char* svoystva;
    char* mifolog;
    char* opisaniye;
    char* sposobatak;
    char buffer[50];
    int tail,wings,legs,flag;
    int clegs=0;
    static int acs;
    static bool x;
    Singleton();
    ~Singleton();

   public:
    static transformSing();
    static Singleton *getInstance();
    void getcreature();
    void fenix();
    void reincornate(int f, char *nm);
    void show();
};
#endif