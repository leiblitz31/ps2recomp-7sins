#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034FD58
// Address: 0x34fd58 - 0x3501a8
void sub_0034FD58_0x34fd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FD58_0x34fd58");
#endif

    switch (ctx->pc) {
        case 0x34fd58u: goto label_34fd58;
        case 0x34fd5cu: goto label_34fd5c;
        case 0x34fd60u: goto label_34fd60;
        case 0x34fd64u: goto label_34fd64;
        case 0x34fd68u: goto label_34fd68;
        case 0x34fd6cu: goto label_34fd6c;
        case 0x34fd70u: goto label_34fd70;
        case 0x34fd74u: goto label_34fd74;
        case 0x34fd78u: goto label_34fd78;
        case 0x34fd7cu: goto label_34fd7c;
        case 0x34fd80u: goto label_34fd80;
        case 0x34fd84u: goto label_34fd84;
        case 0x34fd88u: goto label_34fd88;
        case 0x34fd8cu: goto label_34fd8c;
        case 0x34fd90u: goto label_34fd90;
        case 0x34fd94u: goto label_34fd94;
        case 0x34fd98u: goto label_34fd98;
        case 0x34fd9cu: goto label_34fd9c;
        case 0x34fda0u: goto label_34fda0;
        case 0x34fda4u: goto label_34fda4;
        case 0x34fda8u: goto label_34fda8;
        case 0x34fdacu: goto label_34fdac;
        case 0x34fdb0u: goto label_34fdb0;
        case 0x34fdb4u: goto label_34fdb4;
        case 0x34fdb8u: goto label_34fdb8;
        case 0x34fdbcu: goto label_34fdbc;
        case 0x34fdc0u: goto label_34fdc0;
        case 0x34fdc4u: goto label_34fdc4;
        case 0x34fdc8u: goto label_34fdc8;
        case 0x34fdccu: goto label_34fdcc;
        case 0x34fdd0u: goto label_34fdd0;
        case 0x34fdd4u: goto label_34fdd4;
        case 0x34fdd8u: goto label_34fdd8;
        case 0x34fddcu: goto label_34fddc;
        case 0x34fde0u: goto label_34fde0;
        case 0x34fde4u: goto label_34fde4;
        case 0x34fde8u: goto label_34fde8;
        case 0x34fdecu: goto label_34fdec;
        case 0x34fdf0u: goto label_34fdf0;
        case 0x34fdf4u: goto label_34fdf4;
        case 0x34fdf8u: goto label_34fdf8;
        case 0x34fdfcu: goto label_34fdfc;
        case 0x34fe00u: goto label_34fe00;
        case 0x34fe04u: goto label_34fe04;
        case 0x34fe08u: goto label_34fe08;
        case 0x34fe0cu: goto label_34fe0c;
        case 0x34fe10u: goto label_34fe10;
        case 0x34fe14u: goto label_34fe14;
        case 0x34fe18u: goto label_34fe18;
        case 0x34fe1cu: goto label_34fe1c;
        case 0x34fe20u: goto label_34fe20;
        case 0x34fe24u: goto label_34fe24;
        case 0x34fe28u: goto label_34fe28;
        case 0x34fe2cu: goto label_34fe2c;
        case 0x34fe30u: goto label_34fe30;
        case 0x34fe34u: goto label_34fe34;
        case 0x34fe38u: goto label_34fe38;
        case 0x34fe3cu: goto label_34fe3c;
        case 0x34fe40u: goto label_34fe40;
        case 0x34fe44u: goto label_34fe44;
        case 0x34fe48u: goto label_34fe48;
        case 0x34fe4cu: goto label_34fe4c;
        case 0x34fe50u: goto label_34fe50;
        case 0x34fe54u: goto label_34fe54;
        case 0x34fe58u: goto label_34fe58;
        case 0x34fe5cu: goto label_34fe5c;
        case 0x34fe60u: goto label_34fe60;
        case 0x34fe64u: goto label_34fe64;
        case 0x34fe68u: goto label_34fe68;
        case 0x34fe6cu: goto label_34fe6c;
        case 0x34fe70u: goto label_34fe70;
        case 0x34fe74u: goto label_34fe74;
        case 0x34fe78u: goto label_34fe78;
        case 0x34fe7cu: goto label_34fe7c;
        case 0x34fe80u: goto label_34fe80;
        case 0x34fe84u: goto label_34fe84;
        case 0x34fe88u: goto label_34fe88;
        case 0x34fe8cu: goto label_34fe8c;
        case 0x34fe90u: goto label_34fe90;
        case 0x34fe94u: goto label_34fe94;
        case 0x34fe98u: goto label_34fe98;
        case 0x34fe9cu: goto label_34fe9c;
        case 0x34fea0u: goto label_34fea0;
        case 0x34fea4u: goto label_34fea4;
        case 0x34fea8u: goto label_34fea8;
        case 0x34feacu: goto label_34feac;
        case 0x34feb0u: goto label_34feb0;
        case 0x34feb4u: goto label_34feb4;
        case 0x34feb8u: goto label_34feb8;
        case 0x34febcu: goto label_34febc;
        case 0x34fec0u: goto label_34fec0;
        case 0x34fec4u: goto label_34fec4;
        case 0x34fec8u: goto label_34fec8;
        case 0x34feccu: goto label_34fecc;
        case 0x34fed0u: goto label_34fed0;
        case 0x34fed4u: goto label_34fed4;
        case 0x34fed8u: goto label_34fed8;
        case 0x34fedcu: goto label_34fedc;
        case 0x34fee0u: goto label_34fee0;
        case 0x34fee4u: goto label_34fee4;
        case 0x34fee8u: goto label_34fee8;
        case 0x34feecu: goto label_34feec;
        case 0x34fef0u: goto label_34fef0;
        case 0x34fef4u: goto label_34fef4;
        case 0x34fef8u: goto label_34fef8;
        case 0x34fefcu: goto label_34fefc;
        case 0x34ff00u: goto label_34ff00;
        case 0x34ff04u: goto label_34ff04;
        case 0x34ff08u: goto label_34ff08;
        case 0x34ff0cu: goto label_34ff0c;
        case 0x34ff10u: goto label_34ff10;
        case 0x34ff14u: goto label_34ff14;
        case 0x34ff18u: goto label_34ff18;
        case 0x34ff1cu: goto label_34ff1c;
        case 0x34ff20u: goto label_34ff20;
        case 0x34ff24u: goto label_34ff24;
        case 0x34ff28u: goto label_34ff28;
        case 0x34ff2cu: goto label_34ff2c;
        case 0x34ff30u: goto label_34ff30;
        case 0x34ff34u: goto label_34ff34;
        case 0x34ff38u: goto label_34ff38;
        case 0x34ff3cu: goto label_34ff3c;
        case 0x34ff40u: goto label_34ff40;
        case 0x34ff44u: goto label_34ff44;
        case 0x34ff48u: goto label_34ff48;
        case 0x34ff4cu: goto label_34ff4c;
        case 0x34ff50u: goto label_34ff50;
        case 0x34ff54u: goto label_34ff54;
        case 0x34ff58u: goto label_34ff58;
        case 0x34ff5cu: goto label_34ff5c;
        case 0x34ff60u: goto label_34ff60;
        case 0x34ff64u: goto label_34ff64;
        case 0x34ff68u: goto label_34ff68;
        case 0x34ff6cu: goto label_34ff6c;
        case 0x34ff70u: goto label_34ff70;
        case 0x34ff74u: goto label_34ff74;
        case 0x34ff78u: goto label_34ff78;
        case 0x34ff7cu: goto label_34ff7c;
        case 0x34ff80u: goto label_34ff80;
        case 0x34ff84u: goto label_34ff84;
        case 0x34ff88u: goto label_34ff88;
        case 0x34ff8cu: goto label_34ff8c;
        case 0x34ff90u: goto label_34ff90;
        case 0x34ff94u: goto label_34ff94;
        case 0x34ff98u: goto label_34ff98;
        case 0x34ff9cu: goto label_34ff9c;
        case 0x34ffa0u: goto label_34ffa0;
        case 0x34ffa4u: goto label_34ffa4;
        case 0x34ffa8u: goto label_34ffa8;
        case 0x34ffacu: goto label_34ffac;
        case 0x34ffb0u: goto label_34ffb0;
        case 0x34ffb4u: goto label_34ffb4;
        case 0x34ffb8u: goto label_34ffb8;
        case 0x34ffbcu: goto label_34ffbc;
        case 0x34ffc0u: goto label_34ffc0;
        case 0x34ffc4u: goto label_34ffc4;
        case 0x34ffc8u: goto label_34ffc8;
        case 0x34ffccu: goto label_34ffcc;
        case 0x34ffd0u: goto label_34ffd0;
        case 0x34ffd4u: goto label_34ffd4;
        case 0x34ffd8u: goto label_34ffd8;
        case 0x34ffdcu: goto label_34ffdc;
        case 0x34ffe0u: goto label_34ffe0;
        case 0x34ffe4u: goto label_34ffe4;
        case 0x34ffe8u: goto label_34ffe8;
        case 0x34ffecu: goto label_34ffec;
        case 0x34fff0u: goto label_34fff0;
        case 0x34fff4u: goto label_34fff4;
        case 0x34fff8u: goto label_34fff8;
        case 0x34fffcu: goto label_34fffc;
        case 0x350000u: goto label_350000;
        case 0x350004u: goto label_350004;
        case 0x350008u: goto label_350008;
        case 0x35000cu: goto label_35000c;
        case 0x350010u: goto label_350010;
        case 0x350014u: goto label_350014;
        case 0x350018u: goto label_350018;
        case 0x35001cu: goto label_35001c;
        case 0x350020u: goto label_350020;
        case 0x350024u: goto label_350024;
        case 0x350028u: goto label_350028;
        case 0x35002cu: goto label_35002c;
        case 0x350030u: goto label_350030;
        case 0x350034u: goto label_350034;
        case 0x350038u: goto label_350038;
        case 0x35003cu: goto label_35003c;
        case 0x350040u: goto label_350040;
        case 0x350044u: goto label_350044;
        case 0x350048u: goto label_350048;
        case 0x35004cu: goto label_35004c;
        case 0x350050u: goto label_350050;
        case 0x350054u: goto label_350054;
        case 0x350058u: goto label_350058;
        case 0x35005cu: goto label_35005c;
        case 0x350060u: goto label_350060;
        case 0x350064u: goto label_350064;
        case 0x350068u: goto label_350068;
        case 0x35006cu: goto label_35006c;
        case 0x350070u: goto label_350070;
        case 0x350074u: goto label_350074;
        case 0x350078u: goto label_350078;
        case 0x35007cu: goto label_35007c;
        case 0x350080u: goto label_350080;
        case 0x350084u: goto label_350084;
        case 0x350088u: goto label_350088;
        case 0x35008cu: goto label_35008c;
        case 0x350090u: goto label_350090;
        case 0x350094u: goto label_350094;
        case 0x350098u: goto label_350098;
        case 0x35009cu: goto label_35009c;
        case 0x3500a0u: goto label_3500a0;
        case 0x3500a4u: goto label_3500a4;
        case 0x3500a8u: goto label_3500a8;
        case 0x3500acu: goto label_3500ac;
        case 0x3500b0u: goto label_3500b0;
        case 0x3500b4u: goto label_3500b4;
        case 0x3500b8u: goto label_3500b8;
        case 0x3500bcu: goto label_3500bc;
        case 0x3500c0u: goto label_3500c0;
        case 0x3500c4u: goto label_3500c4;
        case 0x3500c8u: goto label_3500c8;
        case 0x3500ccu: goto label_3500cc;
        case 0x3500d0u: goto label_3500d0;
        case 0x3500d4u: goto label_3500d4;
        case 0x3500d8u: goto label_3500d8;
        case 0x3500dcu: goto label_3500dc;
        case 0x3500e0u: goto label_3500e0;
        case 0x3500e4u: goto label_3500e4;
        case 0x3500e8u: goto label_3500e8;
        case 0x3500ecu: goto label_3500ec;
        case 0x3500f0u: goto label_3500f0;
        case 0x3500f4u: goto label_3500f4;
        case 0x3500f8u: goto label_3500f8;
        case 0x3500fcu: goto label_3500fc;
        case 0x350100u: goto label_350100;
        case 0x350104u: goto label_350104;
        case 0x350108u: goto label_350108;
        case 0x35010cu: goto label_35010c;
        case 0x350110u: goto label_350110;
        case 0x350114u: goto label_350114;
        case 0x350118u: goto label_350118;
        case 0x35011cu: goto label_35011c;
        case 0x350120u: goto label_350120;
        case 0x350124u: goto label_350124;
        case 0x350128u: goto label_350128;
        case 0x35012cu: goto label_35012c;
        case 0x350130u: goto label_350130;
        case 0x350134u: goto label_350134;
        case 0x350138u: goto label_350138;
        case 0x35013cu: goto label_35013c;
        case 0x350140u: goto label_350140;
        case 0x350144u: goto label_350144;
        case 0x350148u: goto label_350148;
        case 0x35014cu: goto label_35014c;
        case 0x350150u: goto label_350150;
        case 0x350154u: goto label_350154;
        case 0x350158u: goto label_350158;
        case 0x35015cu: goto label_35015c;
        case 0x350160u: goto label_350160;
        case 0x350164u: goto label_350164;
        case 0x350168u: goto label_350168;
        case 0x35016cu: goto label_35016c;
        case 0x350170u: goto label_350170;
        case 0x350174u: goto label_350174;
        case 0x350178u: goto label_350178;
        case 0x35017cu: goto label_35017c;
        case 0x350180u: goto label_350180;
        case 0x350184u: goto label_350184;
        case 0x350188u: goto label_350188;
        case 0x35018cu: goto label_35018c;
        case 0x350190u: goto label_350190;
        case 0x350194u: goto label_350194;
        case 0x350198u: goto label_350198;
        case 0x35019cu: goto label_35019c;
        case 0x3501a0u: goto label_3501a0;
        case 0x3501a4u: goto label_3501a4;
        default: break;
    }

    ctx->pc = 0x34fd58u;

label_34fd58:
    // 0x34fd58: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x34fd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_34fd5c:
    // 0x34fd5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x34fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_34fd60:
    // 0x34fd60: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x34fd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_34fd64:
    // 0x34fd64: 0x3442fe00  ori         $v0, $v0, 0xFE00
    ctx->pc = 0x34fd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65024);
label_34fd68:
    // 0x34fd68: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x34fd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_34fd6c:
    // 0x34fd6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34fd6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34fd70:
    // 0x34fd70: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x34fd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_34fd74:
    // 0x34fd74: 0x55203  sra         $t2, $a1, 8
    ctx->pc = 0x34fd74u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 8));
label_34fd78:
    // 0x34fd78: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x34fd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_34fd7c:
    // 0x34fd7c: 0x590c3  sra         $s2, $a1, 3
    ctx->pc = 0x34fd7cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 3));
label_34fd80:
    // 0x34fd80: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x34fd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_34fd84:
    // 0x34fd84: 0x5a083  sra         $s4, $a1, 2
    ctx->pc = 0x34fd84u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 2));
label_34fd88:
    // 0x34fd88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x34fd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_34fd8c:
    // 0x34fd8c: 0x5a843  sra         $s5, $a1, 1
    ctx->pc = 0x34fd8cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 1));
label_34fd90:
    // 0x34fd90: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x34fd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_34fd94:
    // 0x34fd94: 0x59903  sra         $s3, $a1, 4
    ctx->pc = 0x34fd94u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 4));
label_34fd98:
    // 0x34fd98: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x34fd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_34fd9c:
    // 0x34fd9c: 0x5b983  sra         $s7, $a1, 6
    ctx->pc = 0x34fd9cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 5), 6));
label_34fda0:
    // 0x34fda0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x34fda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_34fda4:
    // 0x34fda4: 0x5f143  sra         $fp, $a1, 5
    ctx->pc = 0x34fda4u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 5), 5));
label_34fda8:
    // 0x34fda8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34fda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_34fdac:
    // 0x34fdac: 0x549c3  sra         $t1, $a1, 7
    ctx->pc = 0x34fdacu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 7));
label_34fdb0:
    // 0x34fdb0: 0x30b60001  andi        $s6, $a1, 0x1
    ctx->pc = 0x34fdb0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_34fdb4:
    // 0x34fdb4: 0x32b50001  andi        $s5, $s5, 0x1
    ctx->pc = 0x34fdb4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_34fdb8:
    // 0x34fdb8: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x34fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_34fdbc:
    // 0x34fdbc: 0x32940001  andi        $s4, $s4, 0x1
    ctx->pc = 0x34fdbcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_34fdc0:
    // 0x34fdc0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x34fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_34fdc4:
    // 0x34fdc4: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x34fdc4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_34fdc8:
    // 0x34fdc8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x34fdc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_34fdcc:
    // 0x34fdcc: 0x32730001  andi        $s3, $s3, 0x1
    ctx->pc = 0x34fdccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_34fdd0:
    // 0x34fdd0: 0x33de0001  andi        $fp, $fp, 0x1
    ctx->pc = 0x34fdd0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_34fdd4:
    // 0x34fdd4: 0x32f70001  andi        $s7, $s7, 0x1
    ctx->pc = 0x34fdd4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_34fdd8:
    // 0x34fdd8: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x34fdd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_34fddc:
    // 0x34fddc: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x34fddcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_34fde0:
    // 0x34fde0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34fde0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34fde4:
    // 0x34fde4: 0xae0700a8  sw          $a3, 0xA8($s0)
    ctx->pc = 0x34fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 7));
label_34fde8:
    // 0x34fde8: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x34fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_34fdec:
    // 0x34fdec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34fdf0:
    // 0x34fdf0: 0x16c20009  bne         $s6, $v0, . + 4 + (0x9 << 2)
label_34fdf4:
    if (ctx->pc == 0x34FDF4u) {
        ctx->pc = 0x34FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FDF0u;
        // 0x34fdf4: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FDF8u;
        goto label_34fdf8;
    }
    ctx->pc = 0x34FDF0u;
    {
        const bool branch_taken_0x34fdf0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x34FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FDF0u;
        // 0x34fdf4: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fdf0) {
            ctx->pc = 0x34FE18u;
            goto label_34fe18;
        }
    }
    ctx->pc = 0x34FDF8u;
label_34fdf8:
    // 0x34fdf8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_34fdfc:
    // 0x34fdfc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x34fdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34fe00:
    // 0x34fe00: 0x8c64b950  lw          $a0, -0x46B0($v1)
    ctx->pc = 0x34fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949200)));
label_34fe04:
    // 0x34fe04: 0x34e20001  ori         $v0, $a3, 0x1
    ctx->pc = 0x34fe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
label_34fe08:
    // 0x34fe08: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x34fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_34fe0c:
    // 0x34fe0c: 0x853018  mult        $a2, $a0, $a1
    ctx->pc = 0x34fe0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_34fe10:
    // 0x34fe10: 0xae1600a0  sw          $s6, 0xA0($s0)
    ctx->pc = 0x34fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 22));
label_34fe14:
    // 0x34fe14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34fe18:
    // 0x34fe18: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
label_34fe1c:
    if (ctx->pc == 0x34FE1Cu) {
        ctx->pc = 0x34FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE18u;
        // 0x34fe1c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FE20u;
        goto label_34fe20;
    }
    ctx->pc = 0x34FE18u;
    {
        const bool branch_taken_0x34fe18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x34FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE18u;
        // 0x34fe1c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fe18) {
            ctx->pc = 0x34FE4Cu;
            goto label_34fe4c;
        }
    }
    ctx->pc = 0x34FE20u;
label_34fe20:
    // 0x34fe20: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x34fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34fe24:
    // 0x34fe24: 0x8c64b954  lw          $a0, -0x46AC($v1)
    ctx->pc = 0x34fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949204)));
label_34fe28:
    // 0x34fe28: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x34fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_34fe2c:
    // 0x34fe2c: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x34fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_34fe30:
    // 0x34fe30: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x34fe30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_34fe34:
    // 0x34fe34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34fe38:
    // 0x34fe38: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x34fe38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_34fe3c:
    // 0x34fe3c: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x34fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_34fe40:
    // 0x34fe40: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x34fe40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_34fe44:
    // 0x34fe44: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x34fe44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_34fe48:
    // 0x34fe48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34fe4c:
    // 0x34fe4c: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
label_34fe50:
    if (ctx->pc == 0x34FE50u) {
        ctx->pc = 0x34FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE4Cu;
        // 0x34fe50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FE54u;
        goto label_34fe54;
    }
    ctx->pc = 0x34FE4Cu;
    {
        const bool branch_taken_0x34fe4c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x34FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE4Cu;
        // 0x34fe50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fe4c) {
            ctx->pc = 0x34FE84u;
            goto label_34fe84;
        }
    }
    ctx->pc = 0x34FE54u;
label_34fe54:
    // 0x34fe54: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_34fe58:
    // 0x34fe58: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x34fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34fe5c:
    // 0x34fe5c: 0x8c64b958  lw          $a0, -0x46A8($v1)
    ctx->pc = 0x34fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949208)));
label_34fe60:
    // 0x34fe60: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x34fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_34fe64:
    // 0x34fe64: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x34fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_34fe68:
    // 0x34fe68: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x34fe68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_34fe6c:
    // 0x34fe6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34fe70:
    // 0x34fe70: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x34fe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_34fe74:
    // 0x34fe74: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x34fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_34fe78:
    // 0x34fe78: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x34fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_34fe7c:
    // 0x34fe7c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x34fe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_34fe80:
    // 0x34fe80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34fe84:
    // 0x34fe84: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
label_34fe88:
    if (ctx->pc == 0x34FE88u) {
        ctx->pc = 0x34FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE84u;
        // 0x34fe88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FE8Cu;
        goto label_34fe8c;
    }
    ctx->pc = 0x34FE84u;
    {
        const bool branch_taken_0x34fe84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x34FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE84u;
        // 0x34fe88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fe84) {
            ctx->pc = 0x34FEBCu;
            goto label_34febc;
        }
    }
    ctx->pc = 0x34FE8Cu;
label_34fe8c:
    // 0x34fe8c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_34fe90:
    // 0x34fe90: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x34fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34fe94:
    // 0x34fe94: 0x8c64b95c  lw          $a0, -0x46A4($v1)
    ctx->pc = 0x34fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949212)));
label_34fe98:
    // 0x34fe98: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x34fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_34fe9c:
    // 0x34fe9c: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x34fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_34fea0:
    // 0x34fea0: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x34fea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_34fea4:
    // 0x34fea4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34fea8:
    // 0x34fea8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x34fea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_34feac:
    // 0x34feac: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x34feacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_34feb0:
    // 0x34feb0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x34feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_34feb4:
    // 0x34feb4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x34feb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_34feb8:
    // 0x34feb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34febc:
    // 0x34febc: 0x16a2000d  bne         $s5, $v0, . + 4 + (0xD << 2)
label_34fec0:
    if (ctx->pc == 0x34FEC0u) {
        ctx->pc = 0x34FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FEBCu;
        // 0x34fec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FEC4u;
        goto label_34fec4;
    }
    ctx->pc = 0x34FEBCu;
    {
        const bool branch_taken_0x34febc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x34FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FEBCu;
        // 0x34fec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34febc) {
            ctx->pc = 0x34FEF4u;
            goto label_34fef4;
        }
    }
    ctx->pc = 0x34FEC4u;
label_34fec4:
    // 0x34fec4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_34fec8:
    // 0x34fec8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x34fec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34fecc:
    // 0x34fecc: 0x8c64b960  lw          $a0, -0x46A0($v1)
    ctx->pc = 0x34feccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949216)));
label_34fed0:
    // 0x34fed0: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x34fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_34fed4:
    // 0x34fed4: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x34fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_34fed8:
    // 0x34fed8: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x34fed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_34fedc:
    // 0x34fedc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34fee0:
    // 0x34fee0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x34fee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_34fee4:
    // 0x34fee4: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x34fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_34fee8:
    // 0x34fee8: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x34fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_34feec:
    // 0x34feec: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x34feecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_34fef0:
    // 0x34fef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34fef4:
    // 0x34fef4: 0x16e2000d  bne         $s7, $v0, . + 4 + (0xD << 2)
label_34fef8:
    if (ctx->pc == 0x34FEF8u) {
        ctx->pc = 0x34FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FEF4u;
        // 0x34fef8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FEFCu;
        goto label_34fefc;
    }
    ctx->pc = 0x34FEF4u;
    {
        const bool branch_taken_0x34fef4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x34FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FEF4u;
        // 0x34fef8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fef4) {
            ctx->pc = 0x34FF2Cu;
            goto label_34ff2c;
        }
    }
    ctx->pc = 0x34FEFCu;
label_34fefc:
    // 0x34fefc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_34ff00:
    // 0x34ff00: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x34ff00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34ff04:
    // 0x34ff04: 0x8c64b964  lw          $a0, -0x469C($v1)
    ctx->pc = 0x34ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949220)));
label_34ff08:
    // 0x34ff08: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x34ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_34ff0c:
    // 0x34ff0c: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x34ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_34ff10:
    // 0x34ff10: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x34ff10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_34ff14:
    // 0x34ff14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34ff18:
    // 0x34ff18: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x34ff18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_34ff1c:
    // 0x34ff1c: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x34ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_34ff20:
    // 0x34ff20: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x34ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_34ff24:
    // 0x34ff24: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x34ff24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_34ff28:
    // 0x34ff28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34ff2c:
    // 0x34ff2c: 0x17c2000d  bne         $fp, $v0, . + 4 + (0xD << 2)
label_34ff30:
    if (ctx->pc == 0x34FF30u) {
        ctx->pc = 0x34FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FF2Cu;
        // 0x34ff30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FF34u;
        goto label_34ff34;
    }
    ctx->pc = 0x34FF2Cu;
    {
        const bool branch_taken_0x34ff2c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x34FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FF2Cu;
        // 0x34ff30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ff2c) {
            ctx->pc = 0x34FF64u;
            goto label_34ff64;
        }
    }
    ctx->pc = 0x34FF34u;
label_34ff34:
    // 0x34ff34: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_34ff38:
    // 0x34ff38: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x34ff38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34ff3c:
    // 0x34ff3c: 0x8c64b968  lw          $a0, -0x4698($v1)
    ctx->pc = 0x34ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949224)));
label_34ff40:
    // 0x34ff40: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x34ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_34ff44:
    // 0x34ff44: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x34ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_34ff48:
    // 0x34ff48: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x34ff48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_34ff4c:
    // 0x34ff4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34ff50:
    // 0x34ff50: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x34ff50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_34ff54:
    // 0x34ff54: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x34ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_34ff58:
    // 0x34ff58: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x34ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_34ff5c:
    // 0x34ff5c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x34ff5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_34ff60:
    // 0x34ff60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34ff64:
    // 0x34ff64: 0x1522000c  bne         $t1, $v0, . + 4 + (0xC << 2)
label_34ff68:
    if (ctx->pc == 0x34FF68u) {
        ctx->pc = 0x34FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FF64u;
        // 0x34ff68: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FF6Cu;
        goto label_34ff6c;
    }
    ctx->pc = 0x34FF64u;
    {
        const bool branch_taken_0x34ff64 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x34FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FF64u;
        // 0x34ff68: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ff64) {
            ctx->pc = 0x34FF98u;
            goto label_34ff98;
        }
    }
    ctx->pc = 0x34FF6Cu;
label_34ff6c:
    // 0x34ff6c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_34ff70:
    // 0x34ff70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x34ff70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34ff74:
    // 0x34ff74: 0x8c64b96c  lw          $a0, -0x4694($v1)
    ctx->pc = 0x34ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949228)));
label_34ff78:
    // 0x34ff78: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x34ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_34ff7c:
    // 0x34ff7c: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x34ff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_34ff80:
    // 0x34ff80: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x34ff80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_34ff84:
    // 0x34ff84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34ff88:
    // 0x34ff88: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x34ff88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_34ff8c:
    // 0x34ff8c: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x34ff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_34ff90:
    // 0x34ff90: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x34ff90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_34ff94:
    // 0x34ff94: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x34ff94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_34ff98:
    // 0x34ff98: 0x1551000d  bne         $t2, $s1, . + 4 + (0xD << 2)
label_34ff9c:
    if (ctx->pc == 0x34FF9Cu) {
        ctx->pc = 0x34FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FF98u;
        // 0x34ff9c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FFA0u;
        goto label_34ffa0;
    }
    ctx->pc = 0x34FF98u;
    {
        const bool branch_taken_0x34ff98 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 17));
        ctx->pc = 0x34FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FF98u;
        // 0x34ff9c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ff98) {
            ctx->pc = 0x34FFD0u;
            goto label_34ffd0;
        }
    }
    ctx->pc = 0x34FFA0u;
label_34ffa0:
    // 0x34ffa0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_34ffa4:
    // 0x34ffa4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x34ffa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34ffa8:
    // 0x34ffa8: 0x8c64b970  lw          $a0, -0x4690($v1)
    ctx->pc = 0x34ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949232)));
label_34ffac:
    // 0x34ffac: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x34ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_34ffb0:
    // 0x34ffb0: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x34ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_34ffb4:
    // 0x34ffb4: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x34ffb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_34ffb8:
    // 0x34ffb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34ffbc:
    // 0x34ffbc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x34ffbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_34ffc0:
    // 0x34ffc0: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x34ffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_34ffc4:
    // 0x34ffc4: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x34ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_34ffc8:
    // 0x34ffc8: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x34ffc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_34ffcc:
    // 0x34ffcc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x34ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_34ffd0:
    // 0x34ffd0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x34ffd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_34ffd4:
    // 0x34ffd4: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x34ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_34ffd8:
    // 0x34ffd8: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x34ffd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_34ffdc:
    // 0x34ffdc: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x34ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
label_34ffe0:
    // 0x34ffe0: 0x34a5012f  ori         $a1, $a1, 0x12F
    ctx->pc = 0x34ffe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
label_34ffe4:
    // 0x34ffe4: 0x40f809  jalr        $v0
label_34ffe8:
    if (ctx->pc == 0x34FFE8u) {
        ctx->pc = 0x34FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FFE4u;
        // 0x34ffe8: 0x7faa0020  sq          $t2, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FFECu;
        goto label_34ffec;
    }
    ctx->pc = 0x34FFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34FFECu);
        ctx->pc = 0x34FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FFE4u;
        // 0x34ffe8: 0x7faa0020  sq          $t2, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FFE4u, 0x34FFECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34FFECu;
label_34ffec:
    // 0x34ffec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x34ffecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34fff0:
    // 0x34fff0: 0x7ba90010  lq          $t1, 0x10($sp)
    ctx->pc = 0x34fff0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34fff4:
    // 0x34fff4: 0x1100005e  beqz        $t0, . + 4 + (0x5E << 2)
label_34fff8:
    if (ctx->pc == 0x34FFF8u) {
        ctx->pc = 0x34FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FFF4u;
        // 0x34fff8: 0x7baa0020  lq          $t2, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FFFCu;
        goto label_34fffc;
    }
    ctx->pc = 0x34FFF4u;
    {
        const bool branch_taken_0x34fff4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FFF4u;
        // 0x34fff8: 0x7baa0020  lq          $t2, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fff4) {
            ctx->pc = 0x350170u;
            goto label_350170;
        }
    }
    ctx->pc = 0x34FFFCu;
label_34fffc:
    // 0x34fffc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x34fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_350000:
    // 0x350000: 0x2503000f  addiu       $v1, $t0, 0xF
    ctx->pc = 0x350000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
label_350004:
    // 0x350004: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x350004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_350008:
    // 0x350008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x350008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35000c:
    // 0x35000c: 0x16d10008  bne         $s6, $s1, . + 4 + (0x8 << 2)
label_350010:
    if (ctx->pc == 0x350010u) {
        ctx->pc = 0x350010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35000Cu;
        // 0x350010: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350014u;
        goto label_350014;
    }
    ctx->pc = 0x35000Cu;
    {
        const bool branch_taken_0x35000c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 17));
        ctx->pc = 0x350010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35000Cu;
        // 0x350010: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35000c) {
            ctx->pc = 0x350030u;
            goto label_350030;
        }
    }
    ctx->pc = 0x350014u;
label_350014:
    // 0x350014: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x350014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_350018:
    // 0x350018: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x350018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_35001c:
    // 0x35001c: 0x8c64b950  lw          $a0, -0x46B0($v1)
    ctx->pc = 0x35001cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949200)));
label_350020:
    // 0x350020: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x350020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_350024:
    // 0x350024: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x350024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_350028:
    // 0x350028: 0x853018  mult        $a2, $a0, $a1
    ctx->pc = 0x350028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_35002c:
    // 0x35002c: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x35002cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_350030:
    // 0x350030: 0x16510009  bne         $s2, $s1, . + 4 + (0x9 << 2)
label_350034:
    if (ctx->pc == 0x350034u) {
        ctx->pc = 0x350034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350030u;
        // 0x350034: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350038u;
        goto label_350038;
    }
    ctx->pc = 0x350030u;
    {
        const bool branch_taken_0x350030 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x350034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350030u;
        // 0x350034: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350030) {
            ctx->pc = 0x350058u;
            goto label_350058;
        }
    }
    ctx->pc = 0x350038u;
label_350038:
    // 0x350038: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x350038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_35003c:
    // 0x35003c: 0x8c44b954  lw          $a0, -0x46AC($v0)
    ctx->pc = 0x35003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949204)));
label_350040:
    // 0x350040: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x350040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_350044:
    // 0x350044: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x350044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_350048:
    // 0x350048: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x350048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_35004c:
    // 0x35004c: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x35004cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_350050:
    // 0x350050: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x350050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_350054:
    // 0x350054: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x350054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_350058:
    // 0x350058: 0x16710009  bne         $s3, $s1, . + 4 + (0x9 << 2)
label_35005c:
    if (ctx->pc == 0x35005Cu) {
        ctx->pc = 0x35005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350058u;
        // 0x35005c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350060u;
        goto label_350060;
    }
    ctx->pc = 0x350058u;
    {
        const bool branch_taken_0x350058 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x35005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350058u;
        // 0x35005c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350058) {
            ctx->pc = 0x350080u;
            goto label_350080;
        }
    }
    ctx->pc = 0x350060u;
label_350060:
    // 0x350060: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x350060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_350064:
    // 0x350064: 0x8c44b958  lw          $a0, -0x46A8($v0)
    ctx->pc = 0x350064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949208)));
label_350068:
    // 0x350068: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x350068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_35006c:
    // 0x35006c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x35006cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_350070:
    // 0x350070: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x350070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_350074:
    // 0x350074: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x350074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_350078:
    // 0x350078: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x350078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_35007c:
    // 0x35007c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x35007cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_350080:
    // 0x350080: 0x16910009  bne         $s4, $s1, . + 4 + (0x9 << 2)
label_350084:
    if (ctx->pc == 0x350084u) {
        ctx->pc = 0x350084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350080u;
        // 0x350084: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350088u;
        goto label_350088;
    }
    ctx->pc = 0x350080u;
    {
        const bool branch_taken_0x350080 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 17));
        ctx->pc = 0x350084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350080u;
        // 0x350084: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350080) {
            ctx->pc = 0x3500A8u;
            goto label_3500a8;
        }
    }
    ctx->pc = 0x350088u;
label_350088:
    // 0x350088: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x350088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_35008c:
    // 0x35008c: 0x8c44b95c  lw          $a0, -0x46A4($v0)
    ctx->pc = 0x35008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949212)));
label_350090:
    // 0x350090: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x350090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_350094:
    // 0x350094: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x350094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_350098:
    // 0x350098: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x350098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_35009c:
    // 0x35009c: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x35009cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3500a0:
    // 0x3500a0: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x3500a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_3500a4:
    // 0x3500a4: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x3500a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3500a8:
    // 0x3500a8: 0x16b10009  bne         $s5, $s1, . + 4 + (0x9 << 2)
label_3500ac:
    if (ctx->pc == 0x3500ACu) {
        ctx->pc = 0x3500ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3500A8u;
        // 0x3500ac: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3500B0u;
        goto label_3500b0;
    }
    ctx->pc = 0x3500A8u;
    {
        const bool branch_taken_0x3500a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        ctx->pc = 0x3500ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3500A8u;
        // 0x3500ac: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3500a8) {
            ctx->pc = 0x3500D0u;
            goto label_3500d0;
        }
    }
    ctx->pc = 0x3500B0u;
label_3500b0:
    // 0x3500b0: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x3500b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3500b4:
    // 0x3500b4: 0x8c44b960  lw          $a0, -0x46A0($v0)
    ctx->pc = 0x3500b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949216)));
label_3500b8:
    // 0x3500b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3500b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3500bc:
    // 0x3500bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3500bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3500c0:
    // 0x3500c0: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x3500c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_3500c4:
    // 0x3500c4: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x3500c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3500c8:
    // 0x3500c8: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x3500c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_3500cc:
    // 0x3500cc: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x3500ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3500d0:
    // 0x3500d0: 0x16f10009  bne         $s7, $s1, . + 4 + (0x9 << 2)
label_3500d4:
    if (ctx->pc == 0x3500D4u) {
        ctx->pc = 0x3500D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3500D0u;
        // 0x3500d4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3500D8u;
        goto label_3500d8;
    }
    ctx->pc = 0x3500D0u;
    {
        const bool branch_taken_0x3500d0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 17));
        ctx->pc = 0x3500D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3500D0u;
        // 0x3500d4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3500d0) {
            ctx->pc = 0x3500F8u;
            goto label_3500f8;
        }
    }
    ctx->pc = 0x3500D8u;
label_3500d8:
    // 0x3500d8: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x3500d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3500dc:
    // 0x3500dc: 0x8c44b964  lw          $a0, -0x469C($v0)
    ctx->pc = 0x3500dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949220)));
label_3500e0:
    // 0x3500e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3500e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3500e4:
    // 0x3500e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3500e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3500e8:
    // 0x3500e8: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x3500e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
label_3500ec:
    // 0x3500ec: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x3500ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3500f0:
    // 0x3500f0: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3500f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3500f4:
    // 0x3500f4: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x3500f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3500f8:
    // 0x3500f8: 0x17d10009  bne         $fp, $s1, . + 4 + (0x9 << 2)
label_3500fc:
    if (ctx->pc == 0x3500FCu) {
        ctx->pc = 0x3500FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3500F8u;
        // 0x3500fc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350100u;
        goto label_350100;
    }
    ctx->pc = 0x3500F8u;
    {
        const bool branch_taken_0x3500f8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 17));
        ctx->pc = 0x3500FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3500F8u;
        // 0x3500fc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3500f8) {
            ctx->pc = 0x350120u;
            goto label_350120;
        }
    }
    ctx->pc = 0x350100u;
label_350100:
    // 0x350100: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x350100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_350104:
    // 0x350104: 0x8c44b968  lw          $a0, -0x4698($v0)
    ctx->pc = 0x350104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949224)));
label_350108:
    // 0x350108: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x350108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_35010c:
    // 0x35010c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35010cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_350110:
    // 0x350110: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x350110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_350114:
    // 0x350114: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x350114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_350118:
    // 0x350118: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x350118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_35011c:
    // 0x35011c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x35011cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_350120:
    // 0x350120: 0x15310009  bne         $t1, $s1, . + 4 + (0x9 << 2)
label_350124:
    if (ctx->pc == 0x350124u) {
        ctx->pc = 0x350124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350120u;
        // 0x350124: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350128u;
        goto label_350128;
    }
    ctx->pc = 0x350120u;
    {
        const bool branch_taken_0x350120 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 17));
        ctx->pc = 0x350124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350120u;
        // 0x350124: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350120) {
            ctx->pc = 0x350148u;
            goto label_350148;
        }
    }
    ctx->pc = 0x350128u;
label_350128:
    // 0x350128: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x350128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_35012c:
    // 0x35012c: 0x8c44b96c  lw          $a0, -0x4694($v0)
    ctx->pc = 0x35012cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949228)));
label_350130:
    // 0x350130: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x350130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_350134:
    // 0x350134: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x350134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_350138:
    // 0x350138: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x350138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_35013c:
    // 0x35013c: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x35013cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_350140:
    // 0x350140: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x350140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_350144:
    // 0x350144: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x350144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_350148:
    // 0x350148: 0x55510006  bnel        $t2, $s1, . + 4 + (0x6 << 2)
label_35014c:
    if (ctx->pc == 0x35014Cu) {
        ctx->pc = 0x35014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350148u;
        // 0x35014c: 0xae08000c  sw          $t0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350150u;
        goto label_350150;
    }
    ctx->pc = 0x350148u;
    {
        const bool branch_taken_0x350148 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 17));
        if (branch_taken_0x350148) {
            ctx->pc = 0x35014Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350148u;
            // 0x35014c: 0xae08000c  sw          $t0, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350164u;
            goto label_350164;
        }
    }
    ctx->pc = 0x350150u;
label_350150:
    // 0x350150: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x350150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_350154:
    // 0x350154: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x350154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_350158:
    // 0x350158: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x350158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_35015c:
    // 0x35015c: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x35015cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_350160:
    // 0x350160: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x350160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
label_350164:
    // 0x350164: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x350164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350168:
    // 0x350168: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x350168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_35016c:
    // 0x35016c: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x35016cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_350170:
    // 0x350170: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x350170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_350174:
    // 0x350174: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x350174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_350178:
    // 0x350178: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x350178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_35017c:
    // 0x35017c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x35017cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_350180:
    // 0x350180: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x350180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_350184:
    // 0x350184: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x350184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_350188:
    // 0x350188: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x350188u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_35018c:
    // 0x35018c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35018cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_350190:
    // 0x350190: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x350190u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_350194:
    // 0x350194: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x350194u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_350198:
    // 0x350198: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x350198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_35019c:
    // 0x35019c: 0x3e00008  jr          $ra
label_3501a0:
    if (ctx->pc == 0x3501A0u) {
        ctx->pc = 0x3501A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35019Cu;
        // 0x3501a0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3501A4u;
        goto label_3501a4;
    }
    ctx->pc = 0x35019Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3501A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35019Cu;
        // 0x3501a0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35019Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3501A4u;
label_3501a4:
    // 0x3501a4: 0x0  nop
    ctx->pc = 0x3501a4u;
    // NOP
    ctx->pc = 0x3501a8u;
}
