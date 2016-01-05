{"tank"
;   {friction 1}
;   {restitution 0.3}
    (include "tank/general_scripts_defines.inc")

;MEGA BUILDING BEGIN
=============================================================================================================================================================================
    (define "damage_process_pierce" ;by Svoyak  ;define's call's see in tank-armoredcar.inc, tank-light.inc, tank-medium.inc & tank-heavy.inc.
;=================================
                {if stuff "%staff"
                    ("gun_hit" rand(%pierce_gun))
                    ("track_hit" max_rand(%pierce_front_back_track) min_rand(%pierce_left_right_track))
                    {if volume "body"
                        {burn fx "smoke_dead_tank3" fake}

                        {if rand %pierce_body__kill_charger {kill_crew "charger"}}
                        {if rand %pierce_body__kill_driver {kill_crew "driver"}}
                        {if rand %pierce_body__kill_gunner {kill_crew "gunner"}}
                        {if rand %pierce_body__kill_commander {kill_crew "commander"}}
                        {if rand %pierce_body__kill_gunner2 {kill_crew "gunner2"}}

                        {if rand %pierce_body__body_brake
                            {if work "body"
                                {components "body" break}
                                {unlink_trailer}
                                {call "stat_body_break"}
                                {damage_report "body" "component/body_break"}
                                {delay 2
                                    {crew_emit}
                                }
                                {delay 4
                                    {crew_emit}
                                }
                                {delay 6
                                    {crew_emit}
                                }
                                {able "select" 0}
								else
									{delay 2
										{crew_emit}
									}
									{delay 4
										{crew_emit}
									}
									{delay 6
										{crew_emit}
									}
                            }
						else rand %pierce_body__body_destroy
							{call "mp_destroy"}
							{if rand 0.35 
								{call "explosive_broken"}
							}
                            {delay 2
								{able "select" 0}
                            }
                        else operatable 
                            {damage_report "body" "component/shock"}
                        else
                            {damage_report "body" "component/body_pierced"}
                        }

                            ;================симул€ци€ контузии
                            {if operatable
                                {if work "mover"
                                        {chassis_work 0}
                                        {tags add "stopped"}
                                }
                                {if work "turret"
                                    {ik_enable "turret" 0}
                                    {tags add "turr_jummed"}
                                }
                                {weapon_work "gun" 0}{weapon_work "gun2" 0}{weapon_work "mgun" 0}{weapon_work "mgun1" 0}{weapon_work "mgun2" 0}{weapon_work "mgun3" 0}
								{stunned 1}
                                {delay %crew_shock_time
                                    {if not tagged "gun_brake"
                                        {weapon_work "gun" 1}
                                    }
                                    {weapon_work "gun2" 1}{weapon_work "mgun" 1}{weapon_work "mgun1" 1}{weapon_work "mgun2" 1}{weapon_work "mgun3" 1}
									{stunned 0}
                                    {if tagged "stopped"
                                        {tags remove "stopped"}
                                        {if work "mover"
                                            {if not tagged "engine_brake"
                                                {chassis_work 1}
                                            }
                                        }
                                    }
                                    {if tagged "turr_jummed"
                                        {if tagged "turret_brake"
                                            {tags remove "turr_jummed"}
                                        else tagged "turret_stopped_by_body"
                                            {tags remove "turr_jummed"}
                                        else
                                            {tags remove "turr_jummed"}
                                            {ik_enable "turret" 1}
                                        }
                                    }
                                }

                            }

                    else volume "turret"
                        {burn fx "smoke_dead_tank3" fake}

                        {if rand %pierce_turret__explosive
                            {call "stat_break"}
                            {delay 0.5
                                {call "_explosion"}
                            }
                        }
                        {if hit_side front
                           {if rand %pierce_turret_front__gun_brake
                                {if work "gun"
                                    {components "gun" break}
                                    {damage_report "gun" "component/gun_broken"}
                                }
                            }

                            {if rand %pierce_turret_front__turret_brake
                                {components "turret" break}
                                {ik_enable "turret" 0}
                            }

                        else hit_side back
                            {if rand %pierce_turret_back__gun_brake
                                {if work "gun"
                                    {components "gun" break}
                                    {damage_report "gun" "component/gun_broken"}
                                }
                            }

                            {if rand %pierce_turret_back__turret_brake
                                {components "turret" break}
                                {ik_enable "turret" 0}
                            }

                        else
                            {if rand %pierce_turret_left_right__gun_brake
                                {if work "gun"
                                    {components "gun" break}
                                    {damage_report "gun" "component/gun_broken"}
                                }
                            }
                            {if rand %pierce_turret_left_right__turret_brake
                                {components "turret" break}
                                {ik_enable "turret" 0}
                            }
                        }
                        {if rand %pierce_turret__kill_charger {kill_crew "charger"}}
                        {if rand %pierce_turret__kill_driver {kill_crew "driver"}}
                        {if rand %pierce_turret__kill_gunner {kill_crew "gunner"}}
                        {if rand %pierce_turret__kill_commander {kill_crew "commander"}}
                        {if rand %pierce_turret__kill_gunner2 {kill_crew "gunner2"}}

                        ;==============симул€ци€ контузии
                        {if operatable
                                    {ik_enable "turret" 0}
                                    {weapon_work "gun" 0}{weapon_work "gun2" 0}{weapon_work "mgun" 0}{weapon_work "mgun1" 0}{weapon_work "mgun2" 0}{weapon_work "mgun3" 0}
									{stunned 1}
                                    {tags add "turr_jummed"}
                                    {delay %crew_shock_time
                                        {if not tagged "gun_brake"
                                            {weapon_work "gun" 1}
                                        }
                                        {weapon_work "gun2" 1}{weapon_work "mgun" 1}{weapon_work "mgun1" 1}{weapon_work "mgun2" 1}{weapon_work "mgun3" 1}
										{stunned 0}
                                        {if tagged "turr_jummed"
                                                {if tagged "turret_brake"
                                                    {tags remove "turr_jummed"}
                                                else tagged "turret_stopped_by_body"
                                                    {tags remove "turr_jummed"}
                                                else
                                                    {tags remove "turr_jummed"}
                                                    {ik_enable "turret" 1}
                                                }
                                        }
                                    }
                        }

                    else volume "mantlet"
                           {burn fx "smoke_dead_tank3" fake}

                            {if rand (* %pierce_mantlet__gun_brake 0.7)
                                {if work "gun"
                                    {components "gun" break}
                                    {damage_report "gun" "component/gun_broken"}
                                }
                            else
                                {call "turret_break"}
                            }
                            ;{if rand %pierce_turret_front__turret_brake
                            ;   {components "turret" break}
                            ;}

                    else volume "explosive"
                        {if rand (* %pierce_inventory__explosive 0.4)
                            {call "explosion"}
                        }
                    else volume "engine"
                        {if rand %pierce_engine__engine_brake
                            {if work "engine"
                                {components "engine" break}
                            }
                            {if rand %pierce_engine__engine_burn
                                {delay 3 2
                                    {call "_burn"}
                                }
                            }
                        }
                    }
                };stuff
    )
    (define "damage_process_bullet_hit" ;by Svoyak
;====================================
                    {if stuff "%staff"
                    {impulse dir %imp}
                    ;{if hit_angle > %angle_hit
                        {if volume "body"
                                {if rand %hit_body__explosive
                                    {call "explosion"}
                                }
                                {if rand %hit_body__engine_brake
                                    {if work "engine"
                                        {components "engine" break}
                                    }
                                }
                                {if rand %hit_body__body_destroy
                                    {call "mp_destroy"}
                                else rand %hit_body__body_brake
                                    {components "body" break}
                                    {damage_report "body" "component/body_break"}
                                }
                            
                        else volume "engine"
                                {if rand %hit_body__explosive
                                    {call "explosion"}
                                }
                                {if rand %hit_engine__engine_brake
                                    {if work "engine"
                                        {components "engine" break}
                                    }
                                }
                                {if rand %hit_body__body_brake
                                    {components "body" break}
                                    {damage_report "body" "component/body_break"}
                                }
                        else volume "turret"
                                {if rand %hit_turret__explosive
                                    {call "explosion"}
                                }
                                {if hit_side front
                                    {if rand %hit_turret_front__gun_brake
                                        {if work "gun"
                                            {components "gun" break}
                                            {damage_report "gun" "component/gun_broken"}
                                        }
                                    }
                                }
                                {if rand %hit_turret__turret_destroy
                                    {components "turret" destroy}
                                else rand %hit_turret__turret_brake
                                    {components "turret" break}
                                }
                        else volume "mantlet"
                                {if rand %hit_turret__explosive
                                    {call "explosion"}
                                }
                                {if rand %hit_turret_front__gun_brake
                                    {if work "gun"
                                        {components "gun" break}
                                        {damage_report "gun" "component/gun_broken"}
                                    }
                                }
                                {if rand %hit_turret__turret_destroy
                                    {components "turret" destroy}
                                else rand %hit_turret__turret_brake
                                    {components "turret" break}
                                }
                        }
                    ;};if hit_angle end
                    }; stuff
;=====================================
    )

    (define "blast_damage_contusion" ;by Svoyak
        {if volume "trackleft"
            ;do nothing
        else volume "trackright"
            ;do nothing
        else volume "roller"
            ;do nothing
        else volume "wheel_work"
            ;do nothing
        else volume "wheel"
            ;do nothing
        else
            {if operatable
                {if not "already_blasted"
            
                    {if min_energy %blast_energy
                        {set "already_blasted" 1}
                        {if rand %blast_rand_contusion
                            {delay 0.5
                                {set "already_blasted" 0}
                            }
                            ;{con "%blast_energy"}
                            {damage_report "body" "component/shock"}
                            {chassis_work 0}
                            {tags add "stopped1"}
                            
                            {if work "turret"
                                {ik_enable "turret" 0}
                                {tags add "turr_jummed1"}
                            }
                            {weapon_work "gun" 0}{weapon_work "gun2" 0}{weapon_work "mgun" 0}{weapon_work "mgun1" 0}{weapon_work "mgun2" 0}{weapon_work "mgun3" 0}
							{stunned 1}
                            {delay %blast_crew_shock_time
                                {if not tagged "gun_brake"
                                    {weapon_work "gun" 1}
                                }
                                {weapon_work "gun2" 1}{weapon_work "mgun" 1}{weapon_work "mgun1" 1}{weapon_work "mgun2" 1}{weapon_work "mgun3" 1}
								{stunned 0}
                                {if tagged "stopped1"
                                    {tags remove "stopped1"}
                                    {if work "mover"
                                        {if not tagged "engine_brake"
                                            {chassis_work 1}
                                        }
                                    }
                                }
                                {if tagged "turr_jummed1"
                                        {if tagged "turret_brake"
                                            {tags remove "turr_jummed1"}
                                            
                                        else tagged "turret_stopped_by_body"
                                            {tags remove "turr_jummed1"}
                                        else
                                            {tags remove "turr_jummed1"}
                                            {ik_enable "turret" 1}
                                        }
                                }
                            }
                        else
                            {delay 0.5
                                {set "already_blasted" 0}
                            }
                        }
                    }
                }
            }
        }
        
    )
;MEGA BUILDING END =============================================================================================================================================================================

    {on repair
	    {if component "turret"
    		{view stop "smoke3"}
            {call "update_turret"}
            {tags remove "turret_brake"}
        else component "body"
            {view stop "smoke4"}
            {call "update_turret"}
            {tags remove "turret_stopped_by_body"}
            {tags remove "body_brake"}
            {able "select" 1}
        else component "engine"
            {tags remove "engine_brake"}
        }
    }
	{on "update_turret"
		{if work "turret"
			{if work "body"
				{ik_enable "turret" 1}
			 else
				{ik_enable "turret" 0}
			}
		 else
			{ik_enable "turret" 0}
		}
    }
}; end of "tank"


{"opened tank"
        {on "explosive_broken" overload
                {call "explosion"}
        }
}

{"m4a3c"
        {on fire "gun2"
                {spawn "startsmoke_cali"}
        }
}

{"m4a4_tulip"
        {on fire "gun2"
                {spawn "startsmoke_cali"}
        }
}

{"bm_8_24"
        {on fire "gun"
                {spawn "startsmoke_cali"}
        }
}

{"m4calliope"	; must be placed before	the props "turret"
	{on break_armor             
		{if volume "guns"           
			{call "tear_guns"}
		}
	}
	{on break_armor_again
		{if volume "guns"           
			{call "tear_guns"}
		}
	}
	{on "tear_turret"
		{if "roof_broken"
			{bone cut "gun"}
		else
			{call "tear_gun"}
		}
	}
	{on "tear_guns"
		{if not "roof_broken"
			{weapon_work "gun2" 0}
			{set "roof_broken" 1}
			{components "guns" destroy}
			{delay 0.5
				{bone cut "gun2"}
			}
			{delay_ex 0
				(define "teargun"
					{tear "piece_large_steel" bone "%gun"
						{impulse up 5 2.3 dir 3 1.5 cx 5 2 cy 5 2 rnd_dir 10 no_position}
						{add_view "smoke_black" "smoke" "basis"}
						{view start "smoke"}
						{delay_effect 20 5 "pause"}
					}
				)
				("teargun" gun(guns1))
				("teargun" gun(guns2))
				("teargun" gun(guns3))
				("teargun" gun(guns4))
				("teargun" gun(guns5))
				("teargun" gun(gun2))
			}
		}
	}
}

{"turret"
	{on spawn
		{call "update_turret"}
	}
	{on "turret_break" overload
		{components "turret" break}
	}
	{on break
		{if component "turret"
			{if not user_control
				{if rand 0.5 {kill_crew "gunner"}}
				{if rand 0.5 {kill_crew "charger"}}
				{if rand 0.5 {kill_crew "commander"}}
			}
			{call "update_turret"}
			{spawn "tank_die_particle" "Turret"}
			{spawn "circledust_norm" "Turret"}
;			{ani_play "open" -1.0 resume}
			{view start "smoke3"}
            {delay 10
    			{view stop "smoke3"}
    			{set "smoke3" 0}
            }
        else component "body"
			{spawn "circledust_norm" "Turret"}
			{call "update_turret"}
		}
	}
	{on "tear_turret"
		{if not "turret_teared"
			{set "turret_teared" 1}
			{components "turret" destroy}
			{call "mp_destroy"}
			{add_view "smoke_black_big5" "smoke_turret" "basis"}
			{view start "smoke_turret"}
			{delay 60 15
				{view stop "smoke_turret"}
			}
			{delay_ex 0
				{tear "piece_large_steel" bone "turret" id "turret"
					{impulse dir 0.5 1}
					{if rand 0.2
						{add_view "smoke_dead_norm" "smoke" "basis"}
					else
						{add_view "smoke_black" "smoke" "basis"}
					}
					{view start "smoke"}
					{delay_effect 30 5 "pause"}
					{delay 0.1
						{volumes "gun" disable obstacle}
					}
				}
			}
		}
	}
	{on "slice_load"
		{if name "turret"
			{with_effector
				{add_view "smoke_black" "smoke" "basis"}
			}
		}
	}

	{on "cut_parts"
		{if "turret_teared"
			{bone cut "turret"}
		else
                    {call "tear_turret"}
		}
	}
}

{"light tank turret"
	{on bullet_hit
		{if volume "turret"
			{if stuff "big shell fg"
				{if rand 0.8
					{call "tear_turret"}
				}
			}
		}
	}
}

{"light_turret" ; turret for btr, car, ...
	{on bullet_hit
		{if volume "turret"
			{if stuff "shell"
				{call "tear_turret"}
			}
		}
	}
}

{"armored_car"
	{on blast_hit
		{if min_energy 8
			{impulse up 2 0.5 dir 1 0.2}
		 else min_energy 1
			{impulse up 0.4 0.2 dir 0.4 0.2}
		 else min_energy 0.4
		 	{ani_play "hit"}
		}
	}
	{on "_explosion"
		{blastwave c4 3 r0 2.5 r1 10}
		{impulse up 0.7 0.3 dir 0.2 0.1}
	}

(include "tank/tank_armoredcar.inc")

}

{"light tank"
	{on blast_hit
		{if min_energy 30
			{impulse up 3 0.1 dir 6 0.1}
			{if volume "turret"
				{call "tear_turret"}
			}
		else min_energy  9
			{impulse up 0.5 0.2 dir 1 0.2}
			{call "tear_turret"}
		 else min_energy 6
			{impulse up 0.4 0.1 dir 0.7 0.2}
			{if rand 0.6 {call "tear_turret"}}
		 else min_energy 1
		 	{ani_play "hit"}
		}
	}
	{on "_explosion"
		{blastwave c4 5 r0 2.5 r1 10}
		{impulse up 0.5}
	}
(include "tank/tank_light.inc")
}

{"medium tank"
	{inflammation_time 30}
	{on blast_hit
		{if min_energy 30
			{impulse up 2.5 0.1 dir 4 0.1}
			{if volume "turret"
				{if rand 0.8
					{call "tear_turret"}
				}
			}
		else min_energy 12
			{impulse up 0.7 0.2 dir 1.5 0.2}
			{if volume "turret"
				{if rand 0.5
					{call "tear_turret"}
				}
			}
		 else min_energy 9
			{impulse up 0.3 0.2 dir 1 0.2}
		 else min_energy 7
			{impulse up 0.3 0.1 dir 0.4 0.1}
		 else min_energy 1
		 	;{ani_play "hit"}
		}
	}
	{on "_explosion"
		{blastwave c4 10 r0 2.5 r1 10}
		{impulse up 2 0.5 dir 0.4 0.2}
	}
	{on "check_water_level" overload
		{if water_level 1.6
			{able "sinking" 1}
		}
	}
(include "tank/tank_medium.inc")
}

{"heavy tank"
	{inflammation_time 35}
	{on blast_hit
		{if min_energy 30
			{impulse up 1.5 0.1 dir 2.5 0.1}
			{if volume "turret"
				{if rand 0.5
					{call "tear_turret"}
				}
			}
		else min_energy 14
			{impulse up 0.25 0.1 dir 0.35 0.1}
			{if volume "turret"
				{if rand 0.3
					{call "tear_turret"}
				}
			}
		 else min_energy 8
			{impulse up 0.2 0.1 dir 0.3 0.1}
		 else min_energy 3
		 	;{ani_play "hit"}
		}
	}
	{on "_explosion"
        {blastwave c4 15 r0 2.5 r1 10}
		{impulse up 1 1 dir 0.2 0.2}
	}
	{on "check_water_level" overload
		{if water_level 1.8
			{able "sinking" 1}
		}
	}
(include "tank/tank_heavy.inc")
}

{"mine_exploder"
	{on spawn
		{bone hide "wheel_work"}
		{add_view "dustrun_sand_big"	"wheel_work_dust"	"FXWheel_Work1"}
		{add_view "dustrun_sand_big"	"wheel_work_dust"	"FXWheel_Work2"}
		{volumes "wheel_work" disable all}
		{ani_play "wheel_stop"}
	}
	{on move on
		{bone hide "wheel"}
		{bone show "wheel_work"}
		{view start "wheel_work_dust"}
		{volumes "wheel_work" enable all}
		{volumes "wheel" disable all}
	}
	{on move off
		{bone hide "wheel_work"}
		{bone show "wheel"}
		{ani_play "wheel_stop"}
		{view pause "wheel_work_dust"}
		{volumes "wheel_work" disable all}
		{volumes "wheel" enable all}
	}
	{on blast overload
		{if not volume "wheel_work"
			{inherited}
		else
			{ani_play "explosion"}
		}
	}
}


(define "abrams_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/engine_new/ve_tankjet_drive"	}
		{link_sound "engine"			"vehicle/engine_new/ve_tankjet_idle"		}
		{link_sound "engine_end"		"vehicle/engine_new/ve_tankjet_shutdown"	}
		{link_sound "exhaust"			"vehicle/engine_new/ve_tankjet_start"	}
		{link_sound "rotate_turret" 	"vehicle/turret_new/ve_small_accelerate"	}
	}
)
{"m1a2_abrams tank"
	("abrams_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"m1a2_abrams_tusk tank"
	("abrams_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}


(define "bradley_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/engine_new/ve_tankdiesel1_drive"	}
		{link_sound "engine"			"vehicle/engine_new/ve_tankdiesel2_accelerate"		}
		{link_sound "engine_end"		"vehicle/engine_new/ve_large_shutdown"	}
		{link_sound "exhaust"			"vehicle/engine_new/ve_tankjet_start"	}
		{link_sound "rotate_turret" 	"vehicle/turret_new/ve_small_accelerate"	}
	}
)
{"m2_bradley tank"
	("bradley_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}


(define "stryker_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/engine_new/ve_large_drive_wheel"	}
		{link_sound "engine"			"vehicle/engine_new/ve_large_accelerate"		}
		{link_sound "engine_end"		"vehicle/engine_new/ve_large_shutdown"	}
		{link_sound "exhaust"			"vehicle/engine_new/ve_large_start"	}
		{link_sound "rotate_turret" 	"vehicle/turret_new/ve_small_accelerate"	}
	}
)
{"stryker_m2hb tank"
	("stryker_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"stryker_m1128 tank"
	("stryker_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"stryker_mk19 tank"
	("stryker_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}


(define "humvee_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/engine_new/ve_small_drive"	}
		{link_sound "engine"			"vehicle/engine_new/ve_small_accelerate"		}
		{link_sound "engine_end"		"vehicle/engine_new/ve_small_shutdown"	}
		{link_sound "exhaust"			"vehicle/engine_new/ve_large_start"	}
		{link_sound "rotate_turret" 	"vehicle/turret_new/ve_small_accelerate"	}
	}
)
{"humvee_m2hb tank"
	("humvee_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"humvee_m240 tank"
	("humvee_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"humvee_mk19 tank"
	("humvee_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"humvee_tow tank"
	("humvee_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}


(define "t-80_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/engine_new/ve_tankdiesel1_drive"	}
		{link_sound "engine"			"vehicle/engine_new/ve_tankdiesel1_accelerate"		}
		{link_sound "engine_end"		"vehicle/engine_new/ve_tankdiesel2_shutdown"	}
		{link_sound "exhaust"			"vehicle/engine_new/ve_tankdiesel1_start"	}
		{link_sound "rotate_turret" 	"vehicle/turret_new/ve_small_accelerate"	}
	}
)
{"t-80bv tank"
	("t-80_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"t-80u tank"
	("t-80_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}


(define "bmp_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/engine_new/ve_tankdiesel2_drive"	}
		{link_sound "engine"			"vehicle/engine_new/ve_tankdiesel2_accelerate"		}
		{link_sound "engine_end"		"vehicle/engine_new/ve_tankdiesel2_shutdown"	}
		{link_sound "exhaust"			"vehicle/engine_new/ve_tankdiesel2_start"	}
		{link_sound "rotate_turret" 	"vehicle/turret_new/ve_small_accelerate"	}
	}
)
{"bmp2 tank"
	("bmp_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"bmp3 tank"
	("bmp_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}


(define "btr_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/engine_new/ve_large_drive_wheel"	}
		{link_sound "engine"			"vehicle/engine_new/ve_tankdiesel1_accelerate"		}
		{link_sound "engine_end"		"vehicle/engine_new/ve_large_shutdown"	}
		{link_sound "exhaust"			"vehicle/engine_new/ve_large_start"	}
		{link_sound "rotate_turret" 	"vehicle/turret_new/ve_small_accelerate"	}
	}
)
{"btr-80 tank"
	("btr_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"btr-82a tank"
	("btr_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}


(define "technical_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/engine_new/ve_small_drive"	}
		{link_sound "engine"			"vehicle/engine_new/A0626_MSC_pickup_engine_01"		}
		{link_sound "engine_end"		"vehicle/engine_new/ve_small_shutdown"	}
		{link_sound "exhaust"			"vehicle/engine_new/ve_large_start"	}
		{link_sound "rotate_turret" 	"vehicle/turret_new/ve_small_accelerate"	}
	}
)
{"technical_hmg tank"
	("technical_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"technical_lmg tank"
	("technical_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"technical_spg tank"
	("technical_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"technical_zpu tank"
	("technical_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}