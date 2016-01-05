{easy
	{unitset {value "all"}}
	{commandPoints "*=140"}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.00} {mp 1.00} {payback 1.00}}
	{chargeFactors {value "*=0"}}
	{budgets
		{vehicle
			{mode "standard"}
			{resource
				{start		50}
				{finish		1000}
				{growTime	5400}		; in seconds
				{growTable	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
				{payback
					{cp			"0		10		20		30		40		50"}
					{restore	"1.00	0.75	0.50	0.40	0.30	0.20"}
				}
			}
			{buttons "s1 s2 v1 v2 v3"}
		}
	}
}
{normal
	{unitset {value "all"}}
	{commandPoints "*=140"}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.00} {mp 1.00} {payback 1.00}}
	{chargeFactors {value "*=0"}}
	{budgets
		{vehicle
			{mode "standard"}
			{resource
				{start		100}
				{finish		1500}
				{growTime	5400}		; in seconds
				{growTable	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
				{payback
					{cp			"0		10		20		30		40		50"}
					{restore	"1.00	0.80	0.60	0.50	0.40	0.30"}
				}
			}
			{buttons "s1 s2 v1 v2 v3"}
		}
	}
}
{hard
	{unitset {value "all"}}
	{commandPoints "*=140"}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.00} {mp 1.00} {payback 1.00}}
	{chargeFactors {value "*=0"}}
	{budgets
		{vehicle
			{mode "standard"}
			{resource
				{start		150}
				{finish		2000}
				{growTime	5400}		; in seconds
				{growTable	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
				{payback
					{cp			"0		10		20		30		40		50"}
					{restore	"1.00	0.85	0.70	0.60	0.50	0.40"}
				}
			}
			{buttons "s1 s2 v1 v2 v3"}
		}
	}
}
{heroic
	{unitset {value "all"}}
	{commandPoints "*=140"}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.00} {mp 1.00} {payback 1.00}}
	{chargeFactors {value "*=0"}}
	{budgets
		{vehicle
			{mode "standard"}
			{resource
				{start		250}
				{finish		3000}
				{growTime	5400}		; in seconds
				{growTable	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
				{payback
					{cp			"0		10		20		30		40		50"}
					{restore	"1.00	0.90	0.80	0.70	0.60	0.50"}
				}
			}
			{buttons "s1 s2 v1 v2 v3"}
		}
	}
}