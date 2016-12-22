(define "firing"
	{aks74u_v3 0.25}
	{as_val_v1 0.25}
	{m4a1_v4 0.25}
	{m4a1cqbr_v3 0.25}
	{mp5_v1b 0.25}
	{fn_scar_v2 0.25}
	{uzi_v3 0.25}
	{knife_v1 0}
	{knife_v1b 0}
	{knife_v2 0}
	{knife_v2b 0}
	{knife_v3 0}
	{knife_v3b 0}
	{knife_v4 0}
	{knife_v4b 0}
	{smoke_paradrop_ammo 0.1}
	{smoke_paradrop_ammo_heavy 0.1}
	{anm8 0.1}
	{rdg_m 0.1}
	{m67 0.1}
	{m84 0.1}
	{molotov 0.1}
	{rgd_5 0.1}
	{c4 0.1}
	{claymore 0.1}
)
(define "vision"
	{cover 0.80
		{stand 0.80
			{stealth 0.40}		; 50%
		}
		{squat 0.60
			{stealth 0.30}		; 50%
		}
		{crawl 0.40
			{stealth 0.20}		; 50%
		}
    }
    {squat 0.80
        {stealth 0.40}			; 50%
	}
    {crawl 0.60
        {stealth 0.30}			; 50%
        {still 0.40
            {stealth 0.20}		; 50%
        }
    }
    {still 0.9}
    {visible 1.0}
)

(define "cannon"
        {cannon_01 1
            {firing 1.1}
            {visible 1}
            {still 1}
        }
        {cannon_02 1.1
            {firing 1.2}
            {visible 1.1}
            {still 1.1}
        }
        {cannon_03 1.2
            {firing 1.3}
            {visible 1.2}
            {still 1.2}
        }
        {cannon_04 1.3
            {firing 1.4}
            {visible 1.3}
            {still 1.3}
        }
        {cannon_05 1.4
            {firing 1.5}
            {visible 1.4}
            {still 1.4}
        }
)
(define "tank"
        {vehicle_01 1.1
            {firing 2.0}
            {visible 1.6}
            {still 1.6}
        }
        {vehicle_02 1.8
            {firing 2.25}
            {visible 1.7}
            {still 1.7}
        }
        {vehicle_03 2.0
            {firing 2.5}
            {visible 1.8}
            {still 1.8}
        }
        {vehicle_04 2.2
            {firing 2.75}
            {visible 1.9}
            {still 1.9}
        }
        {vehicle_05 2.4
            {firing 3}
            {visible 2}
            {still 2}
        }
)