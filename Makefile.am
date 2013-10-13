## Makefile.am

ACLOCAL_AMFLAGS = -I m4

# We define the global AM_CPPFLAGS as everything we compile includes from these
# directories.
AM_CPPFLAGS = \
	-I$(top_srcdir) -I$(top_srcdir)/include \
	-I$(top_builddir)/include $(F2C_CPPFLAGS)

#
# Main library
#
lib_LTLIBRARIES = libcblapack.la

#
# BLAS components
#

ALLBLAS = BLAS/SRC/lsame.o BLAS/SRC/xerbla.o BLAS/SRC/xerbla_array.o

BLAS1 = BLAS/SRC/isamax.o BLAS/SRC/sasum.o BLAS/SRC/saxpy.o	\
	BLAS/SRC/scopy.o BLAS/SRCs/dot.o BLAS/SRC/snrm2.o	\
	BLAS/SRC/srot.o BLAS/SRC/srotg.o BLAS/SRC/sscal.o	\
	BLAS/SRC/sswap.o BLAS/SRC/sdsdot.o BLAS/SRC/srotmg.o	\
	BLAS/SRC/srotm.o BLAS/SRC/scabs1.o BLAS/SRC/scasum.o	\
	BLAS/SRC/scnrm2.o BLAS/SRC/icamax.o BLAS/SRC/caxpy.o	\
	BLAS/SRC/ccopy.o BLAS/SRC/cdotc.o BLAS/SRC/cdotu.o	\
	BLAS/SRC/csscal.o BLAS/SRC/crotg.o BLAS/SRC/cscal.o	\
	BLAS/SRC/cswap.o BLAS/SRC/csrot.o BLAS/SRC/idamax.o	\
	BLAS/SRC/dasum.o BLAS/SRC/daxpy.o BLAS/SRC/dcopy.o	\
	BLAS/SRC/ddot.o BLAS/SRC/dnrm2.o BLAS/SRC/drot.o	\
	BLAS/SRC/drotg.o BLAS/SRC/dscal.o BLAS/SRC/dsdot.o	\
	BLAS/SRC/dswap.o BLAS/SRC/drotmg.o BLAS/SRC/drotm.o	\
	BLAS/SRC/dcabs1.o BLAS/SRC/dzasum.o BLAS/SRC/dznrm2.o	\
	BLAS/SRC/izamax.o BLAS/SRC/zaxpy.o BLAS/SRC/zcopy.o	\
	BLAS/SRC/zdotc.o BLAS/SRC/zdotu.o BLAS/SRC/zdscal.o	\
	BLAS/SRC/zrotg.o BLAS/SRC/zscal.o BLAS/SRC/zswap.o	\
	BLAS/SRC/zdroto.o BLAS/SRC/isamax.o BLAS/SRC/sasum.o	\
	BLAS/SRC/saxpy.o BLAS/SRC/scopy.o BLAS/SRC/snrm2.o	\
	BLAS/SRC/sscal.o BLAS/SRC/idamax.o BLAS/SRC/dasum.o	\
	BLAS/SRC/daxpy.o BLAS/SRC/dcopy.o BLAS/SRC/dnrm2.o	\
	BLAS/SRC/dscal.o

BLAS2 = BLAS/SRC/sgemv.o BLAS/SRC/sgbmv.o BLAS/SRC/ssymv.o		\
	BLAS/SRC/ssbmv.o BLAS/SRC/sspmv.o BLAS/SRC/strmv.o		\
	BLAS/SRC/stbmv.o BLAS/SRC/stpmv.o BLAS/SRC/strsv.o		\
	BLAS/SRC/stbsv.o BLAS/SRC/stpsv.o BLAS/SRC/sger.o		\
	BLAS/SRC/ssyr.o BLAS/SRC/sspr.o BLAS/SRC/ssyr2.o		\
	BLAS/SRC/sspr2.o BLAS/SRC/cgemv.o BLAS/SRC/cgbmv.o		\
	BLAS/SRC/chemv.o BLAS/SRC/chbmv.o BLAS/SRC/chpmv.o		\
	BLAS/SRC/ctrmv.o BLAS/SRC/ctbmv.o BLAS/SRC/ctpmv.o		\
	BLAS/SRC/ctrsv.o BLAS/SRC/ctbsv.o BLAS/SRC/ctpsv.o		\
	BLAS/SRC/cgerc.o BLAS/SRC/cgeru.o BLAS/SRC/cher.o		\
	BLAS/SRC/chpr.o BLAS/SRC/cher2.o BLAS/SRC/chpr2.o		\
	BLAS/SRC/dgemv.o BLAS/SRC/dgbmv.o BLAS/SRC/dsymv.o		\
	BLAS/SRC/dsbmv.o BLAS/SRC/dspmv.o BLAS/SRC/dtrmv.o		\
	BLAS/SRC/dtbmv.o BLAS/SRC/dtpmv.o BLAS/SRC/dtrsv.o		\
	BLAS/SRC/dtbsv.o BLAS/SRC/dtpsv.o BLAS/SRC/dger.o		\
	BLAS/SRC/dsyr.o BLAS/SRC/dspr.o BLAS/SRC/dsyr2.o		\
	BLAS/SRC/dspr2.o BLAS/SRC/zgemv.o BLAS/SRC/zgbmv.o		\
	BLAS/SRC/zhemv.o BLAS/SRC/zhbmv.o BLAS/SRC/zhpmv.o		\
	BLAS/SRC/ztrmv.o BLAS/SRC/ztbmv.o BLAS/SRC/ztpmv.o		\
	BLAS/SRC/ztrsv.o BLAS/SRC/ztbsv.o BLAS/SRC/ztpsv.o		\
	BLAS/SRC/zgerc.o BLAS/SRC/zgeru.o BLAS/SRC/zher.o		\
	BLAS/SRC/zhpr.o BLAS/SRC/zher2.o BLAS/SRC/zhpr2.o

BLAS3 = BLAS/SRC/sgemm.o BLAS/SRC/ssymm.o BLAS/SRC/ssyrk.o	\
	BLAS/SRC/ssyr2k.o BLAS/SRC/strmm.o BLAS/SRC/strsm.o	\
	BLAS/SRC/cgemm.o BLAS/SRC/csymm.o BLAS/SRC/csyrk.o	\
	BLAS/SRC/csyr2k.o BLAS/SRC/ctrmm.o BLAS/SRC/ctrsm.o	\
	BLAS/SRC/chemm.o BLAS/SRC/cherk.o BLAS/SRC/cher2k.o	\
	BLAS/SRC/dgemm.o BLAS/SRC/dsymm.o BLAS/SRC/dsyrk.o	\
	BLAS/SRC/dsyr2k.o BLAS/SRC/dtrmm.o BLAS/SRC/dtrsm.o	\
	BLAS/SRC/zgemm.o BLAS/SRC/zsymm.o BLAS/SRC/zsyrk.o	\
	BLAS/SRC/zsyr2k.o BLAS/SRC/ztrmm.o BLAS/SRC/ztrsm.o	\
	BLAS/SRC/zhemm.o BLAS/SRC/zherk.o BLAS/SRC/zher2k.o

BLAS = $(ALLBLAS) $(BLAS1) $(BLAS2) $(BLAS3)

#
# LAPACK component
#
ALLAUX = SRC/maxloc.o SRC/ilaenv.o SRC/ieeeck.o SRC/lsamen.o	\
    SRC/xerbla.o xerbla_array.o SRC/iparmq.o SRC/ilaprec.o	\
    SRC/ilatrans.o SRC/ilauplo.o SRC/iladiag.o chla_transtype.o	\
    ../INSTALL/ilaver.o ../INSTALL/lsame.o

ALLXAUX =

SCLAUX = SRC/sbdsdc.o SRC/sbdsqr.o SRC/sdisna.o SRC/slabad.o		\
   SRC/slacpy.o SRC/sladiv.o SRC/slae2.o SRC/slaebz.o SRC/slaed0.o	\
   SRC/slaed1.o SRC/slaed2.o SRC/slaed3.o SRC/slaed4.o SRC/slaed5.o	\
   SRC/slaed6.o SRC/slaed7.o SRC/slaed8.o SRC/slaed9.o SRC/slaeda.o	\
   SRC/slaev2.o SRC/slagtf.o SRC/slagts.o SRC/slamrg.o SRC/slanst.o	\
   SRC/slapy2.o SRC/slapy3.o SRC/slarnv.o SRC/slarra.o SRC/slarrb.o	\
   SRC/slarrc.o SRC/slarrd.o SRC/slarre.o SRC/slarrf.o SRC/slarrj.o	\
   SRC/slarrk.o SRC/slarrr.o SRC/slaneg.o SRC/slartg.o SRC/slaruv.o	\
   SRC/slas2.o SRC/slascl.o SRC/slasd0.o SRC/slasd1.o SRC/slasd2.o	\
   SRC/slasd3.o SRC/slasd4.o SRC/slasd5.o SRC/slasd6.o SRC/slasd7.o	\
   SRC/slasd8.o SRC/slasda.o SRC/slasdq.o SRC/slasdt.o SRC/slaset.o	\
   SRC/slasq1.o SRC/slasq2.o SRC/slasq3.o SRC/slasq4.o SRC/slasq5.o	\
   SRC/slasq6.o SRC/slasr.o SRC/slasrt.o SRC/slassq.o SRC/slasv2.o	\
   SRC/spttrf.o SRC/sstebz.o SRC/sstedc.o SRC/ssteqr.o SRC/ssterf.o	\
   SRC/slaisnan.o SRC/sisnan.o ../INSTALL/slamch.o ../INSTALL/second.o

DZLAUX = SRC/dbdsdc.o SRC/dbdsqr.o SRC/ddisna.o SRC/dlabad.o		\
   SRC/dlacpy.o SRC/dladiv.o SRC/dlae2.o SRC/dlaebz.o SRC/dlaed0.o	\
   SRC/dlaed1.o SRC/dlaed2.o SRC/dlaed3.o SRC/dlaed4.o SRC/dlaed5.o	\
   SRC/dlaed6.o SRC/dlaed7.o SRC/dlaed8.o SRC/dlaed9.o SRC/dlaeda.o	\
   SRC/dlaev2.o SRC/dlagtf.o SRC/dlagts.o SRC/dlamrg.o SRC/dlanst.o	\
   SRC/dlapy2.o SRC/dlapy3.o SRC/dlarnv.o SRC/dlarra.o SRC/dlarrb.o	\
   SRC/dlarrc.o SRC/dlarrd.o SRC/dlarre.o SRC/dlarrf.o SRC/dlarrj.o	\
   SRC/dlarrk.o SRC/dlarrr.o SRC/dlaneg.o SRC/dlartg.o SRC/dlaruv.o	\
   SRC/dlas2.o SRC/dlascl.o SRC/dlasd0.o SRC/dlasd1.o SRC/dlasd2.o	\
   SRC/dlasd3.o SRC/dlasd4.o SRC/dlasd5.o SRC/dlasd6.o SRC/dlasd7.o	\
   SRC/dlasd8.o SRC/dlasda.o SRC/dlasdq.o SRC/dlasdt.o SRC/dlaset.o	\
   SRC/dlasq1.o SRC/dlasq2.o SRC/dlasq3.o SRC/dlasq4.o SRC/dlasq5.o	\
   SRC/dlasq6.o SRC/dlasr.o SRC/dlasrt.o SRC/dlassq.o SRC/dlasv2.o	\
   SRC/dpttrf.o SRC/dstebz.o SRC/dstedc.o SRC/dsteqr.o SRC/dsterf.o	\
   SRC/dlaisnan.o SRC/disnan.o ../INSTALL/dlamch.o ../INSTALL/dsecnd.o

SLASRC = SRC/sgbbrd.o SRC/sgbcon.o SRC/sgbequ.o SRC/sgbrfs.o		\
   SRC/sgbsv.o SRC/sgbsvx.o SRC/sgbtf2.o SRC/sgbtrf.o SRC/sgbtrs.o	\
   SRC/sgebak.o SRC/sgebal.o SRC/sgebd2.o SRC/sgebrd.o SRC/sgecon.o	\
   SRC/sgeequ.o SRC/sgees.o SRC/sgeesx.o SRC/sgeev.o SRC/sgeevx.o	\
   SRC/sgegs.o SRC/sgegv.o SRC/sgehd2.o SRC/sgehrd.o SRC/sgelq2.o	\
   SRC/sgelqf.o SRC/sgels.o SRC/sgelsd.o SRC/sgelss.o SRC/sgelsx.o	\
   SRC/sgelsy.o SRC/sgeql2.o SRC/sgeqlf.o SRC/sgeqp3.o SRC/sgeqpf.o	\
   SRC/sgeqr2.o SRC/sgeqrf.o SRC/sgerfs.o SRC/sgerq2.o SRC/sgerqf.o	\
   SRC/sgesc2.o SRC/sgesdd.o SRC/sgesv.o SRC/sgesvd.o SRC/sgesvx.o	\
   SRC/sgetc2.o SRC/sgetf2.o SRC/sgetrf.o SRC/sgetri.o SRC/sgetrs.o	\
   SRC/sggbak.o SRC/sggbal.o SRC/sgges.o SRC/sggesx.o SRC/sggev.o	\
   SRC/sggevx.o SRC/sggglm.o SRC/sgghrd.o SRC/sgglse.o SRC/sggqrf.o	\
   SRC/sggrqf.o SRC/sggsvd.o SRC/sggsvp.o SRC/sgtcon.o SRC/sgtrfs.o	\
   SRC/sgtsv.o SRC/sgtsvx.o SRC/sgttrf.o SRC/sgttrs.o SRC/sgtts2.o	\
   SRC/shgeqz.o SRC/shsein.o SRC/shseqr.o SRC/slabrd.o SRC/slacon.o	\
   SRC/slacn2.o SRC/slaein.o SRC/slaexc.o SRC/slag2.o SRC/slags2.o	\
   SRC/slagtm.o SRC/slagv2.o SRC/slahqr.o SRC/slahrd.o SRC/slahr2.o	\
   SRC/slaic1.o SRC/slaln2.o SRC/slals0.o SRC/slalsa.o SRC/slalsd.o	\
   SRC/slangb.o SRC/slange.o SRC/slangt.o SRC/slanhs.o SRC/slansb.o	\
   SRC/slansp.o SRC/slansy.o SRC/slantb.o SRC/slantp.o SRC/slantr.o	\
   SRC/slanv2.o SRC/slapll.o SRC/slapmt.o SRC/slaqgb.o SRC/slaqge.o	\
   SRC/slaqp2.o SRC/slaqps.o SRC/slaqsb.o SRC/slaqsp.o SRC/slaqsy.o	\
   SRC/slaqr0.o SRC/slaqr1.o SRC/slaqr2.o SRC/slaqr3.o SRC/slaqr4.o	\
   SRC/slaqr5.o SRC/slaqtr.o SRC/slar1v.o SRC/slar2v.o SRC/ilaslr.o	\
   SRC/ilaslc.o SRC/slarf.o SRC/slarfb.o SRC/slarfg.o SRC/slarft.o	\
   SRC/slarfx.o SRC/slargv.o SRC/slarrv.o SRC/slartv.o SRC/slarfp.o	\
   SRC/slarz.o SRC/slarzb.o SRC/slarzt.o SRC/slaswp.o SRC/slasy2.o	\
   SRC/slasyf.o SRC/slatbs.o SRC/slatdf.o SRC/slatps.o SRC/slatrd.o	\
   SRC/slatrs.o SRC/slatrz.o SRC/slatzm.o SRC/slauu2.o SRC/slauum.o	\
   SRC/sopgtr.o SRC/sopmtr.o SRC/sorg2l.o SRC/sorg2r.o SRC/sorgbr.o	\
   SRC/sorghr.o SRC/sorgl2.o SRC/sorglq.o SRC/sorgql.o SRC/sorgqr.o	\
   SRC/sorgr2.o SRC/sorgrq.o SRC/sorgtr.o SRC/sorm2l.o SRC/sorm2r.o	\
   SRC/sormbr.o SRC/sormhr.o SRC/sorml2.o SRC/sormlq.o SRC/sormql.o	\
   SRC/sormqr.o SRC/sormr2.o SRC/sormr3.o SRC/sormrq.o SRC/sormrz.o	\
   SRC/sormtr.o SRC/spbcon.o SRC/spbequ.o SRC/spbrfs.o SRC/spbstf.o	\
   SRC/spbsv.o SRC/spbsvx.o SRC/spbtf2.o SRC/spbtrf.o SRC/spbtrs.o	\
   SRC/spocon.o SRC/spoequ.o SRC/sporfs.o SRC/sposv.o SRC/sposvx.o	\
   SRC/spotf2.o SRC/spotrf.o SRC/spotri.o SRC/spotrs.o SRC/spstrf.o	\
   SRC/spstf2.o SRC/sppcon.o SRC/sppequ.o SRC/spprfs.o SRC/sppsv.o	\
   SRC/sppsvx.o SRC/spptrf.o SRC/spptri.o SRC/spptrs.o SRC/sptcon.o	\
   SRC/spteqr.o SRC/sptrfs.o SRC/sptsv.o SRC/sptsvx.o SRC/spttrs.o	\
   SRC/sptts2.o SRC/srscl.o SRC/ssbev.o SRC/ssbevd.o SRC/ssbevx.o	\
   SRC/ssbgst.o SRC/ssbgv.o SRC/ssbgvd.o SRC/ssbgvx.o SRC/ssbtrd.o	\
   SRC/sspcon.o SRC/sspev.o SRC/sspevd.o SRC/sspevx.o SRC/sspgst.o	\
   SRC/sspgv.o SRC/sspgvd.o SRC/sspgvx.o SRC/ssprfs.o SRC/sspsv.o	\
   SRC/sspsvx.o SRC/ssptrd.o SRC/ssptrf.o SRC/ssptri.o SRC/ssptrs.o	\
   SRC/sstegr.o SRC/sstein.o SRC/sstev.o SRC/sstevd.o SRC/sstevr.o	\
   SRC/sstevx.o SRC/ssycon.o SRC/ssyev.o SRC/ssyevd.o SRC/ssyevr.o	\
   SRC/ssyevx.o SRC/ssygs2.o SRC/ssygst.o SRC/ssygv.o SRC/ssygvd.o	\
   SRC/ssygvx.o SRC/ssyrfs.o SRC/ssysv.o SRC/ssysvx.o SRC/ssytd2.o	\
   SRC/ssytf2.o SRC/ssytrd.o SRC/ssytrf.o SRC/ssytri.o SRC/ssytrs.o	\
   SRC/stbcon.o SRC/stbrfs.o SRC/stbtrs.o SRC/stgevc.o SRC/stgex2.o	\
   SRC/stgexc.o SRC/stgsen.o SRC/stgsja.o SRC/stgsna.o SRC/stgsy2.o	\
   SRC/stgsyl.o SRC/stpcon.o SRC/stprfs.o SRC/stptri.o SRC/stptrs.o	\
   SRC/strcon.o SRC/strevc.o SRC/strexc.o SRC/strrfs.o SRC/strsen.o	\
   SRC/strsna.o SRC/strsyl.o SRC/strti2.o SRC/strtri.o SRC/strtrs.o	\
   SRC/stzrqf.o SRC/stzrzf.o SRC/sstemr.o SRC/slansf.o SRC/spftrf.o	\
   SRC/spftri.o SRC/spftrs.o SRC/ssfrk.o SRC/stfsm.o SRC/stftri.o	\
   SRC/stfttp.o SRC/stfttr.o SRC/stpttf.o SRC/stpttr.o SRC/strttf.o	\
   SRC/strttp.o SRC/sgejsv.o SRC/sgesvj.o SRC/sgsvj0.o SRC/sgsvj1.o	\
   SRC/sgeequb.o SRC/ssyequb.o SRC/spoequb.o SRC/sgbequb.o

CLASRC = SRC/cbdsqr.o SRC/cgbbrd.o SRC/cgbcon.o SRC/cgbequ.o		\
   SRC/cgbrfs.o SRC/cgbsv.o SRC/cgbsvx.o SRC/cgbtf2.o SRC/cgbtrf.o	\
   SRC/cgbtrs.o SRC/cgebak.o SRC/cgebal.o SRC/cgebd2.o SRC/cgebrd.o	\
   SRC/cgecon.o SRC/cgeequ.o SRC/cgees.o SRC/cgeesx.o SRC/cgeev.o	\
   SRC/cgeevx.o SRC/cgegs.o SRC/cgegv.o SRC/cgehd2.o SRC/cgehrd.o	\
   SRC/cgelq2.o SRC/cgelqf.o SRC/cgels.o SRC/cgelsd.o SRC/cgelss.o	\
   SRC/cgelsx.o SRC/cgelsy.o SRC/cgeql2.o SRC/cgeqlf.o SRC/cgeqp3.o	\
   SRC/cgeqpf.o SRC/cgeqr2.o SRC/cgeqrf.o SRC/cgerfs.o SRC/cgerq2.o	\
   SRC/cgerqf.o SRC/cgesc2.o SRC/cgesdd.o SRC/cgesv.o SRC/cgesvd.o	\
   SRC/cgesvx.o SRC/cgetc2.o SRC/cgetf2.o SRC/cgetrf.o SRC/cgetri.o	\
   SRC/cgetrs.o SRC/cggbak.o SRC/cggbal.o SRC/cgges.o SRC/cggesx.o	\
   SRC/cggev.o SRC/cggevx.o SRC/cggglm.o SRC/cgghrd.o SRC/cgglse.o	\
   SRC/cggqrf.o SRC/cggrqf.o SRC/cggsvd.o SRC/cggsvp.o SRC/cgtcon.o	\
   SRC/cgtrfs.o SRC/cgtsv.o SRC/cgtsvx.o SRC/cgttrf.o SRC/cgttrs.o	\
   SRC/cgtts2.o SRC/chbev.o SRC/chbevd.o SRC/chbevx.o SRC/chbgst.o	\
   SRC/chbgv.o SRC/chbgvd.o SRC/chbgvx.o SRC/chbtrd.o SRC/checon.o	\
   SRC/cheev.o SRC/cheevd.o SRC/cheevr.o SRC/cheevx.o SRC/chegs2.o	\
   SRC/chegst.o SRC/chegv.o SRC/chegvd.o SRC/chegvx.o SRC/cherfs.o	\
   SRC/chesv.o SRC/chesvx.o SRC/chetd2.o SRC/chetf2.o SRC/chetrd.o	\
   SRC/chetrf.o SRC/chetri.o SRC/chetrs.o SRC/chgeqz.o SRC/chpcon.o	\
   SRC/chpev.o SRC/chpevd.o SRC/chpevx.o SRC/chpgst.o SRC/chpgv.o	\
   SRC/chpgvd.o SRC/chpgvx.o SRC/chprfs.o SRC/chpsv.o SRC/chpsvx.o	\
   SRC/chptrd.o SRC/chptrf.o SRC/chptri.o SRC/chptrs.o SRC/chsein.o	\
   SRC/chseqr.o SRC/clabrd.o SRC/clacgv.o SRC/clacon.o SRC/clacn2.o	\
   SRC/clacp2.o SRC/clacpy.o SRC/clacrm.o SRC/clacrt.o SRC/cladiv.o	\
   SRC/claed0.o SRC/claed7.o SRC/claed8.o SRC/claein.o SRC/claesy.o	\
   SRC/claev2.o SRC/clags2.o SRC/clagtm.o SRC/clahef.o SRC/clahqr.o	\
   SRC/clahrd.o SRC/clahr2.o SRC/claic1.o SRC/clals0.o SRC/clalsa.o	\
   SRC/clalsd.o SRC/clangb.o SRC/clange.o SRC/clangt.o SRC/clanhb.o	\
   SRC/clanhe.o SRC/clanhp.o SRC/clanhs.o SRC/clanht.o SRC/clansb.o	\
   SRC/clansp.o SRC/clansy.o SRC/clantb.o SRC/clantp.o SRC/clantr.o	\
   SRC/clapll.o SRC/clapmt.o SRC/clarcm.o SRC/claqgb.o SRC/claqge.o	\
   SRC/claqhb.o SRC/claqhe.o SRC/claqhp.o SRC/claqp2.o SRC/claqps.o	\
   SRC/claqsb.o SRC/claqr0.o SRC/claqr1.o SRC/claqr2.o SRC/claqr3.o	\
   SRC/claqr4.o SRC/claqr5.o SRC/claqsp.o SRC/claqsy.o SRC/clar1v.o	\
   SRC/clar2v.o SRC/ilaclr.o SRC/ilaclc.o SRC/clarf.o SRC/clarfb.o	\
   SRC/clarfg.o SRC/clarft.o SRC/clarfp.o SRC/clarfx.o SRC/clargv.o	\
   SRC/clarnv.o SRC/clarrv.o SRC/clartg.o SRC/clartv.o SRC/clarz.o	\
   SRC/clarzb.o SRC/clarzt.o SRC/clascl.o SRC/claset.o SRC/clasr.o	\
   SRC/classq.o SRC/claswp.o SRC/clasyf.o SRC/clatbs.o SRC/clatdf.o	\
   SRC/clatps.o SRC/clatrd.o SRC/clatrs.o SRC/clatrz.o SRC/clatzm.o	\
   SRC/clauu2.o SRC/clauum.o SRC/cpbcon.o SRC/cpbequ.o SRC/cpbrfs.o	\
   SRC/cpbstf.o SRC/cpbsv.o SRC/cpbsvx.o SRC/cpbtf2.o SRC/cpbtrf.o	\
   SRC/cpbtrs.o SRC/cpocon.o SRC/cpoequ.o SRC/cporfs.o SRC/cposv.o	\
   SRC/cposvx.o SRC/cpotf2.o SRC/cpotrf.o SRC/cpotri.o SRC/cpotrs.o	\
   SRC/cpstrf.o SRC/cpstf2.o SRC/cppcon.o SRC/cppequ.o SRC/cpprfs.o	\
   SRC/cppsv.o SRC/cppsvx.o SRC/cpptrf.o SRC/cpptri.o SRC/cpptrs.o	\
   SRC/cptcon.o SRC/cpteqr.o SRC/cptrfs.o SRC/cptsv.o SRC/cptsvx.o	\
   SRC/cpttrf.o SRC/cpttrs.o SRC/cptts2.o SRC/crot.o SRC/cspcon.o	\
   SRC/cspmv.o SRC/cspr.o SRC/csprfs.o SRC/cspsv.o SRC/cspsvx.o		\
   SRC/csptrf.o SRC/csptri.o SRC/csptrs.o SRC/csrscl.o SRC/cstedc.o	\
   SRC/cstegr.o SRC/cstein.o SRC/csteqr.o SRC/csycon.o SRC/csymv.o	\
   SRC/csyr.o SRC/csyrfs.o SRC/csysv.o SRC/csysvx.o SRC/csytf2.o	\
   SRC/csytrf.o SRC/csytri.o SRC/csytrs.o SRC/ctbcon.o SRC/ctbrfs.o	\
   SRC/ctbtrs.o SRC/ctgevc.o SRC/ctgex2.o SRC/ctgexc.o SRC/ctgsen.o	\
   SRC/ctgsja.o SRC/ctgsna.o SRC/ctgsy2.o SRC/ctgsyl.o SRC/ctpcon.o	\
   SRC/ctprfs.o SRC/ctptri.o SRC/ctptrs.o SRC/ctrcon.o SRC/ctrevc.o	\
   SRC/ctrexc.o SRC/ctrrfs.o SRC/ctrsen.o SRC/ctrsna.o SRC/ctrsyl.o	\
   SRC/ctrti2.o SRC/ctrtri.o SRC/ctrtrs.o SRC/ctzrqf.o SRC/ctzrzf.o	\
   SRC/cung2l.o SRC/cung2r.o SRC/cungbr.o SRC/cunghr.o SRC/cungl2.o	\
   SRC/cunglq.o SRC/cungql.o SRC/cungqr.o SRC/cungr2.o SRC/cungrq.o	\
   SRC/cungtr.o SRC/cunm2l.o SRC/cunm2r.o SRC/cunmbr.o SRC/cunmhr.o	\
   SRC/cunml2.o SRC/cunmlq.o SRC/cunmql.o SRC/cunmqr.o SRC/cunmr2.o	\
   SRC/cunmr3.o SRC/cunmrq.o SRC/cunmrz.o SRC/cunmtr.o SRC/cupgtr.o	\
   SRC/cupmtr.o SRC/icmax1.o SRC/scsum1.o SRC/cstemr.o SRC/chfrk.o	\
   SRC/ctfttp.o SRC/clanhf.o SRC/cpftrf.o SRC/cpftri.o SRC/cpftrs.o	\
   SRC/ctfsm.o SRC/ctftri.o SRC/ctfttr.o SRC/ctpttf.o SRC/ctpttr.o	\
   SRC/ctrttf.o SRC/ctrttp.o SRC/cgeequb.o SRC/cgbequb.o SRC/csyequb.o	\
   SRC/cpoequb.o SRC/cheequb.o

DLASRC = SRC/dgbbrd.o SRC/dgbcon.o SRC/dgbequ.o SRC/dgbrfs.o		\
   SRC/dgbsv.o SRC/dgbsvx.o SRC/dgbtf2.o SRC/dgbtrf.o SRC/dgbtrs.o	\
   SRC/dgebak.o SRC/dgebal.o SRC/dgebd2.o SRC/dgebrd.o SRC/dgecon.o	\
   SRC/dgeequ.o SRC/dgees.o SRC/dgeesx.o SRC/dgeev.o SRC/dgeevx.o	\
   SRC/dgegs.o SRC/dgegv.o SRC/dgehd2.o SRC/dgehrd.o SRC/dgelq2.o	\
   SRC/dgelqf.o SRC/dgels.o SRC/dgelsd.o SRC/dgelss.o SRC/dgelsx.o	\
   SRC/dgelsy.o SRC/dgeql2.o SRC/dgeqlf.o SRC/dgeqp3.o SRC/dgeqpf.o	\
   SRC/dgeqr2.o SRC/dgeqrf.o SRC/dgerfs.o SRC/dgerq2.o SRC/dgerqf.o	\
   SRC/dgesc2.o SRC/dgesdd.o SRC/dgesv.o SRC/dgesvd.o SRC/dgesvx.o	\
   SRC/dgetc2.o SRC/dgetf2.o SRC/dgetrf.o SRC/dgetri.o SRC/dgetrs.o	\
   SRC/dggbak.o SRC/dggbal.o SRC/dgges.o SRC/dggesx.o SRC/dggev.o	\
   SRC/dggevx.o SRC/dggglm.o SRC/dgghrd.o SRC/dgglse.o SRC/dggqrf.o	\
   SRC/dggrqf.o SRC/dggsvd.o SRC/dggsvp.o SRC/dgtcon.o SRC/dgtrfs.o	\
   SRC/dgtsv.o SRC/dgtsvx.o SRC/dgttrf.o SRC/dgttrs.o SRC/dgtts2.o	\
   SRC/dhgeqz.o SRC/dhsein.o SRC/dhseqr.o SRC/dlabrd.o SRC/dlacon.o	\
   SRC/dlacn2.o SRC/dlaein.o SRC/dlaexc.o SRC/dlag2.o SRC/dlags2.o	\
   SRC/dlagtm.o SRC/dlagv2.o SRC/dlahqr.o SRC/dlahrd.o SRC/dlahr2.o	\
   SRC/dlaic1.o SRC/dlaln2.o SRC/dlals0.o SRC/dlalsa.o SRC/dlalsd.o	\
   SRC/dlangb.o SRC/dlange.o SRC/dlangt.o SRC/dlanhs.o SRC/dlansb.o	\
   SRC/dlansp.o SRC/dlansy.o SRC/dlantb.o SRC/dlantp.o SRC/dlantr.o	\
   SRC/dlanv2.o SRC/dlapll.o SRC/dlapmt.o SRC/dlaqgb.o SRC/dlaqge.o	\
   SRC/dlaqp2.o SRC/dlaqps.o SRC/dlaqsb.o SRC/dlaqsp.o SRC/dlaqsy.o	\
   SRC/dlaqr0.o SRC/dlaqr1.o SRC/dlaqr2.o SRC/dlaqr3.o SRC/dlaqr4.o	\
   SRC/dlaqr5.o SRC/dlaqtr.o SRC/dlar1v.o SRC/dlar2v.o SRC/iladlr.o	\
   SRC/iladlc.o SRC/dlarf.o SRC/dlarfb.o SRC/dlarfg.o SRC/dlarft.o	\
   SRC/dlarfx.o SRC/dlargv.o SRC/dlarrv.o SRC/dlartv.o SRC/dlarfp.o	\
   SRC/dlarz.o SRC/dlarzb.o SRC/dlarzt.o SRC/dlaswp.o SRC/dlasy2.o	\
   SRC/dlasyf.o SRC/dlatbs.o SRC/dlatdf.o SRC/dlatps.o SRC/dlatrd.o	\
   SRC/dlatrs.o SRC/dlatrz.o SRC/dlatzm.o SRC/dlauu2.o SRC/dlauum.o	\
   SRC/dopgtr.o SRC/dopmtr.o SRC/dorg2l.o SRC/dorg2r.o SRC/dorgbr.o	\
   SRC/dorghr.o SRC/dorgl2.o SRC/dorglq.o SRC/dorgql.o SRC/dorgqr.o	\
   SRC/dorgr2.o SRC/dorgrq.o SRC/dorgtr.o SRC/dorm2l.o SRC/dorm2r.o	\
   SRC/dormbr.o SRC/dormhr.o SRC/dorml2.o SRC/dormlq.o SRC/dormql.o	\
   SRC/dormqr.o SRC/dormr2.o SRC/dormr3.o SRC/dormrq.o SRC/dormrz.o	\
   SRC/dormtr.o SRC/dpbcon.o SRC/dpbequ.o SRC/dpbrfs.o SRC/dpbstf.o	\
   SRC/dpbsv.o SRC/dpbsvx.o SRC/dpbtf2.o SRC/dpbtrf.o SRC/dpbtrs.o	\
   SRC/dpocon.o SRC/dpoequ.o SRC/dporfs.o SRC/dposv.o SRC/dposvx.o	\
   SRC/dpotf2.o SRC/dpotrf.o SRC/dpotri.o SRC/dpotrs.o SRC/dpstrf.o	\
   SRC/dpstf2.o SRC/dppcon.o SRC/dppequ.o SRC/dpprfs.o SRC/dppsv.o	\
   SRC/dppsvx.o SRC/dpptrf.o SRC/dpptri.o SRC/dpptrs.o SRC/dptcon.o	\
   SRC/dpteqr.o SRC/dptrfs.o SRC/dptsv.o SRC/dptsvx.o SRC/dpttrs.o	\
   SRC/dptts2.o SRC/drscl.o SRC/dsbev.o SRC/dsbevd.o SRC/dsbevx.o	\
   SRC/dsbgst.o SRC/dsbgv.o SRC/dsbgvd.o SRC/dsbgvx.o SRC/dsbtrd.o	\
   SRC/dspcon.o SRC/dspev.o SRC/dspevd.o SRC/dspevx.o SRC/dspgst.o	\
   SRC/dspgv.o SRC/dspgvd.o SRC/dspgvx.o SRC/dsprfs.o SRC/dspsv.o	\
   SRC/dspsvx.o SRC/dsptrd.o SRC/dsptrf.o SRC/dsptri.o SRC/dsptrs.o	\
   SRC/dstegr.o SRC/dstein.o SRC/dstev.o SRC/dstevd.o SRC/dstevr.o	\
   SRC/dstevx.o SRC/dsycon.o SRC/dsyev.o SRC/dsyevd.o SRC/dsyevr.o	\
   SRC/dsyevx.o SRC/dsygs2.o SRC/dsygst.o SRC/dsygv.o SRC/dsygvd.o	\
   SRC/dsygvx.o SRC/dsyrfs.o SRC/dsysv.o SRC/dsysvx.o SRC/dsytd2.o	\
   SRC/dsytf2.o SRC/dsytrd.o SRC/dsytrf.o SRC/dsytri.o SRC/dsytrs.o	\
   SRC/dtbcon.o SRC/dtbrfs.o SRC/dtbtrs.o SRC/dtgevc.o SRC/dtgex2.o	\
   SRC/dtgexc.o SRC/dtgsen.o SRC/dtgsja.o SRC/dtgsna.o SRC/dtgsy2.o	\
   SRC/dtgsyl.o SRC/dtpcon.o SRC/dtprfs.o SRC/dtptri.o SRC/dtptrs.o	\
   SRC/dtrcon.o SRC/dtrevc.o SRC/dtrexc.o SRC/dtrrfs.o SRC/dtrsen.o	\
   SRC/dtrsna.o SRC/dtrsyl.o SRC/dtrti2.o SRC/dtrtri.o SRC/dtrtrs.o	\
   SRC/dtzrqf.o SRC/dtzrzf.o SRC/dstemr.o SRC/dsgesv.o SRC/dsposv.o	\
   SRC/dlag2s.o SRC/slag2d.o SRC/dlat2s.o SRC/dlansf.o SRC/dpftrf.o	\
   SRC/dpftri.o SRC/dpftrs.o SRC/dsfrk.o SRC/dtfsm.o SRC/dtftri.o	\
   SRC/dtfttp.o SRC/dtfttr.o SRC/dtpttf.o SRC/dtpttr.o SRC/dtrttf.o	\
   SRC/dtrttp.o SRC/dgejsv.o SRC/dgesvj.o SRC/dgsvj0.o SRC/dgsvj1.o	\
   SRC/dgeequb.o SRC/dsyequb.o SRC/dpoequb.o SRC/dgbequb.o

ZLASRC = SRC/zbdsqr.o SRC/zgbbrd.o SRC/zgbcon.o SRC/zgbequ.o		\
   SRC/zgbrfs.o SRC/zgbsv.o SRC/zgbsvx.o SRC/zgbtf2.o SRC/zgbtrf.o	\
   SRC/zgbtrs.o SRC/zgebak.o SRC/zgebal.o SRC/zgebd2.o SRC/zgebrd.o	\
   SRC/zgecon.o SRC/zgeequ.o SRC/zgees.o SRC/zgeesx.o SRC/zgeev.o	\
   SRC/zgeevx.o SRC/zgegs.o SRC/zgegv.o SRC/zgehd2.o SRC/zgehrd.o	\
   SRC/zgelq2.o SRC/zgelqf.o SRC/zgels.o SRC/zgelsd.o SRC/zgelss.o	\
   SRC/zgelsx.o SRC/zgelsy.o SRC/zgeql2.o SRC/zgeqlf.o SRC/zgeqp3.o	\
   SRC/zgeqpf.o SRC/zgeqr2.o SRC/zgeqrf.o SRC/zgerfs.o SRC/zgerq2.o	\
   SRC/zgerqf.o SRC/zgesc2.o SRC/zgesdd.o SRC/zgesv.o SRC/zgesvd.o	\
   SRC/zgesvx.o SRC/zgetc2.o SRC/zgetf2.o SRC/zgetrf.o SRC/zgetri.o	\
   SRC/zgetrs.o SRC/zggbak.o SRC/zggbal.o SRC/zgges.o SRC/zggesx.o	\
   SRC/zggev.o SRC/zggevx.o SRC/zggglm.o SRC/zgghrd.o SRC/zgglse.o	\
   SRC/zggqrf.o SRC/zggrqf.o SRC/zggsvd.o SRC/zggsvp.o SRC/zgtcon.o	\
   SRC/zgtrfs.o SRC/zgtsv.o SRC/zgtsvx.o SRC/zgttrf.o SRC/zgttrs.o	\
   SRC/zgtts2.o SRC/zhbev.o SRC/zhbevd.o SRC/zhbevx.o SRC/zhbgst.o	\
   SRC/zhbgv.o SRC/zhbgvd.o SRC/zhbgvx.o SRC/zhbtrd.o SRC/zhecon.o	\
   SRC/zheev.o SRC/zheevd.o SRC/zheevr.o SRC/zheevx.o SRC/zhegs2.o	\
   SRC/zhegst.o SRC/zhegv.o SRC/zhegvd.o SRC/zhegvx.o SRC/zherfs.o	\
   SRC/zhesv.o SRC/zhesvx.o SRC/zhetd2.o SRC/zhetf2.o SRC/zhetrd.o	\
   SRC/zhetrf.o SRC/zhetri.o SRC/zhetrs.o SRC/zhgeqz.o SRC/zhpcon.o	\
   SRC/zhpev.o SRC/zhpevd.o SRC/zhpevx.o SRC/zhpgst.o SRC/zhpgv.o	\
   SRC/zhpgvd.o SRC/zhpgvx.o SRC/zhprfs.o SRC/zhpsv.o SRC/zhpsvx.o	\
   SRC/zhptrd.o SRC/zhptrf.o SRC/zhptri.o SRC/zhptrs.o SRC/zhsein.o	\
   SRC/zhseqr.o SRC/zlabrd.o SRC/zlacgv.o SRC/zlacon.o SRC/zlacn2.o	\
   SRC/zlacp2.o SRC/zlacpy.o SRC/zlacrm.o SRC/zlacrt.o SRC/zladiv.o	\
   SRC/zlaed0.o SRC/zlaed7.o SRC/zlaed8.o SRC/zlaein.o SRC/zlaesy.o	\
   SRC/zlaev2.o SRC/zlags2.o SRC/zlagtm.o SRC/zlahef.o SRC/zlahqr.o	\
   SRC/zlahrd.o SRC/zlahr2.o SRC/zlaic1.o SRC/zlals0.o SRC/zlalsa.o	\
   SRC/zlalsd.o SRC/zlangb.o SRC/zlange.o SRC/zlangt.o SRC/zlanhb.o	\
   SRC/zlanhe.o SRC/zlanhp.o SRC/zlanhs.o SRC/zlanht.o SRC/zlansb.o	\
   SRC/zlansp.o SRC/zlansy.o SRC/zlantb.o SRC/zlantp.o SRC/zlantr.o	\
   SRC/zlapll.o SRC/zlapmt.o SRC/zlaqgb.o SRC/zlaqge.o SRC/zlaqhb.o	\
   SRC/zlaqhe.o SRC/zlaqhp.o SRC/zlaqp2.o SRC/zlaqps.o SRC/zlaqsb.o	\
   SRC/zlaqr0.o SRC/zlaqr1.o SRC/zlaqr2.o SRC/zlaqr3.o SRC/zlaqr4.o	\
   SRC/zlaqr5.o SRC/zlaqsp.o SRC/zlaqsy.o SRC/zlar1v.o SRC/zlar2v.o	\
   SRC/ilazlr.o SRC/ilazlc.o SRC/zlarcm.o SRC/zlarf.o SRC/zlarfb.o	\
   SRC/zlarfg.o SRC/zlarft.o SRC/zlarfp.o SRC/zlarfx.o SRC/zlargv.o	\
   SRC/zlarnv.o SRC/zlarrv.o SRC/zlartg.o SRC/zlartv.o SRC/zlarz.o	\
   SRC/zlarzb.o SRC/zlarzt.o SRC/zlascl.o SRC/zlaset.o SRC/zlasr.o	\
   SRC/zlassq.o SRC/zlaswp.o SRC/zlasyf.o SRC/zlatbs.o SRC/zlatdf.o	\
   SRC/zlatps.o SRC/zlatrd.o SRC/zlatrs.o SRC/zlatrz.o SRC/zlatzm.o	\
   SRC/zlauu2.o SRC/zlauum.o SRC/zpbcon.o SRC/zpbequ.o SRC/zpbrfs.o	\
   SRC/zpbstf.o SRC/zpbsv.o SRC/zpbsvx.o SRC/zpbtf2.o SRC/zpbtrf.o	\
   SRC/zpbtrs.o SRC/zpocon.o SRC/zpoequ.o SRC/zporfs.o SRC/zposv.o	\
   SRC/zposvx.o SRC/zpotf2.o SRC/zpotrf.o SRC/zpotri.o SRC/zpotrs.o	\
   SRC/zpstrf.o SRC/zpstf2.o SRC/zppcon.o SRC/zppequ.o SRC/zpprfs.o	\
   SRC/zppsv.o SRC/zppsvx.o SRC/zpptrf.o SRC/zpptri.o SRC/zpptrs.o	\
   SRC/zptcon.o SRC/zpteqr.o SRC/zptrfs.o SRC/zptsv.o SRC/zptsvx.o	\
   SRC/zpttrf.o SRC/zpttrs.o SRC/zptts2.o SRC/zrot.o SRC/zspcon.o	\
   SRC/zspmv.o SRC/zspr.o SRC/zsprfs.o SRC/zspsv.o SRC/zspsvx.o		\
   SRC/zsptrf.o SRC/zsptri.o SRC/zsptrs.o SRC/zdrscl.o SRC/zstedc.o	\
   SRC/zstegr.o SRC/zstein.o SRC/zsteqr.o SRC/zsycon.o SRC/zsymv.o	\
   SRC/zsyr.o SRC/zsyrfs.o SRC/zsysv.o SRC/zsysvx.o SRC/zsytf2.o	\
   SRC/zsytrf.o SRC/zsytri.o SRC/zsytrs.o SRC/ztbcon.o SRC/ztbrfs.o	\
   SRC/ztbtrs.o SRC/ztgevc.o SRC/ztgex2.o SRC/ztgexc.o SRC/ztgsen.o	\
   SRC/ztgsja.o SRC/ztgsna.o SRC/ztgsy2.o SRC/ztgsyl.o SRC/ztpcon.o	\
   SRC/ztprfs.o SRC/ztptri.o SRC/ztptrs.o SRC/ztrcon.o SRC/ztrevc.o	\
   SRC/ztrexc.o SRC/ztrrfs.o SRC/ztrsen.o SRC/ztrsna.o SRC/ztrsyl.o	\
   SRC/ztrti2.o SRC/ztrtri.o SRC/ztrtrs.o SRC/ztzrqf.o SRC/ztzrzf.o	\
   SRC/zung2l.o SRC/zung2r.o SRC/zungbr.o SRC/zunghr.o SRC/zungl2.o	\
   SRC/zunglq.o SRC/zungql.o SRC/zungqr.o SRC/zungr2.o SRC/zungrq.o	\
   SRC/zungtr.o SRC/zunm2l.o SRC/zunm2r.o SRC/zunmbr.o SRC/zunmhr.o	\
   SRC/zunml2.o SRC/zunmlq.o SRC/zunmql.o SRC/zunmqr.o SRC/zunmr2.o	\
   SRC/zunmr3.o SRC/zunmrq.o SRC/zunmrz.o SRC/zunmtr.o SRC/zupgtr.o	\
   SRC/zupmtr.o SRC/izmax1.o SRC/dzsum1.o SRC/zstemr.o SRC/zcgesv.o	\
   SRC/zcposv.o SRC/zlag2c.o SRC/clag2z.o SRC/zlat2c.o SRC/zhfrk.o	\
   SRC/ztfttp.o SRC/zlanhf.o SRC/zpftrf.o SRC/zpftri.o SRC/zpftrs.o	\
   SRC/ztfsm.o SRC/ztftri.o SRC/ztfttr.o SRC/ztpttf.o SRC/ztpttr.o	\
   SRC/ztrttf.o SRC/ztrttp.o SRC/zgeequb.o SRC/zgbequb.o SRC/zsyequb.o	\
   SRC/zpoequb.o SRC/zheequb.o

LAPACK = $(SLASRC) $(DLASRC) $(CLASRC) $(ZLASRC) $(SCLAUX) $(DZLAUX)	\
	$(ALLAUX)

libcblapack_la_SOURCES = $(BLAS) $(LAPACK)
