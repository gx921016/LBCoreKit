#ifdef DEBUG

#else

#define IIUtils_IIDlog_h
#define ___start_log___
#define StartLog

#endif

#ifndef IIUtils_IIDlog_h
#define IIUtils_IIDlog_h

#define dlog(fmt, ...)\
        do {\
            NSString *___FILENAME___ = [[[NSString stringWithCString:__FILE__\
                                                      encoding:NSUTF8StringEncoding]\
                                   componentsSeparatedByString:@"/"] lastObject];\
            NSLog((@\
            "\n┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"\
            "文件:%@\n" \
            "方法:%s\n" \
            "行数:%d\n" \
            "信息:" fmt \
            "\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛"), \
            ___FILENAME___, \
            __FUNCTION__, \
            __LINE__, \
            ##__VA_ARGS__);\
        } while(0);\

#define dVarName(name) (#name)

#define dlogs(info) dlog(@"%@",info)

#define StartLog dlogs(@"+++++++METHOD START+++++++")
#define ___start_log___ dlogs(@"+++++++METHOD START+++++++")

#define dlogi1(info,var1) dlog(@"%@ -> [I]%s = %d",info,dVarName(var1), var1)
#define dlogi2(info,var1,var2) dlog(@"%@ -> [I]%s = %d [I]%s = %d",info,dVarName(var1), var1,dVarName(var2), var2)
#define dlogi3(info,var1,var2,var3) dlog(@"%@ -> [I]%s = %d [I]%s = %d [I]%s = %d",info,dVarName(var1), var1,dVarName(var2), var2,dVarName(var3), var3)
#define dlogi4(info,var1,var2,var3,var4) dlog(@"%@ -> [I]%s = %d [I]%s = %d [I]%s = %d [I]%s = %d",info,dVarName(var1), var1,dVarName(var2), var2,dVarName(var3), var3,dVarName(var4), var4)

#define dlogl1(info,var1) dlog(@"%@ -> [L]%s = %ld",info,dVarName(var1), var1)
#define dlogl2(info,var1,var2) dlog(@"%@ -> [L]%s = %ld [L]%s = %ld",info,dVarName(var1), var1,dVarName(var2), var2)
#define dlogl3(info,var1,var2,var3) dlog(@"%@ -> [L]%s = %ld [L]%s = %ld [L]%s = %ld",info,dVarName(var1), var1,dVarName(var2), var2,dVarName(var3), var3)
#define dlogl4(info,var1,var2,var3,var4) dlog(@"%@ -> [L]%s = %ld [L]%s = %ld [L]%s = %ld [L]%s = %ld",info,dVarName(var1), var1,dVarName(var2), var2,dVarName(var3), var3,dVarName(var4), var4)

#define dlogf1(info,var1) dlog(@"%@ -> [F]%s = %f",info,dVarName(var1), var1)
#define dlogf2(info,var1,var2) dlog(@"%@ -> [F]%s = %f [F]%s = %f",info,dVarName(var1), var1,dVarName(var2), var2)
#define dlogf3(info,var1,var2,var3) dlog(@"%@ -> [F]%s = %f [F]%s = %f [F]%s = %f",info,dVarName(var1), var1,dVarName(var2), var2,dVarName(var3), var3)
#define dlogf4(info,var1,var2,var3,var4) dlog(@"%@ -> [F]%s = %f [F]%s = %f [F]%s = %f [F]%s = %f",info,dVarName(var1), var1,dVarName(var2), var2,dVarName(var3), var3,dVarName(var4), var4)

#define dlogo1(info,var1) dlog(@"%@ -> [O]%s = %@",info,dVarName(var1), var1)
#define dlogo2(info,var1,var2) dlog(@"%@ -> [O]%s = %@ [O]%s = %@",info,dVarName(var1), var1,dVarName(var2), var2)
#define dlogo3(info,var1,var2,var3) dlog(@"%@ -> [O]%s = %@ [O]%s = %@ [O]%s = %@",info,dVarName(var1), var1,dVarName(var2), var2,dVarName(var3), var3)
#define dlogo4(info,var1,var2,var3,var4) dlog(@"%@ -> [O]%s = %@ [O]%s = %@ [O]%s = %@ [O]%s = %@",info,dVarName(var1), var1,dVarName(var2), var2,dVarName(var3), var3,dVarName(var4), var4)

#define dloge(info,var1) dlog(@"【Exception:】%s = %@ | %@",dVarName(var1), var1,info)

#else

//自定义格式化打印
#define dlog(...);

//打印变量名称
#define dVarName(...);

//打印普通文本字符串
#define dlogs(...);

//打印整数
#define dlogi1(...);
#define dlogi2(...);
#define dlogi3(...);
#define dlogi4(...);

//打印长整数
#define dlogl1(...);
#define dlogl2(...);
#define dlogl3(...);
#define dlogl4(...);

//打印浮点数
#define dlogf1(...);
#define dlogf2(...);
#define dlogf3(...);
#define dlogf4(...);

//打印对象
#define dlogo1(...);
#define dlogo2(...);
#define dlogo3(...);
#define dlogo4(...);

//打印错误日志
#define dloge(...);

#endif
