; == STANDARD ==
(define "standard_user"
	{common
		{unitset
			{value "combined_arms"}
			{available "all infantry sniper armor light medium heavy artillery airborne mechanized"}
		}
		{commandPoints "*=%cp"}
		{unitLimits ""}
		{balancingFactorBonus {cp 1.0} {mp 1.0}}
		{chargeFactors
			{value "*=1"}
			{available "*=0 *=0.5 *=1.0 *=1.5 *=2.0 *=2.5 *=5.0 *=10.0"}
		}
		{budgets
			{vehicle
				{mode "standard"}
				{resource
					{start		%start}
					{finish		%finish}
					{growTime	1500}		; in seconds
					{growTable	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{payback
						{cp			"0		10		20		30		40		50"}
						{restore	"2.00	1.50	1.00 	0.50	0.25	0.00"}
					}
				}
				{buttons "s1 s2 v1 v2 v3"}
			}
		}
	}
	{bots
		(include "bots_generic.inc")
	}
)

; == CUSTOM ==
(define "custom_user"
	{common
		{unitset
			{value "combined_arms"}
			{available "all infantry sniper armor light medium heavy artillery airborne mechanized"}
		}
		{commandPoints "*=%cp"}
		{unitLimits ""}
		{balancingFactorBonus {cp 1.0} {mp 1.0}}
		{chargeFactors
			{value "*=1"}
			{available "*=0 *=0.5 *=1.0 *=1.5 *=2.0 *=2.5 *=5.0 *=10.0"}
		}
		{budgets
			{vehicle
				{mode "custom"}
				{resource
					{start		%start}
					{finish		%finish}
					{growTime	1500}		; in seconds
					{growTable	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{payback
						{cp			"0		10		20		30		40		50"}
						{restore	"2.00	1.50	1.00 	0.50	0.25	0.00"}
					}
					{limitmin	1000}
					{limitmax	50000}
					{speedset	"2500 3000 3500 4000 4500 5000 8000 10000 20000 50000"}
				}
				{buttons "s1 s2 v1 v2 v3"}
			}
		}
	}
	{bots
		(include "bots_generic.inc")
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:standard_100_user"
		{gameMode "standard"}
		{unitMode "user"}
		{specMode "all_normal"}
		("standard_user"			start(500) finish(3500) cp(0:50,90:60,180:70,270:80,360:90,450:100))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------	
	{"c:custom_50_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_50"}
		("custom_user"			start(500) finish(3500) cp(50))
	}
	{"c:custom_60_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_60"}
		("custom_user"			start(500) finish(3500) cp(60))
	}
	{"c:custom_80_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_80"}
		("custom_user" 			start(500) finish(3500) cp(80)) 
	}
	{"c:custom_100_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_100"}
		("custom_user"			start(500) finish(3500) cp(100))
	}
	{"c:custom_120_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_120"}
		("custom_user"			start(500) finish(3500) cp(120))
	}
	{"c:custom_140_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_140"}
		("custom_user"			start(500) finish(3500) cp(140))
	}
	{"c:custom_160_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_160"}
		("custom_user"			start(500) finish(3500) cp(160))
	}
	{"c:custom_180_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_180"}
		("custom_user"			start(500) finish(3500) cp(180))
	}
	{"c:custom_200_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_200"}
		("custom_user"			start(500) finish(3500) cp(200))
	}
;------------------------------------------------------------------------------------------------------------
}