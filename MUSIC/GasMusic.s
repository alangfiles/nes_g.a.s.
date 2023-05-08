;this file for FamiTone2 library generated by text2data tool

GasMusic_music_data:
	.byte 9
	.word @instruments
	.word @samples-3
	.word @song0ch0,@song0ch1,@song0ch2,@song0ch3,@song0ch4,307,256
	.word @song1ch0,@song1ch1,@song1ch2,@song1ch3,@song1ch4,307,256
	.word @song2ch0,@song2ch1,@song2ch2,@song2ch3,@song2ch4,307,256
	.word @song3ch0,@song3ch1,@song3ch2,@song3ch3,@song3ch4,307,256
	.word @song4ch0,@song4ch1,@song4ch2,@song4ch3,@song4ch4,307,256
	.word @song5ch0,@song5ch1,@song5ch2,@song5ch3,@song5ch4,307,256
	.word @song6ch0,@song6ch1,@song6ch2,@song6ch3,@song6ch4,307,256
	.word @song7ch0,@song7ch1,@song7ch2,@song7ch3,@song7ch4,307,256
	.word @song8ch0,@song8ch1,@song8ch2,@song8ch3,@song8ch4,307,256

@instruments:
	.byte $30 ;instrument $01
	.word @env1,@env0,@env0
	.byte $00
	.byte $f0 ;instrument $02
	.word @env1,@env0,@env0
	.byte $00
	.byte $70 ;instrument $03
	.word @env2,@env0,@env5
	.byte $00
	.byte $30 ;instrument $05
	.word @env3,@env0,@env0
	.byte $00
	.byte $30 ;instrument $06
	.word @env2,@env0,@env0
	.byte $00
	.byte $b0 ;instrument $08
	.word @env1,@env0,@env0
	.byte $00
	.byte $b0 ;instrument $09
	.word @env3,@env0,@env0
	.byte $00
	.byte $f0 ;instrument $0a
	.word @env2,@env0,@env0
	.byte $00
	.byte $f0 ;instrument $0b
	.word @env4,@env0,@env0
	.byte $00

@samples:
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;1
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;2
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;3
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;4
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;5
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;6
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;7
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;8
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;9
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;10
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;11
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;12
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;13
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;14
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;15
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;16
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;17
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;18
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;19
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;20
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;21
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;22
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;23
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;24
	.byte $00+.lobyte(FT_DPCM_PTR),$46,$08	;25
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;26
	.byte $12+.lobyte(FT_DPCM_PTR),$45,$05	;27
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;28
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$09	;29
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;30
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;31
	.byte $24+.lobyte(FT_DPCM_PTR),$16,$08	;32
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;33
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;34
	.byte $35+.lobyte(FT_DPCM_PTR),$44,$04	;35
	.byte $2a+.lobyte(FT_DPCM_PTR),$2b,$02	;36
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;37
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;38
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;39
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;40
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;41
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;42
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;43
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;44
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;45
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;46
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;47
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;48
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;49
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;50
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;51
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;52
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;53
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;54
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;55
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;56
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;57
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;58
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;59
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;60
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;61
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;62
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;63

@env0:
	.byte $c0,$00,$00
@env1:
	.byte $c0,$c6,$c9,$c8,$c7,$c6,$c5,$c4,$c3,$c2,$c1,$00,$0a
@env2:
	.byte $c8,$ce,$cc,$ca,$c9,$c8,$c7,$c6,$c5,$c4,$c3,$c2,$c0,$00,$0c
@env3:
	.byte $c3,$c6,$c2,$00,$02
@env4:
	.byte $c9,$cf,$ce,$cd,$cb,$ca,$c8,$c6,$00,$07
@env5:
	.byte $b8,$c3,$c3,$00,$02


@song0ch0:
	.byte $fb,$07
@song0ch0loop:
@ref0:
	.byte $80,$36,$85,$3c,$85,$44,$85,$3c,$85,$40,$85,$48,$85,$4e,$85,$48
	.byte $85,$32,$85,$3a,$85,$40,$85,$3a,$85,$32,$85,$3a,$85,$40,$85,$3a
	.byte $85
	.byte $fd
	.word @song0ch0loop

@song0ch1:
@song0ch1loop:
@ref1:
	.byte $87,$80,$3c,$85,$4a,$95,$48,$85,$54,$95,$3a,$85,$48,$95,$3a,$85
	.byte $48,$8d
	.byte $fd
	.word @song0ch1loop

@song0ch2:
@song0ch2loop:
@ref2:
	.byte $f9,$85
	.byte $fd
	.word @song0ch2loop

@song0ch3:
@song0ch3loop:
@ref3:
	.byte $f9,$85
	.byte $fd
	.word @song0ch3loop

@song0ch4:
@song0ch4loop:
@ref4:
	.byte $f9,$85
	.byte $fd
	.word @song0ch4loop


@song1ch0:
	.byte $fb,$06
@song1ch0loop:
@ref5:
	.byte $8a,$32,$85,$3c,$85,$40,$85,$36,$85,$32,$85,$44,$85,$40,$85,$3a
	.byte $85
@ref6:
	.byte $36,$85,$32,$85,$3a,$85,$44,$85,$40,$85,$36,$85,$32,$85,$3a,$85
@ref7:
	.byte $32,$85,$3c,$85,$40,$85,$36,$85,$32,$85,$44,$85,$40,$85,$3a,$85
	.byte $ff,$10
	.word @ref6
@ref9:
	.byte $bf
@ref10:
	.byte $bf
	.byte $fd
	.word @song1ch0loop

@song1ch1:
@song1ch1loop:
@ref11:
	.byte $bf
@ref12:
	.byte $bf
@ref13:
	.byte $bf
@ref14:
	.byte $bf
@ref15:
	.byte $8f,$8c,$2d,$28,$99,$29,$2d,$3c,$85
@ref16:
	.byte $87,$37,$32,$91,$45,$3b,$37,$3b,$32,$8b,$00
	.byte $fd
	.word @song1ch1loop

@song1ch2:
@song1ch2loop:
@ref17:
	.byte $80,$45,$40,$91,$37,$32,$91,$41,$45,$4a,$85
@ref18:
	.byte $87,$41,$3b,$36,$8d,$45,$3b,$37,$3b,$32,$8d
@ref19:
	.byte $45,$40,$91,$37,$32,$91,$41,$45,$4a,$85
	.byte $ff,$0b
	.word @ref18
@ref21:
	.byte $45,$40,$99,$41,$45,$4a,$95
@ref22:
	.byte $87,$37,$32,$91,$45,$3b,$37,$3b,$32,$8d
	.byte $fd
	.word @song1ch2loop

@song1ch3:
@song1ch3loop:
@ref23:
	.byte $81,$00,$bb
@ref24:
	.byte $bf
@ref25:
	.byte $bf
@ref26:
	.byte $bf
@ref27:
	.byte $00,$bd
@ref28:
	.byte $b7,$80,$14,$85
	.byte $fd
	.word @song1ch3loop

@song1ch4:
@song1ch4loop:
@ref29:
	.byte $bf
@ref30:
	.byte $bf
@ref31:
	.byte $bf
@ref32:
	.byte $bf
@ref33:
	.byte $bf
@ref34:
	.byte $bf
	.byte $fd
	.word @song1ch4loop


@song2ch0:
	.byte $fb,$06
@song2ch0loop:
@ref35:
	.byte $80,$1a,$87,$24,$83,$28,$87,$24,$83,$1a,$87,$24,$83,$28,$87,$24
	.byte $83,$10,$87,$1a,$83,$1e,$87,$1a,$83,$10,$87,$1a,$83,$1e,$87,$1a
	.byte $83
	.byte $fd
	.word @song2ch0loop

@song2ch1:
@song2ch1loop:
@ref36:
	.byte $f9,$85
	.byte $fd
	.word @song2ch1loop

@song2ch2:
@song2ch2loop:
@ref37:
	.byte $82,$5c,$95,$58,$85,$4e,$9d,$4a,$97,$54,$83,$58,$8d,$4e,$8d
	.byte $fd
	.word @song2ch2loop

@song2ch3:
@song2ch3loop:
@ref38:
	.byte $f9,$85
	.byte $fd
	.word @song2ch3loop

@song2ch4:
@song2ch4loop:
@ref39:
	.byte $f9,$85
	.byte $fd
	.word @song2ch4loop


@song3ch0:
	.byte $fb,$06
@song3ch0loop:
@ref40:
	.byte $84,$3a,$85,$40,$85,$46,$85,$40,$85,$42,$85,$40,$85,$3c,$85,$3a
	.byte $85,$44,$85,$40,$85,$3c,$85,$3a,$85,$38,$85,$36,$85,$38,$85,$34
	.byte $85
	.byte $fd
	.word @song3ch0loop

@song3ch1:
@song3ch1loop:
@ref41:
	.byte $f9,$85
	.byte $fd
	.word @song3ch1loop

@song3ch2:
@song3ch2loop:
@ref42:
	.byte $80,$3a,$9d,$44,$9d,$32,$9d,$3c,$9d
	.byte $fd
	.word @song3ch2loop

@song3ch3:
@song3ch3loop:
@ref43:
	.byte $f9,$85
	.byte $fd
	.word @song3ch3loop

@song3ch4:
@song3ch4loop:
@ref44:
	.byte $f9,$85
	.byte $fd
	.word @song3ch4loop


@song4ch0:
	.byte $fb,$06
@song4ch0loop:
@ref45:
	.byte $86,$4a,$85,$4a,$85,$4a,$85,$52,$85,$54,$85,$52,$85,$4e,$85,$4a
	.byte $85,$4a,$85,$4a,$85,$4a,$85,$54,$85,$58,$85,$54,$85,$58,$85,$4e
	.byte $85
	.byte $fd
	.word @song4ch0loop

@song4ch1:
@song4ch1loop:
@ref46:
	.byte $f9,$85
	.byte $fd
	.word @song4ch1loop

@song4ch2:
@song4ch2loop:
@ref47:
	.byte $86,$33,$41,$45,$41,$37,$33,$3b,$41,$45,$45,$41,$45,$41,$45,$37
	.byte $33,$3b,$37,$33,$45,$41,$41,$37,$33,$3b,$41,$45,$33,$37,$33,$45
	.byte $32,$81
	.byte $fd
	.word @song4ch2loop

@song4ch3:
@song4ch3loop:
@ref48:
	.byte $f9,$85
	.byte $fd
	.word @song4ch3loop

@song4ch4:
@song4ch4loop:
@ref49:
	.byte $f9,$85
	.byte $fd
	.word @song4ch4loop


@song5ch0:
	.byte $fb,$06
@song5ch0loop:
@ref50:
	.byte $80,$54,$85,$54,$85,$5e,$85,$62,$8d,$62,$8d,$62,$85,$5e,$85,$52
	.byte $85,$54,$8d,$5e,$85,$5c,$85,$58,$85,$62,$85
	.byte $fd
	.word @song5ch0loop

@song5ch1:
@song5ch1loop:
@ref51:
	.byte $80,$44,$95,$3c,$9d,$3c,$85,$36,$8d,$32,$8d,$3c,$8d,$36,$8d
	.byte $fd
	.word @song5ch1loop

@song5ch2:
@song5ch2loop:
@ref52:
	.byte $f9,$85
	.byte $fd
	.word @song5ch2loop

@song5ch3:
@song5ch3loop:
@ref53:
	.byte $f9,$85
	.byte $fd
	.word @song5ch3loop

@song5ch4:
@song5ch4loop:
@ref54:
	.byte $f9,$85
	.byte $fd
	.word @song5ch4loop


@song6ch0:
	.byte $fb,$06
@song6ch0loop:
@ref55:
	.byte $88,$40,$85,$40,$85,$40,$85,$40,$85,$3c,$85,$32,$85,$32,$85,$32
	.byte $85,$32,$85,$3c,$85,$40,$85,$44,$85,$40,$85,$44,$85,$44,$85,$36
	.byte $85
	.byte $fd
	.word @song6ch0loop

@song6ch1:
@song6ch1loop:
@ref56:
	.byte $f9,$85
	.byte $fd
	.word @song6ch1loop

@song6ch2:
@song6ch2loop:
@ref57:
	.byte $f9,$85
	.byte $fd
	.word @song6ch2loop

@song6ch3:
@song6ch3loop:
@ref58:
	.byte $f9,$85
	.byte $fd
	.word @song6ch3loop

@song6ch4:
@song6ch4loop:
@ref59:
	.byte $f9,$85
	.byte $fd
	.word @song6ch4loop


@song7ch0:
	.byte $fb,$06
@song7ch0loop:
@ref60:
	.byte $88,$2c,$85,$3a,$85,$32,$85,$36,$85,$32,$85,$30,$85,$2c,$85,$2c
	.byte $85
@ref61:
	.byte $32,$85,$36,$85,$32,$85,$30,$85,$2c,$85,$3a,$85,$36,$85,$30,$85
@ref62:
	.byte $2c,$85,$3a,$85,$32,$85,$36,$85,$32,$85,$30,$85,$2c,$85,$2c,$85
	.byte $ff,$10
	.word @ref61
	.byte $fd
	.word @song7ch0loop

@song7ch1:
@song7ch1loop:
@ref64:
	.byte $9f,$00,$9d
@ref65:
	.byte $bf
@ref66:
	.byte $8f,$90,$22,$85,$24,$85,$1a,$95,$22,$85
@ref67:
	.byte $87,$1e,$8d,$1a,$8d,$22,$85,$24,$85,$1a,$85
	.byte $fd
	.word @song7ch1loop

@song7ch2:
@song7ch2loop:
@ref68:
	.byte $bf
@ref69:
	.byte $bf
@ref70:
	.byte $bf
@ref71:
	.byte $bf
	.byte $fd
	.word @song7ch2loop

@song7ch3:
@song7ch3loop:
@ref72:
	.byte $8e,$08,$95,$0a,$95,$0a,$85,$0a,$85
@ref73:
	.byte $87,$08,$8d,$0a,$95,$08,$8d
@ref74:
	.byte $08,$95,$0a,$95,$0a,$85,$0a,$85
	.byte $ff,$07
	.word @ref73
	.byte $fd
	.word @song7ch3loop

@song7ch4:
@song7ch4loop:
@ref76:
	.byte $bf
@ref77:
	.byte $bf
@ref78:
	.byte $bf
@ref79:
	.byte $bf
	.byte $fd
	.word @song7ch4loop


@song8ch0:
	.byte $fb,$08
@song8ch0loop:
@ref80:
	.byte $8a,$36,$85,$3c,$85,$44,$85,$3c,$85,$40,$85,$48,$85,$4e,$85,$48
	.byte $85
@ref81:
	.byte $32,$85,$3a,$85,$40,$85,$3a,$85,$32,$85,$3a,$85,$40,$85,$3a,$85
@ref82:
	.byte $36,$85,$3c,$85,$44,$85,$3c,$85,$40,$85,$48,$85,$4e,$85,$48,$85
	.byte $ff,$10
	.word @ref81
	.byte $ff,$10
	.word @ref82
	.byte $ff,$10
	.word @ref81
	.byte $fd
	.word @song8ch0loop

@song8ch1:
@song8ch1loop:
@ref86:
	.byte $87,$80,$3c,$85,$4a,$95,$48,$85,$54,$8d
@ref87:
	.byte $87,$3a,$85,$48,$95,$3a,$85,$48,$8d
@ref88:
	.byte $87,$3c,$85,$4a,$95,$48,$85,$54,$8d
	.byte $ff,$09
	.word @ref87
	.byte $ff,$09
	.word @ref88
	.byte $ff,$09
	.word @ref87
	.byte $fd
	.word @song8ch1loop

@song8ch2:
@song8ch2loop:
@ref92:
	.byte $82,$66,$6a,$70,$74,$6a,$6a,$6a,$66,$62,$89,$70,$6a,$67,$6b,$6a
	.byte $83,$74,$83,$70,$89
@ref93:
	.byte $6b,$62,$8d,$6a,$66,$63,$6b,$70,$83,$74,$70,$75,$70,$87,$6b,$66
	.byte $81
@ref94:
	.byte $66,$6a,$70,$74,$6a,$6a,$6a,$66,$62,$89,$70,$6a,$67,$6b,$6a,$83
	.byte $74,$83,$70,$89
	.byte $ff,$11
	.word @ref93
@ref96:
	.byte $80,$66,$8d,$6a,$85,$70,$85,$74,$8d,$6a,$85,$66,$85
@ref97:
	.byte $87,$62,$8d,$66,$85,$6a,$85,$70,$83,$74,$70,$74,$83,$6a,$85
	.byte $fd
	.word @song8ch2loop

@song8ch3:
@song8ch3loop:
@ref98:
	.byte $bf
@ref99:
	.byte $bf
@ref100:
	.byte $bf
@ref101:
	.byte $bf
@ref102:
	.byte $bf
@ref103:
	.byte $bf
	.byte $fd
	.word @song8ch3loop

@song8ch4:
@song8ch4loop:
@ref104:
	.byte $bf
@ref105:
	.byte $bf
@ref106:
	.byte $bf
@ref107:
	.byte $bf
@ref108:
	.byte $bf
@ref109:
	.byte $bf
	.byte $fd
	.word @song8ch4loop
