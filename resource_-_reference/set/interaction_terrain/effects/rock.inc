;SDL
{"rock"
  {on hit
    {if min_mass 100
      {if effector "tree"
        {spawn "tree_crush"}
      else
        {spawn "spheredust_small"}
      }
    else min_mass 10
      {spawn "spheredust_small_short"}
    }
  }
  {on detonate
    {if stuff "molotov_coctail"
      {spawn "ex_molot"}
      {spawn "fire_molot_ground"}
      {spawn "fire_shellhole"}
    else stuff "big smoke"
	{spawn "ex_arm_big"}
	{spawn "smoke_shell"}
    else stuff "dynamite"
      {spawn "ex_bomb_big"}
      {spawn "shellhole_medium"}
    else stuff "grenade flashbang"
      {spawn "ex_grenade_flash"}
      {spawn "fire_shellhole"}
    else stuff "grenade big"
      {spawn "ex_grenade_big"}
      {spawn "grenade_at_shellhole#ground"}
    else stuff "uber_bazooka"
      {spawn "ex_fg_minimum"}
    else stuff "grenade"
      {spawn "ex_grenade_sm"}
      {spawn "grenade_shellhole#ground"}
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
      {spawn "shellhole_small"}
    else stuff "bullet"
		{if rand 0.5
			{spawn "ex_bul_big"}
		else
			{spawn "ex_bul_big2"}
		}
    else stuff "mortar"
      {spawn "ex_mort_big"}
      {spawn "shellhole_big"}
	else stuff "big mortar_smoke"
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
      {spawn "ex_fg_small"}
      {spawn "crater_norm" terrain_texmod}
    else stuff "shell size_small"
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
      {spawn "ex_fg_maximum"}
      {spawn "crater_big" terrain_texmod}
    else stuff "ap shell"
      {spawn "ex_grenade_sm"}
      {spawn "grenade_shellhole#ground"}
    else stuff "big shell extra"
      {spawn "ex_bomb_big"}
      {spawn "crater_norm" terrain_texmod}
    else stuff "big shell extra305"
      {spawn "ex_cannon400" offset 0 0 20}
      {spawn "crater_big" terrain_texmod}
    else stuff "big shell fg bomb no_crater small"
      {spawn "shockwave"}
      {spawn "ex_anti_big"}
      {spawn "shellhole7"}
    else stuff "big shell fg bomb no_crater"
      {spawn "ex_bomb_big"}
      {spawn "shellhole7"}
    else stuff "big shell fg bomb"
      {spawn "ex_bomb_big"}
      {spawn "crater_norm" terrain_texmod}
    else stuff "mine antipersonnel"
      {spawn "ex_grenade_big"}
      {spawn "shellhole_medium"}
    else stuff "mine antitank"
	  {spawn "ex_arm_big"}
      {spawn "shellhole_medium"}
	else stuff "mine clockwork"
		{spawn "ex_anti_big"}
		{spawn "shellhole_medium"}
    else stuff "dynamite_clockwork"
      {spawn "ex_bomb_big"}
      {spawn "shellhole_medium"}
    else stuff "tnt_bag"
      {spawn "ex_bomb_big"}
      {spawn "shellhole_medium"}
    else stuff "flaerammo"
	  {spawn "artillery_explosion_flaer"}
    }
  }
}
