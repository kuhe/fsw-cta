;{levelofdetail
;	{"test"
;		{distance 700}		; LOD1
;		{distance 1000		; LOD2
;			{NoFog}
;			{NoGetShadow}
;			{NoCastShadow}
;			{off}
;		}
;	}
	{"human"
		{distance ("scale" d(300))
			; LOD1
		}
		{distance ("scale" d(800))
			; LOD2
		}
		{distance ("scale" d(1500))
			; LOD3
		}
		{distance ("scale" d(2000))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(4000))
			("off")
		}
	}
	{"vehicle_civilian"
		{distance ("scale" d(1500))
			; LOD1
		}
		{distance ("scale" d(2500))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(4000))
			("off")
		}
	}
	{"vehicle_small"
		{distance ("scale" d(1500))
			; LOD1
		}
		{distance ("scale" d(2500))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(5000))
			("off")
		}
	}
	{"vehicle_big"
		{distance ("scale" d(2000))
			; LOD1
		}
		{distance ("scale" d(3000))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(6000))
			("off")
		}
	}
	{"stuff_small"
		{distance ("scale" d(300))
			; LOD1
		}
		{distance ("scale" d(800))
			; LOD2
		}
		{distance ("scale" d(1250))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(1500))
			("off_small")
		}
	}
	{"part_small"
		{distance ("scale" d(500))
			; LOD1
		}
		{distance ("scale" d(1000))
			; LOD2
		}
		{distance ("scale" d(1500))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(2000))
			("off_small")
		}
	}
	{"part_big"
		{distance ("scale" d(1000))
			; LOD1
		}
		{distance ("scale" d(1500))
			; LOD2
		}
		{distance ("scale" d(2000))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(2500))
			("off")
		}
	}
	{"decor_tiny"
		{distance ("scale" d(300))
			; LOD1
		}
		{distance ("scale" d(800))
			; LOD2
		}
		{distance ("scale" d(1250))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(1500))
			("off_tiny")
		}
	}
	{"decor_small"
		{distance ("scale" d(750))
			; LOD1
		}
		{distance ("scale" d(1500))
			; LOD2
		}
		{distance ("scale" d(2000))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(3000))
			("off_small")
		}
	}
	{"decor_medium"
		{distance ("scale" d(1000))
			; LOD1
		}
		{distance ("scale" d(2000))
			; LOD2
		}
		{distance ("scale" d(2500))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(4500))
			("off")
		}
	}
	{"decor_big"
		{distance ("scale" d(1000))
			; LOD1
		}
		{distance ("scale" d(2500))
			; LOD2
		}
		{distance ("scale" d(3000))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
	}
	{"decor_tree"
		{distance ("scale" d(750))
			; LOD1
		}
		{distance ("scale" d(1500))
			; LOD2
		}
		{distance ("scale" d(2000))
			; LOD3
		}
		{distance ("scale" d(3000))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(4000))
			; LOD5
		}
	}
	{GrassDistance 5000}
	{GrassFadeDepth 500}
;}