{"muzzle_hmgun"
	{on spawn
		{add_view	"flash_cannon_small"		"flashbarrel1"			"Foresight1"}
        {add_view 	"flash_gun_big_vehicle" 	"flashbarrelhmg"		"Foresight1"}
	}
	{on fire "gun"
		{view start "flashbarrelhmg"}
	}
}

{"muzzle_zenite"
	{on spawn
		{add_view	"flash_cannon_small"		"flashbarrel1"			"Foresight1"}
        {add_view 	"tank_canon_fire_verysmall" "flashbarrelzenite"		"Foresight1"}
	}
	{on fire "gun"
		{view start "flashbarrelzenite"}
	}
}

{"muzzle_minimum"
	{on spawn
		{add_view	"flash_cannon_small"		"flashbarrel1"			"Foresight1"}
        {add_view 	"tank_canon_fire_verysmall" "flashbarrelminimum"	"Foresight1"}
       	{add_view 	"dust_shot_small" 			"dustshotminimum"		"basis"}
	}
	{on fire "gun"
		{view start "flashbarrelminimum"}
		{view start "dustshotminimum"}
	}
}	

{"muzzle_small"
	{on spawn
		{add_view	"flash_cannon_small"		"flashbarrel1"			"Foresight1"}
        {add_view 	"tank_canon_fire_small" 	"flashbarrelsmall"		"Foresight1"}
       	{add_view 	"dust_shot_small" 			"dustshotsmall"			"basis"}
	}
	{on fire "gun"
		{view start "flashbarrelsmall"}
		{view start "dustshotsmall"}
	}
}	
	
{"muzzle_medium"
	{on spawn                                                                                            
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
       	{add_view 	"dust_shot_norm" 			"dustshotmedium"		"basis"}
        {add_view 	"tank_canon_fire_medium" 	"flashbarrelmedium"		"Foresight1"}
	}
	{on fire "gun"
		{view start "dustshotmeduim"}
		{view start "flashbarrelmedium"}
		{blastwave c4 0.2 r0 1 r1 1.5 bone 		"Foresight1"}
	}
}
	
{"muzzle_large"
	{on spawn                                                                                            
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
      	{add_view	"dust_shot_big" 			"dustshotlarge"			"basis"}
      	{add_view	"tank_canon_fire_large"		"flashbarrellarge"		"Foresight1"}
	}
	{on fire "gun"
		{view start "dustshotlarge"}
		{view start "flashbarrellarge"}
		{blastwave c4 0.2 r0 1 r1 2.0 bone 		"Foresight1"}
	}
}
	
{"muzzle_maximum"
	{on spawn
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
      	{add_view	"dust_shot_big" 			"dustshotmaximum"		"basis"}
      	{add_view	"tank_canon_fire_verylarge"	"flashbarrelmaximum"	"Foresight1"}
	}
	{on fire "gun"
		{view start "dustshotmaximum"}
		{view start "flashbarrelmaximum"}
		{blastwave c4 0.2 r0 1 r1 2.5 bone 		"Foresight1"}
	}
}