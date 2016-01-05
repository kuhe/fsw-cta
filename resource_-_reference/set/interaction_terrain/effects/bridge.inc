;SDL
{"bridge"
	{on hit
		{spawn "spheredust_small_short"}
	}
	{on detonate
		{if stuff "molotov_coctail"
			{spawn "ex_molot"}
			{spawn "fire_molot_ground"}
                else stuff "big smoke"
                    {spawn "ex_arm_big"}
                    {spawn "smoke_shell"}
		else stuff "dynamite"
			{spawn "ex_bomb_big"}
		else stuff "grenade flashbang"
			{spawn "ex_grenade_flash"}
			{spawn "fire_shellhole"}
		else stuff "grenade big"
			{spawn "ex_grenade_big"}
		else stuff "grenade"
			{spawn "ex_grenade_sm"}
		else stuff "small bullet"
			{if rand 0.5
				{spawn "ex_bul_sm"}
			else
				{spawn "ex_bul_sm2"}
			}
		else stuff "big bullet"
			{spawn "ex_bul_big_50"}
		else stuff "zenite"
			{spawn "ex_bul_zenit"}
		else stuff "bullet"
			{if rand 0.5
				{spawn "ex_bul_big"}
			else
				{spawn "ex_bul_big2"}
			}
		else stuff "big mortar"
			{spawn "ex_mort_big"}
		else stuff "mortar_smoke"
			{spawn "mortar_smoke"}
	  		{spawn "spheredust_small_short"}	
			{spawn "smoke_shell"}
		else stuff "mortar"
			{spawn "ex_bomb_big"}
	    else stuff "shell size_minimum fg"
	      {spawn "ex_fg_minimum"}
	    else stuff "shell size_minimum"
			{spawn "ex_ap_minimum"}
	    else stuff "shell size_small fg"
			{spawn "shockwave"}
			{spawn "ex_fg_small"}
	    else stuff "shell size_small"
			{spawn "shockwave"}
			{spawn "ex_ap_small"}
		else stuff "shell size_medium fg"
			{spawn "ex_fg_medium"}
			{spawn "crater_norm" terrain_texmod}
		else stuff "shell size_medium"
			{spawn "ex_ap_medium"}
		else stuff "shell size_big fg"
			{spawn "ex_fg_big"}
			{spawn "crater_norm" terrain_texmod}
		else stuff "shell size_big"
			{spawn "ex_ap_medium"}
    	else stuff "shell size_maximum"
			{spawn "shockwave"}
			{spawn "ex_fg_maximum"}
	    else stuff "ap shell"
    		{spawn "ex_grenade_sm"}
		else stuff "big shell extra"
			{spawn "ex_bomb_big"}
		else stuff "big shell fg bomb"
			{spawn "ex_bomb_big"}
		else stuff "mine antipersonnel"
			{spawn "ex_grenade_big"}
		else stuff "mine antitank"
			{spawn "ex_arm_big"}
		else stuff "mine clockwork"
			{spawn "ex_anti_big"}
		else stuff "dynamite_clockwork"
			{spawn "ex_bomb_big"}
		else stuff "tnt_bag"
			{spawn "ex_bomb_big"}
		else stuff "flaerammo"
		{spawn "artillery_explosion_flaer"}
		}
	}
}

{"bridge_wood"
	{on hit
		{spawn "spheredust_small_short"}
	}
	{on detonate
		{if stuff "molotov_coctail"
			{spawn "ex_molot"}
			{spawn "fire_molot_ground"}
		else stuff "grenade flashbang"
			{spawn "ex_grenade_flash"}
			{spawn "fire_shellhole"}
		else stuff "grenade big"
			{spawn "ex_grenade_big"}
		else stuff "grenade"
			{spawn "ex_grenade_sm"}
		else stuff "small bullet"
			{if rand 0.5
				{spawn "ex_bul_sm"}
			else
				{spawn "ex_bul_sm2"}
			}
		else stuff "big bullet"
			{spawn "ex_bul_big_50"}
		else stuff "zenite"
			{spawn "ex_bul_zenit"}
		else stuff "bullet"
			{spawn "wood_hit_bul"}
		else stuff "big mortar"
			{spawn "ex_mort_big_wood"}
		else stuff "mortar_smoke"
			{spawn "mortar_smoke"}
	  		{spawn "spheredust_small_short"}	
		else stuff "mortar"
			{spawn "ex_bomb_big_wood"}
	    else stuff "shell size_minimum fg"
	      {spawn "ex_fg_minimum"}
	    else stuff "shell size_minimum"
			{spawn "ex_ap_minimum"}
	    else stuff "shell size_small fg"
			{spawn "shockwave"}
			{spawn "ex_fg_small"}
	    else stuff "shell size_small"
			{spawn "shockwave"}
			{spawn "ex_ap_small"}
		else stuff "shell size_medium fg"
			{spawn "ex_fg_medium"}
			{spawn "crater_norm" terrain_texmod}
		else stuff "shell size_medium"
			{spawn "ex_ap_medium"}
		else stuff "shell size_big fg"
			{spawn "ex_fg_big"}
			{spawn "crater_norm" terrain_texmod}
		else stuff "shell size_big"
			{spawn "ex_ap_medium"}
    	else stuff "shell size_maximum"
			{spawn "shockwave"}
			{spawn "ex_fg_maximum"}
	    else stuff "ap shell"
    		{spawn "ex_grenade_sm"}
		else stuff "big shell extra"
			{spawn "ex_bomb_big_wood"}
		else stuff "big shell fg bomb"
			{spawn "ex_bomb_big_wood"}
		else stuff "big shell fg"
			{spawn "shockwave"}
			{spawn "ex_anti_big_wood"}
		else stuff "big shell ap"
			{spawn "ex_mort_big_wood"}
		else stuff "small shell fg"
			{spawn "shockwave"}
			{spawn "ex_mort_sm_wood"}
		else stuff "shell fg"
			{spawn "shockwave"}
			{spawn "ex_anti_big_wood"}
		else stuff "shell ap"
			{spawn "ex_mort_sm_wood"}
		else stuff "big shell fg bomb"
			{spawn "ex_bomb_big"}
		else stuff "mine antipersonnel"
			{spawn "ex_grenade_big"}
		else stuff "mine antitank"
			{spawn "ex_mort_big_wood"}
		else stuff "mine clockwork"
			{spawn "ex_anti_big_wood"}
		else stuff "dynamite"
			{spawn "ex_bomb_big_wood"}
		else stuff "flaerammo"
			{spawn "artillery_explosion_flaer"}
		}
	}
}
