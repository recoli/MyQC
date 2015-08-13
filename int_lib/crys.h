/*************************************************************************
 *
 This program is part of the PyQuante quantum chemistry program suite.

 Copyright (c) 2004, Richard P. Muller. All Rights Reserved. 

 PyQuante version 1.2 and later is covered by the modified BSD
 license. Please see the file LICENSE that is part of this
 distribution. 

 This file has been modified by Xin Li on 2015-07-13.
 1. Removed "static" from all functions
 2. Added "rys_" prefix to coulomb functions
 *
 **************************************************************************/
/*
===== Xin Li: moved to crys.c ==========
#define MAXROOTS 20
double roots[MAXROOTS],weights[MAXROOTS],G[MAXROOTS][MAXROOTS];
double B00,B1,B1p,C,Cp;
*/

//===== Xin Li: function name changed to rys_contr_coulomb ==========
double rys_contr_coulomb(int lena,double *aexps,double *acoefs,double *anorms,
		     double xa,double ya,double za,int la,int ma,int na,
		     int lenb,double *bexps,double *bcoefs,double *bnorms,
		     double xb,double yb,double zb,int lb,int mb,int nb,
		     int lenc,double *cexps,double *ccoefs,double *cnorms,
		     double xc,double yc,double zc,int lc,int mc,int nc,
		     int lend,double *dexps,double *dcoefs,double *dnorms,
		     double xd,double yd,double zd,int ld,int md,int nd);

//===== Xin Li: function name changed to rys_coulomb_repulsion ==========
double rys_coulomb_repulsion(double xa,double ya,double za,double norma,
			 int la,int ma,int na,double alphaa,
			 double xb,double yb,double zb,double normb,
			 int lb,int mb,int nb,double alphab,
			 double xc,double yc,double zc,double normc,
			 int lc,int mc,int nc,double alphac,
			 double xd,double yd,double zd,double normd,
			 int ld,int md,int nd,double alphad);

void Roots(int n, double X);
void Root123(int n, double X);
void Root4(double X);
void Root5(double X);
void Root6(int n,double X);
double Int1d(double t,int ix,int jx,int kx, int lx,
	     double xi,double xj, double xk,double xl,
	     double alphai,double alphaj,double alphak,double alphal);

void RecurFactors(double t,double A,double B,
		  double Px,double Qx,double xi,double xk);

void RecurFactorsGamess(double t,double A,double B,
			double Px,double Qx,double xi,double xk);

void Recur(double t, int i, int j, int k, int l,
	   double xi, double xj, double xk, double xl,
	   double alphai, double alphaj, double alphak, double alphal);

double Shift(int i, int j, int k, int l, double xij, double xkl);

/*=========== commented by Xin Li, 2013-07-13 ===========
double product_center_1D(double alphaa, double xa, 
				double alphab, double xb);
double dist2(double x1, double y1, double z1, 
		    double x2, double y2, double z2);
int binomial(int a, int b);
int fact(int n);
=========== end of comment ===========*/

/*======== python wrappers removed by Xin Li, 2015-07-13 ==========*/
