; == STANDARD ==
(define "standard_all"
	{common
		{unitset
			{value "armored_warfare"}
		}
		{commandPoints "*=%cp"}
		{unitLimits ""}
		{balancingFactorBonus {cp 1.0} {mp 1.0}}
		{chargeFactors
			{value "*=1"}
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
(define "custom_all"
	{common
		{unitset
			{value "armored_warfare"}
		}
		{commandPoints "*=%cp"}
		{unitLimits ""}
		{balancingFactorBonus {cp 1.0} {mp 1.0}}
		{chargeFactors
			{value "*=1"}
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
	{"s:standard_30_all"
		{gameMode "standard"}
		{unitMode "all"}
		{specMode "all_normal"}
		("standard_all"			start(12500) finish(12500) cp(30))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------	
	{"c:custom_30_all"
		{gameMode "custom"}
		{unitMode "all"}
		{specMode "cp_30"}
		("custom_all"			start(12500) finish(12500) cp(30))
	}
	{"c:custom_50_all"
		{gameMode "custom"}
		{unitMode "all"}
		{specMode "cp_50"}
		("custom_all"			start(12500) finish(12500) cp(50))
	}
	{"c:custom_60_all"
		{gameMode "custom"}
		{unitMode "all"}
		{specMode "cp_60"}
		("custom_all"			start(12500) finish(12500) cp(60))
	}
	{"c:custom_80_all"
		{gameMode "custom"}
		{unitMode "all"}
		{specMode "cp_80"}
		("custom_all" 			start(12500) finish(12500) cp(80)) 
	}
	{"c:custom_100_all"
		{gameMode "custom"}
		{unitMode "all"}
		{specMode "cp_100"}
		("custom_all"			start(12500) finish(12500) cp(100))
	}
;------------------------------------------------------------------------------------------------------------
}