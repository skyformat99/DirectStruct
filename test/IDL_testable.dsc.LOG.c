/* It had generated by DirectStruct v1.6.0 */
#include "IDL_testable.dsc.h"

#ifndef FUNCNAME_DSCLOG_testable
#define FUNCNAME_DSCLOG_testable	DSCLOG_testable
#endif

#ifndef PREFIX_DSCLOG_testable
#define PREFIX_DSCLOG_testable	printf( 
#endif

#ifndef NEWLINE_DSCLOG_testable
#define NEWLINE_DSCLOG_testable	"\n"
#endif

int FUNCNAME_DSCLOG_testable( testable *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_testable "testable.n2[%hd]" NEWLINE_DSCLOG_testable , pst->n2 );
	PREFIX_DSCLOG_testable "testable.n4[%d]" NEWLINE_DSCLOG_testable , pst->n4 );
	PREFIX_DSCLOG_testable "testable.f4[%f]" NEWLINE_DSCLOG_testable , pst->f4 );
	PREFIX_DSCLOG_testable "testable.f8[%lf]" NEWLINE_DSCLOG_testable , pst->f8 );
	PREFIX_DSCLOG_testable "testable.str32[%s]" NEWLINE_DSCLOG_testable , pst->str32 );
	PREFIX_DSCLOG_testable "testable.str1024[%s]" NEWLINE_DSCLOG_testable , pst->str1024 );
	PREFIX_DSCLOG_testable "testable.b1[%c]" NEWLINE_DSCLOG_testable , pst->b1 );
	return 0;
}
