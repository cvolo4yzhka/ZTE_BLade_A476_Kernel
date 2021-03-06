#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 0
#define BAT_NTC_47 1

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#endif

#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,68237},
        {-15,53650},
        {-10,42506},
        { -5,33892},
        {  0,27219},
        {  5,22021},
        { 10,17926},
        { 15,14674},
        { 20,12081},
        { 25,10000},
        { 30,8315},
        { 35,6948},
        { 40,5834},
        { 45,4917},
        { 50,4161},
        { 55,3535},
        { 60,3014}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210},
        { 65, 9368},
        { 70, 7846}
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	
	{0	 ,		4317 },
	{2	 ,		4289 },
	{3	 ,		4266 },
	{5	 ,		4245 },
	{7	 ,		4222 },
	{9	 ,		4191 },
	{10  ,		4146 },
	{12  ,		4119 },
	{14  ,		4101 },
	{15  ,		4084 },
	{17  ,		4065 },
	{19  ,		4045 },
	{21  ,		4026 },
	{22  ,		4010 },
	{24  ,		3995 },
	{26  ,		3983 },
	{28  ,		3971 },
	{29  ,		3958 },
	{31  ,		3944 },
	{33  ,		3928 },
	{34  ,		3911 },
	{36  ,		3895 },
	{38  ,		3882 },
	{40  ,		3871 },
	{41  ,		3862 },
	{43  ,		3853 },
	{45  ,		3846 },
	{47  ,		3839 },
	{48  ,		3832 },
	{50  ,		3826 },
	{52  ,		3821 },
	{53  ,		3816 },
	{55  ,		3811 },
	{57  ,		3808 },
	{59  ,		3804 },
	{60  ,		3801 },
	{62  ,		3797 },
	{64  ,		3793 },
	{66  ,		3790 },
	{67  ,		3786 },
	{69  ,		3782 },
	{71  ,		3777 },
	{72  ,		3772 },
	{74  ,		3767 },
	{76  ,		3761 },
	{78  ,		3755 },
	{79  ,		3748 },
	{81  ,		3742 },
	{83  ,		3734 },
	{85  ,		3728 },
	{86  ,		3721 },
	{88  ,		3715 },
	{90  ,		3708 },
	{91  ,		3699 },
	{93  ,		3687 },
	{95  ,		3671 },
	{97  ,		3648 },
	{98  ,		3615 },
	{100 ,		3568 },
	{100 ,		3568 },
	{100 ,		3568 },
	{100 ,		3568 },
	{100 ,		3568 },
	{100 ,		3568 },
	{100 ,		3568 },
	{100 ,		3568 },
	{100 ,		3568 },
	{100 ,		3568 },
	{100 ,		3568 },
	{100 ,		3568 },
	{100 ,		3568 },
	{100 ,		3568 },
	{100 ,		3568 } 

};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
	
	{0	  ,    4374 },
	{2	  ,    4353 },
	{3	  ,    4332 },
	{5	  ,    4313 },
	{6	  ,    4289 },
	{8	  ,    4244 },
	{9	  ,    4204 },
	{11   ,    4185 },
	{12   ,    4169 },
	{14   ,    4153 },
	{16   ,    4138 },
	{17   ,    4123 },
	{19   ,    4108 },
	{20   ,    4094 },
	{22   ,    4082 },
	{23   ,    4070 },
	{25   ,    4055 },
	{27   ,    4036 },
	{28   ,    4015 },
	{30   ,    3997 },
	{31   ,    3982 },
	{33   ,    3968 },
	{34   ,    3953 },
	{36   ,    3938 },
	{37   ,    3924 },
	{39   ,    3911 },
	{41   ,    3899 },
	{42   ,    3890 },
	{44   ,    3880 },
	{45   ,    3872 },
	{47   ,    3864 },
	{48   ,    3856 },
	{50   ,    3849 },
	{52   ,    3842 },
	{53   ,    3836 },
	{55   ,    3829 },
	{56   ,    3823 },
	{58   ,    3817 },
	{59   ,    3812 },
	{61   ,    3807 },
	{62   ,    3801 },
	{64   ,    3797 },
	{66   ,    3792 },
	{67   ,    3787 },
	{69   ,    3783 },
	{70   ,    3779 },
	{72   ,    3775 },
	{73   ,    3770 },
	{75   ,    3765 },
	{77   ,    3760 },
	{78   ,    3754 },
	{80   ,    3748 },
	{81   ,    3740 },
	{83   ,    3733 },
	{84   ,    3724 },
	{86   ,    3715 },
	{87   ,    3708 },
	{89   ,    3702 },
	{91   ,    3699 },
	{92   ,    3692 },
	{94   ,    3684 },
	{95   ,    3659 },
	{97   ,    3610 },
	{98   ,    3532 },
	{100  ,    3411 },
	{100  ,    3411 },
	{100  ,    3411 },
	{100  ,    3411 },
	{100  ,    3411 },
	{100  ,    3411 },
	{100  ,    3411 },
	{100  ,    3411 },
	{100  ,    3411 } 

};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	
	{ 0 	,	 4382  }, 
	{ 1 	,	 4364  }, 
	{ 3 	,	 4348  }, 
	{ 4 	,	 4333  }, 
	{ 6 	,	 4317  }, 
	{ 7 	,	 4302  }, 
	{ 8 	,	 4286  }, 
	{ 10	,	 4270  }, 
	{ 11	,	 4254  }, 
	{ 13	,	 4239  }, 
	{ 14	,	 4222  }, 
	{ 15	,	 4207  }, 
	{ 17	,	 4191  }, 
	{ 18	,	 4176  }, 
	{ 19	,	 4161  }, 
	{ 21	,	 4146  }, 
	{ 22	,	 4131  }, 
	{ 24	,	 4116  }, 
	{ 25	,	 4102  }, 
	{ 26	,	 4087  }, 
	{ 28	,	 4073  }, 
	{ 29	,	 4060  }, 
	{ 31	,	 4048  }, 
	{ 32	,	 4034  }, 
	{ 33	,	 4018  }, 
	{ 35	,	 4004  }, 
	{ 36	,	 3992  }, 
	{ 38	,	 3981  }, 
	{ 39	,	 3969  }, 
	{ 40	,	 3956  }, 
	{ 42	,	 3940  }, 
	{ 43	,	 3922  }, 
	{ 45	,	 3906  }, 
	{ 46	,	 3893  }, 
	{ 47	,	 3883  }, 
	{ 49	,	 3873  }, 
	{ 50	,	 3865  }, 
	{ 52	,	 3857  }, 
	{ 53	,	 3850  }, 
	{ 54	,	 3842  }, 
	{ 56	,	 3836  }, 
	{ 57	,	 3829  }, 
	{ 58	,	 3823  }, 
	{ 60	,	 3817  }, 
	{ 61	,	 3812  }, 
	{ 63	,	 3807  }, 
	{ 64	,	 3801  }, 
	{ 65	,	 3797  }, 
	{ 67	,	 3793  }, 
	{ 68	,	 3788  }, 
	{ 70	,	 3783  }, 
	{ 71	,	 3778  }, 
	{ 72	,	 3772  }, 
	{ 74	,	 3766  }, 
	{ 75	,	 3761  }, 
	{ 77	,	 3753  }, 
	{ 78	,	 3748  }, 
	{ 79	,	 3742  }, 
	{ 81	,	 3737  }, 
	{ 82	,	 3731  }, 
	{ 84	,	 3723  }, 
	{ 85	,	 3715  }, 
	{ 86	,	 3708  }, 
	{ 88	,	 3698  }, 
	{ 89	,	 3689  }, 
	{ 91	,	 3687  }, 
	{ 92	,	 3686  }, 
	{ 93	,	 3682  }, 
	{ 95	,	 3676  }, 
	{ 96	,	 3646  }, 
	{ 97	,	 3588  }, 
	{ 99	,	 3504  }, 
	{ 100	,	 3375  }  

};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{ 0    ,	 4395},   
	{ 1    ,	 4374},   
	{ 3    ,	 4356},   
	{ 4    ,	 4340},   
	{ 6    ,	 4324},   
	{ 7    ,	 4307},   
	{ 8    ,	 4292},   
	{ 10   ,	 4276},   
	{ 11   ,	 4260},   
	{ 12   ,	 4244},   
	{ 14   ,	 4229},   
	{ 15   ,	 4213},   
	{ 17   ,	 4198},   
	{ 18   ,	 4182},   
	{ 19   ,	 4167},   
	{ 21   ,	 4152},   
	{ 22   ,	 4137},   
	{ 24   ,	 4123},   
	{ 25   ,	 4108},   
	{ 26   ,	 4094},   
	{ 28   ,	 4080},   
	{ 29   ,	 4066},   
	{ 30   ,	 4053},   
	{ 32   ,	 4040},   
	{ 33   ,	 4027},   
	{ 35   ,	 4015},   
	{ 36   ,	 4002},   
	{ 37   ,	 3991},   
	{ 39   ,	 3979},   
	{ 40   ,	 3968},   
	{ 42   ,	 3956},   
	{ 43   ,	 3941},   
	{ 44   ,	 3921},   
	{ 46   ,	 3904},   
	{ 47   ,	 3893},   
	{ 48   ,	 3883},   
	{ 50   ,	 3874},   
	{ 51   ,	 3866},   
	{ 53   ,	 3858},   
	{ 54   ,	 3851},   
	{ 55   ,	 3844},   
	{ 57   ,	 3837},   
	{ 58   ,	 3831},   
	{ 60   ,	 3825},   
	{ 61   ,	 3819},   
	{ 62   ,	 3814},   
	{ 64   ,	 3809},   
	{ 65   ,	 3804},   
	{ 66   ,	 3799},   
	{ 68   ,	 3795},   
	{ 69   ,	 3790},   
	{ 71   ,	 3785},   
	{ 72   ,	 3775},   
	{ 73   ,	 3764},   
	{ 75   ,	 3756},   
	{ 76   ,	 3750},   
	{ 78   ,	 3744},   
	{ 79   ,	 3737},   
	{ 80   ,	 3731},   
	{ 82   ,	 3726},   
	{ 83   ,	 3719},   
	{ 85   ,	 3712},   
	{ 86   ,	 3703},   
	{ 87   ,	 3695},   
	{ 89   ,	 3684},   
	{ 90   ,	 3680},   
	{ 91   ,	 3679},   
	{ 93   ,	 3677},   
	{ 94   ,	 3674},   
	{ 96   ,	 3656},   
	{ 97   ,	 3605},   
	{ 98   ,	 3534},   
	{ 100  ,	 3432}	  

};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
  
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0},	
  { 0  , 0} 	
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
	
	{1429,		4317 },  
	{1429,		4289 },  
	{1427,		4266 },  
	{1420,		4245 },  
	{1417,		4222 },  
	{1436,		4191 },  
	{1579,		4146 },  
	{1725,		4119 },  
	{1741,		4101 },  
	{1737,		4084 },  
	{1730,		4065 },  
	{1713,		4045 },  
	{1701,		4026 },  
	{1697,		4010 },  
	{1692,		3995 },  
	{1692,		3983 },  
	{1692,		3971 },  
	{1690,		3958 },  
	{1687,		3944 },  
	{1680,		3928 },  
	{1666,		3911 },  
	{1650,		3895 },  
	{1645,		3882 },  
	{1638,		3871 },  
	{1636,		3862 },  
	{1636,		3853 },  
	{1638,		3846 },  
	{1636,		3839 },  
	{1638,		3832 },  
	{1631,		3826 },  
	{1638,		3821 },  
	{1638,		3816 },  
	{1640,		3811 },  
	{1650,		3808 },  
	{1661,		3804 },  
	{1666,		3801 },  
	{1666,		3797 },  
	{1676,		3793 },  
	{1685,		3790 },  
	{1697,		3786 },  
	{1706,		3782 },  
	{1720,		3777 },  
	{1741,		3772 },  
	{1762,		3767 },  
	{1788,		3761 },  
	{1809,		3755 },  
	{1833,		3748 },  
	{1859,		3742 },  
	{1877,		3734 },  
	{1910,		3728 },  
	{1936,		3721 },  
	{1971,		3715 },  
	{2004,		3708 },  
	{2039,		3699 },  
	{2079,		3687 },  
	{2126,		3671 },  
	{2171,		3648 },  
	{2218,		3615 },  
	{2288,		3568 },  
	{2288,		3568 },  
	{2288,		3568 },  
	{2288,		3568 },  
	{2288,		3568 },  
	{2288,		3568 },  
	{2288,		3568 },  
	{2288,		3568 },  
	{2288,		3568 },  
	{2288,		3568 },  
	{2288,		3568 },  
	{2288,		3568 },  
	{2288,		3568 },  
	{2288,		3568 },  
	{2288,		3568 }	 
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
	
	{502 ,	  4374 }, 
	{502 ,	  4353 }, 
	{514 ,	  4332 }, 
	{525 ,	  4313 }, 
	{535 ,	  4289 }, 
	{572 ,	  4244 }, 
	{758 ,	  4204 }, 
	{805 ,	  4185 }, 
	{812 ,	  4169 }, 
	{816 ,	  4153 }, 
	{821 ,	  4138 }, 
	{826 ,	  4123 }, 
	{826 ,	  4108 }, 
	{830 ,	  4094 }, 
	{838 ,	  4082 }, 
	{845 ,	  4070 }, 
	{845 ,	  4055 }, 
	{842 ,	  4036 }, 
	{835 ,	  4015 }, 
	{833 ,	  3997 }, 
	{833 ,	  3982 }, 
	{838 ,	  3968 }, 
	{835 ,	  3953 }, 
	{828 ,	  3938 }, 
	{823 ,	  3924 }, 
	{819 ,	  3911 }, 
	{814 ,	  3899 }, 
	{816 ,	  3890 }, 
	{816 ,	  3880 }, 
	{816 ,	  3872 }, 
	{819 ,	  3864 }, 
	{819 ,	  3856 }, 
	{819 ,	  3849 }, 
	{823 ,	  3842 }, 
	{828 ,	  3836 }, 
	{830 ,	  3829 }, 
	{830 ,	  3823 }, 
	{833 ,	  3817 }, 
	{838 ,	  3812 }, 
	{840 ,	  3807 }, 
	{842 ,	  3801 }, 
	{847 ,	  3797 }, 
	{847 ,	  3792 }, 
	{852 ,	  3787 }, 
	{856 ,	  3783 }, 
	{861 ,	  3779 }, 
	{868 ,	  3775 }, 
	{873 ,	  3770 }, 
	{882 ,	  3765 }, 
	{892 ,	  3760 }, 
	{903 ,	  3754 }, 
	{917 ,	  3748 }, 
	{931 ,	  3740 }, 
	{953 ,	  3733 }, 
	{971 ,	  3724 }, 
	{990 ,	  3715 }, 
	{1014,	  3708 }, 
	{1042,	  3702 }, 
	{1079,	  3699 }, 
	{1117,	  3692 }, 
	{1166,	  3684 }, 
	{1204,	  3659 }, 
	{1241,	  3610 }, 
	{1298,	  3532 }, 
	{1384,	  3411 }, 
	{1384,	  3411 }, 
	{1384,	  3411 }, 
	{1384,	  3411 }, 
	{1384,	  3411 }, 
	{1384,	  3411 }, 
	{1384,	  3411 }, 
	{1384,	  3411 }, 
	{1384,	  3411 }  

};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
	{190 ,	  4382	}, 
	{190 ,	  4364	}, 
	{192 ,	  4348	}, 
	{187 ,	  4333	}, 
	{183 ,	  4317	}, 
	{194 ,	  4302	}, 
	{192 ,	  4286	}, 
	{192 ,	  4270	}, 
	{194 ,	  4254	}, 
	{201 ,	  4239	}, 
	{197 ,	  4222	}, 
	{192 ,	  4207	}, 
	{197 ,	  4191	}, 
	{190 ,	  4176	}, 
	{190 ,	  4161	}, 
	{187 ,	  4146	}, 
	{201 ,	  4131	}, 
	{197 ,	  4116	}, 
	{197 ,	  4102	}, 
	{194 ,	  4087	}, 
	{201 ,	  4073	}, 
	{206 ,	  4060	}, 
	{215 ,	  4048	}, 
	{213 ,	  4034	}, 
	{213 ,	  4018	}, 
	{213 ,	  4004	}, 
	{213 ,	  3992	}, 
	{218 ,	  3981	}, 
	{215 ,	  3969	}, 
	{213 ,	  3956	}, 
	{206 ,	  3940	}, 
	{194 ,	  3922	}, 
	{183 ,	  3906	}, 
	{178 ,	  3893	}, 
	{180 ,	  3883	}, 
	{180 ,	  3873	}, 
	{183 ,	  3865	}, 
	{176 ,	  3857	}, 
	{178 ,	  3850	}, 
	{180 ,	  3842	}, 
	{183 ,	  3836	}, 
	{180 ,	  3829	}, 
	{183 ,	  3823	}, 
	{187 ,	  3817	}, 
	{183 ,	  3812	}, 
	{192 ,	  3807	}, 
	{187 ,	  3801	}, 
	{187 ,	  3797	}, 
	{192 ,	  3793	}, 
	{187 ,	  3788	}, 
	{190 ,	  3783	}, 
	{190 ,	  3778	}, 
	{187 ,	  3772	}, 
	{183 ,	  3766	}, 
	{185 ,	  3761	}, 
	{187 ,	  3753	}, 
	{185 ,	  3748	}, 
	{183 ,	  3742	}, 
	{187 ,	  3737	}, 
	{190 ,	  3731	}, 
	{185 ,	  3723	}, 
	{187 ,	  3715	}, 
	{185 ,	  3708	}, 
	{185 ,	  3698	}, 
	{185 ,	  3689	}, 
	{190 ,	  3687	}, 
	{197 ,	  3686	}, 
	{197 ,	  3682	}, 
	{199 ,	  3676	}, 
	{197 ,	  3646	}, 
	{201 ,	  3588	}, 
	{225 ,	  3504	}, 
	{244 ,	  3375	}  
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
	{96  ,	   4395},
	{96  ,	   4374},
	{96  ,	   4356},
	{96  ,	   4340},
	{96  ,	   4324},
	{93  ,	   4307},
	{96  ,	   4292},
	{96  ,	   4276},
	{96  ,	   4260},
	{96  ,	   4244},
	{98  ,	   4229},
	{96  ,	   4213},
	{98  ,	   4198},
	{96  ,	   4182},
	{98  ,	   4167},
	{98  ,	   4152},
	{98  ,	   4137},
	{100 ,	   4123},
	{100 ,	   4108},
	{103 ,	   4094},
	{103 ,	   4080},
	{103 ,	   4066},
	{105 ,	   4053},
	{107 ,	   4040},
	{107 ,	   4027},
	{110 ,	   4015},
	{110 ,	   4002},
	{112 ,	   3991},
	{115 ,	   3979},
	{119 ,	   3968},
	{122 ,	   3956},
	{119 ,	   3941},
	{107 ,	   3921},
	{96  ,	   3904},
	{96  ,	   3893},
	{96  ,	   3883},
	{93  ,	   3874},
	{96  ,	   3866},
	{93  ,	   3858},
	{96  ,	   3851},
	{96  ,	   3844},
	{98  ,	   3837},
	{98  ,	   3831},
	{100 ,	   3825},
	{98  ,	   3819},
	{103 ,	   3814},
	{103 ,	   3809},
	{103 ,	   3804},
	{105 ,	   3799},
	{107 ,	   3795},
	{107 ,	   3790},
	{107 ,	   3785},
	{98  ,	   3775},
	{96  ,	   3764},
	{96  ,	   3756},
	{98  ,	   3750},
	{98  ,	   3744},
	{98  ,	   3737},
	{96  ,	   3731},
	{98  ,	   3726},
	{98  ,	   3719},
	{98  ,	   3712},
	{98  ,	   3703},
	{96  ,	   3695},
	{96  ,	   3684},
	{93  ,	   3680},
	{96  ,	   3679},
	{100 ,	   3677},
	{105 ,	   3674},
	{105 ,	   3656},
	{103 ,	   3605},
	{107 ,	   3534},
	{117 ,	   3432} 
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0},  
  { 0  , 0}   
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

