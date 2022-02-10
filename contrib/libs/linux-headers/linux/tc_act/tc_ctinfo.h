/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */ 
#ifndef __UAPI_TC_CTINFO_H 
#define __UAPI_TC_CTINFO_H 
 
#include <linux/types.h> 
#include <linux/pkt_cls.h> 
 
struct tc_ctinfo { 
	tc_gen; 
}; 
 
enum { 
	TCA_CTINFO_UNSPEC, 
	TCA_CTINFO_PAD, 
	TCA_CTINFO_TM, 
	TCA_CTINFO_ACT, 
	TCA_CTINFO_ZONE, 
	TCA_CTINFO_PARMS_DSCP_MASK, 
	TCA_CTINFO_PARMS_DSCP_STATEMASK, 
	TCA_CTINFO_PARMS_CPMARK_MASK, 
	TCA_CTINFO_STATS_DSCP_SET, 
	TCA_CTINFO_STATS_DSCP_ERROR, 
	TCA_CTINFO_STATS_CPMARK_SET, 
	__TCA_CTINFO_MAX 
}; 
 
#define TCA_CTINFO_MAX (__TCA_CTINFO_MAX - 1) 
 
#endif 
