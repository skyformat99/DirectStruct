/* It had generated by DirectStruct v1.13.1 */
#include "IDL_CommHead.dsc.h"

#ifndef FUNCNAME_DSCLOG_CommHead
#define FUNCNAME_DSCLOG_CommHead	DSCLOG_CommHead
#endif

#ifndef PREFIX_DSCLOG_CommHead
#define PREFIX_DSCLOG_CommHead	printf( 
#endif

#ifndef NEWLINE_DSCLOG_CommHead
#define NEWLINE_DSCLOG_CommHead	"\n"
#endif

int FUNCNAME_DSCLOG_CommHead( CommHead *pst )
{
	int	index[10] = { 0 } ; index[0]++; index[0] = 0 ;
	PREFIX_DSCLOG_CommHead "CommHead.length[%d]" NEWLINE_DSCLOG_CommHead , pst->length );
	return 0;
}
