# ���ļ���makeobj.sh�Զ�����
############################################################
# ��Ŀ�� : 
# ģ���� : 
# ��  ע : 
############################################################

###### Դ�ļ�������
#@ c_FILE
c_FILE		=	\
			IDL_AllTypes.dsc.c		\
			IDL_CommHead.dsc.c		\
			IDL_ResponseHeader.dsc.c	\
			IDL_BankTransaction.dsc.c	\
			test_netorder.c			\
			test_serialize_compact.c	\
			test_serialize_compress.c	\
			test_serialize_compress_press.c	\
			test_trans.c			\

###### Ŀ���ļ�����װĿ¼������
BIN		=	test_netorder			\
			test_serialize_compact		\
			test_serialize_compress		\
			test_serialize_compress_press	\
			test_trans

###### ����ѡ��
CFLAGS		=	-I. \

###### ����ѡ��
LFLAGS		=	-L. \

###### ����궨����
CLEAN_ADDITION	=

###### ����mktplģ���
#@ make_all
#@ make_clean
#@ make_install
#@ make_install_BININST
#@ make_install_HDERINST
#@ make_install_DFTHDERINST

include $(MKTPLDIR)/makeobj_$(MKTPLOS).inc

###### Ŀ���ļ�������ϵ
test_netorder	:	test_netorder.o IDL_AllTypes.dsc.o
	$(CC) -o $@ test_netorder.o IDL_AllTypes.dsc.o $(LFLAGS)

test_serialize_compact	:	test_serialize_compact.o IDL_AllTypes.dsc.o
	$(CC) -o $@ test_serialize_compact.o IDL_AllTypes.dsc.o $(LFLAGS)

test_serialize_compress	:	test_serialize_compress.o IDL_AllTypes.dsc.o
	$(CC) -o $@ test_serialize_compress.o IDL_AllTypes.dsc.o $(LFLAGS)

test_serialize_compress_press	:	test_serialize_compress_press.o IDL_AllTypes.dsc.o
	$(CC) -o $@ test_serialize_compress_press.o IDL_AllTypes.dsc.o $(LFLAGS)

test_trans	:	test_trans.o IDL_CommHead.dsc.o IDL_BankTransaction.dsc.o
	$(CC) -o $@ test_trans.o IDL_CommHead.dsc.o IDL_BankTransaction.dsc.o $(LFLAGS)
