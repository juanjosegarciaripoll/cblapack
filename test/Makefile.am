# We define the global AM_CPPFLAGS as everything we compile includes from these
# directories.
AM_CPPFLAGS = -I$(top_srcdir)/include

# The scripts need to locate the input data
AM_TESTS_ENVIRONMENT = \
	export CBLAPACKDIR=$(top_srcdir);

CLEANFILES = out/*.out

#
# BLAS TESTS
#

TESTS = test_blas1 test_blas2 test_blas3

check_PROGRAMS = test_blas1s test_blas1d test_blas1c test_blas1z	\
	test_blas2s test_blas2d test_blas2c test_blas2z test_blas3s	\
	test_blas3d test_blas3c test_blas3z

test_blas1s_SOURCES = BLAS/main.c BLAS/sblat1.c
test_blas1s_LDADD = ../libcblapack.la -lf2c

test_blas1d_SOURCES = BLAS/main.c BLAS/dblat1.c
test_blas1d_LDADD = ../libcblapack.la -lf2c

test_blas1c_SOURCES = BLAS/main.c BLAS/cblat1.c
test_blas1c_LDADD = ../libcblapack.la -lf2c

test_blas1z_SOURCES = BLAS/main.c BLAS/zblat1.c
test_blas1z_LDADD = ../libcblapack.la -lf2c

test_blas2s_SOURCES = BLAS/main.c BLAS/sblat2.c
test_blas2s_LDADD = ../libcblapack.la -lf2c

test_blas2d_SOURCES = BLAS/main.c BLAS/dblat2.c
test_blas2d_LDADD = ../libcblapack.la -lf2c

test_blas2c_SOURCES = BLAS/main.c BLAS/cblat2.c
test_blas2c_LDADD = ../libcblapack.la -lf2c

test_blas2z_SOURCES = BLAS/main.c BLAS/zblat2.c
test_blas2z_LDADD = ../libcblapack.la -lf2c

test_blas3s_SOURCES = BLAS/main.c BLAS/sblat3.c
test_blas3s_LDADD = ../libcblapack.la -lf2c

test_blas3d_SOURCES = BLAS/main.c BLAS/dblat3.c
test_blas3d_LDADD = ../libcblapack.la -lf2c

test_blas3c_SOURCES = BLAS/main.c BLAS/cblat3.c
test_blas3c_LDADD = ../libcblapack.la -lf2c

test_blas3z_SOURCES = BLAS/main.c BLAS/zblat3.c
test_blas3z_LDADD = ../libcblapack.la -lf2c

#
# MATGEN library for generating test matrices
#

SCATGEN = MATGEN/slatm1.c MATGEN/slaran.c MATGEN/slarnd.c

SMATGEN = MATGEN/slatms.c MATGEN/slatme.c MATGEN/slatmr.c		\
   MATGEN/slatmt.c MATGEN/slagge.c MATGEN/slagsy.c MATGEN/slakf2.c	\
   MATGEN/slarge.c MATGEN/slaror.c MATGEN/slarot.c MATGEN/slatm2.c	\
   MATGEN/slatm3.c MATGEN/slatm5.c MATGEN/slatm6.c MATGEN/slatm7.c	\
   MATGEN/slahilb.c

CMATGEN = MATGEN/clatms.c MATGEN/clatme.c MATGEN/clatmr.c		\
   MATGEN/clatmt.c MATGEN/clagge.c MATGEN/claghe.c MATGEN/clagsy.c	\
   MATGEN/clakf2.c MATGEN/clarge.c MATGEN/claror.c MATGEN/clarot.c	\
   MATGEN/clatm1.c MATGEN/clarnd.c MATGEN/clatm2.c MATGEN/clatm3.c	\
   MATGEN/clatm5.c MATGEN/clatm6.c MATGEN/clahilb.c

DZATGEN = MATGEN/dlatm1.c MATGEN/dlaran.c MATGEN/dlarnd.c

DMATGEN = MATGEN/dlatms.c MATGEN/dlatme.c MATGEN/dlatmr.c		\
   MATGEN/dlatmt.c MATGEN/dlagge.c MATGEN/dlagsy.c MATGEN/dlakf2.c	\
   MATGEN/dlarge.c MATGEN/dlaror.c MATGEN/dlarot.c MATGEN/dlatm2.c	\
   MATGEN/dlatm3.c MATGEN/dlatm5.c MATGEN/dlatm6.c MATGEN/dlatm7.c	\
   MATGEN/dlahilb.c

ZMATGEN = MATGEN/zlatms.c MATGEN/zlatme.c MATGEN/zlatmr.c		\
   MATGEN/zlatmt.c MATGEN/zlagge.c MATGEN/zlaghe.c MATGEN/zlagsy.c	\
   MATGEN/zlakf2.c MATGEN/zlarge.c MATGEN/zlaror.c MATGEN/zlarot.c	\
   MATGEN/zlatm1.c MATGEN/zlarnd.c MATGEN/zlatm2.c MATGEN/zlatm3.c	\
   MATGEN/zlatm5.c MATGEN/zlatm6.c MATGEN/zlahilb.c

noinst_LIBRARIES = libtmglib.a
libtmglib_a_SOURCES = $(SMATGEN) $(CMATGEN) $(SCATGEN) $(DMATGEN)	\
	$(ZMATGEN) $(DZATGEN)

#
# LAPACK LINEAR ALGEBRA TESTS
#

TESTS += test_ctest.sh test_rfc.sh test_dstest.sh test_dtest.sh	\
   test_rfd.sh test_rfs.sh test_stest.sh test_zctest.sh		\
   test_ztest.sh test_rfz.sh

ALINTST = LIN/aladhd.c LIN/alaerh.c LIN/alaesm.c LIN/alahd.c		\
   LIN/alareq.c LIN/alasum.c LIN/alasvm.c LIN/chkxer.c LIN/icopy.c	\
   LIN/ilaenv.c LIN/xlaenv.c LIN/xerbla.c

SCLNTST= LIN/slaord.c

DZLNTST= LIN/dlaord.c

SLINTST = LIN/schkaa.c LIN/schkeq.c LIN/schkgb.c LIN/schkge.c		\
   LIN/schkgt.c LIN/schklq.c LIN/schkpb.c LIN/schkpo.c LIN/schkps.c	\
   LIN/schkpp.c LIN/schkpt.c LIN/schkq3.c LIN/schkql.c LIN/schkqp.c	\
   LIN/schkqr.c LIN/schkrq.c LIN/schksp.c LIN/schksy.c LIN/schktb.c	\
   LIN/schktp.c LIN/schktr.c LIN/schktz.c LIN/sdrvgt.c LIN/sdrvls.c	\
   LIN/sdrvpb.c LIN/sdrvpp.c LIN/sdrvpt.c LIN/sdrvsp.c LIN/sdrvsy.c	\
   LIN/serrgt.c LIN/serrlq.c LIN/serrls.c LIN/serrpo.c LIN/serrps.c	\
   LIN/serrql.c LIN/serrqp.c LIN/serrqr.c LIN/serrrq.c LIN/serrsy.c	\
   LIN/serrtr.c LIN/serrtz.c LIN/serrvx.c LIN/sgbt01.c LIN/sgbt02.c	\
   LIN/sgbt05.c LIN/sgelqs.c LIN/sgeqls.c LIN/sgeqrs.c LIN/sgerqs.c	\
   LIN/sget01.c LIN/sget02.c LIN/sget03.c LIN/sget04.c LIN/sget06.c	\
   LIN/sget07.c LIN/sgtt01.c LIN/sgtt02.c LIN/sgtt05.c LIN/slaptm.c	\
   LIN/slarhs.c LIN/slatb4.c LIN/slatb5.c LIN/slattb.c LIN/slattp.c	\
   LIN/slattr.c LIN/slavsp.c LIN/slavsy.c LIN/slqt01.c LIN/slqt02.c	\
   LIN/slqt03.c LIN/spbt01.c LIN/spbt02.c LIN/spbt05.c LIN/spot01.c	\
   LIN/spot02.c LIN/spot03.c LIN/spot05.c LIN/spst01.c LIN/sppt01.c	\
   LIN/sppt02.c LIN/sppt03.c LIN/sppt05.c LIN/sptt01.c LIN/sptt02.c	\
   LIN/sptt05.c LIN/sqlt01.c LIN/sqlt02.c LIN/sqlt03.c LIN/sqpt01.c	\
   LIN/sqrt01.c LIN/sqrt02.c LIN/sqrt03.c LIN/sqrt11.c LIN/sqrt12.c	\
   LIN/sqrt13.c LIN/sqrt14.c LIN/sqrt15.c LIN/sqrt16.c LIN/sqrt17.c	\
   LIN/srqt01.c LIN/srqt02.c LIN/srqt03.c LIN/srzt01.c LIN/srzt02.c	\
   LIN/sspt01.c LIN/ssyt01.c LIN/stbt02.c LIN/stbt03.c LIN/stbt05.c	\
   LIN/stbt06.c LIN/stpt01.c LIN/stpt02.c LIN/stpt03.c LIN/stpt05.c	\
   LIN/stpt06.c LIN/strt01.c LIN/strt02.c LIN/strt03.c LIN/strt05.c	\
   LIN/strt06.c LIN/stzt01.c LIN/stzt02.c LIN/sgennd.c LIN/sdrvge.c	\
   LIN/serrge.c LIN/sdrvgb.c LIN/sdrvpo.c

CLINTST = LIN/cchkaa.c LIN/cchkeq.c LIN/cchkgb.c LIN/cchkge.c		\
  LIN/cchkgt.c LIN/cchkhe.c LIN/cchkhp.c LIN/cchklq.c LIN/cchkpb.c	\
  LIN/cchkpo.c LIN/cchkps.c LIN/cchkpp.c LIN/cchkpt.c LIN/cchkq3.c	\
  LIN/cchkql.c LIN/cchkqp.c LIN/cchkqr.c LIN/cchkrq.c LIN/cchksp.c	\
  LIN/cchksy.c LIN/cchktb.c LIN/cchktp.c LIN/cchktr.c LIN/cchktz.c	\
  LIN/cdrvgt.c LIN/cdrvhe.c LIN/cdrvhp.c LIN/cdrvls.c LIN/cdrvpb.c	\
  LIN/cdrvpp.c LIN/cdrvpt.c LIN/cdrvsp.c LIN/cdrvsy.c LIN/cerrgt.c	\
  LIN/cerrhe.c LIN/cerrlq.c LIN/cerrls.c LIN/cerrps.c LIN/cerrql.c	\
  LIN/cerrqp.c LIN/cerrqr.c LIN/cerrrq.c LIN/cerrsy.c LIN/cerrtr.c	\
  LIN/cerrtz.c LIN/cerrvx.c LIN/cgbt01.c LIN/cgbt02.c LIN/cgbt05.c	\
  LIN/cgelqs.c LIN/cgeqls.c LIN/cgeqrs.c LIN/cgerqs.c LIN/cget01.c	\
  LIN/cget02.c LIN/cget03.c LIN/cget04.c LIN/cget07.c LIN/cgtt01.c	\
  LIN/cgtt02.c LIN/cgtt05.c LIN/chet01.c LIN/chpt01.c LIN/claipd.c	\
  LIN/claptm.c LIN/clarhs.c LIN/clatb4.c LIN/clatb5.c LIN/clatsp.c	\
  LIN/clatsy.c LIN/clattb.c LIN/clattp.c LIN/clattr.c LIN/clavhe.c	\
  LIN/clavhp.c LIN/clavsp.c LIN/clavsy.c LIN/clqt01.c LIN/clqt02.c	\
  LIN/clqt03.c LIN/cpbt01.c LIN/cpbt02.c LIN/cpbt05.c LIN/cpot01.c	\
  LIN/cpot02.c LIN/cpot03.c LIN/cpot05.c LIN/cpst01.c LIN/cppt01.c	\
  LIN/cppt02.c LIN/cppt03.c LIN/cppt05.c LIN/cptt01.c LIN/cptt02.c	\
  LIN/cptt05.c LIN/cqlt01.c LIN/cqlt02.c LIN/cqlt03.c LIN/cqpt01.c	\
  LIN/cqrt01.c LIN/cqrt02.c LIN/cqrt03.c LIN/cqrt11.c LIN/cqrt12.c	\
  LIN/cqrt13.c LIN/cqrt14.c LIN/cqrt15.c LIN/cqrt16.c LIN/cqrt17.c	\
  LIN/crqt01.c LIN/crqt02.c LIN/crqt03.c LIN/crzt01.c LIN/crzt02.c	\
  LIN/csbmv.c LIN/cspt01.c LIN/cspt02.c LIN/cspt03.c LIN/csyt01.c	\
  LIN/csyt02.c LIN/csyt03.c LIN/ctbt02.c LIN/ctbt03.c LIN/ctbt05.c	\
  LIN/ctbt06.c LIN/ctpt01.c LIN/ctpt02.c LIN/ctpt03.c LIN/ctpt05.c	\
  LIN/ctpt06.c LIN/ctrt01.c LIN/ctrt02.c LIN/ctrt03.c LIN/ctrt05.c	\
  LIN/ctrt06.c LIN/ctzt01.c LIN/ctzt02.c LIN/sget06.c LIN/cgennd.c	\
  LIN/cdrvge.c LIN/cdrvgb.c LIN/cerrge.c LIN/cdrvpo.c LIN/cerrpo.c

DLINTST = LIN/dchkaa.c LIN/dchkeq.c LIN/dchkgb.c LIN/dchkge.c		\
   LIN/dchkgt.c LIN/dchklq.c LIN/dchkpb.c LIN/dchkpo.c LIN/dchkps.c	\
   LIN/dchkpp.c LIN/dchkpt.c LIN/dchkq3.c LIN/dchkql.c LIN/dchkqp.c	\
   LIN/dchkqr.c LIN/dchkrq.c LIN/dchksp.c LIN/dchksy.c LIN/dchktb.c	\
   LIN/dchktp.c LIN/dchktr.c LIN/dchktz.c LIN/ddrvgt.c LIN/ddrvls.c	\
   LIN/ddrvpb.c LIN/ddrvpp.c LIN/ddrvpt.c LIN/ddrvsp.c LIN/ddrvsy.c	\
   LIN/derrgt.c LIN/derrlq.c LIN/derrls.c LIN/derrps.c LIN/derrql.c	\
   LIN/derrqp.c LIN/derrqr.c LIN/derrrq.c LIN/derrsy.c LIN/derrtr.c	\
   LIN/derrtz.c LIN/derrvx.c LIN/dgbt01.c LIN/dgbt02.c LIN/dgbt05.c	\
   LIN/dgelqs.c LIN/dgeqls.c LIN/dgeqrs.c LIN/dgerqs.c LIN/dget01.c	\
   LIN/dget02.c LIN/dget03.c LIN/dget04.c LIN/dget06.c LIN/dget07.c	\
   LIN/dgtt01.c LIN/dgtt02.c LIN/dgtt05.c LIN/dlaptm.c LIN/dlarhs.c	\
   LIN/dlatb4.c LIN/dlatb5.c LIN/dlattb.c LIN/dlattp.c LIN/dlattr.c	\
   LIN/dlavsp.c LIN/dlavsy.c LIN/dlqt01.c LIN/dlqt02.c LIN/dlqt03.c	\
   LIN/dpbt01.c LIN/dpbt02.c LIN/dpbt05.c LIN/dpot01.c LIN/dpot02.c	\
   LIN/dpot03.c LIN/dpot05.c LIN/dpst01.c LIN/dppt01.c LIN/dppt02.c	\
   LIN/dppt03.c LIN/dppt05.c LIN/dptt01.c LIN/dptt02.c LIN/dptt05.c	\
   LIN/dqlt01.c LIN/dqlt02.c LIN/dqlt03.c LIN/dqpt01.c LIN/dqrt01.c	\
   LIN/dqrt02.c LIN/dqrt03.c LIN/dqrt11.c LIN/dqrt12.c LIN/dqrt13.c	\
   LIN/dqrt14.c LIN/dqrt15.c LIN/dqrt16.c LIN/dqrt17.c LIN/drqt01.c	\
   LIN/drqt02.c LIN/drqt03.c LIN/drzt01.c LIN/drzt02.c LIN/dspt01.c	\
   LIN/dsyt01.c LIN/dtbt02.c LIN/dtbt03.c LIN/dtbt05.c LIN/dtbt06.c	\
   LIN/dtpt01.c LIN/dtpt02.c LIN/dtpt03.c LIN/dtpt05.c LIN/dtpt06.c	\
   LIN/dtrt01.c LIN/dtrt02.c LIN/dtrt03.c LIN/dtrt05.c LIN/dtrt06.c	\
   LIN/dtzt01.c LIN/dtzt02.c LIN/dgennd.c LIN/ddrvge.c LIN/ddrvgb.c	\
   LIN/derrge.c LIN/ddrvpo.c LIN/derrpo.c

ZLINTST = LIN/zchkaa.c LIN/zchkeq.c LIN/zchkgb.c LIN/zchkge.c		\
   LIN/zchkgt.c LIN/zchkhe.c LIN/zchkhp.c LIN/zchklq.c LIN/zchkpb.c	\
   LIN/zchkpo.c LIN/zchkps.c LIN/zchkpp.c LIN/zchkpt.c LIN/zchkq3.c	\
   LIN/zchkql.c LIN/zchkqp.c LIN/zchkqr.c LIN/zchkrq.c LIN/zchksp.c	\
   LIN/zchksy.c LIN/zchktb.c LIN/zchktp.c LIN/zchktr.c LIN/zchktz.c	\
   LIN/zdrvgt.c LIN/zdrvhe.c LIN/zdrvhp.c LIN/zdrvls.c LIN/zdrvpb.c	\
   LIN/zdrvpp.c LIN/zdrvpt.c LIN/zdrvsp.c LIN/zdrvsy.c LIN/zerrgt.c	\
   LIN/zerrhe.c LIN/zerrlq.c LIN/zerrls.c LIN/zerrps.c LIN/zerrql.c	\
   LIN/zerrqp.c LIN/zerrqr.c LIN/zerrrq.c LIN/zerrsy.c LIN/zerrtr.c	\
   LIN/zerrtz.c LIN/zerrvx.c LIN/zgbt01.c LIN/zgbt02.c LIN/zgbt05.c	\
   LIN/zgelqs.c LIN/zgeqls.c LIN/zgeqrs.c LIN/zgerqs.c LIN/zget01.c	\
   LIN/zget02.c LIN/zget03.c LIN/zget04.c LIN/zget07.c LIN/zgtt01.c	\
   LIN/zgtt02.c LIN/zgtt05.c LIN/zhet01.c LIN/zhpt01.c LIN/zlaipd.c	\
   LIN/zlaptm.c LIN/zlarhs.c LIN/zlatb4.c LIN/zlatb5.c LIN/zlatsp.c	\
   LIN/zlatsy.c LIN/zlattb.c LIN/zlattp.c LIN/zlattr.c LIN/zlavhe.c	\
   LIN/zlavhp.c LIN/zlavsp.c LIN/zlavsy.c LIN/zlqt01.c LIN/zlqt02.c	\
   LIN/zlqt03.c LIN/zpbt01.c LIN/zpbt02.c LIN/zpbt05.c LIN/zpot01.c	\
   LIN/zpot02.c LIN/zpot03.c LIN/zpot05.c LIN/zpst01.c LIN/zppt01.c	\
   LIN/zppt02.c LIN/zppt03.c LIN/zppt05.c LIN/zptt01.c LIN/zptt02.c	\
   LIN/zptt05.c LIN/zqlt01.c LIN/zqlt02.c LIN/zqlt03.c LIN/zqpt01.c	\
   LIN/zqrt01.c LIN/zqrt02.c LIN/zqrt03.c LIN/zqrt11.c LIN/zqrt12.c	\
   LIN/zqrt13.c LIN/zqrt14.c LIN/zqrt15.c LIN/zqrt16.c LIN/zqrt17.c	\
   LIN/zrqt01.c LIN/zrqt02.c LIN/zrqt03.c LIN/zrzt01.c LIN/zrzt02.c	\
   LIN/zsbmv.c LIN/zspt01.c LIN/zspt02.c LIN/zspt03.c LIN/zsyt01.c	\
   LIN/zsyt02.c LIN/zsyt03.c LIN/ztbt02.c LIN/ztbt03.c LIN/ztbt05.c	\
   LIN/ztbt06.c LIN/ztpt01.c LIN/ztpt02.c LIN/ztpt03.c LIN/ztpt05.c	\
   LIN/ztpt06.c LIN/ztrt01.c LIN/ztrt02.c LIN/ztrt03.c LIN/ztrt05.c	\
   LIN/ztrt06.c LIN/ztzt01.c LIN/ztzt02.c LIN/dget06.c LIN/zgennd.c	\
   LIN/zdrvge.c LIN/zdrvgb.c LIN/zerrge.c LIN/zdrvpo.c LIN/zerrpo.c

DSLINTST = LIN/dchkab.c LIN/ddrvab.c LIN/ddrvac.c LIN/derrab.c		\
 LIN/derrac.c LIN/dget08.c LIN/alaerh.c LIN/alahd.c LIN/aladhd.c	\
 LIN/alareq.c LIN/chkxer.c LIN/dlarhs.c LIN/dlatb4.c LIN/xerbla.c	\
 LIN/dget02.c LIN/dpot06.c

ZCLINTST = LIN/zchkab.c LIN/zdrvab.c LIN/zdrvac.c LIN/zerrab.c		\
 LIN/zerrac.c LIN/zget08.c LIN/alaerh.c LIN/alahd.c LIN/aladhd.c	\
 LIN/alareq.c LIN/chkxer.c LIN/zget02.c LIN/zlarhs.c LIN/zlatb4.c	\
 LIN/zsbmv.c LIN/xerbla.c LIN/zpot06.c LIN/zlaipd.c

SLINTSTRFP = LIN/schkrfp.c LIN/sdrvrfp.c LIN/sdrvrf1.c LIN/sdrvrf2.c	\
 LIN/sdrvrf3.c LIN/sdrvrf4.c LIN/serrrfp.c LIN/slatb4.c LIN/slarhs.c	\
 LIN/sget04.c LIN/spot01.c LIN/spot03.c LIN/spot02.c LIN/chkxer.c	\
 LIN/xerbla.c LIN/alaerh.c LIN/aladhd.c LIN/alahd.c LIN/alasvm.c

DLINTSTRFP = LIN/dchkrfp.c LIN/ddrvrfp.c LIN/ddrvrf1.c LIN/ddrvrf2.c	\
 LIN/ddrvrf3.c LIN/ddrvrf4.c LIN/derrrfp.c LIN/dlatb4.c LIN/dlarhs.c	\
 LIN/dget04.c LIN/dpot01.c LIN/dpot03.c LIN/dpot02.c LIN/chkxer.c	\
 LIN/xerbla.c LIN/alaerh.c LIN/aladhd.c LIN/alahd.c LIN/alasvm.c

CLINTSTRFP = LIN/cchkrfp.c LIN/cdrvrfp.c LIN/cdrvrf1.c LIN/cdrvrf2.c	\
 LIN/cdrvrf3.c LIN/cdrvrf4.c LIN/cerrrfp.c LIN/claipd.c LIN/clatb4.c	\
 LIN/clarhs.c LIN/csbmv.c LIN/cget04.c LIN/cpot01.c LIN/cpot03.c	\
 LIN/cpot02.c LIN/chkxer.c LIN/xerbla.c LIN/alaerh.c LIN/aladhd.c	\
 LIN/alahd.c LIN/alasvm.c

ZLINTSTRFP = LIN/zchkrfp.c LIN/zdrvrfp.c LIN/zdrvrf1.c LIN/zdrvrf2.c	\
 LIN/zdrvrf3.c LIN/zdrvrf4.c LIN/zerrrfp.c LIN/zlatb4.c LIN/zlaipd.c	\
 LIN/zlarhs.c LIN/zsbmv.c LIN/zget04.c LIN/zpot01.c LIN/zpot03.c	\
 LIN/zpot02.c LIN/chkxer.c LIN/xerbla.c LIN/alaerh.c LIN/aladhd.c	\
 LIN/alahd.c LIN/alasvm.c

check_PROGRAMS += test_lins test_lind test_linc test_linz \
   test_lin_rfs test_lin_rfd test_lin_rfz test_lin_rfc \
   test_linds test_lincz

test_lins_SOURCES = LIN/main.c ../INSTALL/second.c \
		    $(ALINTST) $(SCLNTST) $(SLINTST)
test_lins_LDADD = libtmglib.a ../libcblapack.la -lf2c

test_lind_SOURCES = LIN/main.c ../INSTALL/dsecnd.c \
		    $(ALINTST) $(DLINTST) $(DZLNTST)
test_lind_LDADD = libtmglib.a ../libcblapack.la -lf2c

test_linc_SOURCES = LIN/main.c ../INSTALL/second.c \
		    $(ALINTST) $(CLINTST) $(SCLNTST)
test_linc_LDADD = libtmglib.a ../libcblapack.la -lf2c

test_linz_SOURCES = LIN/main.c ../INSTALL/dsecnd.c \
		    $(ALINTST) $(ZLINTST) $(DZLNTST)
test_linz_LDADD = libtmglib.a ../libcblapack.la -lf2c

test_linds_SOURCES = LIN/main.c ../INSTALL/second.c ../INSTALL/dsecnd.c \
		    $(DSLINTST)
test_linds_LDADD = libtmglib.a ../libcblapack.la -lf2c

test_lincz_SOURCES = LIN/main.c ../INSTALL/second.c ../INSTALL/dsecnd.c \
		    $(ZCLINTST)
test_lincz_LDADD = libtmglib.a ../libcblapack.la -lf2c

test_lin_rfs_SOURCES = LIN/main.c ../INSTALL/second.c $(SLINTSTRFP)
test_lin_rfs_LDADD = libtmglib.a ../libcblapack.la -lf2c

test_lin_rfd_SOURCES = LIN/main.c ../INSTALL/dsecnd.c $(DLINTSTRFP)
test_lin_rfd_LDADD = libtmglib.a ../libcblapack.la -lf2c

test_lin_rfc_SOURCES = LIN/main.c ../INSTALL/second.c $(CLINTSTRFP)
test_lin_rfc_LDADD = libtmglib.a ../libcblapack.la -lf2c

test_lin_rfz_SOURCES = LIN/main.c ../INSTALL/dsecnd.c $(ZLINTSTRFP)
test_lin_rfz_LDADD = libtmglib.a ../libcblapack.la -lf2c
