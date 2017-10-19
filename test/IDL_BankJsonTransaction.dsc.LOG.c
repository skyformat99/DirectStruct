/* It had generated by DirectStruct v1.13.1 */
#include "IDL_BankJsonTransaction.dsc.h"

#ifndef FUNCNAME_DSCLOG_BankJsonTransaction
#define FUNCNAME_DSCLOG_BankJsonTransaction	DSCLOG_BankJsonTransaction
#endif

#ifndef PREFIX_DSCLOG_BankJsonTransaction
#define PREFIX_DSCLOG_BankJsonTransaction	printf( 
#endif

#ifndef NEWLINE_DSCLOG_BankJsonTransaction
#define NEWLINE_DSCLOG_BankJsonTransaction	"\n"
#endif

int FUNCNAME_DSCLOG_BankJsonTransaction( BankJsonTransaction *pst )
{
	int	index[10] = { 0 } ; index[0]++; index[0] = 0 ;
	PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.version[%d]" NEWLINE_DSCLOG_BankJsonTransaction , pst->version );
	PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.null_string[%s]" NEWLINE_DSCLOG_BankJsonTransaction , pst->null_string );
	PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.sign_flag[%c]" NEWLINE_DSCLOG_BankJsonTransaction , pst->sign_flag );
		PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.ResponseHeader.transaction_code[%s]" NEWLINE_DSCLOG_BankJsonTransaction , pst->ResponseHeader.transaction_code );
		PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.ResponseHeader.trans_jnlsno[%d]" NEWLINE_DSCLOG_BankJsonTransaction , pst->ResponseHeader.trans_jnlsno );
		PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.ResponseHeader.response_code[%d]" NEWLINE_DSCLOG_BankJsonTransaction , pst->ResponseHeader.response_code );
		PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.ResponseHeader.response_desc[%s]" NEWLINE_DSCLOG_BankJsonTransaction , pst->ResponseHeader.response_desc );
				PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.QueryTransactionDetails.AddonMessages._AddonMessage_count[%d]" NEWLINE_DSCLOG_BankJsonTransaction , pst->QueryTransactionDetails.AddonMessages._AddonMessage_count );
				for( index[3] = 0 ; index[3] < pst->QueryTransactionDetails.AddonMessages._AddonMessage_count ; index[3]++ )
				{
				PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.QueryTransactionDetails.AddonMessages.AddonMessage[index[3]].message_text[%s]" NEWLINE_DSCLOG_BankJsonTransaction , pst->QueryTransactionDetails.AddonMessages.AddonMessage[index[3]].message_text );
				}
			PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.QueryTransactionDetails.TransactionDetailTitle.title_text[%s]" NEWLINE_DSCLOG_BankJsonTransaction , pst->QueryTransactionDetails.TransactionDetailTitle.title_text );
			PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.QueryTransactionDetails.TransactionDetailTitle.page_no[%hd]" NEWLINE_DSCLOG_BankJsonTransaction , pst->QueryTransactionDetails.TransactionDetailTitle.page_no );
			PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.QueryTransactionDetails.TransactionDetailTitle.page_size[%hd]" NEWLINE_DSCLOG_BankJsonTransaction , pst->QueryTransactionDetails.TransactionDetailTitle.page_size );
				PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.QueryTransactionDetails.TransactionDetails._TransactionDetail_count[%d]" NEWLINE_DSCLOG_BankJsonTransaction , pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count );
				for( index[3] = 0 ; index[3] < pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count ; index[3]++ )
				{
				PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_date[%s]" NEWLINE_DSCLOG_BankJsonTransaction , pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_date );
				PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_time[%s]" NEWLINE_DSCLOG_BankJsonTransaction , pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_time );
				PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].outlet_id[%s]" NEWLINE_DSCLOG_BankJsonTransaction , pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].outlet_id );
				PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].card_no[%s]" NEWLINE_DSCLOG_BankJsonTransaction , pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].card_no );
				PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_amount[%f]" NEWLINE_DSCLOG_BankJsonTransaction , pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_amount );
				}
				PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.QueryTransactionDetails.TransactionDetails._TransactionTailDetail_count[%d]" NEWLINE_DSCLOG_BankJsonTransaction , pst->QueryTransactionDetails.TransactionDetails._TransactionTailDetail_count );
				for( index[3] = 0 ; index[3] < pst->QueryTransactionDetails.TransactionDetails._TransactionTailDetail_count ; index[3]++ )
				{
				PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.QueryTransactionDetails.TransactionDetails.TransactionTailDetail[index[3]].message_text[%s]" NEWLINE_DSCLOG_BankJsonTransaction , pst->QueryTransactionDetails.TransactionDetails.TransactionTailDetail[index[3]].message_text );
				}
		PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction._OtherTransJnlsno_count[%d]" NEWLINE_DSCLOG_BankJsonTransaction , pst->_OtherTransJnlsno_count );
		for( index[1] = 0 ; index[1] < pst->_OtherTransJnlsno_count ; index[1]++ )
		{
		PREFIX_DSCLOG_BankJsonTransaction "BankJsonTransaction.OtherTransJnlsno[index[1]]._trans_jnlsno[%d]" NEWLINE_DSCLOG_BankJsonTransaction , pst->OtherTransJnlsno[index[1]]._trans_jnlsno );
		}
	return 0;
}
