.nds
.include "symbols.asm"

.open "arm9.bin", arm9_start
    .org DisplayExContextCallsite
    .area 0x4
        bl CustomDisplayExContext
    .endarea

    .org FatalError
    .area 0x4
        b CustomFatalError
    .endarea
.close
