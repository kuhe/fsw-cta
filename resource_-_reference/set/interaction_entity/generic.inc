{"generic"
	{on bullet_hit
		{if not under_water
;flesh
			{if material "flesh"
				{if stuff "zenite"
					;{spawn "ex_air_norm"}
				else stuff "mortar"
					{spawn "ex_air_big"}
				else stuff "size4"
					{spawn "ex_air_big2"}
				else stuff "shell fg"
					{spawn "ex_air_big"}
				else stuff "bazooka"
					{spawn "ex_air_big"}
				}
;steel
			else material "steel"
				{if stuff "bullet"
					{spawn "metal_hit_bul"}
				else stuff "mortar"
					{spawn "metal_hit_br"}
				else stuff "zenite"
					{spawn "metal_hit_bul"}
					{spawn "ex_air_sm"}
				else stuff "size4"
					{spawn "metal_hit_fg_big"}
				else stuff "shell small fg"
					{spawn "metal_hit_fg"}
				else stuff "shell small"
					{spawn "metal_hit_br_small"}
				else stuff "shell fg"
					{spawn "metal_hit_fg"}
				else stuff "shell"
					{spawn "metal_hit_br"}
				}
			else material "steelball"
				{spawn "metal_hit_bul"}
;wood
			else material "wood"
				{if stuff "bullet"
					{spawn "wood_hit_bul"}
				else stuff "mortar"
					{spawn "wood_hit_fg"}
				else stuff "zenite"
					{spawn "wood_hit_bul"}
				else stuff "shell small"
					{spawn "wood_hit_br_small"}
				else stuff "shell fg"
					{spawn "ex_mort_big"}
				else stuff "shell"
					{spawn "wood_hit_br"}
				}
;concrete
			else material "concrete"
				{if stuff "bullet"
					{spawn "stone_hit_bul"}
					{spawn "ex_air_sm"}
				else stuff "zenite"
					{spawn "stone_hit_bul"}
					{spawn "ex_air_sm"}
				else stuff "big shell fg"
				 	{spawn	"stone_hit_br_big"}
				else stuff "shell small"
				 	{spawn	"stone_hit_br_small"}
				else
				 	{spawn	"stone_hit_br"}
				}
;sand
			else material "sand"
				{if stuff "zenite"
					{spawn "ex_air_sm"}
					{spawn "sandbags_hit_big_50"}
				else stuff "small bullet"
					{if rand 0.5
						{spawn "sandbags_hit_small1"}
					else
						{spawn "sandbags_hit_small2"}
					}
				else stuff "big bullet"
					{spawn "sandbags_hit_big_50"}
				else stuff "bullet"
					{if rand 0.5
						{spawn "sandbags_hit_big1"}
					else
						{spawn "sandbags_hit_big1"}
					}
				else stuff "mortar"
					{spawn "ex_mort_sm"}
				else stuff "shell fg"
					{spawn "ex_mort_big"}
				else stuff "bazooka"
					{spawn "ex_air_big"}
				else
					{spawn "sandbags_crush"}
				}
;ice
			else material "ice"
				{if stuff "shell fg"
					{spawn "ex_mort_sm_snow"}
				else
					{spawn "snow_hit_small"}
				}
			}
		}
	}
}
