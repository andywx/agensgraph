
#include "postgres.h"



#include "access/xact.h"
#include "catalog/namespace.h"
#include "commands/async.h"
#include "commands/prepare.h"
#include "commands/copyrdf.h"
#include "commands/sequence.h"
#include "utils/guc.h"
#include "utils/portal.h"





#include "stdio.h"
#include "string.h"
#include "stdlib.h"





void

DoCopyRdf(CopyRdfStmt *stmt)

{

	freopen("/home/lpk/f1.txt","w",stdout);     //输出文件路径,需要根据本地用户实际路径修改
	printf("%s\n",stmt->filename);
	fclose(stdout);
	
    return 0;

}










