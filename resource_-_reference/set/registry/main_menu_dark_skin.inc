;SDL
{dialog
	{frame_size 1}
	{face_color	"150 150 150"}
	{text_style "f(myriadpro)s(%fs)p(0)c(255 255 255)"}
	{frame_color "70 70 70"}
}
{static_text
	{disabled_text_color "67 67 67"}
}
{inputline
	{selection
		{face_color "93 93 93"}
		{text_color "0 0 0"}
		{ro_face_color "93 93 93 192"}
		{ro_text_color "67 67 67"}
	}
	{text_style "f(myriadpro)s(17)p(0)c(198 198 198)y."}
	{ro_text_color "67 67 67"}
	{disabled_text_color "179 179 179"}
	{modal_frame_color "255 255 255"}
	{cursor_char "_"}
	{blink_period "0.7"}
}
{scrollbar
	{folder "/interface/skin/game/scrollbar/"}
}
{slider
	{folder "/interface/skin/game/slider/"}
}
{listbox
	{folder "/interface/skin/game/listbox/"}
	{face_color "150 150 150"}
	{item
		{text_style
			{normal	 	"f(myriadpro)s(%fs)p(0)c(255 255 255)y."}
			{selected	"f(myriadpro)s(%fs)p(0)c(255 255 255)y."}
			{focused	"f(myriadpro)s(%fs)p(0)c(255 255 255)y."}
			{disabled	"f(myriadpro)s(%fs)p(0)c(67 67 67)y."}
		}
		{face_color
			{normal		"150 150 150"}
			{selected	"93 93 93"}
			{focused	"93 93 93"}
			{disabled	"150 150 150"}
		}
		{selection_shrink 0}
		{text_offset 5}
	}
}
{treeview
	{folder "/interface/skin/game/treeview/"}
}
{dda_editor
	{item
		{ro_text_color "67 67 67"}
		{face_color
			{selected	"150 150 150"}
		}
		{selection_shrink 2}
	}
}
{splitter
	{folder "/interface/skin/game/splitter/"}
}
{combobox
	{button "/interface/skin/game/combobox/down"}
	{drop_offset "5"}
}
{button
	{text_style
		{normal				"p(0)f(myriadpro)s(27)c(198 198 198)"}
		{focused_mouse		"p(0)f(myriadpro)s(27)c(255 255 255)"}
		{focused_keyboard	"p(0)f(myriadpro)s(27)c(255 255 255)"}
		{pressed			"p(0)f(myriadpro)s(27)c(255 255 255)"}
		{disabled			"p(0)f(myriadpro)s(27)c(80 80 80)"}
	}
}
{button_dark
	{text_style
		{normal				"p(0)f(myriadpro)s(27)c(70 70 70)"}
		{focused_mouse		"p(0)f(myriadpro)s(27)c(0 0 0)"}
		{focused_keyboard	"p(0)f(myriadpro)s(27)c(0 0 0)"}
		{pressed			"p(0)f(myriadpro)s(27)c(0 0 0)"}
		{disabled			"p(0)f(myriadpro)s(27)c(100 100 100)"}
	}
}
{button_light
	{text_style
		{normal				"p(0)f(myriadpro)s(27)c(153 153 153)"}
		{focused_mouse		"p(0)f(myriadpro)s(27)c(255 255 255)"}
		{focused_keyboard	"p(0)f(myriadpro)s(27)c(255 255 255)"}
		{pressed			"p(0)f(myriadpro)s(27)c(255 255 255)"}
		{disabled			"p(0)f(myriadpro)s(27)c(128 128 128)"}
	}
}
{button_light2	; main menu
	{text_style
		{normal				"f(myriadpro)s(30)c(0xc6c6c6)"}
		{focused_mouse		"f(myriadpro)s(30)c(0xFFFFFF)"}
		{focused_keyboard	"f(myriadpro)s(30)c(0xFFFFFF)"}
		{pressed			"y(+3)f(myriadpro)s(30)c(0xFFFFFF)"}
		{disabled			"f(myriadpro)s(30)c(128 128 128)"}
	}
}
{button_light3 ; main menu - passed missions
	{text_style
		{normal				"f(myriadpro)s(30)c(0x787878)"}
		{focused_mouse		"f(myriadpro)s(30)c(0xFFFFFF)"}
		{focused_keyboard	"f(myriadpro)s(30)c(0xFFFFFF)"}
		{pressed			"y(+3)f(myriadpro)s(30)c(0xFFFFFF)"}
		{disabled			"f(myriadpro)s(30)c(0x808080)"}
	}
}
{button_black
	{text_style
		{normal				"p(0)f(myriadpro)s(27)c(0 0 0)"}
		{focused_mouse		"p(0)f(myriadpro)s(27)c(0 0 0)"}
		{focused_keyboard	"p(0)f(myriadpro)s(27)c(0 0 0)"}
		{pressed			"p(0)f(myriadpro)s(27)c(0 0 0)"}
		{disabled			"p(0)f(myriadpro)s(27)c(100 100 100)"}
	}
}
{button_tab ; main menu tabs
	{text_style
		{normal				"p(0)f(myriadpro)s(%fs)c(198 198 198)"}
		{focused_mouse		"p(0)f(myriadpro)s(%fs)c(255 255 255)"}
		{focused_keyboard	"p(0)f(myriadpro)s(%fs)c(255 255 255)"}
		{pressed			"p(0)f(myriadpro)s(%fs)c(255 255 255)"}
		{disabled			"p(0)f(myriadpro)s(%fs)c(128 128 128)"}
	}
	{face_color
		{normal		"0 0 0 150"}
		{focused_mouse	"93 93 93"}
		{focused_keyboard	"93 93 93"}
		{pressed	"93 93 93"}
		{disabled	"150 150 150"}
	}
}
{button_main
	{text_style
		{normal				"p(0)f(myriadpro)s(21)c(198 198 198)"}
		{focused_mouse		"p(0)f(myriadpro)s(21)c(255 255 255)"}
		{focused_keyboard	"p(0)f(myriadpro)s(21)c(255 255 255)"}
		{pressed			"p(0)f(myriadpro)s(21)c(255 255 255)"}
		{disabled			"p(0)f(myriadpro)s(21)c(128 128 128)"}
	}
	{text2_style
		{normal				"p(0)f(myriadpro)s(17)c(198 198 198)"}
		{focused_mouse		"p(0)f(myriadpro)s(17)c(255 255 255)"}
		{focused_keyboard	"p(0)f(myriadpro)s(17)c(255 255 255)"}
		{pressed			"p(0)f(myriadpro)s(17)c(255 255 255)"}
		{disabled			"p(0)f(myriadpro)s(17)c(128 128 128)"}
	}
	{face_color
		{normal		"0 0 0 150"}
		{focused_mouse	"93 93 93"}
		{focused_keyboard	"93 93 93"}
		{pressed	"93 93 93"}
		{disabled	"150 150 150"}
	}
}
{inputline_menu
	{frame_size 0}
	{face_color	"20 20 20 200"}
	{frame_color "50 50 50"}
	
	{selection
		{face_color "93 93 93"}
		{text_color "0 0 0"}
		{ro_face_color "93 93 93 192"}
		{ro_text_color "67 67 67"}
	}
	{text_style "f(myriadpro)s(17)p(0)c(198 198 198)y."}
	{ro_text_color "255 255 255"}
	{disabled_text_color "179 179 179"}
	{modal_frame_color "255 255 255"}
	{cursor_char "_"}
	{blink_period "0.7"}
}
{dialogbox
	{text_style "f(myriadpro)s(%fs)p(0)c(0 0 0)"}
}
{frame
	{text_style "f(myriadpro)s(28)c(255 255 255)"}
}
{objectives
	{text_style "f(myriadpro)s(%fs)p(0)"}
}
{message_history
	{text_style "f(myriadpro)s(%fs)p(0)c(255 255 255)"}
}
{event_history
	{text_style "<f(myriadpro)s(8)>p(0)"}
}
{talk
	{text_style "f(myriadpro)s(%fs)p(0)c(255 255 255)"}
}
{tip
	{text_style "f(myriadpro)s(8)c(20 20 20)"}
	{text_style_link "f(myriadpro)s(8)c(20 100 20)"}
	{text_style_link_selected "f(myriadpro)s(8)c(100 20 20)"}
}
{scenario
	{text_style "s(10)c(200 200 200)"}
	{text_style_small "f(myriadpro)s(8)c(200 200 200)"}
}
{gc_hint
	{text_style_title	"f(myriadpro)s(21)c(255 255 255)"}
	{text_style			"f(myriadpro)s(15)c(255 255 255)"}
	{text_style_req		"f(myriadpro)s(15)c(255 150 150)"}
	{text_style_action	"f(myriadpro)s(15)c(255 255 150)"}
	{text_style_usage	"f(myriadpro)s(15)c(150 255 150)"}
	{face_color "50 50 50 180"}
	{frame_color "140 140 140 180"}
}
{video_dialog
	{subtitle_text_style "e(shadow)f(myriadpro)s(30)c(255 255 255)"}
}
