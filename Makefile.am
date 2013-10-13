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

ALLBLAS = BLAS/SRC/lsame.c BLAS/SRC/xerbla.c BLAS/SRC/xerbla_array.c

BLAS1 = BLAS/SRC/isamax.c BLAS/SRC/sasum.c BLAS/SRC/saxpy.c	\
	BLAS/SRC/scopy.c BLAS/SRC/sdot.c BLAS/SRC/snrm2.c	\
	BLAS/SRC/srot.c BLAS/SRC/srotg.c BLAS/SRC/sscal.c	\
	BLAS/SRC/sswap.c BLAS/SRC/sdsdot.c BLAS/SRC/srotmg.c	\
	BLAS/SRC/srotm.c BLAS/SRC/scabs1.c BLAS/SRC/scasum.c	\
	BLAS/SRC/scnrm2.c BLAS/SRC/icamax.c BLAS/SRC/caxpy.c	\
	BLAS/SRC/ccopy.c BLAS/SRC/cdotc.c BLAS/SRC/cdotu.c	\
	BLAS/SRC/csscal.c BLAS/SRC/crotg.c BLAS/SRC/cscal.c	\
	BLAS/SRC/cswap.c BLAS/SRC/csrot.c BLAS/SRC/idamax.c	\
	BLAS/SRC/dasum.c BLAS/SRC/daxpy.c BLAS/SRC/dcopy.c	\
	BLAS/SRC/ddot.c BLAS/SRC/dnrm2.c BLAS/SRC/drot.c	\
	BLAS/SRC/drotg.c BLAS/SRC/dscal.c BLAS/SRC/dsdot.c	\
	BLAS/SRC/dswap.c BLAS/SRC/drotmg.c BLAS/SRC/drotm.c	\
	BLAS/SRC/dcabs1.c BLAS/SRC/dzasum.c BLAS/SRC/dznrm2.c	\
	BLAS/SRC/izamax.c BLAS/SRC/zaxpy.c BLAS/SRC/zcopy.c	\
	BLAS/SRC/zdotc.c BLAS/SRC/zdotu.c BLAS/SRC/zdscal.c	\
	BLAS/SRC/zrotg.c BLAS/SRC/zscal.c BLAS/SRC/zswap.c	\
	BLAS/SRC/zdrot.c BLAS/SRC/isamax.c BLAS/SRC/sasum.c	\
	BLAS/SRC/saxpy.c BLAS/SRC/scopy.c BLAS/SRC/snrm2.c	\
	BLAS/SRC/sscal.c BLAS/SRC/idamax.c BLAS/SRC/dasum.c	\
	BLAS/SRC/daxpy.c BLAS/SRC/dcopy.c BLAS/SRC/dnrm2.c	\
	BLAS/SRC/dscal.c

BLAS2 = BLAS/SRC/sgemv.c BLAS/SRC/sgbmv.c BLAS/SRC/ssymv.c		\
	BLAS/SRC/ssbmv.c BLAS/SRC/sspmv.c BLAS/SRC/strmv.c		\
	BLAS/SRC/stbmv.c BLAS/SRC/stpmv.c BLAS/SRC/strsv.c		\
	BLAS/SRC/stbsv.c BLAS/SRC/stpsv.c BLAS/SRC/sger.c		\
	BLAS/SRC/ssyr.c BLAS/SRC/sspr.c BLAS/SRC/ssyr2.c		\
	BLAS/SRC/sspr2.c BLAS/SRC/cgemv.c BLAS/SRC/cgbmv.c		\
	BLAS/SRC/chemv.c BLAS/SRC/chbmv.c BLAS/SRC/chpmv.c		\
	BLAS/SRC/ctrmv.c BLAS/SRC/ctbmv.c BLAS/SRC/ctpmv.c		\
	BLAS/SRC/ctrsv.c BLAS/SRC/ctbsv.c BLAS/SRC/ctpsv.c		\
	BLAS/SRC/cgerc.c BLAS/SRC/cgeru.c BLAS/SRC/cher.c		\
	BLAS/SRC/chpr.c BLAS/SRC/cher2.c BLAS/SRC/chpr2.c		\
	BLAS/SRC/dgemv.c BLAS/SRC/dgbmv.c BLAS/SRC/dsymv.c		\
	BLAS/SRC/dsbmv.c BLAS/SRC/dspmv.c BLAS/SRC/dtrmv.c		\
	BLAS/SRC/dtbmv.c BLAS/SRC/dtpmv.c BLAS/SRC/dtrsv.c		\
	BLAS/SRC/dtbsv.c BLAS/SRC/dtpsv.c BLAS/SRC/dger.c		\
	BLAS/SRC/dsyr.c BLAS/SRC/dspr.c BLAS/SRC/dsyr2.c		\
	BLAS/SRC/dspr2.c BLAS/SRC/zgemv.c BLAS/SRC/zgbmv.c		\
	BLAS/SRC/zhemv.c BLAS/SRC/zhbmv.c BLAS/SRC/zhpmv.c		\
	BLAS/SRC/ztrmv.c BLAS/SRC/ztbmv.c BLAS/SRC/ztpmv.c		\
	BLAS/SRC/ztrsv.c BLAS/SRC/ztbsv.c BLAS/SRC/ztpsv.c		\
	BLAS/SRC/zgerc.c BLAS/SRC/zgeru.c BLAS/SRC/zher.c		\
	BLAS/SRC/zhpr.c BLAS/SRC/zher2.c BLAS/SRC/zhpr2.c

BLAS3 = BLAS/SRC/sgemm.c BLAS/SRC/ssymm.c BLAS/SRC/ssyrk.c	\
	BLAS/SRC/ssyr2k.c BLAS/SRC/strmm.c BLAS/SRC/strsm.c	\
	BLAS/SRC/cgemm.c BLAS/SRC/csymm.c BLAS/SRC/csyrk.c	\
	BLAS/SRC/csyr2k.c BLAS/SRC/ctrmm.c BLAS/SRC/ctrsm.c	\
	BLAS/SRC/chemm.c BLAS/SRC/cherk.c BLAS/SRC/cher2k.c	\
	BLAS/SRC/dgemm.c BLAS/SRC/dsymm.c BLAS/SRC/dsyrk.c	\
	BLAS/SRC/dsyr2k.c BLAS/SRC/dtrmm.c BLAS/SRC/dtrsm.c	\
	BLAS/SRC/zgemm.c BLAS/SRC/zsymm.c BLAS/SRC/zsyrk.c	\
	BLAS/SRC/zsyr2k.c BLAS/SRC/ztrmm.c BLAS/SRC/ztrsm.c	\
	BLAS/SRC/zhemm.c BLAS/SRC/zherk.c BLAS/SRC/zher2k.c

BLAS = $(ALLBLAS) $(BLAS1) $(BLAS2) $(BLAS3)

#
# LAPACK component
#
ALLAUX = SRC/maxloc.c SRC/ilaenv.c SRC/ieeeck.c SRC/lsamen.c	\
    SRC/xerbla.c xerbla_array.c SRC/iparmq.c SRC/ilaprec.c	\
    SRC/ilatrans.c SRC/ilauplo.c SRC/iladiag.c chla_transtype.c	\
    ../INSTALL/ilaver.c ../INSTALL/lsame.c

ALLXAUX =

SCLAUX = SRC/sbdsdc.c SRC/sbdsqr.c SRC/sdisna.c SRC/slabad.c		\
   SRC/slacpy.c SRC/sladiv.c SRC/slae2.c SRC/slaebz.c SRC/slaed0.c	\
   SRC/slaed1.c SRC/slaed2.c SRC/slaed3.c SRC/slaed4.c SRC/slaed5.c	\
   SRC/slaed6.c SRC/slaed7.c SRC/slaed8.c SRC/slaed9.c SRC/slaeda.c	\
   SRC/slaev2.c SRC/slagtf.c SRC/slagts.c SRC/slamrg.c SRC/slanst.c	\
   SRC/slapy2.c SRC/slapy3.c SRC/slarnv.c SRC/slarra.c SRC/slarrb.c	\
   SRC/slarrc.c SRC/slarrd.c SRC/slarre.c SRC/slarrf.c SRC/slarrj.c	\
   SRC/slarrk.c SRC/slarrr.c SRC/slaneg.c SRC/slartg.c SRC/slaruv.c	\
   SRC/slas2.c SRC/slascl.c SRC/slasd0.c SRC/slasd1.c SRC/slasd2.c	\
   SRC/slasd3.c SRC/slasd4.c SRC/slasd5.c SRC/slasd6.c SRC/slasd7.c	\
   SRC/slasd8.c SRC/slasda.c SRC/slasdq.c SRC/slasdt.c SRC/slaset.c	\
   SRC/slasq1.c SRC/slasq2.c SRC/slasq3.c SRC/slasq4.c SRC/slasq5.c	\
   SRC/slasq6.c SRC/slasr.c SRC/slasrt.c SRC/slassq.c SRC/slasv2.c	\
   SRC/spttrf.c SRC/sstebz.c SRC/sstedc.c SRC/ssteqr.c SRC/ssterf.c	\
   SRC/slaisnan.c SRC/sisnan.c ../INSTALL/slamch.c ../INSTALL/second.c

DZLAUX = SRC/dbdsdc.c SRC/dbdsqr.c SRC/ddisna.c SRC/dlabad.c		\
   SRC/dlacpy.c SRC/dladiv.c SRC/dlae2.c SRC/dlaebz.c SRC/dlaed0.c	\
   SRC/dlaed1.c SRC/dlaed2.c SRC/dlaed3.c SRC/dlaed4.c SRC/dlaed5.c	\
   SRC/dlaed6.c SRC/dlaed7.c SRC/dlaed8.c SRC/dlaed9.c SRC/dlaeda.c	\
   SRC/dlaev2.c SRC/dlagtf.c SRC/dlagts.c SRC/dlamrg.c SRC/dlanst.c	\
   SRC/dlapy2.c SRC/dlapy3.c SRC/dlarnv.c SRC/dlarra.c SRC/dlarrb.c	\
   SRC/dlarrc.c SRC/dlarrd.c SRC/dlarre.c SRC/dlarrf.c SRC/dlarrj.c	\
   SRC/dlarrk.c SRC/dlarrr.c SRC/dlaneg.c SRC/dlartg.c SRC/dlaruv.c	\
   SRC/dlas2.c SRC/dlascl.c SRC/dlasd0.c SRC/dlasd1.c SRC/dlasd2.c	\
   SRC/dlasd3.c SRC/dlasd4.c SRC/dlasd5.c SRC/dlasd6.c SRC/dlasd7.c	\
   SRC/dlasd8.c SRC/dlasda.c SRC/dlasdq.c SRC/dlasdt.c SRC/dlaset.c	\
   SRC/dlasq1.c SRC/dlasq2.c SRC/dlasq3.c SRC/dlasq4.c SRC/dlasq5.c	\
   SRC/dlasq6.c SRC/dlasr.c SRC/dlasrt.c SRC/dlassq.c SRC/dlasv2.c	\
   SRC/dpttrf.c SRC/dstebz.c SRC/dstedc.c SRC/dsteqr.c SRC/dsterf.c	\
   SRC/dlaisnan.c SRC/disnan.c ../INSTALL/dlamch.c ../INSTALL/dsecnd.c

SLASRC = SRC/sgbbrd.c SRC/sgbcon.c SRC/sgbequ.c SRC/sgbrfs.c		\
   SRC/sgbsv.c SRC/sgbsvx.c SRC/sgbtf2.c SRC/sgbtrf.c SRC/sgbtrs.c	\
   SRC/sgebak.c SRC/sgebal.c SRC/sgebd2.c SRC/sgebrd.c SRC/sgecon.c	\
   SRC/sgeequ.c SRC/sgees.c SRC/sgeesx.c SRC/sgeev.c SRC/sgeevx.c	\
   SRC/sgegs.c SRC/sgegv.c SRC/sgehd2.c SRC/sgehrd.c SRC/sgelq2.c	\
   SRC/sgelqf.c SRC/sgels.c SRC/sgelsd.c SRC/sgelss.c SRC/sgelsx.c	\
   SRC/sgelsy.c SRC/sgeql2.c SRC/sgeqlf.c SRC/sgeqp3.c SRC/sgeqpf.c	\
   SRC/sgeqr2.c SRC/sgeqrf.c SRC/sgerfs.c SRC/sgerq2.c SRC/sgerqf.c	\
   SRC/sgesc2.c SRC/sgesdd.c SRC/sgesv.c SRC/sgesvd.c SRC/sgesvx.c	\
   SRC/sgetc2.c SRC/sgetf2.c SRC/sgetrf.c SRC/sgetri.c SRC/sgetrs.c	\
   SRC/sggbak.c SRC/sggbal.c SRC/sgges.c SRC/sggesx.c SRC/sggev.c	\
   SRC/sggevx.c SRC/sggglm.c SRC/sgghrd.c SRC/sgglse.c SRC/sggqrf.c	\
   SRC/sggrqf.c SRC/sggsvd.c SRC/sggsvp.c SRC/sgtcon.c SRC/sgtrfs.c	\
   SRC/sgtsv.c SRC/sgtsvx.c SRC/sgttrf.c SRC/sgttrs.c SRC/sgtts2.c	\
   SRC/shgeqz.c SRC/shsein.c SRC/shseqr.c SRC/slabrd.c SRC/slacon.c	\
   SRC/slacn2.c SRC/slaein.c SRC/slaexc.c SRC/slag2.c SRC/slags2.c	\
   SRC/slagtm.c SRC/slagv2.c SRC/slahqr.c SRC/slahrd.c SRC/slahr2.c	\
   SRC/slaic1.c SRC/slaln2.c SRC/slals0.c SRC/slalsa.c SRC/slalsd.c	\
   SRC/slangb.c SRC/slange.c SRC/slangt.c SRC/slanhs.c SRC/slansb.c	\
   SRC/slansp.c SRC/slansy.c SRC/slantb.c SRC/slantp.c SRC/slantr.c	\
   SRC/slanv2.c SRC/slapll.c SRC/slapmt.c SRC/slaqgb.c SRC/slaqge.c	\
   SRC/slaqp2.c SRC/slaqps.c SRC/slaqsb.c SRC/slaqsp.c SRC/slaqsy.c	\
   SRC/slaqr0.c SRC/slaqr1.c SRC/slaqr2.c SRC/slaqr3.c SRC/slaqr4.c	\
   SRC/slaqr5.c SRC/slaqtr.c SRC/slar1v.c SRC/slar2v.c SRC/ilaslr.c	\
   SRC/ilaslc.c SRC/slarf.c SRC/slarfb.c SRC/slarfg.c SRC/slarft.c	\
   SRC/slarfx.c SRC/slargv.c SRC/slarrv.c SRC/slartv.c SRC/slarfp.c	\
   SRC/slarz.c SRC/slarzb.c SRC/slarzt.c SRC/slaswp.c SRC/slasy2.c	\
   SRC/slasyf.c SRC/slatbs.c SRC/slatdf.c SRC/slatps.c SRC/slatrd.c	\
   SRC/slatrs.c SRC/slatrz.c SRC/slatzm.c SRC/slauu2.c SRC/slauum.c	\
   SRC/sopgtr.c SRC/sopmtr.c SRC/sorg2l.c SRC/sorg2r.c SRC/sorgbr.c	\
   SRC/sorghr.c SRC/sorgl2.c SRC/sorglq.c SRC/sorgql.c SRC/sorgqr.c	\
   SRC/sorgr2.c SRC/sorgrq.c SRC/sorgtr.c SRC/sorm2l.c SRC/sorm2r.c	\
   SRC/sormbr.c SRC/sormhr.c SRC/sorml2.c SRC/sormlq.c SRC/sormql.c	\
   SRC/sormqr.c SRC/sormr2.c SRC/sormr3.c SRC/sormrq.c SRC/sormrz.c	\
   SRC/sormtr.c SRC/spbcon.c SRC/spbequ.c SRC/spbrfs.c SRC/spbstf.c	\
   SRC/spbsv.c SRC/spbsvx.c SRC/spbtf2.c SRC/spbtrf.c SRC/spbtrs.c	\
   SRC/spocon.c SRC/spoequ.c SRC/sporfs.c SRC/sposv.c SRC/sposvx.c	\
   SRC/spotf2.c SRC/spotrf.c SRC/spotri.c SRC/spotrs.c SRC/spstrf.c	\
   SRC/spstf2.c SRC/sppcon.c SRC/sppequ.c SRC/spprfs.c SRC/sppsv.c	\
   SRC/sppsvx.c SRC/spptrf.c SRC/spptri.c SRC/spptrs.c SRC/sptcon.c	\
   SRC/spteqr.c SRC/sptrfs.c SRC/sptsv.c SRC/sptsvx.c SRC/spttrs.c	\
   SRC/sptts2.c SRC/srscl.c SRC/ssbev.c SRC/ssbevd.c SRC/ssbevx.c	\
   SRC/ssbgst.c SRC/ssbgv.c SRC/ssbgvd.c SRC/ssbgvx.c SRC/ssbtrd.c	\
   SRC/sspcon.c SRC/sspev.c SRC/sspevd.c SRC/sspevx.c SRC/sspgst.c	\
   SRC/sspgv.c SRC/sspgvd.c SRC/sspgvx.c SRC/ssprfs.c SRC/sspsv.c	\
   SRC/sspsvx.c SRC/ssptrd.c SRC/ssptrf.c SRC/ssptri.c SRC/ssptrs.c	\
   SRC/sstegr.c SRC/sstein.c SRC/sstev.c SRC/sstevd.c SRC/sstevr.c	\
   SRC/sstevx.c SRC/ssycon.c SRC/ssyev.c SRC/ssyevd.c SRC/ssyevr.c	\
   SRC/ssyevx.c SRC/ssygs2.c SRC/ssygst.c SRC/ssygv.c SRC/ssygvd.c	\
   SRC/ssygvx.c SRC/ssyrfs.c SRC/ssysv.c SRC/ssysvx.c SRC/ssytd2.c	\
   SRC/ssytf2.c SRC/ssytrd.c SRC/ssytrf.c SRC/ssytri.c SRC/ssytrs.c	\
   SRC/stbcon.c SRC/stbrfs.c SRC/stbtrs.c SRC/stgevc.c SRC/stgex2.c	\
   SRC/stgexc.c SRC/stgsen.c SRC/stgsja.c SRC/stgsna.c SRC/stgsy2.c	\
   SRC/stgsyl.c SRC/stpcon.c SRC/stprfs.c SRC/stptri.c SRC/stptrs.c	\
   SRC/strcon.c SRC/strevc.c SRC/strexc.c SRC/strrfs.c SRC/strsen.c	\
   SRC/strsna.c SRC/strsyl.c SRC/strti2.c SRC/strtri.c SRC/strtrs.c	\
   SRC/stzrqf.c SRC/stzrzf.c SRC/sstemr.c SRC/slansf.c SRC/spftrf.c	\
   SRC/spftri.c SRC/spftrs.c SRC/ssfrk.c SRC/stfsm.c SRC/stftri.c	\
   SRC/stfttp.c SRC/stfttr.c SRC/stpttf.c SRC/stpttr.c SRC/strttf.c	\
   SRC/strttp.c SRC/sgejsv.c SRC/sgesvj.c SRC/sgsvj0.c SRC/sgsvj1.c	\
   SRC/sgeequb.c SRC/ssyequb.c SRC/spoequb.c SRC/sgbequb.c

CLASRC = SRC/cbdsqr.c SRC/cgbbrd.c SRC/cgbcon.c SRC/cgbequ.c		\
   SRC/cgbrfs.c SRC/cgbsv.c SRC/cgbsvx.c SRC/cgbtf2.c SRC/cgbtrf.c	\
   SRC/cgbtrs.c SRC/cgebak.c SRC/cgebal.c SRC/cgebd2.c SRC/cgebrd.c	\
   SRC/cgecon.c SRC/cgeequ.c SRC/cgees.c SRC/cgeesx.c SRC/cgeev.c	\
   SRC/cgeevx.c SRC/cgegs.c SRC/cgegv.c SRC/cgehd2.c SRC/cgehrd.c	\
   SRC/cgelq2.c SRC/cgelqf.c SRC/cgels.c SRC/cgelsd.c SRC/cgelss.c	\
   SRC/cgelsx.c SRC/cgelsy.c SRC/cgeql2.c SRC/cgeqlf.c SRC/cgeqp3.c	\
   SRC/cgeqpf.c SRC/cgeqr2.c SRC/cgeqrf.c SRC/cgerfs.c SRC/cgerq2.c	\
   SRC/cgerqf.c SRC/cgesc2.c SRC/cgesdd.c SRC/cgesv.c SRC/cgesvd.c	\
   SRC/cgesvx.c SRC/cgetc2.c SRC/cgetf2.c SRC/cgetrf.c SRC/cgetri.c	\
   SRC/cgetrs.c SRC/cggbak.c SRC/cggbal.c SRC/cgges.c SRC/cggesx.c	\
   SRC/cggev.c SRC/cggevx.c SRC/cggglm.c SRC/cgghrd.c SRC/cgglse.c	\
   SRC/cggqrf.c SRC/cggrqf.c SRC/cggsvd.c SRC/cggsvp.c SRC/cgtcon.c	\
   SRC/cgtrfs.c SRC/cgtsv.c SRC/cgtsvx.c SRC/cgttrf.c SRC/cgttrs.c	\
   SRC/cgtts2.c SRC/chbev.c SRC/chbevd.c SRC/chbevx.c SRC/chbgst.c	\
   SRC/chbgv.c SRC/chbgvd.c SRC/chbgvx.c SRC/chbtrd.c SRC/checon.c	\
   SRC/cheev.c SRC/cheevd.c SRC/cheevr.c SRC/cheevx.c SRC/chegs2.c	\
   SRC/chegst.c SRC/chegv.c SRC/chegvd.c SRC/chegvx.c SRC/cherfs.c	\
   SRC/chesv.c SRC/chesvx.c SRC/chetd2.c SRC/chetf2.c SRC/chetrd.c	\
   SRC/chetrf.c SRC/chetri.c SRC/chetrs.c SRC/chgeqz.c SRC/chpcon.c	\
   SRC/chpev.c SRC/chpevd.c SRC/chpevx.c SRC/chpgst.c SRC/chpgv.c	\
   SRC/chpgvd.c SRC/chpgvx.c SRC/chprfs.c SRC/chpsv.c SRC/chpsvx.c	\
   SRC/chptrd.c SRC/chptrf.c SRC/chptri.c SRC/chptrs.c SRC/chsein.c	\
   SRC/chseqr.c SRC/clabrd.c SRC/clacgv.c SRC/clacon.c SRC/clacn2.c	\
   SRC/clacp2.c SRC/clacpy.c SRC/clacrm.c SRC/clacrt.c SRC/cladiv.c	\
   SRC/claed0.c SRC/claed7.c SRC/claed8.c SRC/claein.c SRC/claesy.c	\
   SRC/claev2.c SRC/clags2.c SRC/clagtm.c SRC/clahef.c SRC/clahqr.c	\
   SRC/clahrd.c SRC/clahr2.c SRC/claic1.c SRC/clals0.c SRC/clalsa.c	\
   SRC/clalsd.c SRC/clangb.c SRC/clange.c SRC/clangt.c SRC/clanhb.c	\
   SRC/clanhe.c SRC/clanhp.c SRC/clanhs.c SRC/clanht.c SRC/clansb.c	\
   SRC/clansp.c SRC/clansy.c SRC/clantb.c SRC/clantp.c SRC/clantr.c	\
   SRC/clapll.c SRC/clapmt.c SRC/clarcm.c SRC/claqgb.c SRC/claqge.c	\
   SRC/claqhb.c SRC/claqhe.c SRC/claqhp.c SRC/claqp2.c SRC/claqps.c	\
   SRC/claqsb.c SRC/claqr0.c SRC/claqr1.c SRC/claqr2.c SRC/claqr3.c	\
   SRC/claqr4.c SRC/claqr5.c SRC/claqsp.c SRC/claqsy.c SRC/clar1v.c	\
   SRC/clar2v.c SRC/ilaclr.c SRC/ilaclc.c SRC/clarf.c SRC/clarfb.c	\
   SRC/clarfg.c SRC/clarft.c SRC/clarfp.c SRC/clarfx.c SRC/clargv.c	\
   SRC/clarnv.c SRC/clarrv.c SRC/clartg.c SRC/clartv.c SRC/clarz.c	\
   SRC/clarzb.c SRC/clarzt.c SRC/clascl.c SRC/claset.c SRC/clasr.c	\
   SRC/classq.c SRC/claswp.c SRC/clasyf.c SRC/clatbs.c SRC/clatdf.c	\
   SRC/clatps.c SRC/clatrd.c SRC/clatrs.c SRC/clatrz.c SRC/clatzm.c	\
   SRC/clauu2.c SRC/clauum.c SRC/cpbcon.c SRC/cpbequ.c SRC/cpbrfs.c	\
   SRC/cpbstf.c SRC/cpbsv.c SRC/cpbsvx.c SRC/cpbtf2.c SRC/cpbtrf.c	\
   SRC/cpbtrs.c SRC/cpocon.c SRC/cpoequ.c SRC/cporfs.c SRC/cposv.c	\
   SRC/cposvx.c SRC/cpotf2.c SRC/cpotrf.c SRC/cpotri.c SRC/cpotrs.c	\
   SRC/cpstrf.c SRC/cpstf2.c SRC/cppcon.c SRC/cppequ.c SRC/cpprfs.c	\
   SRC/cppsv.c SRC/cppsvx.c SRC/cpptrf.c SRC/cpptri.c SRC/cpptrs.c	\
   SRC/cptcon.c SRC/cpteqr.c SRC/cptrfs.c SRC/cptsv.c SRC/cptsvx.c	\
   SRC/cpttrf.c SRC/cpttrs.c SRC/cptts2.c SRC/crot.c SRC/cspcon.c	\
   SRC/cspmv.c SRC/cspr.c SRC/csprfs.c SRC/cspsv.c SRC/cspsvx.c		\
   SRC/csptrf.c SRC/csptri.c SRC/csptrs.c SRC/csrscl.c SRC/cstedc.c	\
   SRC/cstegr.c SRC/cstein.c SRC/csteqr.c SRC/csycon.c SRC/csymv.c	\
   SRC/csyr.c SRC/csyrfs.c SRC/csysv.c SRC/csysvx.c SRC/csytf2.c	\
   SRC/csytrf.c SRC/csytri.c SRC/csytrs.c SRC/ctbcon.c SRC/ctbrfs.c	\
   SRC/ctbtrs.c SRC/ctgevc.c SRC/ctgex2.c SRC/ctgexc.c SRC/ctgsen.c	\
   SRC/ctgsja.c SRC/ctgsna.c SRC/ctgsy2.c SRC/ctgsyl.c SRC/ctpcon.c	\
   SRC/ctprfs.c SRC/ctptri.c SRC/ctptrs.c SRC/ctrcon.c SRC/ctrevc.c	\
   SRC/ctrexc.c SRC/ctrrfs.c SRC/ctrsen.c SRC/ctrsna.c SRC/ctrsyl.c	\
   SRC/ctrti2.c SRC/ctrtri.c SRC/ctrtrs.c SRC/ctzrqf.c SRC/ctzrzf.c	\
   SRC/cung2l.c SRC/cung2r.c SRC/cungbr.c SRC/cunghr.c SRC/cungl2.c	\
   SRC/cunglq.c SRC/cungql.c SRC/cungqr.c SRC/cungr2.c SRC/cungrq.c	\
   SRC/cungtr.c SRC/cunm2l.c SRC/cunm2r.c SRC/cunmbr.c SRC/cunmhr.c	\
   SRC/cunml2.c SRC/cunmlq.c SRC/cunmql.c SRC/cunmqr.c SRC/cunmr2.c	\
   SRC/cunmr3.c SRC/cunmrq.c SRC/cunmrz.c SRC/cunmtr.c SRC/cupgtr.c	\
   SRC/cupmtr.c SRC/icmax1.c SRC/scsum1.c SRC/cstemr.c SRC/chfrk.c	\
   SRC/ctfttp.c SRC/clanhf.c SRC/cpftrf.c SRC/cpftri.c SRC/cpftrs.c	\
   SRC/ctfsm.c SRC/ctftri.c SRC/ctfttr.c SRC/ctpttf.c SRC/ctpttr.c	\
   SRC/ctrttf.c SRC/ctrttp.c SRC/cgeequb.c SRC/cgbequb.c SRC/csyequb.c	\
   SRC/cpoequb.c SRC/cheequb.c

DLASRC = SRC/dgbbrd.c SRC/dgbcon.c SRC/dgbequ.c SRC/dgbrfs.c		\
   SRC/dgbsv.c SRC/dgbsvx.c SRC/dgbtf2.c SRC/dgbtrf.c SRC/dgbtrs.c	\
   SRC/dgebak.c SRC/dgebal.c SRC/dgebd2.c SRC/dgebrd.c SRC/dgecon.c	\
   SRC/dgeequ.c SRC/dgees.c SRC/dgeesx.c SRC/dgeev.c SRC/dgeevx.c	\
   SRC/dgegs.c SRC/dgegv.c SRC/dgehd2.c SRC/dgehrd.c SRC/dgelq2.c	\
   SRC/dgelqf.c SRC/dgels.c SRC/dgelsd.c SRC/dgelss.c SRC/dgelsx.c	\
   SRC/dgelsy.c SRC/dgeql2.c SRC/dgeqlf.c SRC/dgeqp3.c SRC/dgeqpf.c	\
   SRC/dgeqr2.c SRC/dgeqrf.c SRC/dgerfs.c SRC/dgerq2.c SRC/dgerqf.c	\
   SRC/dgesc2.c SRC/dgesdd.c SRC/dgesv.c SRC/dgesvd.c SRC/dgesvx.c	\
   SRC/dgetc2.c SRC/dgetf2.c SRC/dgetrf.c SRC/dgetri.c SRC/dgetrs.c	\
   SRC/dggbak.c SRC/dggbal.c SRC/dgges.c SRC/dggesx.c SRC/dggev.c	\
   SRC/dggevx.c SRC/dggglm.c SRC/dgghrd.c SRC/dgglse.c SRC/dggqrf.c	\
   SRC/dggrqf.c SRC/dggsvd.c SRC/dggsvp.c SRC/dgtcon.c SRC/dgtrfs.c	\
   SRC/dgtsv.c SRC/dgtsvx.c SRC/dgttrf.c SRC/dgttrs.c SRC/dgtts2.c	\
   SRC/dhgeqz.c SRC/dhsein.c SRC/dhseqr.c SRC/dlabrd.c SRC/dlacon.c	\
   SRC/dlacn2.c SRC/dlaein.c SRC/dlaexc.c SRC/dlag2.c SRC/dlags2.c	\
   SRC/dlagtm.c SRC/dlagv2.c SRC/dlahqr.c SRC/dlahrd.c SRC/dlahr2.c	\
   SRC/dlaic1.c SRC/dlaln2.c SRC/dlals0.c SRC/dlalsa.c SRC/dlalsd.c	\
   SRC/dlangb.c SRC/dlange.c SRC/dlangt.c SRC/dlanhs.c SRC/dlansb.c	\
   SRC/dlansp.c SRC/dlansy.c SRC/dlantb.c SRC/dlantp.c SRC/dlantr.c	\
   SRC/dlanv2.c SRC/dlapll.c SRC/dlapmt.c SRC/dlaqgb.c SRC/dlaqge.c	\
   SRC/dlaqp2.c SRC/dlaqps.c SRC/dlaqsb.c SRC/dlaqsp.c SRC/dlaqsy.c	\
   SRC/dlaqr0.c SRC/dlaqr1.c SRC/dlaqr2.c SRC/dlaqr3.c SRC/dlaqr4.c	\
   SRC/dlaqr5.c SRC/dlaqtr.c SRC/dlar1v.c SRC/dlar2v.c SRC/iladlr.c	\
   SRC/iladlc.c SRC/dlarf.c SRC/dlarfb.c SRC/dlarfg.c SRC/dlarft.c	\
   SRC/dlarfx.c SRC/dlargv.c SRC/dlarrv.c SRC/dlartv.c SRC/dlarfp.c	\
   SRC/dlarz.c SRC/dlarzb.c SRC/dlarzt.c SRC/dlaswp.c SRC/dlasy2.c	\
   SRC/dlasyf.c SRC/dlatbs.c SRC/dlatdf.c SRC/dlatps.c SRC/dlatrd.c	\
   SRC/dlatrs.c SRC/dlatrz.c SRC/dlatzm.c SRC/dlauu2.c SRC/dlauum.c	\
   SRC/dopgtr.c SRC/dopmtr.c SRC/dorg2l.c SRC/dorg2r.c SRC/dorgbr.c	\
   SRC/dorghr.c SRC/dorgl2.c SRC/dorglq.c SRC/dorgql.c SRC/dorgqr.c	\
   SRC/dorgr2.c SRC/dorgrq.c SRC/dorgtr.c SRC/dorm2l.c SRC/dorm2r.c	\
   SRC/dormbr.c SRC/dormhr.c SRC/dorml2.c SRC/dormlq.c SRC/dormql.c	\
   SRC/dormqr.c SRC/dormr2.c SRC/dormr3.c SRC/dormrq.c SRC/dormrz.c	\
   SRC/dormtr.c SRC/dpbcon.c SRC/dpbequ.c SRC/dpbrfs.c SRC/dpbstf.c	\
   SRC/dpbsv.c SRC/dpbsvx.c SRC/dpbtf2.c SRC/dpbtrf.c SRC/dpbtrs.c	\
   SRC/dpocon.c SRC/dpoequ.c SRC/dporfs.c SRC/dposv.c SRC/dposvx.c	\
   SRC/dpotf2.c SRC/dpotrf.c SRC/dpotri.c SRC/dpotrs.c SRC/dpstrf.c	\
   SRC/dpstf2.c SRC/dppcon.c SRC/dppequ.c SRC/dpprfs.c SRC/dppsv.c	\
   SRC/dppsvx.c SRC/dpptrf.c SRC/dpptri.c SRC/dpptrs.c SRC/dptcon.c	\
   SRC/dpteqr.c SRC/dptrfs.c SRC/dptsv.c SRC/dptsvx.c SRC/dpttrs.c	\
   SRC/dptts2.c SRC/drscl.c SRC/dsbev.c SRC/dsbevd.c SRC/dsbevx.c	\
   SRC/dsbgst.c SRC/dsbgv.c SRC/dsbgvd.c SRC/dsbgvx.c SRC/dsbtrd.c	\
   SRC/dspcon.c SRC/dspev.c SRC/dspevd.c SRC/dspevx.c SRC/dspgst.c	\
   SRC/dspgv.c SRC/dspgvd.c SRC/dspgvx.c SRC/dsprfs.c SRC/dspsv.c	\
   SRC/dspsvx.c SRC/dsptrd.c SRC/dsptrf.c SRC/dsptri.c SRC/dsptrs.c	\
   SRC/dstegr.c SRC/dstein.c SRC/dstev.c SRC/dstevd.c SRC/dstevr.c	\
   SRC/dstevx.c SRC/dsycon.c SRC/dsyev.c SRC/dsyevd.c SRC/dsyevr.c	\
   SRC/dsyevx.c SRC/dsygs2.c SRC/dsygst.c SRC/dsygv.c SRC/dsygvd.c	\
   SRC/dsygvx.c SRC/dsyrfs.c SRC/dsysv.c SRC/dsysvx.c SRC/dsytd2.c	\
   SRC/dsytf2.c SRC/dsytrd.c SRC/dsytrf.c SRC/dsytri.c SRC/dsytrs.c	\
   SRC/dtbcon.c SRC/dtbrfs.c SRC/dtbtrs.c SRC/dtgevc.c SRC/dtgex2.c	\
   SRC/dtgexc.c SRC/dtgsen.c SRC/dtgsja.c SRC/dtgsna.c SRC/dtgsy2.c	\
   SRC/dtgsyl.c SRC/dtpcon.c SRC/dtprfs.c SRC/dtptri.c SRC/dtptrs.c	\
   SRC/dtrcon.c SRC/dtrevc.c SRC/dtrexc.c SRC/dtrrfs.c SRC/dtrsen.c	\
   SRC/dtrsna.c SRC/dtrsyl.c SRC/dtrti2.c SRC/dtrtri.c SRC/dtrtrs.c	\
   SRC/dtzrqf.c SRC/dtzrzf.c SRC/dstemr.c SRC/dsgesv.c SRC/dsposv.c	\
   SRC/dlag2s.c SRC/slag2d.c SRC/dlat2s.c SRC/dlansf.c SRC/dpftrf.c	\
   SRC/dpftri.c SRC/dpftrs.c SRC/dsfrk.c SRC/dtfsm.c SRC/dtftri.c	\
   SRC/dtfttp.c SRC/dtfttr.c SRC/dtpttf.c SRC/dtpttr.c SRC/dtrttf.c	\
   SRC/dtrttp.c SRC/dgejsv.c SRC/dgesvj.c SRC/dgsvj0.c SRC/dgsvj1.c	\
   SRC/dgeequb.c SRC/dsyequb.c SRC/dpoequb.c SRC/dgbequb.c

ZLASRC = SRC/zbdsqr.c SRC/zgbbrd.c SRC/zgbcon.c SRC/zgbequ.c		\
   SRC/zgbrfs.c SRC/zgbsv.c SRC/zgbsvx.c SRC/zgbtf2.c SRC/zgbtrf.c	\
   SRC/zgbtrs.c SRC/zgebak.c SRC/zgebal.c SRC/zgebd2.c SRC/zgebrd.c	\
   SRC/zgecon.c SRC/zgeequ.c SRC/zgees.c SRC/zgeesx.c SRC/zgeev.c	\
   SRC/zgeevx.c SRC/zgegs.c SRC/zgegv.c SRC/zgehd2.c SRC/zgehrd.c	\
   SRC/zgelq2.c SRC/zgelqf.c SRC/zgels.c SRC/zgelsd.c SRC/zgelss.c	\
   SRC/zgelsx.c SRC/zgelsy.c SRC/zgeql2.c SRC/zgeqlf.c SRC/zgeqp3.c	\
   SRC/zgeqpf.c SRC/zgeqr2.c SRC/zgeqrf.c SRC/zgerfs.c SRC/zgerq2.c	\
   SRC/zgerqf.c SRC/zgesc2.c SRC/zgesdd.c SRC/zgesv.c SRC/zgesvd.c	\
   SRC/zgesvx.c SRC/zgetc2.c SRC/zgetf2.c SRC/zgetrf.c SRC/zgetri.c	\
   SRC/zgetrs.c SRC/zggbak.c SRC/zggbal.c SRC/zgges.c SRC/zggesx.c	\
   SRC/zggev.c SRC/zggevx.c SRC/zggglm.c SRC/zgghrd.c SRC/zgglse.c	\
   SRC/zggqrf.c SRC/zggrqf.c SRC/zggsvd.c SRC/zggsvp.c SRC/zgtcon.c	\
   SRC/zgtrfs.c SRC/zgtsv.c SRC/zgtsvx.c SRC/zgttrf.c SRC/zgttrs.c	\
   SRC/zgtts2.c SRC/zhbev.c SRC/zhbevd.c SRC/zhbevx.c SRC/zhbgst.c	\
   SRC/zhbgv.c SRC/zhbgvd.c SRC/zhbgvx.c SRC/zhbtrd.c SRC/zhecon.c	\
   SRC/zheev.c SRC/zheevd.c SRC/zheevr.c SRC/zheevx.c SRC/zhegs2.c	\
   SRC/zhegst.c SRC/zhegv.c SRC/zhegvd.c SRC/zhegvx.c SRC/zherfs.c	\
   SRC/zhesv.c SRC/zhesvx.c SRC/zhetd2.c SRC/zhetf2.c SRC/zhetrd.c	\
   SRC/zhetrf.c SRC/zhetri.c SRC/zhetrs.c SRC/zhgeqz.c SRC/zhpcon.c	\
   SRC/zhpev.c SRC/zhpevd.c SRC/zhpevx.c SRC/zhpgst.c SRC/zhpgv.c	\
   SRC/zhpgvd.c SRC/zhpgvx.c SRC/zhprfs.c SRC/zhpsv.c SRC/zhpsvx.c	\
   SRC/zhptrd.c SRC/zhptrf.c SRC/zhptri.c SRC/zhptrs.c SRC/zhsein.c	\
   SRC/zhseqr.c SRC/zlabrd.c SRC/zlacgv.c SRC/zlacon.c SRC/zlacn2.c	\
   SRC/zlacp2.c SRC/zlacpy.c SRC/zlacrm.c SRC/zlacrt.c SRC/zladiv.c	\
   SRC/zlaed0.c SRC/zlaed7.c SRC/zlaed8.c SRC/zlaein.c SRC/zlaesy.c	\
   SRC/zlaev2.c SRC/zlags2.c SRC/zlagtm.c SRC/zlahef.c SRC/zlahqr.c	\
   SRC/zlahrd.c SRC/zlahr2.c SRC/zlaic1.c SRC/zlals0.c SRC/zlalsa.c	\
   SRC/zlalsd.c SRC/zlangb.c SRC/zlange.c SRC/zlangt.c SRC/zlanhb.c	\
   SRC/zlanhe.c SRC/zlanhp.c SRC/zlanhs.c SRC/zlanht.c SRC/zlansb.c	\
   SRC/zlansp.c SRC/zlansy.c SRC/zlantb.c SRC/zlantp.c SRC/zlantr.c	\
   SRC/zlapll.c SRC/zlapmt.c SRC/zlaqgb.c SRC/zlaqge.c SRC/zlaqhb.c	\
   SRC/zlaqhe.c SRC/zlaqhp.c SRC/zlaqp2.c SRC/zlaqps.c SRC/zlaqsb.c	\
   SRC/zlaqr0.c SRC/zlaqr1.c SRC/zlaqr2.c SRC/zlaqr3.c SRC/zlaqr4.c	\
   SRC/zlaqr5.c SRC/zlaqsp.c SRC/zlaqsy.c SRC/zlar1v.c SRC/zlar2v.c	\
   SRC/ilazlr.c SRC/ilazlc.c SRC/zlarcm.c SRC/zlarf.c SRC/zlarfb.c	\
   SRC/zlarfg.c SRC/zlarft.c SRC/zlarfp.c SRC/zlarfx.c SRC/zlargv.c	\
   SRC/zlarnv.c SRC/zlarrv.c SRC/zlartg.c SRC/zlartv.c SRC/zlarz.c	\
   SRC/zlarzb.c SRC/zlarzt.c SRC/zlascl.c SRC/zlaset.c SRC/zlasr.c	\
   SRC/zlassq.c SRC/zlaswp.c SRC/zlasyf.c SRC/zlatbs.c SRC/zlatdf.c	\
   SRC/zlatps.c SRC/zlatrd.c SRC/zlatrs.c SRC/zlatrz.c SRC/zlatzm.c	\
   SRC/zlauu2.c SRC/zlauum.c SRC/zpbcon.c SRC/zpbequ.c SRC/zpbrfs.c	\
   SRC/zpbstf.c SRC/zpbsv.c SRC/zpbsvx.c SRC/zpbtf2.c SRC/zpbtrf.c	\
   SRC/zpbtrs.c SRC/zpocon.c SRC/zpoequ.c SRC/zporfs.c SRC/zposv.c	\
   SRC/zposvx.c SRC/zpotf2.c SRC/zpotrf.c SRC/zpotri.c SRC/zpotrs.c	\
   SRC/zpstrf.c SRC/zpstf2.c SRC/zppcon.c SRC/zppequ.c SRC/zpprfs.c	\
   SRC/zppsv.c SRC/zppsvx.c SRC/zpptrf.c SRC/zpptri.c SRC/zpptrs.c	\
   SRC/zptcon.c SRC/zpteqr.c SRC/zptrfs.c SRC/zptsv.c SRC/zptsvx.c	\
   SRC/zpttrf.c SRC/zpttrs.c SRC/zptts2.c SRC/zrot.c SRC/zspcon.c	\
   SRC/zspmv.c SRC/zspr.c SRC/zsprfs.c SRC/zspsv.c SRC/zspsvx.c		\
   SRC/zsptrf.c SRC/zsptri.c SRC/zsptrs.c SRC/zdrscl.c SRC/zstedc.c	\
   SRC/zstegr.c SRC/zstein.c SRC/zsteqr.c SRC/zsycon.c SRC/zsymv.c	\
   SRC/zsyr.c SRC/zsyrfs.c SRC/zsysv.c SRC/zsysvx.c SRC/zsytf2.c	\
   SRC/zsytrf.c SRC/zsytri.c SRC/zsytrs.c SRC/ztbcon.c SRC/ztbrfs.c	\
   SRC/ztbtrs.c SRC/ztgevc.c SRC/ztgex2.c SRC/ztgexc.c SRC/ztgsen.c	\
   SRC/ztgsja.c SRC/ztgsna.c SRC/ztgsy2.c SRC/ztgsyl.c SRC/ztpcon.c	\
   SRC/ztprfs.c SRC/ztptri.c SRC/ztptrs.c SRC/ztrcon.c SRC/ztrevc.c	\
   SRC/ztrexc.c SRC/ztrrfs.c SRC/ztrsen.c SRC/ztrsna.c SRC/ztrsyl.c	\
   SRC/ztrti2.c SRC/ztrtri.c SRC/ztrtrs.c SRC/ztzrqf.c SRC/ztzrzf.c	\
   SRC/zung2l.c SRC/zung2r.c SRC/zungbr.c SRC/zunghr.c SRC/zungl2.c	\
   SRC/zunglq.c SRC/zungql.c SRC/zungqr.c SRC/zungr2.c SRC/zungrq.c	\
   SRC/zungtr.c SRC/zunm2l.c SRC/zunm2r.c SRC/zunmbr.c SRC/zunmhr.c	\
   SRC/zunml2.c SRC/zunmlq.c SRC/zunmql.c SRC/zunmqr.c SRC/zunmr2.c	\
   SRC/zunmr3.c SRC/zunmrq.c SRC/zunmrz.c SRC/zunmtr.c SRC/zupgtr.c	\
   SRC/zupmtr.c SRC/izmax1.c SRC/dzsum1.c SRC/zstemr.c SRC/zcgesv.c	\
   SRC/zcposv.c SRC/zlag2c.c SRC/clag2z.c SRC/zlat2c.c SRC/zhfrk.c	\
   SRC/ztfttp.c SRC/zlanhf.c SRC/zpftrf.c SRC/zpftri.c SRC/zpftrs.c	\
   SRC/ztfsm.c SRC/ztftri.c SRC/ztfttr.c SRC/ztpttf.c SRC/ztpttr.c	\
   SRC/ztrttf.c SRC/ztrttp.c SRC/zgeequb.c SRC/zgbequb.c SRC/zsyequb.c	\
   SRC/zpoequb.c SRC/zheequb.c

LAPACK = $(SLASRC) $(DLASRC) $(CLASRC) $(ZLASRC) $(SCLAUX) $(DZLAUX)	\
	$(ALLAUX)

libcblapack_la_SOURCES = $(BLAS) $(LAPACK)
