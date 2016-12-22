{easy
	{unitset {value "all"}}
	{commandPoints "*=100"}
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
					{restore	"1.50	1.00	0.75 	0.50	0.25	0.00"}
				}
			}
			{buttons "s1 s2 v1 v2 v3"}
		}
	}
}
{normal
	{unitset {value "all"}}
	{commandPoints "*=100"}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.00} {mp 1.00} {payback 1.05}}
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
					{restore	"1.50	1.00	0.75 	0.50	0.25	0.00"}
				}
			}
			{buttons "s1 s2 v1 v2 v3"}
		}
	}
}
{hard
	{unitset {value "all"}}
	{commandPoints "*=100"}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.00} {mp 1.00} {payback 1.10}}
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
					{restore	"1.50	1.00	0.75 	0.50	0.25	0.00"}
				}
			}
			{buttons "s1 s2 v1 v2 v3"}
		}
	}
}
{heroic
	{unitset {value "all"}}
	{commandPoints "*=100"}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.00} {mp 1.00} {payback 1.15}}
	{chargeFactors {value "*=0"}}
	{budgets
		{vehicle
			{mode "standard"}
			{resource
				{start		200}
				{finish		2500}
				{growTime	5400}		; in seconds
				{growTable	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
				{payback
					{cp			"0		10		20		30		40		50"}
					{restore	"1.50	1.00	0.75 	0.50	0.25	0.00"}
				}
			}
			{buttons "s1 s2 v1 v2 v3"}
		}
	}
}