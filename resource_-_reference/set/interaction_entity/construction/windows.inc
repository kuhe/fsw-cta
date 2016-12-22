{"windowed"
	(define "break_window"
		{if bone "window%0" visible
			{if bone "fx_glass%0"
				{if rand 0.5
					{spawn "glass_hit" "fx_glass%0" x}
				else
					{spawn "glass_hit2" "fx_glass%0" x}
				}
			}
			{if bone "fx_glass0%0"
				{if rand 0.5
					{spawn "glass_hit" "fx_glass0%0" x}
				else
					{spawn "glass_hit2" "fx_glass0%0" x}
				}
			}
			{if not bone "fx_glass%0"
				{if not bone "fx_glass0%0"
					{if rand 0.5
						{spawn "glass_hit" "window%0" x}
					else
						{spawn "glass_hit2" "window%0" x}
					}
				}
			}
			{volumes "window%0" disable all}
			{delay 0.1
				{bone hide	"window%0"}
				{bone show	"window%0_x"}
			}
		}
	)
	(define "try_break_window"
		{if volume "window%0"
			("break_window" args %0)
		}
	)
	{on spawn
		{if not sunlight
			{add_view "light_house" "light" "fx_light1"}
			{add_view "light_house" "light" "fx_light2"}
			{add_view "light_house" "light" "fx_light3"}
			{add_view "light_house" "light" "fx_light4"}
			{add_view "light_house" "light" "fx_light5"}
			{add_view "light_house" "light" "fx_light6"}
			{add_view "light_house2" "light" "fx_light_high1"}
			{add_view "light_house2" "light" "fx_light_high2"}
			{add_view "light_house2" "light" "fx_light_high3"}
			{add_view "light_house2" "light" "fx_light_high4"}
			{add_view "light_house2" "light" "fx_light_high5"}
			{add_view "light_house2" "light" "fx_light_high6"}
			{view start "light"}
		else
			{bone cut "fx_light1"}
			{bone cut "fx_light2"}
			{bone cut "fx_light3"}
			{bone cut "fx_light4"}
			{bone cut "fx_light5"}
			{bone cut "fx_light6"}
			{bone cut "fx_light_high1"}
			{bone cut "fx_light_high2"}
			{bone cut "fx_light_high3"}
			{bone cut "fx_light_high4"}
			{bone cut "fx_light_high5"}
			{bone cut "fx_light_high6"}
		}
	}
	{on bullet_hit
		{call "break_window"}
	}
	{on contact
		{call "break_window"}
	}
	{on blast 
		{if min_energy 0.2
			{call "break_window"}
		}
	}
	{on "break_window"
		{if not "windows_broken"
			("try_break_window" args 0)		("try_break_window" args 1)
			("try_break_window" args 2)		("try_break_window" args 3)
			("try_break_window" args 4)		("try_break_window" args 5)
			("try_break_window" args 6)		("try_break_window" args 7)
			("try_break_window" args 8)		("try_break_window" args 9)
			("try_break_window" args 10)	("try_break_window" args 11)
			("try_break_window" args 12)	("try_break_window" args 13)
			("try_break_window" args 14)	("try_break_window" args 15)
			("try_break_window" args 16)	("try_break_window" args 17)
			("try_break_window" args 18)	("try_break_window" args 19)
			("try_break_window" args 20)	("try_break_window" args 21)
			("try_break_window" args 22)	("try_break_window" args 23)
			("try_break_window" args 24)	("try_break_window" args 25)
			("try_break_window" args 26)	("try_break_window" args 27)
			("try_break_window" args 28)	("try_break_window" args 29)
			("try_break_window" args 30)	("try_break_window" args 31)
			("try_break_window" args 32)	("try_break_window" args 33)
			("try_break_window" args 34)	("try_break_window" args 35)
			("try_break_window" args 36)	("try_break_window" args 37)
			("try_break_window" args 38)	("try_break_window" args 39)
			("try_break_window" args 40)	("try_break_window" args 41)
			("try_break_window" args 42)	("try_break_window" args 43)
			("try_break_window" args 44)	("try_break_window" args 45)

		}
	}
	{on "break_windows"
		{if not "windows_broken"
			{set "windows_broken" 1}
			("break_window" args 0)		("break_window" args 1)
			("break_window" args 2)		("break_window" args 3)
			("break_window" args 4)		("break_window" args 5)
			("break_window" args 6)		("break_window" args 7)
			("break_window" args 8)		("break_window" args 9)
			("break_window" args 10)	("break_window" args 11)
			("break_window" args 12)	("break_window" args 13)
			("break_window" args 14)	("break_window" args 15)
			("break_window" args 16)	("break_window" args 17)
			("break_window" args 18)	("break_window" args 19)
			("break_window" args 20)	("break_window" args 21)
			("break_window" args 22)	("break_window" args 23)
			("break_window" args 24)	("break_window" args 25)
			("break_window" args 26)	("break_window" args 27)
			("break_window" args 28)	("break_window" args 29)
			("break_window" args 30)	("break_window" args 31)
			("break_window" args 32)	("break_window" args 33)
			("break_window" args 34)	("break_window" args 35)
			("break_window" args 36)	("break_window" args 37)
			("break_window" args 38)	("break_window" args 39)
			("break_window" args 40)	("break_window" args 41)
			("break_window" args 42)	("break_window" args 43)
			("break_window" args 44)	("break_window" args 45)
		}
	}
	{on "next_stage"
		{call "break_windows"}
	}
	{on "last_stage"
		{call "break_windows"}
	}
	{on "break_windows_delayed"
		{delay 0.2
			{call "break_windows"}
		}
	}
}
