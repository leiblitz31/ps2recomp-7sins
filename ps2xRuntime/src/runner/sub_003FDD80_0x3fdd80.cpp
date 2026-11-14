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

// Function: sub_003FDD80
// Address: 0x3fdd80 - 0x3fe208
void sub_003FDD80_0x3fdd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FDD80_0x3fdd80");
#endif

    switch (ctx->pc) {
        case 0x3fdd80u: goto label_3fdd80;
        case 0x3fdd84u: goto label_3fdd84;
        case 0x3fdd88u: goto label_3fdd88;
        case 0x3fdd8cu: goto label_3fdd8c;
        case 0x3fdd90u: goto label_3fdd90;
        case 0x3fdd94u: goto label_3fdd94;
        case 0x3fdd98u: goto label_3fdd98;
        case 0x3fdd9cu: goto label_3fdd9c;
        case 0x3fdda0u: goto label_3fdda0;
        case 0x3fdda4u: goto label_3fdda4;
        case 0x3fdda8u: goto label_3fdda8;
        case 0x3fddacu: goto label_3fddac;
        case 0x3fddb0u: goto label_3fddb0;
        case 0x3fddb4u: goto label_3fddb4;
        case 0x3fddb8u: goto label_3fddb8;
        case 0x3fddbcu: goto label_3fddbc;
        case 0x3fddc0u: goto label_3fddc0;
        case 0x3fddc4u: goto label_3fddc4;
        case 0x3fddc8u: goto label_3fddc8;
        case 0x3fddccu: goto label_3fddcc;
        case 0x3fddd0u: goto label_3fddd0;
        case 0x3fddd4u: goto label_3fddd4;
        case 0x3fddd8u: goto label_3fddd8;
        case 0x3fdddcu: goto label_3fdddc;
        case 0x3fdde0u: goto label_3fdde0;
        case 0x3fdde4u: goto label_3fdde4;
        case 0x3fdde8u: goto label_3fdde8;
        case 0x3fddecu: goto label_3fddec;
        case 0x3fddf0u: goto label_3fddf0;
        case 0x3fddf4u: goto label_3fddf4;
        case 0x3fddf8u: goto label_3fddf8;
        case 0x3fddfcu: goto label_3fddfc;
        case 0x3fde00u: goto label_3fde00;
        case 0x3fde04u: goto label_3fde04;
        case 0x3fde08u: goto label_3fde08;
        case 0x3fde0cu: goto label_3fde0c;
        case 0x3fde10u: goto label_3fde10;
        case 0x3fde14u: goto label_3fde14;
        case 0x3fde18u: goto label_3fde18;
        case 0x3fde1cu: goto label_3fde1c;
        case 0x3fde20u: goto label_3fde20;
        case 0x3fde24u: goto label_3fde24;
        case 0x3fde28u: goto label_3fde28;
        case 0x3fde2cu: goto label_3fde2c;
        case 0x3fde30u: goto label_3fde30;
        case 0x3fde34u: goto label_3fde34;
        case 0x3fde38u: goto label_3fde38;
        case 0x3fde3cu: goto label_3fde3c;
        case 0x3fde40u: goto label_3fde40;
        case 0x3fde44u: goto label_3fde44;
        case 0x3fde48u: goto label_3fde48;
        case 0x3fde4cu: goto label_3fde4c;
        case 0x3fde50u: goto label_3fde50;
        case 0x3fde54u: goto label_3fde54;
        case 0x3fde58u: goto label_3fde58;
        case 0x3fde5cu: goto label_3fde5c;
        case 0x3fde60u: goto label_3fde60;
        case 0x3fde64u: goto label_3fde64;
        case 0x3fde68u: goto label_3fde68;
        case 0x3fde6cu: goto label_3fde6c;
        case 0x3fde70u: goto label_3fde70;
        case 0x3fde74u: goto label_3fde74;
        case 0x3fde78u: goto label_3fde78;
        case 0x3fde7cu: goto label_3fde7c;
        case 0x3fde80u: goto label_3fde80;
        case 0x3fde84u: goto label_3fde84;
        case 0x3fde88u: goto label_3fde88;
        case 0x3fde8cu: goto label_3fde8c;
        case 0x3fde90u: goto label_3fde90;
        case 0x3fde94u: goto label_3fde94;
        case 0x3fde98u: goto label_3fde98;
        case 0x3fde9cu: goto label_3fde9c;
        case 0x3fdea0u: goto label_3fdea0;
        case 0x3fdea4u: goto label_3fdea4;
        case 0x3fdea8u: goto label_3fdea8;
        case 0x3fdeacu: goto label_3fdeac;
        case 0x3fdeb0u: goto label_3fdeb0;
        case 0x3fdeb4u: goto label_3fdeb4;
        case 0x3fdeb8u: goto label_3fdeb8;
        case 0x3fdebcu: goto label_3fdebc;
        case 0x3fdec0u: goto label_3fdec0;
        case 0x3fdec4u: goto label_3fdec4;
        case 0x3fdec8u: goto label_3fdec8;
        case 0x3fdeccu: goto label_3fdecc;
        case 0x3fded0u: goto label_3fded0;
        case 0x3fded4u: goto label_3fded4;
        case 0x3fded8u: goto label_3fded8;
        case 0x3fdedcu: goto label_3fdedc;
        case 0x3fdee0u: goto label_3fdee0;
        case 0x3fdee4u: goto label_3fdee4;
        case 0x3fdee8u: goto label_3fdee8;
        case 0x3fdeecu: goto label_3fdeec;
        case 0x3fdef0u: goto label_3fdef0;
        case 0x3fdef4u: goto label_3fdef4;
        case 0x3fdef8u: goto label_3fdef8;
        case 0x3fdefcu: goto label_3fdefc;
        case 0x3fdf00u: goto label_3fdf00;
        case 0x3fdf04u: goto label_3fdf04;
        case 0x3fdf08u: goto label_3fdf08;
        case 0x3fdf0cu: goto label_3fdf0c;
        case 0x3fdf10u: goto label_3fdf10;
        case 0x3fdf14u: goto label_3fdf14;
        case 0x3fdf18u: goto label_3fdf18;
        case 0x3fdf1cu: goto label_3fdf1c;
        case 0x3fdf20u: goto label_3fdf20;
        case 0x3fdf24u: goto label_3fdf24;
        case 0x3fdf28u: goto label_3fdf28;
        case 0x3fdf2cu: goto label_3fdf2c;
        case 0x3fdf30u: goto label_3fdf30;
        case 0x3fdf34u: goto label_3fdf34;
        case 0x3fdf38u: goto label_3fdf38;
        case 0x3fdf3cu: goto label_3fdf3c;
        case 0x3fdf40u: goto label_3fdf40;
        case 0x3fdf44u: goto label_3fdf44;
        case 0x3fdf48u: goto label_3fdf48;
        case 0x3fdf4cu: goto label_3fdf4c;
        case 0x3fdf50u: goto label_3fdf50;
        case 0x3fdf54u: goto label_3fdf54;
        case 0x3fdf58u: goto label_3fdf58;
        case 0x3fdf5cu: goto label_3fdf5c;
        case 0x3fdf60u: goto label_3fdf60;
        case 0x3fdf64u: goto label_3fdf64;
        case 0x3fdf68u: goto label_3fdf68;
        case 0x3fdf6cu: goto label_3fdf6c;
        case 0x3fdf70u: goto label_3fdf70;
        case 0x3fdf74u: goto label_3fdf74;
        case 0x3fdf78u: goto label_3fdf78;
        case 0x3fdf7cu: goto label_3fdf7c;
        case 0x3fdf80u: goto label_3fdf80;
        case 0x3fdf84u: goto label_3fdf84;
        case 0x3fdf88u: goto label_3fdf88;
        case 0x3fdf8cu: goto label_3fdf8c;
        case 0x3fdf90u: goto label_3fdf90;
        case 0x3fdf94u: goto label_3fdf94;
        case 0x3fdf98u: goto label_3fdf98;
        case 0x3fdf9cu: goto label_3fdf9c;
        case 0x3fdfa0u: goto label_3fdfa0;
        case 0x3fdfa4u: goto label_3fdfa4;
        case 0x3fdfa8u: goto label_3fdfa8;
        case 0x3fdfacu: goto label_3fdfac;
        case 0x3fdfb0u: goto label_3fdfb0;
        case 0x3fdfb4u: goto label_3fdfb4;
        case 0x3fdfb8u: goto label_3fdfb8;
        case 0x3fdfbcu: goto label_3fdfbc;
        case 0x3fdfc0u: goto label_3fdfc0;
        case 0x3fdfc4u: goto label_3fdfc4;
        case 0x3fdfc8u: goto label_3fdfc8;
        case 0x3fdfccu: goto label_3fdfcc;
        case 0x3fdfd0u: goto label_3fdfd0;
        case 0x3fdfd4u: goto label_3fdfd4;
        case 0x3fdfd8u: goto label_3fdfd8;
        case 0x3fdfdcu: goto label_3fdfdc;
        case 0x3fdfe0u: goto label_3fdfe0;
        case 0x3fdfe4u: goto label_3fdfe4;
        case 0x3fdfe8u: goto label_3fdfe8;
        case 0x3fdfecu: goto label_3fdfec;
        case 0x3fdff0u: goto label_3fdff0;
        case 0x3fdff4u: goto label_3fdff4;
        case 0x3fdff8u: goto label_3fdff8;
        case 0x3fdffcu: goto label_3fdffc;
        case 0x3fe000u: goto label_3fe000;
        case 0x3fe004u: goto label_3fe004;
        case 0x3fe008u: goto label_3fe008;
        case 0x3fe00cu: goto label_3fe00c;
        case 0x3fe010u: goto label_3fe010;
        case 0x3fe014u: goto label_3fe014;
        case 0x3fe018u: goto label_3fe018;
        case 0x3fe01cu: goto label_3fe01c;
        case 0x3fe020u: goto label_3fe020;
        case 0x3fe024u: goto label_3fe024;
        case 0x3fe028u: goto label_3fe028;
        case 0x3fe02cu: goto label_3fe02c;
        case 0x3fe030u: goto label_3fe030;
        case 0x3fe034u: goto label_3fe034;
        case 0x3fe038u: goto label_3fe038;
        case 0x3fe03cu: goto label_3fe03c;
        case 0x3fe040u: goto label_3fe040;
        case 0x3fe044u: goto label_3fe044;
        case 0x3fe048u: goto label_3fe048;
        case 0x3fe04cu: goto label_3fe04c;
        case 0x3fe050u: goto label_3fe050;
        case 0x3fe054u: goto label_3fe054;
        case 0x3fe058u: goto label_3fe058;
        case 0x3fe05cu: goto label_3fe05c;
        case 0x3fe060u: goto label_3fe060;
        case 0x3fe064u: goto label_3fe064;
        case 0x3fe068u: goto label_3fe068;
        case 0x3fe06cu: goto label_3fe06c;
        case 0x3fe070u: goto label_3fe070;
        case 0x3fe074u: goto label_3fe074;
        case 0x3fe078u: goto label_3fe078;
        case 0x3fe07cu: goto label_3fe07c;
        case 0x3fe080u: goto label_3fe080;
        case 0x3fe084u: goto label_3fe084;
        case 0x3fe088u: goto label_3fe088;
        case 0x3fe08cu: goto label_3fe08c;
        case 0x3fe090u: goto label_3fe090;
        case 0x3fe094u: goto label_3fe094;
        case 0x3fe098u: goto label_3fe098;
        case 0x3fe09cu: goto label_3fe09c;
        case 0x3fe0a0u: goto label_3fe0a0;
        case 0x3fe0a4u: goto label_3fe0a4;
        case 0x3fe0a8u: goto label_3fe0a8;
        case 0x3fe0acu: goto label_3fe0ac;
        case 0x3fe0b0u: goto label_3fe0b0;
        case 0x3fe0b4u: goto label_3fe0b4;
        case 0x3fe0b8u: goto label_3fe0b8;
        case 0x3fe0bcu: goto label_3fe0bc;
        case 0x3fe0c0u: goto label_3fe0c0;
        case 0x3fe0c4u: goto label_3fe0c4;
        case 0x3fe0c8u: goto label_3fe0c8;
        case 0x3fe0ccu: goto label_3fe0cc;
        case 0x3fe0d0u: goto label_3fe0d0;
        case 0x3fe0d4u: goto label_3fe0d4;
        case 0x3fe0d8u: goto label_3fe0d8;
        case 0x3fe0dcu: goto label_3fe0dc;
        case 0x3fe0e0u: goto label_3fe0e0;
        case 0x3fe0e4u: goto label_3fe0e4;
        case 0x3fe0e8u: goto label_3fe0e8;
        case 0x3fe0ecu: goto label_3fe0ec;
        case 0x3fe0f0u: goto label_3fe0f0;
        case 0x3fe0f4u: goto label_3fe0f4;
        case 0x3fe0f8u: goto label_3fe0f8;
        case 0x3fe0fcu: goto label_3fe0fc;
        case 0x3fe100u: goto label_3fe100;
        case 0x3fe104u: goto label_3fe104;
        case 0x3fe108u: goto label_3fe108;
        case 0x3fe10cu: goto label_3fe10c;
        case 0x3fe110u: goto label_3fe110;
        case 0x3fe114u: goto label_3fe114;
        case 0x3fe118u: goto label_3fe118;
        case 0x3fe11cu: goto label_3fe11c;
        case 0x3fe120u: goto label_3fe120;
        case 0x3fe124u: goto label_3fe124;
        case 0x3fe128u: goto label_3fe128;
        case 0x3fe12cu: goto label_3fe12c;
        case 0x3fe130u: goto label_3fe130;
        case 0x3fe134u: goto label_3fe134;
        case 0x3fe138u: goto label_3fe138;
        case 0x3fe13cu: goto label_3fe13c;
        case 0x3fe140u: goto label_3fe140;
        case 0x3fe144u: goto label_3fe144;
        case 0x3fe148u: goto label_3fe148;
        case 0x3fe14cu: goto label_3fe14c;
        case 0x3fe150u: goto label_3fe150;
        case 0x3fe154u: goto label_3fe154;
        case 0x3fe158u: goto label_3fe158;
        case 0x3fe15cu: goto label_3fe15c;
        case 0x3fe160u: goto label_3fe160;
        case 0x3fe164u: goto label_3fe164;
        case 0x3fe168u: goto label_3fe168;
        case 0x3fe16cu: goto label_3fe16c;
        case 0x3fe170u: goto label_3fe170;
        case 0x3fe174u: goto label_3fe174;
        case 0x3fe178u: goto label_3fe178;
        case 0x3fe17cu: goto label_3fe17c;
        case 0x3fe180u: goto label_3fe180;
        case 0x3fe184u: goto label_3fe184;
        case 0x3fe188u: goto label_3fe188;
        case 0x3fe18cu: goto label_3fe18c;
        case 0x3fe190u: goto label_3fe190;
        case 0x3fe194u: goto label_3fe194;
        case 0x3fe198u: goto label_3fe198;
        case 0x3fe19cu: goto label_3fe19c;
        case 0x3fe1a0u: goto label_3fe1a0;
        case 0x3fe1a4u: goto label_3fe1a4;
        case 0x3fe1a8u: goto label_3fe1a8;
        case 0x3fe1acu: goto label_3fe1ac;
        case 0x3fe1b0u: goto label_3fe1b0;
        case 0x3fe1b4u: goto label_3fe1b4;
        case 0x3fe1b8u: goto label_3fe1b8;
        case 0x3fe1bcu: goto label_3fe1bc;
        case 0x3fe1c0u: goto label_3fe1c0;
        case 0x3fe1c4u: goto label_3fe1c4;
        case 0x3fe1c8u: goto label_3fe1c8;
        case 0x3fe1ccu: goto label_3fe1cc;
        case 0x3fe1d0u: goto label_3fe1d0;
        case 0x3fe1d4u: goto label_3fe1d4;
        case 0x3fe1d8u: goto label_3fe1d8;
        case 0x3fe1dcu: goto label_3fe1dc;
        case 0x3fe1e0u: goto label_3fe1e0;
        case 0x3fe1e4u: goto label_3fe1e4;
        case 0x3fe1e8u: goto label_3fe1e8;
        case 0x3fe1ecu: goto label_3fe1ec;
        case 0x3fe1f0u: goto label_3fe1f0;
        case 0x3fe1f4u: goto label_3fe1f4;
        case 0x3fe1f8u: goto label_3fe1f8;
        case 0x3fe1fcu: goto label_3fe1fc;
        case 0x3fe200u: goto label_3fe200;
        case 0x3fe204u: goto label_3fe204;
        default: break;
    }

    ctx->pc = 0x3fdd80u;

label_3fdd80:
    // 0x3fdd80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3fdd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3fdd84:
    // 0x3fdd84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3fdd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3fdd88:
    // 0x3fdd88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3fdd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3fdd8c:
    // 0x3fdd8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3fdd8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fdd90:
    // 0x3fdd90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3fdd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3fdd94:
    // 0x3fdd94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fdd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3fdd98:
    // 0x3fdd98: 0xde0201b0  ld          $v0, 0x1B0($s0)
    ctx->pc = 0x3fdd98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 432)));
label_3fdd9c:
    // 0x3fdd9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3fdda0:
    if (ctx->pc == 0x3FDDA0u) {
        ctx->pc = 0x3FDDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDD9Cu;
        // 0x3fdda0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDDA4u;
        goto label_3fdda4;
    }
    ctx->pc = 0x3FDD9Cu;
    {
        const bool branch_taken_0x3fdd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FDDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDD9Cu;
        // 0x3fdda0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdd9c) {
            ctx->pc = 0x3FDDB8u;
            goto label_3fddb8;
        }
    }
    ctx->pc = 0x3FDDA4u;
label_3fdda4:
    // 0x3fdda4: 0x92020208  lbu         $v0, 0x208($s0)
    ctx->pc = 0x3fdda4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 520)));
label_3fdda8:
    // 0x3fdda8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3fddac:
    if (ctx->pc == 0x3FDDACu) {
        ctx->pc = 0x3FDDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDDA8u;
        // 0x3fddac: 0x92020207  lbu         $v0, 0x207($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 519)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDDB0u;
        goto label_3fddb0;
    }
    ctx->pc = 0x3FDDA8u;
    {
        const bool branch_taken_0x3fdda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fdda8) {
            ctx->pc = 0x3FDDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDDA8u;
            // 0x3fddac: 0x92020207  lbu         $v0, 0x207($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 519)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDDBCu;
            goto label_3fddbc;
        }
    }
    ctx->pc = 0x3FDDB0u;
label_3fddb0:
    // 0x3fddb0: 0xc100d72  jal         func_4035C8
label_3fddb4:
    if (ctx->pc == 0x3FDDB4u) {
        ctx->pc = 0x3FDDB8u;
        goto label_3fddb8;
    }
    ctx->pc = 0x3FDDB0u;
    SET_GPR_U32(ctx, 31, 0x3FDDB8u);
    ctx->pc = 0x4035C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4035C8u, 0x3FDDB0u, 0x3FDDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDDB8u;
label_3fddb8:
    // 0x3fddb8: 0x92020207  lbu         $v0, 0x207($s0)
    ctx->pc = 0x3fddb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 519)));
label_3fddbc:
    // 0x3fddbc: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
label_3fddc0:
    if (ctx->pc == 0x3FDDC0u) {
        ctx->pc = 0x3FDDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDDBCu;
        // 0x3fddc0: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDDC4u;
        goto label_3fddc4;
    }
    ctx->pc = 0x3FDDBCu;
    {
        const bool branch_taken_0x3fddbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fddbc) {
            ctx->pc = 0x3FDDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDDBCu;
            // 0x3fddc0: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDEE0u;
            goto label_3fdee0;
        }
    }
    ctx->pc = 0x3FDDC4u;
label_3fddc4:
    // 0x3fddc4: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3fddc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3fddc8:
    // 0x3fddc8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3fddc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3fddcc:
    // 0x3fddcc: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
label_3fddd0:
    if (ctx->pc == 0x3FDDD0u) {
        ctx->pc = 0x3FDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDDCCu;
        // 0x3fddd0: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDDD4u;
        goto label_3fddd4;
    }
    ctx->pc = 0x3FDDCCu;
    {
        const bool branch_taken_0x3fddcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fddcc) {
            ctx->pc = 0x3FDDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDDCCu;
            // 0x3fddd0: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDEE0u;
            goto label_3fdee0;
        }
    }
    ctx->pc = 0x3FDDD4u;
label_3fddd4:
    // 0x3fddd4: 0x92030208  lbu         $v1, 0x208($s0)
    ctx->pc = 0x3fddd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 520)));
label_3fddd8:
    // 0x3fddd8: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x3fddd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_3fdddc:
    // 0x3fdddc: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_3fdde0:
    if (ctx->pc == 0x3FDDE0u) {
        ctx->pc = 0x3FDDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDDDCu;
        // 0x3fdde0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDDE4u;
        goto label_3fdde4;
    }
    ctx->pc = 0x3FDDDCu;
    {
        const bool branch_taken_0x3fdddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDDDCu;
        // 0x3fdde0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdddc) {
            ctx->pc = 0x3FDEDCu;
            goto label_3fdedc;
        }
    }
    ctx->pc = 0x3FDDE4u;
label_3fdde4:
    // 0x3fdde4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3fdde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3fdde8:
    // 0x3fdde8: 0x2442fbf0  addiu       $v0, $v0, -0x410
    ctx->pc = 0x3fdde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966256));
label_3fddec:
    // 0x3fddec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3fddecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fddf0:
    // 0x3fddf0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3fddf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fddf4:
    // 0x3fddf4: 0x800008  jr          $a0
label_3fddf8:
    if (ctx->pc == 0x3FDDF8u) {
        ctx->pc = 0x3FDDFCu;
        goto label_3fddfc;
    }
    ctx->pc = 0x3FDDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3FDDFCu: goto label_3fddfc;
            case 0x3FDE14u: goto label_3fde14;
            case 0x3FDE3Cu: goto label_3fde3c;
            case 0x3FDE58u: goto label_3fde58;
            case 0x3FDE80u: goto label_3fde80;
            case 0x3FDE9Cu: goto label_3fde9c;
            case 0x3FDECCu: goto label_3fdecc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FDDF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3FDDFCu;
label_3fddfc:
    // 0x3fddfc: 0xde0201b0  ld          $v0, 0x1B0($s0)
    ctx->pc = 0x3fddfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 432)));
label_3fde00:
    // 0x3fde00: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3fde00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3fde04:
    // 0x3fde04: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
label_3fde08:
    if (ctx->pc == 0x3FDE08u) {
        ctx->pc = 0x3FDE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDE04u;
        // 0x3fde08: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDE0Cu;
        goto label_3fde0c;
    }
    ctx->pc = 0x3FDE04u;
    {
        const bool branch_taken_0x3fde04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fde04) {
            ctx->pc = 0x3FDE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDE04u;
            // 0x3fde08: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDEE0u;
            goto label_3fdee0;
        }
    }
    ctx->pc = 0x3FDE0Cu;
label_3fde0c:
    // 0x3fde0c: 0x1000005b  b           . + 4 + (0x5B << 2)
label_3fde10:
    if (ctx->pc == 0x3FDE10u) {
        ctx->pc = 0x3FDE14u;
        goto label_3fde14;
    }
    ctx->pc = 0x3FDE0Cu;
    {
        const bool branch_taken_0x3fde0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fde0c) {
            ctx->pc = 0x3FDF7Cu;
            goto label_3fdf7c;
        }
    }
    ctx->pc = 0x3FDE14u;
label_3fde14:
    // 0x3fde14: 0xde0201b0  ld          $v0, 0x1B0($s0)
    ctx->pc = 0x3fde14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 432)));
label_3fde18:
    // 0x3fde18: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3fde18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3fde1c:
    // 0x3fde1c: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_3fde20:
    if (ctx->pc == 0x3FDE20u) {
        ctx->pc = 0x3FDE24u;
        goto label_3fde24;
    }
    ctx->pc = 0x3FDE1Cu;
    {
        const bool branch_taken_0x3fde1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fde1c) {
            ctx->pc = 0x3FDF7Cu;
            goto label_3fdf7c;
        }
    }
    ctx->pc = 0x3FDE24u;
label_3fde24:
    // 0x3fde24: 0xde020178  ld          $v0, 0x178($s0)
    ctx->pc = 0x3fde24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 376)));
label_3fde28:
    // 0x3fde28: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x3fde28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_3fde2c:
    // 0x3fde2c: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_3fde30:
    if (ctx->pc == 0x3FDE30u) {
        ctx->pc = 0x3FDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDE2Cu;
        // 0x3fde30: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDE34u;
        goto label_3fde34;
    }
    ctx->pc = 0x3FDE2Cu;
    {
        const bool branch_taken_0x3fde2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fde2c) {
            ctx->pc = 0x3FDE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDE2Cu;
            // 0x3fde30: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDEE0u;
            goto label_3fdee0;
        }
    }
    ctx->pc = 0x3FDE34u;
label_3fde34:
    // 0x3fde34: 0x10000051  b           . + 4 + (0x51 << 2)
label_3fde38:
    if (ctx->pc == 0x3FDE38u) {
        ctx->pc = 0x3FDE3Cu;
        goto label_3fde3c;
    }
    ctx->pc = 0x3FDE34u;
    {
        const bool branch_taken_0x3fde34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fde34) {
            ctx->pc = 0x3FDF7Cu;
            goto label_3fdf7c;
        }
    }
    ctx->pc = 0x3FDE3Cu;
label_3fde3c:
    // 0x3fde3c: 0xde0201b0  ld          $v0, 0x1B0($s0)
    ctx->pc = 0x3fde3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 432)));
label_3fde40:
    // 0x3fde40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3fde40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3fde44:
    // 0x3fde44: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3fde44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3fde48:
    // 0x3fde48: 0x50430025  beql        $v0, $v1, . + 4 + (0x25 << 2)
label_3fde4c:
    if (ctx->pc == 0x3FDE4Cu) {
        ctx->pc = 0x3FDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDE48u;
        // 0x3fde4c: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDE50u;
        goto label_3fde50;
    }
    ctx->pc = 0x3FDE48u;
    {
        const bool branch_taken_0x3fde48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fde48) {
            ctx->pc = 0x3FDE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDE48u;
            // 0x3fde4c: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDEE0u;
            goto label_3fdee0;
        }
    }
    ctx->pc = 0x3FDE50u;
label_3fde50:
    // 0x3fde50: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3fde54:
    if (ctx->pc == 0x3FDE54u) {
        ctx->pc = 0x3FDE58u;
        goto label_3fde58;
    }
    ctx->pc = 0x3FDE50u;
    {
        const bool branch_taken_0x3fde50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fde50) {
            ctx->pc = 0x3FDF7Cu;
            goto label_3fdf7c;
        }
    }
    ctx->pc = 0x3FDE58u;
label_3fde58:
    // 0x3fde58: 0xde0201b0  ld          $v0, 0x1B0($s0)
    ctx->pc = 0x3fde58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 432)));
label_3fde5c:
    // 0x3fde5c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3fde5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3fde60:
    // 0x3fde60: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_3fde64:
    if (ctx->pc == 0x3FDE64u) {
        ctx->pc = 0x3FDE68u;
        goto label_3fde68;
    }
    ctx->pc = 0x3FDE60u;
    {
        const bool branch_taken_0x3fde60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fde60) {
            ctx->pc = 0x3FDF7Cu;
            goto label_3fdf7c;
        }
    }
    ctx->pc = 0x3FDE68u;
label_3fde68:
    // 0x3fde68: 0xde020178  ld          $v0, 0x178($s0)
    ctx->pc = 0x3fde68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 376)));
label_3fde6c:
    // 0x3fde6c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x3fde6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3fde70:
    // 0x3fde70: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_3fde74:
    if (ctx->pc == 0x3FDE74u) {
        ctx->pc = 0x3FDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDE70u;
        // 0x3fde74: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDE78u;
        goto label_3fde78;
    }
    ctx->pc = 0x3FDE70u;
    {
        const bool branch_taken_0x3fde70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fde70) {
            ctx->pc = 0x3FDE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDE70u;
            // 0x3fde74: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDEE0u;
            goto label_3fdee0;
        }
    }
    ctx->pc = 0x3FDE78u;
label_3fde78:
    // 0x3fde78: 0x10000040  b           . + 4 + (0x40 << 2)
label_3fde7c:
    if (ctx->pc == 0x3FDE7Cu) {
        ctx->pc = 0x3FDE80u;
        goto label_3fde80;
    }
    ctx->pc = 0x3FDE78u;
    {
        const bool branch_taken_0x3fde78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fde78) {
            ctx->pc = 0x3FDF7Cu;
            goto label_3fdf7c;
        }
    }
    ctx->pc = 0x3FDE80u;
label_3fde80:
    // 0x3fde80: 0xde0201b0  ld          $v0, 0x1B0($s0)
    ctx->pc = 0x3fde80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 432)));
label_3fde84:
    // 0x3fde84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3fde84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fde88:
    // 0x3fde88: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3fde88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3fde8c:
    // 0x3fde8c: 0x50430014  beql        $v0, $v1, . + 4 + (0x14 << 2)
label_3fde90:
    if (ctx->pc == 0x3FDE90u) {
        ctx->pc = 0x3FDE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDE8Cu;
        // 0x3fde90: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDE94u;
        goto label_3fde94;
    }
    ctx->pc = 0x3FDE8Cu;
    {
        const bool branch_taken_0x3fde8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fde8c) {
            ctx->pc = 0x3FDE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDE8Cu;
            // 0x3fde90: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDEE0u;
            goto label_3fdee0;
        }
    }
    ctx->pc = 0x3FDE94u;
label_3fde94:
    // 0x3fde94: 0x10000039  b           . + 4 + (0x39 << 2)
label_3fde98:
    if (ctx->pc == 0x3FDE98u) {
        ctx->pc = 0x3FDE9Cu;
        goto label_3fde9c;
    }
    ctx->pc = 0x3FDE94u;
    {
        const bool branch_taken_0x3fde94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fde94) {
            ctx->pc = 0x3FDF7Cu;
            goto label_3fdf7c;
        }
    }
    ctx->pc = 0x3FDE9Cu;
label_3fde9c:
    // 0x3fde9c: 0xde0201b0  ld          $v0, 0x1B0($s0)
    ctx->pc = 0x3fde9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 432)));
label_3fdea0:
    // 0x3fdea0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3fdea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3fdea4:
    // 0x3fdea4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3fdea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3fdea8:
    // 0x3fdea8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3fdea8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3fdeac:
    // 0x3fdeac: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_3fdeb0:
    if (ctx->pc == 0x3FDEB0u) {
        ctx->pc = 0x3FDEB4u;
        goto label_3fdeb4;
    }
    ctx->pc = 0x3FDEACu;
    {
        const bool branch_taken_0x3fdeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fdeac) {
            ctx->pc = 0x3FDF7Cu;
            goto label_3fdf7c;
        }
    }
    ctx->pc = 0x3FDEB4u;
label_3fdeb4:
    // 0x3fdeb4: 0xde020178  ld          $v0, 0x178($s0)
    ctx->pc = 0x3fdeb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 376)));
label_3fdeb8:
    // 0x3fdeb8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3fdeb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3fdebc:
    // 0x3fdebc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3fdec0:
    if (ctx->pc == 0x3FDEC0u) {
        ctx->pc = 0x3FDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDEBCu;
        // 0x3fdec0: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDEC4u;
        goto label_3fdec4;
    }
    ctx->pc = 0x3FDEBCu;
    {
        const bool branch_taken_0x3fdebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fdebc) {
            ctx->pc = 0x3FDEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDEBCu;
            // 0x3fdec0: 0x9206020c  lbu         $a2, 0x20C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDEE0u;
            goto label_3fdee0;
        }
    }
    ctx->pc = 0x3FDEC4u;
label_3fdec4:
    // 0x3fdec4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_3fdec8:
    if (ctx->pc == 0x3FDEC8u) {
        ctx->pc = 0x3FDECCu;
        goto label_3fdecc;
    }
    ctx->pc = 0x3FDEC4u;
    {
        const bool branch_taken_0x3fdec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fdec4) {
            ctx->pc = 0x3FDF7Cu;
            goto label_3fdf7c;
        }
    }
    ctx->pc = 0x3FDECCu;
label_3fdecc:
    // 0x3fdecc: 0xde0201b0  ld          $v0, 0x1B0($s0)
    ctx->pc = 0x3fdeccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 432)));
label_3fded0:
    // 0x3fded0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3fded0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3fded4:
    // 0x3fded4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_3fded8:
    if (ctx->pc == 0x3FDED8u) {
        ctx->pc = 0x3FDEDCu;
        goto label_3fdedc;
    }
    ctx->pc = 0x3FDED4u;
    {
        const bool branch_taken_0x3fded4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fded4) {
            ctx->pc = 0x3FDF7Cu;
            goto label_3fdf7c;
        }
    }
    ctx->pc = 0x3FDEDCu;
label_3fdedc:
    // 0x3fdedc: 0x9206020c  lbu         $a2, 0x20C($s0)
    ctx->pc = 0x3fdedcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
label_3fdee0:
    // 0x3fdee0: 0x261101d0  addiu       $s1, $s0, 0x1D0
    ctx->pc = 0x3fdee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
label_3fdee4:
    // 0x3fdee4: 0x9205020f  lbu         $a1, 0x20F($s0)
    ctx->pc = 0x3fdee4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 527)));
label_3fdee8:
    // 0x3fdee8: 0xde020190  ld          $v0, 0x190($s0)
    ctx->pc = 0x3fdee8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 400)));
label_3fdeec:
    // 0x3fdeec: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x3fdeecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_3fdef0:
    // 0x3fdef0: 0x9203020a  lbu         $v1, 0x20A($s0)
    ctx->pc = 0x3fdef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
label_3fdef4:
    // 0x3fdef4: 0xa20501e2  sb          $a1, 0x1E2($s0)
    ctx->pc = 0x3fdef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 482), (uint8_t)GPR_U32(ctx, 5));
label_3fdef8:
    // 0x3fdef8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fdef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fdefc:
    // 0x3fdefc: 0xa20301e0  sb          $v1, 0x1E0($s0)
    ctx->pc = 0x3fdefcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 480), (uint8_t)GPR_U32(ctx, 3));
label_3fdf00:
    // 0x3fdf00: 0xa20601e1  sb          $a2, 0x1E1($s0)
    ctx->pc = 0x3fdf00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 481), (uint8_t)GPR_U32(ctx, 6));
label_3fdf04:
    // 0x3fdf04: 0xa20701e3  sb          $a3, 0x1E3($s0)
    ctx->pc = 0x3fdf04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 483), (uint8_t)GPR_U32(ctx, 7));
label_3fdf08:
    // 0x3fdf08: 0xfe0201d0  sd          $v0, 0x1D0($s0)
    ctx->pc = 0x3fdf08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 464), GPR_U64(ctx, 2));
label_3fdf0c:
    // 0x3fdf0c: 0xc0be4b8  jal         func_2F92E0
label_3fdf10:
    if (ctx->pc == 0x3FDF10u) {
        ctx->pc = 0x3FDF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF0Cu;
        // 0x3fdf10: 0x30e500ff  andi        $a1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDF14u;
        goto label_3fdf14;
    }
    ctx->pc = 0x3FDF0Cu;
    SET_GPR_U32(ctx, 31, 0x3FDF14u);
    ctx->pc = 0x3FDF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDF0Cu;
    // 0x3fdf10: 0x30e500ff  andi        $a1, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3FDF0Cu, 0x3FDF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDF14u;
label_3fdf14:
    // 0x3fdf14: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3fdf14u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
label_3fdf18:
    // 0x3fdf18: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3fdf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3fdf1c:
    // 0x3fdf1c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3fdf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_3fdf20:
    // 0x3fdf20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3fdf20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fdf24:
    // 0x3fdf24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fdf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3fdf28:
    // 0x3fdf28: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3fdf28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fdf2c:
    // 0x3fdf2c: 0xfe0201d8  sd          $v0, 0x1D8($s0)
    ctx->pc = 0x3fdf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 472), GPR_U64(ctx, 2));
label_3fdf30:
    // 0x3fdf30: 0xc0f8b34  jal         func_3E2CD0
label_3fdf34:
    if (ctx->pc == 0x3FDF34u) {
        ctx->pc = 0x3FDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF30u;
        // 0x3fdf34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDF38u;
        goto label_3fdf38;
    }
    ctx->pc = 0x3FDF30u;
    SET_GPR_U32(ctx, 31, 0x3FDF38u);
    ctx->pc = 0x3FDF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDF30u;
    // 0x3fdf34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2CD0u, 0x3FDF30u, 0x3FDF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDF38u;
label_3fdf38:
    // 0x3fdf38: 0x92030207  lbu         $v1, 0x207($s0)
    ctx->pc = 0x3fdf38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 519)));
label_3fdf3c:
    // 0x3fdf3c: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
label_3fdf40:
    if (ctx->pc == 0x3FDF40u) {
        ctx->pc = 0x3FDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF3Cu;
        // 0x3fdf40: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDF44u;
        goto label_3fdf44;
    }
    ctx->pc = 0x3FDF3Cu;
    {
        const bool branch_taken_0x3fdf3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fdf3c) {
            ctx->pc = 0x3FDF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDF3Cu;
            // 0x3fdf40: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDF90u;
            goto label_3fdf90;
        }
    }
    ctx->pc = 0x3FDF44u;
label_3fdf44:
    // 0x3fdf44: 0x92020208  lbu         $v0, 0x208($s0)
    ctx->pc = 0x3fdf44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 520)));
label_3fdf48:
    // 0x3fdf48: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x3fdf48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3fdf4c:
    // 0x3fdf4c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3fdf50:
    if (ctx->pc == 0x3FDF50u) {
        ctx->pc = 0x3FDF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF4Cu;
        // 0x3fdf50: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDF54u;
        goto label_3fdf54;
    }
    ctx->pc = 0x3FDF4Cu;
    {
        const bool branch_taken_0x3fdf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF4Cu;
        // 0x3fdf50: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdf4c) {
            ctx->pc = 0x3FDF90u;
            goto label_3fdf90;
        }
    }
    ctx->pc = 0x3FDF54u;
label_3fdf54:
    // 0x3fdf54: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3fdf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3fdf58:
    // 0x3fdf58: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3fdf5c:
    if (ctx->pc == 0x3FDF5Cu) {
        ctx->pc = 0x3FDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF58u;
        // 0x3fdf5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDF60u;
        goto label_3fdf60;
    }
    ctx->pc = 0x3FDF58u;
    {
        const bool branch_taken_0x3fdf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF58u;
        // 0x3fdf5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdf58) {
            ctx->pc = 0x3FDF8Cu;
            goto label_3fdf8c;
        }
    }
    ctx->pc = 0x3FDF60u;
label_3fdf60:
    // 0x3fdf60: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3fdf60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3fdf64:
    // 0x3fdf64: 0x92060208  lbu         $a2, 0x208($s0)
    ctx->pc = 0x3fdf64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 520)));
label_3fdf68:
    // 0x3fdf68: 0xc100e9c  jal         func_403A70
label_3fdf6c:
    if (ctx->pc == 0x3FDF6Cu) {
        ctx->pc = 0x3FDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF68u;
        // 0x3fdf6c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDF70u;
        goto label_3fdf70;
    }
    ctx->pc = 0x3FDF68u;
    SET_GPR_U32(ctx, 31, 0x3FDF70u);
    ctx->pc = 0x3FDF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDF68u;
    // 0x3fdf6c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x403A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x403A70u, 0x3FDF68u, 0x3FDF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDF70u;
label_3fdf70:
    // 0x3fdf70: 0xde0201d0  ld          $v0, 0x1D0($s0)
    ctx->pc = 0x3fdf70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 464)));
label_3fdf74:
    // 0x3fdf74: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3fdf78:
    if (ctx->pc == 0x3FDF78u) {
        ctx->pc = 0x3FDF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF74u;
        // 0x3fdf78: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDF7Cu;
        goto label_3fdf7c;
    }
    ctx->pc = 0x3FDF74u;
    {
        const bool branch_taken_0x3fdf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fdf74) {
            ctx->pc = 0x3FDF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDF74u;
            // 0x3fdf78: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDF90u;
            goto label_3fdf90;
        }
    }
    ctx->pc = 0x3FDF7Cu;
label_3fdf7c:
    // 0x3fdf7c: 0xc100dea  jal         func_4037A8
label_3fdf80:
    if (ctx->pc == 0x3FDF80u) {
        ctx->pc = 0x3FDF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF7Cu;
        // 0x3fdf80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDF84u;
        goto label_3fdf84;
    }
    ctx->pc = 0x3FDF7Cu;
    SET_GPR_U32(ctx, 31, 0x3FDF84u);
    ctx->pc = 0x3FDF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDF7Cu;
    // 0x3fdf80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4037A8u, 0x3FDF7Cu, 0x3FDF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDF84u;
label_3fdf84:
    // 0x3fdf84: 0x10000010  b           . + 4 + (0x10 << 2)
label_3fdf88:
    if (ctx->pc == 0x3FDF88u) {
        ctx->pc = 0x3FDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF84u;
        // 0x3fdf88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDF8Cu;
        goto label_3fdf8c;
    }
    ctx->pc = 0x3FDF84u;
    {
        const bool branch_taken_0x3fdf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF84u;
        // 0x3fdf88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdf84) {
            ctx->pc = 0x3FDFC8u;
            goto label_3fdfc8;
        }
    }
    ctx->pc = 0x3FDF8Cu;
label_3fdf8c:
    // 0x3fdf8c: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3fdf8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3fdf90:
    // 0x3fdf90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3fdf94:
    if (ctx->pc == 0x3FDF94u) {
        ctx->pc = 0x3FDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF90u;
        // 0x3fdf94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDF98u;
        goto label_3fdf98;
    }
    ctx->pc = 0x3FDF90u;
    {
        const bool branch_taken_0x3fdf90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF90u;
        // 0x3fdf94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdf90) {
            ctx->pc = 0x3FDFA4u;
            goto label_3fdfa4;
        }
    }
    ctx->pc = 0x3FDF98u;
label_3fdf98:
    // 0x3fdf98: 0xc0ffc30  jal         func_3FF0C0
label_3fdf9c:
    if (ctx->pc == 0x3FDF9Cu) {
        ctx->pc = 0x3FDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF98u;
        // 0x3fdf9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDFA0u;
        goto label_3fdfa0;
    }
    ctx->pc = 0x3FDF98u;
    SET_GPR_U32(ctx, 31, 0x3FDFA0u);
    ctx->pc = 0x3FDF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDF98u;
    // 0x3fdf9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FF0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FF0C0u, 0x3FDF98u, 0x3FDFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDFA0u;
label_3fdfa0:
    // 0x3fdfa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fdfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fdfa4:
    // 0x3fdfa4: 0xc100f82  jal         func_403E08
label_3fdfa8:
    if (ctx->pc == 0x3FDFA8u) {
        ctx->pc = 0x3FDFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFA4u;
        // 0x3fdfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDFACu;
        goto label_3fdfac;
    }
    ctx->pc = 0x3FDFA4u;
    SET_GPR_U32(ctx, 31, 0x3FDFACu);
    ctx->pc = 0x3FDFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDFA4u;
    // 0x3fdfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x403E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x403E08u, 0x3FDFA4u, 0x3FDFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDFACu;
label_3fdfac:
    // 0x3fdfac: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x3fdfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_3fdfb0:
    // 0x3fdfb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3fdfb4:
    if (ctx->pc == 0x3FDFB4u) {
        ctx->pc = 0x3FDFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFB0u;
        // 0x3fdfb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDFB8u;
        goto label_3fdfb8;
    }
    ctx->pc = 0x3FDFB0u;
    {
        const bool branch_taken_0x3fdfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFB0u;
        // 0x3fdfb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdfb0) {
            ctx->pc = 0x3FDFC4u;
            goto label_3fdfc4;
        }
    }
    ctx->pc = 0x3FDFB8u;
label_3fdfb8:
    // 0x3fdfb8: 0xdc8501b0  ld          $a1, 0x1B0($a0)
    ctx->pc = 0x3fdfb8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 432)));
label_3fdfbc:
    // 0x3fdfbc: 0x40f809  jalr        $v0
label_3fdfc0:
    if (ctx->pc == 0x3FDFC0u) {
        ctx->pc = 0x3FDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFBCu;
        // 0x3fdfc0: 0x90860208  lbu         $a2, 0x208($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDFC4u;
        goto label_3fdfc4;
    }
    ctx->pc = 0x3FDFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FDFC4u);
        ctx->pc = 0x3FDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFBCu;
        // 0x3fdfc0: 0x90860208  lbu         $a2, 0x208($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FDFBCu, 0x3FDFC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FDFC4u;
label_3fdfc4:
    // 0x3fdfc4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3fdfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fdfc8:
    // 0x3fdfc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3fdfc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fdfcc:
    // 0x3fdfcc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3fdfccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fdfd0:
    // 0x3fdfd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fdfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3fdfd4:
    // 0x3fdfd4: 0x3e00008  jr          $ra
label_3fdfd8:
    if (ctx->pc == 0x3FDFD8u) {
        ctx->pc = 0x3FDFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFD4u;
        // 0x3fdfd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDFDCu;
        goto label_3fdfdc;
    }
    ctx->pc = 0x3FDFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FDFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFD4u;
        // 0x3fdfd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FDFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FDFDCu;
label_3fdfdc:
    // 0x3fdfdc: 0x0  nop
    ctx->pc = 0x3fdfdcu;
    // NOP
label_3fdfe0:
    // 0x3fdfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3fdfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3fdfe4:
    // 0x3fdfe4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3fdfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3fdfe8:
    // 0x3fdfe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fdfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3fdfec:
    // 0x3fdfec: 0x14a0007e  bnez        $a1, . + 4 + (0x7E << 2)
label_3fdff0:
    if (ctx->pc == 0x3FDFF0u) {
        ctx->pc = 0x3FDFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFECu;
        // 0x3fdff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDFF4u;
        goto label_3fdff4;
    }
    ctx->pc = 0x3FDFECu;
    {
        const bool branch_taken_0x3fdfec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FDFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFECu;
        // 0x3fdff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdfec) {
            ctx->pc = 0x3FE1E8u;
            goto label_3fe1e8;
        }
    }
    ctx->pc = 0x3FDFF4u;
label_3fdff4:
    // 0x3fdff4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3fdff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3fdff8:
    // 0x3fdff8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x3fdff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3fdffc:
    // 0x3fdffc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3fe000:
    if (ctx->pc == 0x3FE000u) {
        ctx->pc = 0x3FE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFFCu;
        // 0x3fe000: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE004u;
        goto label_3fe004;
    }
    ctx->pc = 0x3FDFFCu;
    {
        const bool branch_taken_0x3fdffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFFCu;
        // 0x3fe000: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdffc) {
            ctx->pc = 0x3FE068u;
            goto label_3fe068;
        }
    }
    ctx->pc = 0x3FE004u;
label_3fe004:
    // 0x3fe004: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3fe004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3fe008:
    // 0x3fe008: 0x2442fce0  addiu       $v0, $v0, -0x320
    ctx->pc = 0x3fe008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
label_3fe00c:
    // 0x3fe00c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3fe00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fe010:
    // 0x3fe010: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3fe010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fe014:
    // 0x3fe014: 0x800008  jr          $a0
label_3fe018:
    if (ctx->pc == 0x3FE018u) {
        ctx->pc = 0x3FE01Cu;
        goto label_3fe01c;
    }
    ctx->pc = 0x3FE014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3FE01Cu: goto label_3fe01c;
            case 0x3FE02Cu: goto label_3fe02c;
            case 0x3FE038u: goto label_3fe038;
            case 0x3FE044u: goto label_3fe044;
            case 0x3FE050u: goto label_3fe050;
            case 0x3FE05Cu: goto label_3fe05c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE014u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3FE01Cu;
label_3fe01c:
    // 0x3fe01c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fe01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3fe020:
    // 0x3fe020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe024:
    // 0x3fe024: 0xc0f8782  jal         func_3E1E08
label_3fe028:
    if (ctx->pc == 0x3FE028u) {
        ctx->pc = 0x3FE028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE024u;
        // 0x3fe028: 0x24a5fc20  addiu       $a1, $a1, -0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE02Cu;
        goto label_3fe02c;
    }
    ctx->pc = 0x3FE024u;
    SET_GPR_U32(ctx, 31, 0x3FE02Cu);
    ctx->pc = 0x3FE028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE024u;
    // 0x3fe028: 0x24a5fc20  addiu       $a1, $a1, -0x3E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FE024u, 0x3FE02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE02Cu;
label_3fe02c:
    // 0x3fe02c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3fe02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3fe030:
    // 0x3fe030: 0x1000000e  b           . + 4 + (0xE << 2)
label_3fe034:
    if (ctx->pc == 0x3FE034u) {
        ctx->pc = 0x3FE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE030u;
        // 0x3fe034: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE038u;
        goto label_3fe038;
    }
    ctx->pc = 0x3FE030u;
    {
        const bool branch_taken_0x3fe030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE030u;
        // 0x3fe034: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe030) {
            ctx->pc = 0x3FE06Cu;
            goto label_3fe06c;
        }
    }
    ctx->pc = 0x3FE038u;
label_3fe038:
    // 0x3fe038: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3fe038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3fe03c:
    // 0x3fe03c: 0x1000000b  b           . + 4 + (0xB << 2)
label_3fe040:
    if (ctx->pc == 0x3FE040u) {
        ctx->pc = 0x3FE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE03Cu;
        // 0x3fe040: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE044u;
        goto label_3fe044;
    }
    ctx->pc = 0x3FE03Cu;
    {
        const bool branch_taken_0x3fe03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE03Cu;
        // 0x3fe040: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe03c) {
            ctx->pc = 0x3FE06Cu;
            goto label_3fe06c;
        }
    }
    ctx->pc = 0x3FE044u;
label_3fe044:
    // 0x3fe044: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3fe044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3fe048:
    // 0x3fe048: 0x10000008  b           . + 4 + (0x8 << 2)
label_3fe04c:
    if (ctx->pc == 0x3FE04Cu) {
        ctx->pc = 0x3FE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE048u;
        // 0x3fe04c: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE050u;
        goto label_3fe050;
    }
    ctx->pc = 0x3FE048u;
    {
        const bool branch_taken_0x3fe048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE048u;
        // 0x3fe04c: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe048) {
            ctx->pc = 0x3FE06Cu;
            goto label_3fe06c;
        }
    }
    ctx->pc = 0x3FE050u;
label_3fe050:
    // 0x3fe050: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3fe050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3fe054:
    // 0x3fe054: 0x10000005  b           . + 4 + (0x5 << 2)
label_3fe058:
    if (ctx->pc == 0x3FE058u) {
        ctx->pc = 0x3FE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE054u;
        // 0x3fe058: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE05Cu;
        goto label_3fe05c;
    }
    ctx->pc = 0x3FE054u;
    {
        const bool branch_taken_0x3fe054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE054u;
        // 0x3fe058: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe054) {
            ctx->pc = 0x3FE06Cu;
            goto label_3fe06c;
        }
    }
    ctx->pc = 0x3FE05Cu;
label_3fe05c:
    // 0x3fe05c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3fe05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3fe060:
    // 0x3fe060: 0x10000002  b           . + 4 + (0x2 << 2)
label_3fe064:
    if (ctx->pc == 0x3FE064u) {
        ctx->pc = 0x3FE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE060u;
        // 0x3fe064: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE068u;
        goto label_3fe068;
    }
    ctx->pc = 0x3FE060u;
    {
        const bool branch_taken_0x3fe060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE060u;
        // 0x3fe064: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe060) {
            ctx->pc = 0x3FE06Cu;
            goto label_3fe06c;
        }
    }
    ctx->pc = 0x3FE068u;
label_3fe068:
    // 0x3fe068: 0xa2060209  sb          $a2, 0x209($s0)
    ctx->pc = 0x3fe068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 6));
label_3fe06c:
    // 0x3fe06c: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x3fe06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3fe070:
    // 0x3fe070: 0x50400062  beql        $v0, $zero, . + 4 + (0x62 << 2)
label_3fe074:
    if (ctx->pc == 0x3FE074u) {
        ctx->pc = 0x3FE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE070u;
        // 0x3fe074: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE078u;
        goto label_3fe078;
    }
    ctx->pc = 0x3FE070u;
    {
        const bool branch_taken_0x3fe070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe070) {
            ctx->pc = 0x3FE074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE070u;
            // 0x3fe074: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE1FCu;
            goto label_3fe1fc;
        }
    }
    ctx->pc = 0x3FE078u;
label_3fe078:
    // 0x3fe078: 0x92020209  lbu         $v0, 0x209($s0)
    ctx->pc = 0x3fe078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
label_3fe07c:
    // 0x3fe07c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3fe07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3fe080:
    // 0x3fe080: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3fe084:
    if (ctx->pc == 0x3FE084u) {
        ctx->pc = 0x3FE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE080u;
        // 0x3fe084: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE088u;
        goto label_3fe088;
    }
    ctx->pc = 0x3FE080u;
    {
        const bool branch_taken_0x3fe080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe080) {
            ctx->pc = 0x3FE084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE080u;
            // 0x3fe084: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE0B4u;
            goto label_3fe0b4;
        }
    }
    ctx->pc = 0x3FE088u;
label_3fe088:
    // 0x3fe088: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x3fe088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_3fe08c:
    // 0x3fe08c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3fe090:
    if (ctx->pc == 0x3FE090u) {
        ctx->pc = 0x3FE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE08Cu;
        // 0x3fe090: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE094u;
        goto label_3fe094;
    }
    ctx->pc = 0x3FE08Cu;
    {
        const bool branch_taken_0x3fe08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe08c) {
            ctx->pc = 0x3FE090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE08Cu;
            // 0x3fe090: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE0B4u;
            goto label_3fe0b4;
        }
    }
    ctx->pc = 0x3FE094u;
label_3fe094:
    // 0x3fe094: 0xde050198  ld          $a1, 0x198($s0)
    ctx->pc = 0x3fe094u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 408)));
label_3fe098:
    // 0x3fe098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe09c:
    // 0x3fe09c: 0xc0f8ae2  jal         func_3E2B88
label_3fe0a0:
    if (ctx->pc == 0x3FE0A0u) {
        ctx->pc = 0x3FE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE09Cu;
        // 0x3fe0a0: 0x64a50001  daddiu      $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE0A4u;
        goto label_3fe0a4;
    }
    ctx->pc = 0x3FE09Cu;
    SET_GPR_U32(ctx, 31, 0x3FE0A4u);
    ctx->pc = 0x3FE0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE09Cu;
    // 0x3fe0a0: 0x64a50001  daddiu      $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FE09Cu, 0x3FE0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE0A4u;
label_3fe0a4:
    // 0x3fe0a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fe0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fe0a8:
    // 0x3fe0a8: 0xae0201c0  sw          $v0, 0x1C0($s0)
    ctx->pc = 0x3fe0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
label_3fe0ac:
    // 0x3fe0ac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3fe0acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_3fe0b0:
    // 0x3fe0b0: 0x92020209  lbu         $v0, 0x209($s0)
    ctx->pc = 0x3fe0b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
label_3fe0b4:
    // 0x3fe0b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3fe0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3fe0b8:
    // 0x3fe0b8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_3fe0bc:
    if (ctx->pc == 0x3FE0BCu) {
        ctx->pc = 0x3FE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE0B8u;
        // 0x3fe0bc: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE0C0u;
        goto label_3fe0c0;
    }
    ctx->pc = 0x3FE0B8u;
    {
        const bool branch_taken_0x3fe0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe0b8) {
            ctx->pc = 0x3FE0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE0B8u;
            // 0x3fe0bc: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE114u;
            goto label_3fe114;
        }
    }
    ctx->pc = 0x3FE0C0u;
label_3fe0c0:
    // 0x3fe0c0: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x3fe0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_3fe0c4:
    // 0x3fe0c4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_3fe0c8:
    if (ctx->pc == 0x3FE0C8u) {
        ctx->pc = 0x3FE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE0C4u;
        // 0x3fe0c8: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE0CCu;
        goto label_3fe0cc;
    }
    ctx->pc = 0x3FE0C4u;
    {
        const bool branch_taken_0x3fe0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe0c4) {
            ctx->pc = 0x3FE0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE0C4u;
            // 0x3fe0c8: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE114u;
            goto label_3fe114;
        }
    }
    ctx->pc = 0x3FE0CCu;
label_3fe0cc:
    // 0x3fe0cc: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x3fe0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_3fe0d0:
    // 0x3fe0d0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3fe0d4:
    if (ctx->pc == 0x3FE0D4u) {
        ctx->pc = 0x3FE0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE0D0u;
        // 0x3fe0d4: 0xde050198  ld          $a1, 0x198($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE0D8u;
        goto label_3fe0d8;
    }
    ctx->pc = 0x3FE0D0u;
    {
        const bool branch_taken_0x3fe0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe0d0) {
            ctx->pc = 0x3FE0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE0D0u;
            // 0x3fe0d4: 0xde050198  ld          $a1, 0x198($s0) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE0F8u;
            goto label_3fe0f8;
        }
    }
    ctx->pc = 0x3FE0D8u;
label_3fe0d8:
    // 0x3fe0d8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fe0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3fe0dc:
    // 0x3fe0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe0e0:
    // 0x3fe0e0: 0xc0f8782  jal         func_3E1E08
label_3fe0e4:
    if (ctx->pc == 0x3FE0E4u) {
        ctx->pc = 0x3FE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE0E0u;
        // 0x3fe0e4: 0x24a5fc40  addiu       $a1, $a1, -0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE0E8u;
        goto label_3fe0e8;
    }
    ctx->pc = 0x3FE0E0u;
    SET_GPR_U32(ctx, 31, 0x3FE0E8u);
    ctx->pc = 0x3FE0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE0E0u;
    // 0x3fe0e4: 0x24a5fc40  addiu       $a1, $a1, -0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FE0E0u, 0x3FE0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE0E8u;
label_3fe0e8:
    // 0x3fe0e8: 0x92020209  lbu         $v0, 0x209($s0)
    ctx->pc = 0x3fe0e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
label_3fe0ec:
    // 0x3fe0ec: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x3fe0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
label_3fe0f0:
    // 0x3fe0f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3fe0f4:
    if (ctx->pc == 0x3FE0F4u) {
        ctx->pc = 0x3FE0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE0F0u;
        // 0x3fe0f4: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE0F8u;
        goto label_3fe0f8;
    }
    ctx->pc = 0x3FE0F0u;
    {
        const bool branch_taken_0x3fe0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE0F0u;
        // 0x3fe0f4: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe0f0) {
            ctx->pc = 0x3FE110u;
            goto label_3fe110;
        }
    }
    ctx->pc = 0x3FE0F8u;
label_3fe0f8:
    // 0x3fe0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe0fc:
    // 0x3fe0fc: 0xc0f8ae2  jal         func_3E2B88
label_3fe100:
    if (ctx->pc == 0x3FE100u) {
        ctx->pc = 0x3FE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE0FCu;
        // 0x3fe100: 0x64a50001  daddiu      $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE104u;
        goto label_3fe104;
    }
    ctx->pc = 0x3FE0FCu;
    SET_GPR_U32(ctx, 31, 0x3FE104u);
    ctx->pc = 0x3FE100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE0FCu;
    // 0x3fe100: 0x64a50001  daddiu      $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FE0FCu, 0x3FE104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE104u;
label_3fe104:
    // 0x3fe104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3fe104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fe108:
    // 0x3fe108: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x3fe108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
label_3fe10c:
    // 0x3fe10c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3fe10cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_3fe110:
    // 0x3fe110: 0x92020209  lbu         $v0, 0x209($s0)
    ctx->pc = 0x3fe110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
label_3fe114:
    // 0x3fe114: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3fe114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_3fe118:
    // 0x3fe118: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_3fe11c:
    if (ctx->pc == 0x3FE11Cu) {
        ctx->pc = 0x3FE11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE118u;
        // 0x3fe11c: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE120u;
        goto label_3fe120;
    }
    ctx->pc = 0x3FE118u;
    {
        const bool branch_taken_0x3fe118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe118) {
            ctx->pc = 0x3FE11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE118u;
            // 0x3fe11c: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE174u;
            goto label_3fe174;
        }
    }
    ctx->pc = 0x3FE120u;
label_3fe120:
    // 0x3fe120: 0x8e0201c8  lw          $v0, 0x1C8($s0)
    ctx->pc = 0x3fe120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
label_3fe124:
    // 0x3fe124: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_3fe128:
    if (ctx->pc == 0x3FE128u) {
        ctx->pc = 0x3FE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE124u;
        // 0x3fe128: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE12Cu;
        goto label_3fe12c;
    }
    ctx->pc = 0x3FE124u;
    {
        const bool branch_taken_0x3fe124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe124) {
            ctx->pc = 0x3FE128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE124u;
            // 0x3fe128: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE174u;
            goto label_3fe174;
        }
    }
    ctx->pc = 0x3FE12Cu;
label_3fe12c:
    // 0x3fe12c: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x3fe12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_3fe130:
    // 0x3fe130: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3fe134:
    if (ctx->pc == 0x3FE134u) {
        ctx->pc = 0x3FE134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE130u;
        // 0x3fe134: 0xde050198  ld          $a1, 0x198($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE138u;
        goto label_3fe138;
    }
    ctx->pc = 0x3FE130u;
    {
        const bool branch_taken_0x3fe130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe130) {
            ctx->pc = 0x3FE134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE130u;
            // 0x3fe134: 0xde050198  ld          $a1, 0x198($s0) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE158u;
            goto label_3fe158;
        }
    }
    ctx->pc = 0x3FE138u;
label_3fe138:
    // 0x3fe138: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fe138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3fe13c:
    // 0x3fe13c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe140:
    // 0x3fe140: 0xc0f8782  jal         func_3E1E08
label_3fe144:
    if (ctx->pc == 0x3FE144u) {
        ctx->pc = 0x3FE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE140u;
        // 0x3fe144: 0x24a5fc68  addiu       $a1, $a1, -0x398 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE148u;
        goto label_3fe148;
    }
    ctx->pc = 0x3FE140u;
    SET_GPR_U32(ctx, 31, 0x3FE148u);
    ctx->pc = 0x3FE144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE140u;
    // 0x3fe144: 0x24a5fc68  addiu       $a1, $a1, -0x398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FE140u, 0x3FE148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE148u;
label_3fe148:
    // 0x3fe148: 0x92020209  lbu         $v0, 0x209($s0)
    ctx->pc = 0x3fe148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
label_3fe14c:
    // 0x3fe14c: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x3fe14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
label_3fe150:
    // 0x3fe150: 0x10000007  b           . + 4 + (0x7 << 2)
label_3fe154:
    if (ctx->pc == 0x3FE154u) {
        ctx->pc = 0x3FE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE150u;
        // 0x3fe154: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE158u;
        goto label_3fe158;
    }
    ctx->pc = 0x3FE150u;
    {
        const bool branch_taken_0x3fe150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE150u;
        // 0x3fe154: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe150) {
            ctx->pc = 0x3FE170u;
            goto label_3fe170;
        }
    }
    ctx->pc = 0x3FE158u;
label_3fe158:
    // 0x3fe158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe15c:
    // 0x3fe15c: 0xc0f8ae2  jal         func_3E2B88
label_3fe160:
    if (ctx->pc == 0x3FE160u) {
        ctx->pc = 0x3FE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE15Cu;
        // 0x3fe160: 0x64a50001  daddiu      $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE164u;
        goto label_3fe164;
    }
    ctx->pc = 0x3FE15Cu;
    SET_GPR_U32(ctx, 31, 0x3FE164u);
    ctx->pc = 0x3FE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE15Cu;
    // 0x3fe160: 0x64a50001  daddiu      $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FE15Cu, 0x3FE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE164u;
label_3fe164:
    // 0x3fe164: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3fe164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fe168:
    // 0x3fe168: 0xae0201c8  sw          $v0, 0x1C8($s0)
    ctx->pc = 0x3fe168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 2));
label_3fe16c:
    // 0x3fe16c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3fe16cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_3fe170:
    // 0x3fe170: 0x92020209  lbu         $v0, 0x209($s0)
    ctx->pc = 0x3fe170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
label_3fe174:
    // 0x3fe174: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3fe174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_3fe178:
    // 0x3fe178: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_3fe17c:
    if (ctx->pc == 0x3FE17Cu) {
        ctx->pc = 0x3FE17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE178u;
        // 0x3fe17c: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE180u;
        goto label_3fe180;
    }
    ctx->pc = 0x3FE178u;
    {
        const bool branch_taken_0x3fe178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe178) {
            ctx->pc = 0x3FE17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE178u;
            // 0x3fe17c: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE1D4u;
            goto label_3fe1d4;
        }
    }
    ctx->pc = 0x3FE180u;
label_3fe180:
    // 0x3fe180: 0x8e0201cc  lw          $v0, 0x1CC($s0)
    ctx->pc = 0x3fe180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_3fe184:
    // 0x3fe184: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_3fe188:
    if (ctx->pc == 0x3FE188u) {
        ctx->pc = 0x3FE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE184u;
        // 0x3fe188: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE18Cu;
        goto label_3fe18c;
    }
    ctx->pc = 0x3FE184u;
    {
        const bool branch_taken_0x3fe184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe184) {
            ctx->pc = 0x3FE188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE184u;
            // 0x3fe188: 0x92020209  lbu         $v0, 0x209($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE1D4u;
            goto label_3fe1d4;
        }
    }
    ctx->pc = 0x3FE18Cu;
label_3fe18c:
    // 0x3fe18c: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x3fe18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_3fe190:
    // 0x3fe190: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3fe194:
    if (ctx->pc == 0x3FE194u) {
        ctx->pc = 0x3FE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE190u;
        // 0x3fe194: 0xde050198  ld          $a1, 0x198($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE198u;
        goto label_3fe198;
    }
    ctx->pc = 0x3FE190u;
    {
        const bool branch_taken_0x3fe190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe190) {
            ctx->pc = 0x3FE194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE190u;
            // 0x3fe194: 0xde050198  ld          $a1, 0x198($s0) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE1B8u;
            goto label_3fe1b8;
        }
    }
    ctx->pc = 0x3FE198u;
label_3fe198:
    // 0x3fe198: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fe198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3fe19c:
    // 0x3fe19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe1a0:
    // 0x3fe1a0: 0xc0f8782  jal         func_3E1E08
label_3fe1a4:
    if (ctx->pc == 0x3FE1A4u) {
        ctx->pc = 0x3FE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE1A0u;
        // 0x3fe1a4: 0x24a5fc90  addiu       $a1, $a1, -0x370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE1A8u;
        goto label_3fe1a8;
    }
    ctx->pc = 0x3FE1A0u;
    SET_GPR_U32(ctx, 31, 0x3FE1A8u);
    ctx->pc = 0x3FE1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE1A0u;
    // 0x3fe1a4: 0x24a5fc90  addiu       $a1, $a1, -0x370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FE1A0u, 0x3FE1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE1A8u;
label_3fe1a8:
    // 0x3fe1a8: 0x92020209  lbu         $v0, 0x209($s0)
    ctx->pc = 0x3fe1a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
label_3fe1ac:
    // 0x3fe1ac: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x3fe1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_3fe1b0:
    // 0x3fe1b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3fe1b4:
    if (ctx->pc == 0x3FE1B4u) {
        ctx->pc = 0x3FE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE1B0u;
        // 0x3fe1b4: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE1B8u;
        goto label_3fe1b8;
    }
    ctx->pc = 0x3FE1B0u;
    {
        const bool branch_taken_0x3fe1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE1B0u;
        // 0x3fe1b4: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe1b0) {
            ctx->pc = 0x3FE1D0u;
            goto label_3fe1d0;
        }
    }
    ctx->pc = 0x3FE1B8u;
label_3fe1b8:
    // 0x3fe1b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe1bc:
    // 0x3fe1bc: 0xc0f8ae2  jal         func_3E2B88
label_3fe1c0:
    if (ctx->pc == 0x3FE1C0u) {
        ctx->pc = 0x3FE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE1BCu;
        // 0x3fe1c0: 0x64a50001  daddiu      $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE1C4u;
        goto label_3fe1c4;
    }
    ctx->pc = 0x3FE1BCu;
    SET_GPR_U32(ctx, 31, 0x3FE1C4u);
    ctx->pc = 0x3FE1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE1BCu;
    // 0x3fe1c0: 0x64a50001  daddiu      $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FE1BCu, 0x3FE1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE1C4u;
label_3fe1c4:
    // 0x3fe1c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3fe1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3fe1c8:
    // 0x3fe1c8: 0xae0201cc  sw          $v0, 0x1CC($s0)
    ctx->pc = 0x3fe1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 2));
label_3fe1cc:
    // 0x3fe1cc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3fe1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_3fe1d0:
    // 0x3fe1d0: 0x92020209  lbu         $v0, 0x209($s0)
    ctx->pc = 0x3fe1d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
label_3fe1d4:
    // 0x3fe1d4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3fe1d8:
    if (ctx->pc == 0x3FE1D8u) {
        ctx->pc = 0x3FE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE1D4u;
        // 0x3fe1d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE1DCu;
        goto label_3fe1dc;
    }
    ctx->pc = 0x3FE1D4u;
    {
        const bool branch_taken_0x3fe1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe1d4) {
            ctx->pc = 0x3FE1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE1D4u;
            // 0x3fe1d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE1FCu;
            goto label_3fe1fc;
        }
    }
    ctx->pc = 0x3FE1DCu;
label_3fe1dc:
    // 0x3fe1dc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3fe1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3fe1e0:
    // 0x3fe1e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3fe1e4:
    if (ctx->pc == 0x3FE1E4u) {
        ctx->pc = 0x3FE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE1E0u;
        // 0x3fe1e4: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE1E8u;
        goto label_3fe1e8;
    }
    ctx->pc = 0x3FE1E0u;
    {
        const bool branch_taken_0x3fe1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE1E0u;
        // 0x3fe1e4: 0xa2020209  sb          $v0, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe1e0) {
            ctx->pc = 0x3FE1F8u;
            goto label_3fe1f8;
        }
    }
    ctx->pc = 0x3FE1E8u;
label_3fe1e8:
    // 0x3fe1e8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fe1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3fe1ec:
    // 0x3fe1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe1f0:
    // 0x3fe1f0: 0xc0f86f2  jal         func_3E1BC8
label_3fe1f4:
    if (ctx->pc == 0x3FE1F4u) {
        ctx->pc = 0x3FE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE1F0u;
        // 0x3fe1f4: 0x24a5fcb8  addiu       $a1, $a1, -0x348 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE1F8u;
        goto label_3fe1f8;
    }
    ctx->pc = 0x3FE1F0u;
    SET_GPR_U32(ctx, 31, 0x3FE1F8u);
    ctx->pc = 0x3FE1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE1F0u;
    // 0x3fe1f4: 0x24a5fcb8  addiu       $a1, $a1, -0x348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FE1F0u, 0x3FE1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE1F8u;
label_3fe1f8:
    // 0x3fe1f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3fe1f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fe1fc:
    // 0x3fe1fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fe1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3fe200:
    // 0x3fe200: 0x3e00008  jr          $ra
label_3fe204:
    if (ctx->pc == 0x3FE204u) {
        ctx->pc = 0x3FE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE200u;
        // 0x3fe204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE208u;
        goto label_fallthrough_0x3fe200;
    }
    ctx->pc = 0x3FE200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE200u;
        // 0x3fe204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3fe200:
    ctx->pc = 0x3FE208u;
}
