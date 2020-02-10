#include <iostream>
#define PRINT(X) std::cout << X << std::endl


class Logger{
    static Logger *inst;
    Logger(){

    };
    Logger(const Logger&);
//    Logger(/*filename*/){/*create file*/};
    Logger &operator=(const Logger&);
public:
    static Logger& Instance(){

        if(inst==NULL) {inst = new Logger();}
        return *inst;
    }
    void LOG(int level, const std::string &message){
        PRINT("LOG "<<level<<": "<<message);
    }
};

Logger *Logger::inst = NULL;



int main()
{

std::string line= "12wda44234";

Logger::Instance().LOG(4,"something");
Logger::Instance().LOG(2,"something");

//PRINT("Hello");

return 0;

}


 //   #include <string>
 //   #include <iostream>
 //   #define PRINT(X) std::cout<<X<<std::endl
 //   class Logger
 //   {
 //   	Logger(/*filename*/){
 //           PRINT("Logger");
 //   }
 //       ~Logger(/*filename*/)
 //       {
 //           delete inst;
 //           PRINT("~Logger");
  //       }
 //   	Logger(const Logger &);
 //   	Logger &operator =(const Logger &);
 //   public:
 //   	static Logger &Instance()
 //   	{
 //   		static Logger inst;
  //  		return inst;
// 	}
  //  	void LOG(int level,const std::string &message)
  //  	{PRINT("LOG "<<level<<": "<<message);}
  //  };

  //  int main()
  //  {
  //      std::string line="1a2b3c";
  //      Logger::Instance().LOG(4,"something");
  //      Logger::Instance().LOG(2,"something");
  //  }


//    #include <string>
//    #include <iostream>
//    #define PRINT(X) std::cout<<X<<std::endl
//    class Logger
//    {
//    	Logger(/*filename*/){
//            PRINT("Logger");
//        }
//
//    	Logger(const Logger &);
//    	Logger &operator =(const Logger &);
//    public:
//    	~Logger(/*filename*/)
//        {
//            PRINT("~Logger");
//        }
//    	static Logger &Instance()
//    	{
//    		static Logger inst; //
//    		return inst;
//    	}
//    	void LOG(int level,const std::string &message)
//    	{PRINT("LOG "<<level<<": "<<message);}
//    };
//
//    int main()
//    {
//        std::string line="1a2b3c";
//        Logger::Instance().LOG(4,"something");
//        Logger::Instance().LOG(2,"something");
//    }
