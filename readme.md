Fork of https://github.com/qmk/qmk_firmware

This is Keychron firmware with an additional custom rgb animation.

One time setup:
    Use QMK MSYS to clone the repo to the QMK work dir
	qmk setup https://github.com/mmartijnNL/qmk_firmware

Update code:
	Make a code change and push to https://github.com/mmartijnNL/qmk_firmware

Compile:
	open git bash in folder
		C:\Users\MRDR\qmk_firmware_custom
		git pull
	Use QMK MSYS
		qmk compile -kb keychron/q11/ansi_encoder -km via

Flash: 
	Open QMK Toolbox
	Connect only one half while holding the little button under the spacebar
    flash
    C:\Users\MRDR\qmk_firmware_custom\keychron_q11_ansi_encoder_via.bin
	
Update layout:
	Connect only one half
	Open VIA
	load layout keychron_q11_ansi_knob.layout.json
	repeat for other half
