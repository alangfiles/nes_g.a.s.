;this file for FamiTone2 library generated by text2data tool

sfxsess_music_data:
	.byte 4
	.word @instruments
	.word @samples-3
	.word @song0ch0,@song0ch1,@song0ch2,@song0ch3,@song0ch4,307,256 ; heyou
	.word @song1ch0,@song1ch1,@song1ch2,@song1ch3,@song1ch4,307,256 ; gadzooks
	.word @song2ch0,@song2ch1,@song2ch2,@song2ch3,@song2ch4,307,256 ; fillerup
	.word @song3ch0,@song3ch1,@song3ch2,@song3ch3,@song3ch4,307,256 ; whatwasthat

@instruments:
	.byte $b0 ;instrument $00
	.word @env1,@env0,@env0
	.byte $00
	.byte $b0 ;instrument $01
	.word @env1,@env0,@env0
	.byte $00
	.byte $b0 ;instrument $02
	.word @env2,@env0,@env0
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
	.byte $00+.lobyte(FT_DPCM_PTR),$27,$06	;25
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;26
	.byte $0a+.lobyte(FT_DPCM_PTR),$3b,$06	;27
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;28
	.byte $19+.lobyte(FT_DPCM_PTR),$4d,$06	;29
	.byte $2d+.lobyte(FT_DPCM_PTR),$2e,$06	;30
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;31
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;32
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;33
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;34
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;35
	.byte $00+.lobyte(FT_DPCM_PTR),$00,$00	;36
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
	.byte $cf,$ca,$c5,$00,$02


; heyou
@song0ch0:
	.byte $fb,$06
@song0ch0loop:
@ref0:
	.byte $f9,$85
	.byte $fd
	.word @song0ch0loop

; heyou
@song0ch1:
@song0ch1loop:
@ref1:
	.byte $f9,$85
	.byte $fd
	.word @song0ch1loop

; heyou
@song0ch2:
@song0ch2loop:
@ref2:
	.byte $f9,$85
	.byte $fd
	.word @song0ch2loop

; heyou
@song0ch3:
@song0ch3loop:
@ref3:
	.byte $f9,$85
	.byte $fd
	.word @song0ch3loop

; heyou
@song0ch4:
@song0ch4loop:
@ref4:
	.byte $32,$f9,$83
	.byte $fd
	.word @song0ch4loop


; gadzooks
@song1ch0:
	.byte $fb,$06
@song1ch0loop:
@ref5:
	.byte $f9,$85
	.byte $fd
	.word @song1ch0loop

; gadzooks
@song1ch1:
@song1ch1loop:
@ref6:
	.byte $f9,$85
	.byte $fd
	.word @song1ch1loop

; gadzooks
@song1ch2:
@song1ch2loop:
@ref7:
	.byte $f9,$85
	.byte $fd
	.word @song1ch2loop

; gadzooks
@song1ch3:
@song1ch3loop:
@ref8:
	.byte $f9,$85
	.byte $fd
	.word @song1ch3loop

; gadzooks
@song1ch4:
@song1ch4loop:
@ref9:
	.byte $3a,$f9,$83
	.byte $fd
	.word @song1ch4loop


; fillerup
@song2ch0:
	.byte $fb,$06
@song2ch0loop:
@ref10:
	.byte $f9,$85
	.byte $fd
	.word @song2ch0loop

; fillerup
@song2ch1:
@song2ch1loop:
@ref11:
	.byte $f9,$85
	.byte $fd
	.word @song2ch1loop

; fillerup
@song2ch2:
@song2ch2loop:
@ref12:
	.byte $f9,$85
	.byte $fd
	.word @song2ch2loop

; fillerup
@song2ch3:
@song2ch3loop:
@ref13:
	.byte $f9,$85
	.byte $fd
	.word @song2ch3loop

; fillerup
@song2ch4:
@song2ch4loop:
@ref14:
	.byte $36,$f9,$83
	.byte $fd
	.word @song2ch4loop


; whatwasthat
@song3ch0:
	.byte $fb,$06
@song3ch0loop:
@ref15:
	.byte $f9,$85
	.byte $fd
	.word @song3ch0loop

; whatwasthat
@song3ch1:
@song3ch1loop:
@ref16:
	.byte $f9,$85
	.byte $fd
	.word @song3ch1loop

; whatwasthat
@song3ch2:
@song3ch2loop:
@ref17:
	.byte $f9,$85
	.byte $fd
	.word @song3ch2loop

; whatwasthat
@song3ch3:
@song3ch3loop:
@ref18:
	.byte $f9,$85
	.byte $fd
	.word @song3ch3loop

; whatwasthat
@song3ch4:
@song3ch4loop:
@ref19:
	.byte $3c,$f9,$83
	.byte $fd
	.word @song3ch4loop