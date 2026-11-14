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

// Function: sub_00262A20
// Address: 0x262a20 - 0x264490
void sub_00262A20_0x262a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262A20_0x262a20");
#endif

    switch (ctx->pc) {
        case 0x262a9cu: goto label_262a9c;
        case 0x262aecu: goto label_262aec;
        case 0x262b20u: goto label_262b20;
        case 0x262b34u: goto label_262b34;
        case 0x262b60u: goto label_262b60;
        case 0x262b6cu: goto label_262b6c;
        case 0x262b84u: goto label_262b84;
        case 0x262b9cu: goto label_262b9c;
        case 0x262bb8u: goto label_262bb8;
        case 0x262bc4u: goto label_262bc4;
        case 0x262bd8u: goto label_262bd8;
        case 0x262be4u: goto label_262be4;
        case 0x262c08u: goto label_262c08;
        case 0x262c18u: goto label_262c18;
        case 0x262c38u: goto label_262c38;
        case 0x262c58u: goto label_262c58;
        case 0x262c68u: goto label_262c68;
        case 0x262cb4u: goto label_262cb4;
        case 0x262cd4u: goto label_262cd4;
        case 0x262f70u: goto label_262f70;
        case 0x262f8cu: goto label_262f8c;
        case 0x262fc8u: goto label_262fc8;
        case 0x26300cu: goto label_26300c;
        case 0x26302cu: goto label_26302c;
        case 0x26306cu: goto label_26306c;
        case 0x263074u: goto label_263074;
        case 0x2630fcu: goto label_2630fc;
        case 0x263110u: goto label_263110;
        case 0x26313cu: goto label_26313c;
        case 0x263158u: goto label_263158;
        case 0x263178u: goto label_263178;
        case 0x263188u: goto label_263188;
        case 0x2631c0u: goto label_2631c0;
        case 0x2631f8u: goto label_2631f8;
        case 0x263208u: goto label_263208;
        case 0x263224u: goto label_263224;
        case 0x263250u: goto label_263250;
        case 0x26326cu: goto label_26326c;
        case 0x26328cu: goto label_26328c;
        case 0x2632a0u: goto label_2632a0;
        case 0x2632e8u: goto label_2632e8;
        case 0x26332cu: goto label_26332c;
        case 0x26333cu: goto label_26333c;
        case 0x26335cu: goto label_26335c;
        case 0x263388u: goto label_263388;
        case 0x2633a4u: goto label_2633a4;
        case 0x2633ccu: goto label_2633cc;
        case 0x2633e4u: goto label_2633e4;
        case 0x26341cu: goto label_26341c;
        case 0x263460u: goto label_263460;
        case 0x263474u: goto label_263474;
        case 0x263490u: goto label_263490;
        case 0x2634bcu: goto label_2634bc;
        case 0x2634d8u: goto label_2634d8;
        case 0x2634f8u: goto label_2634f8;
        case 0x26350cu: goto label_26350c;
        case 0x263548u: goto label_263548;
        case 0x263584u: goto label_263584;
        case 0x263590u: goto label_263590;
        case 0x2635acu: goto label_2635ac;
        case 0x2635d8u: goto label_2635d8;
        case 0x2635f4u: goto label_2635f4;
        case 0x263614u: goto label_263614;
        case 0x263624u: goto label_263624;
        case 0x263664u: goto label_263664;
        case 0x2636a0u: goto label_2636a0;
        case 0x2636acu: goto label_2636ac;
        case 0x2636e0u: goto label_2636e0;
        case 0x2636fcu: goto label_2636fc;
        case 0x263734u: goto label_263734;
        case 0x263768u: goto label_263768;
        case 0x26379cu: goto label_26379c;
        case 0x2637b8u: goto label_2637b8;
        case 0x2637ecu: goto label_2637ec;
        case 0x263804u: goto label_263804;
        case 0x263838u: goto label_263838;
        case 0x263850u: goto label_263850;
        case 0x263884u: goto label_263884;
        case 0x2638b8u: goto label_2638b8;
        case 0x2638f4u: goto label_2638f4;
        case 0x26390cu: goto label_26390c;
        case 0x263940u: goto label_263940;
        case 0x263980u: goto label_263980;
        case 0x263994u: goto label_263994;
        case 0x2639b4u: goto label_2639b4;
        case 0x263a14u: goto label_263a14;
        case 0x263a38u: goto label_263a38;
        case 0x263a8cu: goto label_263a8c;
        case 0x263ac0u: goto label_263ac0;
        case 0x263ad4u: goto label_263ad4;
        case 0x263b18u: goto label_263b18;
        case 0x263b60u: goto label_263b60;
        case 0x263b7cu: goto label_263b7c;
        case 0x263bd0u: goto label_263bd0;
        case 0x263c14u: goto label_263c14;
        case 0x263c5cu: goto label_263c5c;
        case 0x263ca0u: goto label_263ca0;
        case 0x263ce8u: goto label_263ce8;
        case 0x263d2cu: goto label_263d2c;
        case 0x263d44u: goto label_263d44;
        case 0x263d78u: goto label_263d78;
        case 0x263dacu: goto label_263dac;
        case 0x263de0u: goto label_263de0;
        case 0x263e10u: goto label_263e10;
        case 0x263e44u: goto label_263e44;
        case 0x263e78u: goto label_263e78;
        case 0x263ea8u: goto label_263ea8;
        case 0x263ee0u: goto label_263ee0;
        case 0x263f18u: goto label_263f18;
        case 0x263f54u: goto label_263f54;
        case 0x263f90u: goto label_263f90;
        case 0x263fc8u: goto label_263fc8;
        case 0x263ff8u: goto label_263ff8;
        case 0x264030u: goto label_264030;
        case 0x264070u: goto label_264070;
        case 0x2640b0u: goto label_2640b0;
        case 0x2640d4u: goto label_2640d4;
        case 0x26410cu: goto label_26410c;
        case 0x26412cu: goto label_26412c;
        case 0x264180u: goto label_264180;
        case 0x2641a8u: goto label_2641a8;
        case 0x2641e4u: goto label_2641e4;
        case 0x26421cu: goto label_26421c;
        case 0x2642dcu: goto label_2642dc;
        case 0x2642ecu: goto label_2642ec;
        case 0x2642fcu: goto label_2642fc;
        case 0x264314u: goto label_264314;
        case 0x264328u: goto label_264328;
        case 0x264364u: goto label_264364;
        case 0x264398u: goto label_264398;
        case 0x2643a4u: goto label_2643a4;
        case 0x264428u: goto label_264428;
        case 0x26444cu: goto label_26444c;
        default: break;
    }

    ctx->pc = 0x262a20u;

    // 0x262a20: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x262a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
    // 0x262a24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x262a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x262a28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x262a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x262a2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x262a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x262a30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x262a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x262a34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x262a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x262a38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x262a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x262a3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x262a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x262a40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x262a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x262a44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x262a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x262a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262a4c: 0xafa402e0  sw          $a0, 0x2E0($sp)
    ctx->pc = 0x262a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 4));
    // 0x262a50: 0xafa502f0  sw          $a1, 0x2F0($sp)
    ctx->pc = 0x262a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 5));
    // 0x262a54: 0xafa60300  sw          $a2, 0x300($sp)
    ctx->pc = 0x262a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 6));
    // 0x262a58: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x262a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x262a5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x262a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262a60: 0x10a60013  beq         $a1, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x262A60u;
    {
        const bool branch_taken_0x262a60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x262a60) {
            ctx->pc = 0x262AB0u;
            goto label_262ab0;
        }
    }
    ctx->pc = 0x262A68u;
    // 0x262a68: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x262A68u;
    {
        const bool branch_taken_0x262a68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x262a68) {
            ctx->pc = 0x262A78u;
            goto label_262a78;
        }
    }
    ctx->pc = 0x262A70u;
    // 0x262a70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x262A70u;
    {
        const bool branch_taken_0x262a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262a70) {
            ctx->pc = 0x262AD0u;
            goto label_262ad0;
        }
    }
    ctx->pc = 0x262A78u;
label_262a78:
    // 0x262a78: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x262a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x262a7c: 0x24480028  addiu       $t0, $v0, 0x28
    ctx->pc = 0x262a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x262a80: 0xafa802d4  sw          $t0, 0x2D4($sp)
    ctx->pc = 0x262a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 8));
    // 0x262a84: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x262a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x262a88: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x262a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x262a8c: 0xafa302d8  sw          $v1, 0x2D8($sp)
    ctx->pc = 0x262a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 3));
    // 0x262a90: 0x8fa402d8  lw          $a0, 0x2D8($sp)
    ctx->pc = 0x262a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x262a94: 0xc0993d4  jal         func_264F50
    ctx->pc = 0x262A94u;
    SET_GPR_U32(ctx, 31, 0x262A9Cu);
    ctx->pc = 0x264F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264F50u, 0x262A94u, 0x262A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A9Cu;
label_262a9c:
    // 0x262a9c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x262A9Cu;
    {
        const bool branch_taken_0x262a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262a9c) {
            ctx->pc = 0x262ADCu;
            goto label_262adc;
        }
    }
    ctx->pc = 0x262AA4u;
    // 0x262aa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262aa8: 0x1000066a  b           . + 4 + (0x66A << 2)
    ctx->pc = 0x262AA8u;
    {
        const bool branch_taken_0x262aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262aa8) {
            ctx->pc = 0x264454u;
            goto label_264454;
        }
    }
    ctx->pc = 0x262AB0u;
label_262ab0:
    // 0x262ab0: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x262ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x262ab4: 0x24850034  addiu       $a1, $a0, 0x34
    ctx->pc = 0x262ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x262ab8: 0xafa502d4  sw          $a1, 0x2D4($sp)
    ctx->pc = 0x262ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 5));
    // 0x262abc: 0x8fa602e0  lw          $a2, 0x2E0($sp)
    ctx->pc = 0x262abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x262ac0: 0x24c7004c  addiu       $a3, $a2, 0x4C
    ctx->pc = 0x262ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 76));
    // 0x262ac4: 0xafa702d8  sw          $a3, 0x2D8($sp)
    ctx->pc = 0x262ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 7));
    // 0x262ac8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x262AC8u;
    {
        const bool branch_taken_0x262ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262ac8) {
            ctx->pc = 0x262ADCu;
            goto label_262adc;
        }
    }
    ctx->pc = 0x262AD0u;
label_262ad0:
    // 0x262ad0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ad4: 0x1000065f  b           . + 4 + (0x65F << 2)
    ctx->pc = 0x262AD4u;
    {
        const bool branch_taken_0x262ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262ad4) {
            ctx->pc = 0x264454u;
            goto label_264454;
        }
    }
    ctx->pc = 0x262ADCu;
label_262adc:
    // 0x262adc: 0x3c08004f  lui         $t0, 0x4F
    ctx->pc = 0x262adcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)79 << 16));
    // 0x262ae0: 0x2508cac0  addiu       $t0, $t0, -0x3540
    ctx->pc = 0x262ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953664));
    // 0x262ae4: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x262ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x262ae8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x262ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_262aec:
    // 0x262aec: 0x81050000  lb          $a1, 0x0($t0)
    ctx->pc = 0x262aecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x262af0: 0x81040001  lb          $a0, 0x1($t0)
    ctx->pc = 0x262af0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x262af4: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x262af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x262af8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262afc: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x262afcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x262b00: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x262b00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x262b04: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x262b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x262b08: 0x1c60fff8  bgtz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x262B08u;
    {
        const bool branch_taken_0x262b08 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x262b08) {
            ctx->pc = 0x262AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262aec;
        }
    }
    ctx->pc = 0x262B10u;
    // 0x262b10: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x262b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x262b14: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x262b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x262b18: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x262B18u;
    SET_GPR_U32(ctx, 31, 0x262B20u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x262B18u, 0x262B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B20u;
label_262b20:
    // 0x262b20: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x262b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x262b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x262b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b28: 0x27859f88  addiu       $a1, $gp, -0x6078
    ctx->pc = 0x262b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942600));
    // 0x262b2c: 0xc0f0ab6  jal         func_3C2AD8
    ctx->pc = 0x262B2Cu;
    SET_GPR_U32(ctx, 31, 0x262B34u);
    ctx->pc = 0x3C2AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AD8u, 0x262B2Cu, 0x262B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B34u;
label_262b34:
    // 0x262b34: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x262b34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b38: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x262B38u;
    {
        const bool branch_taken_0x262b38 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x262b38) {
            ctx->pc = 0x262B4Cu;
            goto label_262b4c;
        }
    }
    ctx->pc = 0x262B40u;
    // 0x262b40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b44: 0x10000643  b           . + 4 + (0x643 << 2)
    ctx->pc = 0x262B44u;
    {
        const bool branch_taken_0x262b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262b44) {
            ctx->pc = 0x264454u;
            goto label_264454;
        }
    }
    ctx->pc = 0x262B4Cu;
label_262b4c:
    // 0x262b4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x262b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x262b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262b58: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x262B58u;
    SET_GPR_U32(ctx, 31, 0x262B60u);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x262B58u, 0x262B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B60u;
label_262b60:
    // 0x262b60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x262b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b64: 0xc0f0ba4  jal         func_3C2E90
    ctx->pc = 0x262B64u;
    SET_GPR_U32(ctx, 31, 0x262B6Cu);
    ctx->pc = 0x3C2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E90u, 0x262B64u, 0x262B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B6Cu;
label_262b6c:
    // 0x262b6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x262b6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x262b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x262b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b7c: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x262B7Cu;
    SET_GPR_U32(ctx, 31, 0x262B84u);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x262B7Cu, 0x262B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B84u;
label_262b84:
    // 0x262b84: 0x8f86c008  lw          $a2, -0x3FF8($gp)
    ctx->pc = 0x262b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x262b88: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x262b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b90: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x262b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b94: 0xc0993a4  jal         func_264E90
    ctx->pc = 0x262B94u;
    SET_GPR_U32(ctx, 31, 0x262B9Cu);
    ctx->pc = 0x264E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E90u, 0x262B94u, 0x262B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B9Cu;
label_262b9c:
    // 0x262b9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x262b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262ba8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x262ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bac: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x262bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bb0: 0xc0f0b08  jal         func_3C2C20
    ctx->pc = 0x262BB0u;
    SET_GPR_U32(ctx, 31, 0x262BB8u);
    ctx->pc = 0x3C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C20u, 0x262BB0u, 0x262BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262BB8u;
label_262bb8:
    // 0x262bb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x262bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bbc: 0xc0f0af2  jal         func_3C2BC8
    ctx->pc = 0x262BBCu;
    SET_GPR_U32(ctx, 31, 0x262BC4u);
    ctx->pc = 0x3C2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2BC8u, 0x262BBCu, 0x262BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262BC4u;
label_262bc4:
    // 0x262bc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x262bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bc8: 0x27a60278  addiu       $a2, $sp, 0x278
    ctx->pc = 0x262bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
    // 0x262bcc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x262bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bd0: 0xc041b48  jal         func_106D20
    ctx->pc = 0x262BD0u;
    SET_GPR_U32(ctx, 31, 0x262BD8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x262BD0u, 0x262BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262BD8u;
label_262bd8:
    // 0x262bd8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x262bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bdc: 0x10000607  b           . + 4 + (0x607 << 2)
    ctx->pc = 0x262BDCu;
    {
        const bool branch_taken_0x262bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262bdc) {
            ctx->pc = 0x2643FCu;
            goto label_2643fc;
        }
    }
    ctx->pc = 0x262BE4u;
label_262be4:
    // 0x262be4: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x262be4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x262be8: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x262be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x262bec: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x262becu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x262bf0: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x262bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x262bf4: 0x144305eb  bne         $v0, $v1, . + 4 + (0x5EB << 2)
    ctx->pc = 0x262BF4u;
    {
        const bool branch_taken_0x262bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x262bf4) {
            ctx->pc = 0x2643A4u;
            goto label_2643a4;
        }
    }
    ctx->pc = 0x262BFCu;
    // 0x262bfc: 0x240400d4  addiu       $a0, $zero, 0xD4
    ctx->pc = 0x262bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x262c00: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x262C00u;
    SET_GPR_U32(ctx, 31, 0x262C08u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x262C00u, 0x262C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C08u;
label_262c08:
    // 0x262c08: 0x240400d4  addiu       $a0, $zero, 0xD4
    ctx->pc = 0x262c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x262c0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x262c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c10: 0xc0400e0  jal         func_100380
    ctx->pc = 0x262C10u;
    SET_GPR_U32(ctx, 31, 0x262C18u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x262C10u, 0x262C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C18u;
label_262c18:
    // 0x262c18: 0xafa20288  sw          $v0, 0x288($sp)
    ctx->pc = 0x262c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
    // 0x262c1c: 0x8fa60288  lw          $a2, 0x288($sp)
    ctx->pc = 0x262c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x262c20: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x262C20u;
    {
        const bool branch_taken_0x262c20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x262c20) {
            ctx->pc = 0x262C3Cu;
            goto label_262c3c;
        }
    }
    ctx->pc = 0x262C28u;
    // 0x262c28: 0x8fa70288  lw          $a3, 0x288($sp)
    ctx->pc = 0x262c28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x262c2c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x262c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c30: 0xc099334  jal         func_264CD0
    ctx->pc = 0x262C30u;
    SET_GPR_U32(ctx, 31, 0x262C38u);
    ctx->pc = 0x264CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CD0u, 0x262C30u, 0x262C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C38u;
label_262c38:
    // 0x262c38: 0xafa20288  sw          $v0, 0x288($sp)
    ctx->pc = 0x262c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
label_262c3c:
    // 0x262c3c: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x262c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x262c40: 0xafa202cc  sw          $v0, 0x2CC($sp)
    ctx->pc = 0x262c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 2));
    // 0x262c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c48: 0x27859f8c  addiu       $a1, $gp, -0x6074
    ctx->pc = 0x262c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942604));
    // 0x262c4c: 0x8fa602cc  lw          $a2, 0x2CC($sp)
    ctx->pc = 0x262c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262c50: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x262C50u;
    SET_GPR_U32(ctx, 31, 0x262C58u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x262C50u, 0x262C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C58u;
label_262c58:
    // 0x262c58: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x262c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
    // 0x262c5c: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x262c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262c60: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x262C60u;
    SET_GPR_U32(ctx, 31, 0x262C68u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x262C60u, 0x262C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C68u;
label_262c68:
    // 0x262c68: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x262c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x262c6c: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x262c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262c70: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x262c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x262c74: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x262c74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x262c78: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x262c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x262c7c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x262C7Cu;
    {
        const bool branch_taken_0x262c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262c7c) {
            ctx->pc = 0x262CBCu;
            goto label_262cbc;
        }
    }
    ctx->pc = 0x262C84u;
    // 0x262c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x262c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262c88: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x262C88u;
    {
        const bool branch_taken_0x262c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x262c88) {
            ctx->pc = 0x262C98u;
            goto label_262c98;
        }
    }
    ctx->pc = 0x262C90u;
    // 0x262c90: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x262C90u;
    {
        const bool branch_taken_0x262c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262c90) {
            ctx->pc = 0x262CD4u;
            goto label_262cd4;
        }
    }
    ctx->pc = 0x262C98u;
label_262c98:
    // 0x262c98: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x262c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262c9c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x262c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x262ca0: 0x27a40278  addiu       $a0, $sp, 0x278
    ctx->pc = 0x262ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
    // 0x262ca4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x262ca4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x262ca8: 0x24450005  addiu       $a1, $v0, 0x5
    ctx->pc = 0x262ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x262cac: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x262CACu;
    SET_GPR_U32(ctx, 31, 0x262CB4u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x262CACu, 0x262CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262CB4u;
label_262cb4:
    // 0x262cb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x262CB4u;
    {
        const bool branch_taken_0x262cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262cb4) {
            ctx->pc = 0x262CD4u;
            goto label_262cd4;
        }
    }
    ctx->pc = 0x262CBCu;
label_262cbc:
    // 0x262cbc: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x262cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262cc0: 0x27a30278  addiu       $v1, $sp, 0x278
    ctx->pc = 0x262cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
    // 0x262cc4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x262cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262cc8: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x262cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x262ccc: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x262CCCu;
    SET_GPR_U32(ctx, 31, 0x262CD4u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x262CCCu, 0x262CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262CD4u;
label_262cd4:
    // 0x262cd4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x262cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x262cd8: 0x8fa602cc  lw          $a2, 0x2CC($sp)
    ctx->pc = 0x262cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262cdc: 0xacc50020  sw          $a1, 0x20($a2)
    ctx->pc = 0x262cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 5));
    // 0x262ce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262ce4: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x262ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262ce8: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x262ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x262cec: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x262cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262cf0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x262cf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x262cf4: 0x24e3c  dsll32      $t1, $v0, 24
    ctx->pc = 0x262cf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 24));
    // 0x262cf8: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x262cf8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x262cfc: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x262cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x262d00: 0x1123001e  beq         $t1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x262D00u;
    {
        const bool branch_taken_0x262d00 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x262d00) {
            ctx->pc = 0x262D7Cu;
            goto label_262d7c;
        }
    }
    ctx->pc = 0x262D08u;
    // 0x262d08: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x262d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x262d0c: 0x1124001b  beq         $t1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x262D0Cu;
    {
        const bool branch_taken_0x262d0c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x262d0c) {
            ctx->pc = 0x262D7Cu;
            goto label_262d7c;
        }
    }
    ctx->pc = 0x262D14u;
    // 0x262d14: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x262d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x262d18: 0x11250012  beq         $t1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x262D18u;
    {
        const bool branch_taken_0x262d18 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        if (branch_taken_0x262d18) {
            ctx->pc = 0x262D64u;
            goto label_262d64;
        }
    }
    ctx->pc = 0x262D20u;
    // 0x262d20: 0x24060077  addiu       $a2, $zero, 0x77
    ctx->pc = 0x262d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x262d24: 0x1126000f  beq         $t1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x262D24u;
    {
        const bool branch_taken_0x262d24 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 6));
        if (branch_taken_0x262d24) {
            ctx->pc = 0x262D64u;
            goto label_262d64;
        }
    }
    ctx->pc = 0x262D2Cu;
    // 0x262d2c: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x262d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x262d30: 0x11270006  beq         $t1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x262D30u;
    {
        const bool branch_taken_0x262d30 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        if (branch_taken_0x262d30) {
            ctx->pc = 0x262D4Cu;
            goto label_262d4c;
        }
    }
    ctx->pc = 0x262D38u;
    // 0x262d38: 0x2408006d  addiu       $t0, $zero, 0x6D
    ctx->pc = 0x262d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x262d3c: 0x11280003  beq         $t1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262D3Cu;
    {
        const bool branch_taken_0x262d3c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x262d3c) {
            ctx->pc = 0x262D4Cu;
            goto label_262d4c;
        }
    }
    ctx->pc = 0x262D44u;
    // 0x262d44: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x262D44u;
    {
        const bool branch_taken_0x262d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262d44) {
            ctx->pc = 0x262D8Cu;
            goto label_262d8c;
        }
    }
    ctx->pc = 0x262D4Cu;
label_262d4c:
    // 0x262d4c: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x262d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262d50: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x262d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x262d54: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x262d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x262d58: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x262d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x262d5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x262D5Cu;
    {
        const bool branch_taken_0x262d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262d5c) {
            ctx->pc = 0x262D8Cu;
            goto label_262d8c;
        }
    }
    ctx->pc = 0x262D64u;
label_262d64:
    // 0x262d64: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x262d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262d68: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x262d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x262d6c: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x262d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x262d70: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x262d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x262d74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x262D74u;
    {
        const bool branch_taken_0x262d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262d74) {
            ctx->pc = 0x262D8Cu;
            goto label_262d8c;
        }
    }
    ctx->pc = 0x262D7Cu;
label_262d7c:
    // 0x262d7c: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x262d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262d80: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x262d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x262d84: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x262d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x262d88: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x262d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_262d8c:
    // 0x262d8c: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x262d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x262d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262d94: 0x14a20037  bne         $a1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x262D94u;
    {
        const bool branch_taken_0x262d94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x262d94) {
            ctx->pc = 0x262E74u;
            goto label_262e74;
        }
    }
    ctx->pc = 0x262D9Cu;
    // 0x262d9c: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x262d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262da0: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x262da0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x262da4: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x262da4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x262da8: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x262da8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x262dac: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x262dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x262db0: 0x10c3002a  beq         $a2, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x262DB0u;
    {
        const bool branch_taken_0x262db0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x262db0) {
            ctx->pc = 0x262E5Cu;
            goto label_262e5c;
        }
    }
    ctx->pc = 0x262DB8u;
    // 0x262db8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x262db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x262dbc: 0x10c20027  beq         $a2, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x262DBCu;
    {
        const bool branch_taken_0x262dbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x262dbc) {
            ctx->pc = 0x262E5Cu;
            goto label_262e5c;
        }
    }
    ctx->pc = 0x262DC4u;
    // 0x262dc4: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x262dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x262dc8: 0x10c4001e  beq         $a2, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x262DC8u;
    {
        const bool branch_taken_0x262dc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x262dc8) {
            ctx->pc = 0x262E44u;
            goto label_262e44;
        }
    }
    ctx->pc = 0x262DD0u;
    // 0x262dd0: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x262dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x262dd4: 0x10c5001b  beq         $a2, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x262DD4u;
    {
        const bool branch_taken_0x262dd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x262dd4) {
            ctx->pc = 0x262E44u;
            goto label_262e44;
        }
    }
    ctx->pc = 0x262DDCu;
    // 0x262ddc: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x262ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x262de0: 0x10c20012  beq         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x262DE0u;
    {
        const bool branch_taken_0x262de0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x262de0) {
            ctx->pc = 0x262E2Cu;
            goto label_262e2c;
        }
    }
    ctx->pc = 0x262DE8u;
    // 0x262de8: 0x24040062  addiu       $a0, $zero, 0x62
    ctx->pc = 0x262de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x262dec: 0x10c4000f  beq         $a2, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x262DECu;
    {
        const bool branch_taken_0x262dec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x262dec) {
            ctx->pc = 0x262E2Cu;
            goto label_262e2c;
        }
    }
    ctx->pc = 0x262DF4u;
    // 0x262df4: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x262df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x262df8: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x262DF8u;
    {
        const bool branch_taken_0x262df8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x262df8) {
            ctx->pc = 0x262E14u;
            goto label_262e14;
        }
    }
    ctx->pc = 0x262E00u;
    // 0x262e00: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x262e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x262e04: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x262E04u;
    {
        const bool branch_taken_0x262e04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x262e04) {
            ctx->pc = 0x262E14u;
            goto label_262e14;
        }
    }
    ctx->pc = 0x262E0Cu;
    // 0x262e0c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x262E0Cu;
    {
        const bool branch_taken_0x262e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262e0c) {
            ctx->pc = 0x262E90u;
            goto label_262e90;
        }
    }
    ctx->pc = 0x262E14u;
label_262e14:
    // 0x262e14: 0x8fa602cc  lw          $a2, 0x2CC($sp)
    ctx->pc = 0x262e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262e18: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x262e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x262e1c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x262e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x262e20: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x262e20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x262e24: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x262E24u;
    {
        const bool branch_taken_0x262e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262e24) {
            ctx->pc = 0x262E90u;
            goto label_262e90;
        }
    }
    ctx->pc = 0x262E2Cu;
label_262e2c:
    // 0x262e2c: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x262e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262e30: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x262e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x262e34: 0x34a60020  ori         $a2, $a1, 0x20
    ctx->pc = 0x262e34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
    // 0x262e38: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x262e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
    // 0x262e3c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x262E3Cu;
    {
        const bool branch_taken_0x262e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262e3c) {
            ctx->pc = 0x262E90u;
            goto label_262e90;
        }
    }
    ctx->pc = 0x262E44u;
label_262e44:
    // 0x262e44: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x262e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262e48: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x262e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x262e4c: 0x34850010  ori         $a1, $a0, 0x10
    ctx->pc = 0x262e4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x262e50: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x262e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x262e54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x262E54u;
    {
        const bool branch_taken_0x262e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262e54) {
            ctx->pc = 0x262E90u;
            goto label_262e90;
        }
    }
    ctx->pc = 0x262E5Cu;
label_262e5c:
    // 0x262e5c: 0x8fa602cc  lw          $a2, 0x2CC($sp)
    ctx->pc = 0x262e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262e60: 0x8cc70020  lw          $a3, 0x20($a2)
    ctx->pc = 0x262e60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x262e64: 0x34e80008  ori         $t0, $a3, 0x8
    ctx->pc = 0x262e64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x262e68: 0xacc80020  sw          $t0, 0x20($a2)
    ctx->pc = 0x262e68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 8));
    // 0x262e6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262E6Cu;
    {
        const bool branch_taken_0x262e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262e6c) {
            ctx->pc = 0x262E90u;
            goto label_262e90;
        }
    }
    ctx->pc = 0x262E74u;
label_262e74:
    // 0x262e74: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x262e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x262e78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262E78u;
    {
        const bool branch_taken_0x262e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262e78) {
            ctx->pc = 0x262E90u;
            goto label_262e90;
        }
    }
    ctx->pc = 0x262E80u;
    // 0x262e80: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x262e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262e84: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x262e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x262e88: 0x34a20080  ori         $v0, $a1, 0x80
    ctx->pc = 0x262e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x262e8c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x262e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_262e90:
    // 0x262e90: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x262e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x262e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262e98: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x262E98u;
    {
        const bool branch_taken_0x262e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x262e98) {
            ctx->pc = 0x262F48u;
            goto label_262f48;
        }
    }
    ctx->pc = 0x262EA0u;
    // 0x262ea0: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x262ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262ea4: 0x80440002  lb          $a0, 0x2($v0)
    ctx->pc = 0x262ea4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x262ea8: 0x4363c  dsll32      $a2, $a0, 24
    ctx->pc = 0x262ea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 24));
    // 0x262eac: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x262eacu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x262eb0: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x262eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x262eb4: 0x10c5001e  beq         $a2, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x262EB4u;
    {
        const bool branch_taken_0x262eb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x262eb4) {
            ctx->pc = 0x262F30u;
            goto label_262f30;
        }
    }
    ctx->pc = 0x262EBCu;
    // 0x262ebc: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x262ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x262ec0: 0x10c2001b  beq         $a2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x262EC0u;
    {
        const bool branch_taken_0x262ec0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x262ec0) {
            ctx->pc = 0x262F30u;
            goto label_262f30;
        }
    }
    ctx->pc = 0x262EC8u;
    // 0x262ec8: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x262ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x262ecc: 0x10c30012  beq         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x262ECCu;
    {
        const bool branch_taken_0x262ecc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x262ecc) {
            ctx->pc = 0x262F18u;
            goto label_262f18;
        }
    }
    ctx->pc = 0x262ED4u;
    // 0x262ed4: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x262ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x262ed8: 0x10c3000f  beq         $a2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x262ED8u;
    {
        const bool branch_taken_0x262ed8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x262ed8) {
            ctx->pc = 0x262F18u;
            goto label_262f18;
        }
    }
    ctx->pc = 0x262EE0u;
    // 0x262ee0: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x262ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x262ee4: 0x10c40006  beq         $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x262EE4u;
    {
        const bool branch_taken_0x262ee4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x262ee4) {
            ctx->pc = 0x262F00u;
            goto label_262f00;
        }
    }
    ctx->pc = 0x262EECu;
    // 0x262eec: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x262eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x262ef0: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x262EF0u;
    {
        const bool branch_taken_0x262ef0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x262ef0) {
            ctx->pc = 0x262F00u;
            goto label_262f00;
        }
    }
    ctx->pc = 0x262EF8u;
    // 0x262ef8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x262EF8u;
    {
        const bool branch_taken_0x262ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262ef8) {
            ctx->pc = 0x262F64u;
            goto label_262f64;
        }
    }
    ctx->pc = 0x262F00u;
label_262f00:
    // 0x262f00: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x262f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262f04: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x262f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x262f08: 0x34852000  ori         $a1, $a0, 0x2000
    ctx->pc = 0x262f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x262f0c: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x262f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x262f10: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x262F10u;
    {
        const bool branch_taken_0x262f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262f10) {
            ctx->pc = 0x262F64u;
            goto label_262f64;
        }
    }
    ctx->pc = 0x262F18u;
label_262f18:
    // 0x262f18: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x262f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262f1c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x262f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x262f20: 0x34854000  ori         $a1, $a0, 0x4000
    ctx->pc = 0x262f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x262f24: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x262f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x262f28: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x262F28u;
    {
        const bool branch_taken_0x262f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262f28) {
            ctx->pc = 0x262F64u;
            goto label_262f64;
        }
    }
    ctx->pc = 0x262F30u;
label_262f30:
    // 0x262f30: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x262f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262f34: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x262f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x262f38: 0x34658000  ori         $a1, $v1, 0x8000
    ctx->pc = 0x262f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x262f3c: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x262f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x262f40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262F40u;
    {
        const bool branch_taken_0x262f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262f40) {
            ctx->pc = 0x262F64u;
            goto label_262f64;
        }
    }
    ctx->pc = 0x262F48u;
label_262f48:
    // 0x262f48: 0x8fa60300  lw          $a2, 0x300($sp)
    ctx->pc = 0x262f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x262f4c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x262F4Cu;
    {
        const bool branch_taken_0x262f4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x262f4c) {
            ctx->pc = 0x262F64u;
            goto label_262f64;
        }
    }
    ctx->pc = 0x262F54u;
    // 0x262f54: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x262f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262f58: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x262f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x262f5c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x262f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x262f60: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x262f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
label_262f64:
    // 0x262f64: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x262f64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f68: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x262F68u;
    {
        const bool branch_taken_0x262f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262f68) {
            ctx->pc = 0x262FB0u;
            goto label_262fb0;
        }
    }
    ctx->pc = 0x262F70u;
label_262f70:
    // 0x262f70: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x262f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x262f74: 0x8fa602cc  lw          $a2, 0x2CC($sp)
    ctx->pc = 0x262f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262f78: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x262f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x262f7c: 0x2464002c  addiu       $a0, $v1, 0x2C
    ctx->pc = 0x262f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x262f80: 0x27859f90  addiu       $a1, $gp, -0x6070
    ctx->pc = 0x262f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942608));
    // 0x262f84: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x262F84u;
    SET_GPR_U32(ctx, 31, 0x262F8Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x262F84u, 0x262F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F8Cu;
label_262f8c:
    // 0x262f8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x262f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262f90: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x262f90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x262f94: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x262f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262f98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x262f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x262f9c: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x262f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x262fa0: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x262fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262fa4: 0x942821  addu        $a1, $a0, $s4
    ctx->pc = 0x262fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x262fa8: 0xa0a0007c  sb          $zero, 0x7C($a1)
    ctx->pc = 0x262fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x262fac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x262facu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_262fb0:
    // 0x262fb0: 0x2e840004  sltiu       $a0, $s4, 0x4
    ctx->pc = 0x262fb0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x262fb4: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x262FB4u;
    {
        const bool branch_taken_0x262fb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x262fb4) {
            ctx->pc = 0x262F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262f70;
        }
    }
    ctx->pc = 0x262FBCu;
    // 0x262fbc: 0xafa002c8  sw          $zero, 0x2C8($sp)
    ctx->pc = 0x262fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 0));
    // 0x262fc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x262FC0u;
    {
        const bool branch_taken_0x262fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262fc0) {
            ctx->pc = 0x262FF0u;
            goto label_262ff0;
        }
    }
    ctx->pc = 0x262FC8u;
label_262fc8:
    // 0x262fc8: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x262fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x262fcc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x262fccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262fd0: 0x8fa202c8  lw          $v0, 0x2C8($sp)
    ctx->pc = 0x262fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x262fd4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x262fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x262fd8: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x262fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x262fdc: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x262fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x262fe0: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x262fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x262fe4: 0x8fa202c8  lw          $v0, 0x2C8($sp)
    ctx->pc = 0x262fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x262fe8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x262fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x262fec: 0xafa502c8  sw          $a1, 0x2C8($sp)
    ctx->pc = 0x262fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 5));
label_262ff0:
    // 0x262ff0: 0x8fa602c8  lw          $a2, 0x2C8($sp)
    ctx->pc = 0x262ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x262ff4: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x262ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x262ff8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x262FF8u;
    {
        const bool branch_taken_0x262ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262ff8) {
            ctx->pc = 0x262FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262fc8;
        }
    }
    ctx->pc = 0x263000u;
    // 0x263000: 0xafa002c4  sw          $zero, 0x2C4($sp)
    ctx->pc = 0x263000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 0));
    // 0x263004: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x263004u;
    {
        const bool branch_taken_0x263004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263004) {
            ctx->pc = 0x263038u;
            goto label_263038;
        }
    }
    ctx->pc = 0x26300Cu;
label_26300c:
    // 0x26300c: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x26300cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x263010: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x263010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x263014: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x263014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263018: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x263018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26301c: 0x24640090  addiu       $a0, $v1, 0x90
    ctx->pc = 0x26301cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x263020: 0x27859f90  addiu       $a1, $gp, -0x6070
    ctx->pc = 0x263020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942608));
    // 0x263024: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x263024u;
    SET_GPR_U32(ctx, 31, 0x26302Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x263024u, 0x26302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26302Cu;
label_26302c:
    // 0x26302c: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x26302cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x263030: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x263030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x263034: 0xafa602c4  sw          $a2, 0x2C4($sp)
    ctx->pc = 0x263034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 6));
label_263038:
    // 0x263038: 0x8fa202c4  lw          $v0, 0x2C4($sp)
    ctx->pc = 0x263038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x26303c: 0x2c440002  sltiu       $a0, $v0, 0x2
    ctx->pc = 0x26303cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x263040: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x263040u;
    {
        const bool branch_taken_0x263040 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x263040) {
            ctx->pc = 0x26300Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26300c;
        }
    }
    ctx->pc = 0x263048u;
    // 0x263048: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x263048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x26304c: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x26304cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x263050: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x263050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263054: 0xafa002c0  sw          $zero, 0x2C0($sp)
    ctx->pc = 0x263054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 0));
    // 0x263058: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x263058u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26305c: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x26305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263064: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x263064u;
    SET_GPR_U32(ctx, 31, 0x26306Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x263064u, 0x26306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26306Cu;
label_26306c:
    // 0x26306c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x26306cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x263070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x263070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_263074:
    // 0x263074: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x263074u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x263078: 0x73082a  slt         $at, $v1, $s3
    ctx->pc = 0x263078u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x26307c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x26307Cu;
    {
        const bool branch_taken_0x26307c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26307c) {
            ctx->pc = 0x2630C4u;
            goto label_2630c4;
        }
    }
    ctx->pc = 0x263084u;
    // 0x263084: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x263084u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x263088: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x263088u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x26308c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x26308cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x263090: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x263090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x263094: 0x14a60007  bne         $a1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x263094u;
    {
        const bool branch_taken_0x263094 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x263094) {
            ctx->pc = 0x2630B4u;
            goto label_2630b4;
        }
    }
    ctx->pc = 0x26309Cu;
    // 0x26309c: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x26309cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2630a0: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x2630a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2630a4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2630a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2630a8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2630a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2630ac: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2630ACu;
    {
        const bool branch_taken_0x2630ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x2630ac) {
            ctx->pc = 0x2630C4u;
            goto label_2630c4;
        }
    }
    ctx->pc = 0x2630B4u;
label_2630b4:
    // 0x2630b4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2630b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2630b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2630b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630bc: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x2630BCu;
    {
        const bool branch_taken_0x2630bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2630bc) {
            ctx->pc = 0x263074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263074;
        }
    }
    ctx->pc = 0x2630C4u;
label_2630c4:
    // 0x2630c4: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x2630c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2630c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2630c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630cc: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x2630ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2630d0: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x2630d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2630d4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2630d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2630d8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2630d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2630dc: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2630DCu;
    {
        const bool branch_taken_0x2630dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2630dc) {
            ctx->pc = 0x2630FCu;
            goto label_2630fc;
        }
    }
    ctx->pc = 0x2630E4u;
    // 0x2630e4: 0x82040001  lb          $a0, 0x1($s0)
    ctx->pc = 0x2630e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2630e8: 0x42e3c  dsll32      $a1, $a0, 24
    ctx->pc = 0x2630e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2630ec: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2630ecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2630f0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2630f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2630f4: 0x10a20469  beq         $a1, $v0, . + 4 + (0x469 << 2)
    ctx->pc = 0x2630F4u;
    {
        const bool branch_taken_0x2630f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2630f4) {
            ctx->pc = 0x26429Cu;
            goto label_26429c;
        }
    }
    ctx->pc = 0x2630FCu;
label_2630fc:
    // 0x2630fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2630fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263100: 0x27859f98  addiu       $a1, $gp, -0x6068
    ctx->pc = 0x263100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942616));
    // 0x263104: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x263104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263108: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x263108u;
    SET_GPR_U32(ctx, 31, 0x263110u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x263108u, 0x263110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263110u;
label_263110:
    // 0x263110: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x263110u;
    {
        const bool branch_taken_0x263110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263110) {
            ctx->pc = 0x263210u;
            goto label_263210;
        }
    }
    ctx->pc = 0x263118u;
    // 0x263118: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x263118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26311c: 0xafa302bc  sw          $v1, 0x2BC($sp)
    ctx->pc = 0x26311cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 3));
    // 0x263120: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x263120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263124: 0xafa402b8  sw          $a0, 0x2B8($sp)
    ctx->pc = 0x263124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 4));
    // 0x263128: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x263128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x26312c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x26312cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x263130: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x263130u;
    {
        const bool branch_taken_0x263130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x263130) {
            ctx->pc = 0x263158u;
            goto label_263158;
        }
    }
    ctx->pc = 0x263138u;
    // 0x263138: 0xa01821  addu        $v1, $a1, $zero
    ctx->pc = 0x263138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 0)));
label_26313c:
    // 0x26313c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x26313cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x263140: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x263140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x263144: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x263144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x263148: 0x0  nop
    ctx->pc = 0x263148u;
    // NOP
    // 0x26314c: 0x0  nop
    ctx->pc = 0x26314cu;
    // NOP
    // 0x263150: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x263150u;
    {
        const bool branch_taken_0x263150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263150) {
            ctx->pc = 0x26313Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26313c;
        }
    }
    ctx->pc = 0x263158u;
label_263158:
    // 0x263158: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26315c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26315cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x263160: 0x24a5cbe0  addiu       $a1, $a1, -0x3420
    ctx->pc = 0x263160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953952));
    // 0x263164: 0x27a602bc  addiu       $a2, $sp, 0x2BC
    ctx->pc = 0x263164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
    // 0x263168: 0x27a702b8  addiu       $a3, $sp, 0x2B8
    ctx->pc = 0x263168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
    // 0x26316c: 0x27a801c0  addiu       $t0, $sp, 0x1C0
    ctx->pc = 0x26316cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x263170: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x263170u;
    SET_GPR_U32(ctx, 31, 0x263178u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x263170u, 0x263178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263178u;
label_263178:
    // 0x263178: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26317c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x26317cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x263180: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x263180u;
    SET_GPR_U32(ctx, 31, 0x263188u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x263180u, 0x263188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263188u;
label_263188:
    // 0x263188: 0xa3a001c0  sb          $zero, 0x1C0($sp)
    ctx->pc = 0x263188u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 0));
    // 0x26318c: 0x8fa202bc  lw          $v0, 0x2BC($sp)
    ctx->pc = 0x26318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x263190: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x263190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x263194: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x263194u;
    {
        const bool branch_taken_0x263194 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x263194) {
            ctx->pc = 0x2631C0u;
            goto label_2631c0;
        }
    }
    ctx->pc = 0x26319Cu;
    // 0x26319c: 0x8fa602bc  lw          $a2, 0x2BC($sp)
    ctx->pc = 0x26319cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x2631a0: 0xafa60268  sw          $a2, 0x268($sp)
    ctx->pc = 0x2631a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 6));
    // 0x2631a4: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x2631a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
    // 0x2631a8: 0xafa00270  sw          $zero, 0x270($sp)
    ctx->pc = 0x2631a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 0));
    // 0x2631ac: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x2631acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2631b0: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x2631b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x2631b4: 0x27a50268  addiu       $a1, $sp, 0x268
    ctx->pc = 0x2631b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
    // 0x2631b8: 0xc09921c  jal         func_264870
    ctx->pc = 0x2631B8u;
    SET_GPR_U32(ctx, 31, 0x2631C0u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x2631B8u, 0x2631C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2631C0u;
label_2631c0:
    // 0x2631c0: 0x8fa602b8  lw          $a2, 0x2B8($sp)
    ctx->pc = 0x2631c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x2631c4: 0xc0082a  slt         $at, $a2, $zero
    ctx->pc = 0x2631c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2631c8: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2631C8u;
    {
        const bool branch_taken_0x2631c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2631c8) {
            ctx->pc = 0x2631F8u;
            goto label_2631f8;
        }
    }
    ctx->pc = 0x2631D0u;
    // 0x2631d0: 0x8fa302b8  lw          $v1, 0x2B8($sp)
    ctx->pc = 0x2631d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x2631d4: 0xafa30268  sw          $v1, 0x268($sp)
    ctx->pc = 0x2631d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
    // 0x2631d8: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x2631d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
    // 0x2631dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2631dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2631e0: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x2631e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
    // 0x2631e4: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x2631e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2631e8: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x2631e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2631ec: 0x27a50268  addiu       $a1, $sp, 0x268
    ctx->pc = 0x2631ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
    // 0x2631f0: 0xc09921c  jal         func_264870
    ctx->pc = 0x2631F0u;
    SET_GPR_U32(ctx, 31, 0x2631F8u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x2631F0u, 0x2631F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2631F8u;
label_2631f8:
    // 0x2631f8: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2631f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2631fc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2631fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263200: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x263200u;
    SET_GPR_U32(ctx, 31, 0x263208u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x263200u, 0x263208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263208u;
label_263208:
    // 0x263208: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x263208u;
    {
        const bool branch_taken_0x263208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263208) {
            ctx->pc = 0x263158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263158;
        }
    }
    ctx->pc = 0x263210u;
label_263210:
    // 0x263210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263214: 0x27859fa0  addiu       $a1, $gp, -0x6060
    ctx->pc = 0x263214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942624));
    // 0x263218: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x263218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26321c: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x26321Cu;
    SET_GPR_U32(ctx, 31, 0x263224u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x26321Cu, 0x263224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263224u;
label_263224:
    // 0x263224: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x263224u;
    {
        const bool branch_taken_0x263224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263224) {
            ctx->pc = 0x263344u;
            goto label_263344;
        }
    }
    ctx->pc = 0x26322Cu;
    // 0x26322c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x26322cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263230: 0xafa802b4  sw          $t0, 0x2B4($sp)
    ctx->pc = 0x263230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 8));
    // 0x263234: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x263234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263238: 0xafa202b0  sw          $v0, 0x2B0($sp)
    ctx->pc = 0x263238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 2));
    // 0x26323c: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x26323cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x263240: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x263240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x263244: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x263244u;
    {
        const bool branch_taken_0x263244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263244) {
            ctx->pc = 0x26326Cu;
            goto label_26326c;
        }
    }
    ctx->pc = 0x26324Cu;
    // 0x26324c: 0x601021  addu        $v0, $v1, $zero
    ctx->pc = 0x26324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_263250:
    // 0x263250: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x263250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x263254: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x263254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x263258: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x263258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x26325c: 0x0  nop
    ctx->pc = 0x26325cu;
    // NOP
    // 0x263260: 0x0  nop
    ctx->pc = 0x263260u;
    // NOP
    // 0x263264: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x263264u;
    {
        const bool branch_taken_0x263264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x263264) {
            ctx->pc = 0x263250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263250;
        }
    }
    ctx->pc = 0x26326Cu;
label_26326c:
    // 0x26326c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x26326cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263270: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x263270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x263274: 0x24a5cbf8  addiu       $a1, $a1, -0x3408
    ctx->pc = 0x263274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953976));
    // 0x263278: 0x27a602b4  addiu       $a2, $sp, 0x2B4
    ctx->pc = 0x263278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
    // 0x26327c: 0x27a702b0  addiu       $a3, $sp, 0x2B0
    ctx->pc = 0x26327cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x263280: 0x27a801a0  addiu       $t0, $sp, 0x1A0
    ctx->pc = 0x263280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x263284: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x263284u;
    SET_GPR_U32(ctx, 31, 0x26328Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x263284u, 0x26328Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26328Cu;
label_26328c:
    // 0x26328c: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x26328cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263290: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x263290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263294: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x263294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x263298: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x263298u;
    SET_GPR_U32(ctx, 31, 0x2632A0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x263298u, 0x2632A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2632A0u;
label_2632a0:
    // 0x2632a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2632a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2632a4: 0xa3a001a0  sb          $zero, 0x1A0($sp)
    ctx->pc = 0x2632a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 416), (uint8_t)GPR_U32(ctx, 0));
    // 0x2632a8: 0x8fa202b4  lw          $v0, 0x2B4($sp)
    ctx->pc = 0x2632a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
    // 0x2632ac: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x2632acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2632b0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2632B0u;
    {
        const bool branch_taken_0x2632b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2632b0) {
            ctx->pc = 0x2632E8u;
            goto label_2632e8;
        }
    }
    ctx->pc = 0x2632B8u;
    // 0x2632b8: 0x8fa402b4  lw          $a0, 0x2B4($sp)
    ctx->pc = 0x2632b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
    // 0x2632bc: 0xafa40258  sw          $a0, 0x258($sp)
    ctx->pc = 0x2632bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 4));
    // 0x2632c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2632c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2632c4: 0xafa3025c  sw          $v1, 0x25C($sp)
    ctx->pc = 0x2632c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 3));
    // 0x2632c8: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x2632c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
    // 0x2632cc: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2632ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2632d0: 0x248500b0  addiu       $a1, $a0, 0xB0
    ctx->pc = 0x2632d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x2632d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2632d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2632d8: 0x27a20258  addiu       $v0, $sp, 0x258
    ctx->pc = 0x2632d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x2632dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2632dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2632e0: 0xc09921c  jal         func_264870
    ctx->pc = 0x2632E0u;
    SET_GPR_U32(ctx, 31, 0x2632E8u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x2632E0u, 0x2632E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2632E8u;
label_2632e8:
    // 0x2632e8: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x2632e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2632ec: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x2632ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2632f0: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2632F0u;
    {
        const bool branch_taken_0x2632f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2632f0) {
            ctx->pc = 0x26332Cu;
            goto label_26332c;
        }
    }
    ctx->pc = 0x2632F8u;
    // 0x2632f8: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x2632f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2632fc: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x2632fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
    // 0x263300: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x263300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263304: 0xafa6025c  sw          $a2, 0x25C($sp)
    ctx->pc = 0x263304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 6));
    // 0x263308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26330c: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x26330cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x263310: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x263310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263314: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x263314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x263318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26331c: 0x27a60258  addiu       $a2, $sp, 0x258
    ctx->pc = 0x26331cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x263320: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x263320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263324: 0xc09921c  jal         func_264870
    ctx->pc = 0x263324u;
    SET_GPR_U32(ctx, 31, 0x26332Cu);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x263324u, 0x26332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26332Cu;
label_26332c:
    // 0x26332c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x26332cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263330: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x263330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263334: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x263334u;
    SET_GPR_U32(ctx, 31, 0x26333Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x263334u, 0x26333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26333Cu;
label_26333c:
    // 0x26333c: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x26333Cu;
    {
        const bool branch_taken_0x26333c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26333c) {
            ctx->pc = 0x26326Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26326c;
        }
    }
    ctx->pc = 0x263344u;
label_263344:
    // 0x263344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263348: 0x27829fa8  addiu       $v0, $gp, -0x6058
    ctx->pc = 0x263348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942632));
    // 0x26334c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26334cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263350: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x263350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263354: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x263354u;
    SET_GPR_U32(ctx, 31, 0x26335Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x263354u, 0x26335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26335Cu;
label_26335c:
    // 0x26335c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x26335Cu;
    {
        const bool branch_taken_0x26335c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26335c) {
            ctx->pc = 0x26347Cu;
            goto label_26347c;
        }
    }
    ctx->pc = 0x263364u;
    // 0x263364: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x263364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263368: 0xafa302ac  sw          $v1, 0x2AC($sp)
    ctx->pc = 0x263368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 3));
    // 0x26336c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263370: 0xafa202a8  sw          $v0, 0x2A8($sp)
    ctx->pc = 0x263370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
    // 0x263374: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x263374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x263378: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x263378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26337c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26337Cu;
    {
        const bool branch_taken_0x26337c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26337c) {
            ctx->pc = 0x2633A4u;
            goto label_2633a4;
        }
    }
    ctx->pc = 0x263384u;
    // 0x263384: 0x601021  addu        $v0, $v1, $zero
    ctx->pc = 0x263384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_263388:
    // 0x263388: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x263388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26338c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26338cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x263390: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x263390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x263394: 0x0  nop
    ctx->pc = 0x263394u;
    // NOP
    // 0x263398: 0x0  nop
    ctx->pc = 0x263398u;
    // NOP
    // 0x26339c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26339Cu;
    {
        const bool branch_taken_0x26339c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x26339c) {
            ctx->pc = 0x263388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263388;
        }
    }
    ctx->pc = 0x2633A4u;
label_2633a4:
    // 0x2633a4: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2633a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2633a8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2633a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2633ac: 0x2442cbe0  addiu       $v0, $v0, -0x3420
    ctx->pc = 0x2633acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953952));
    // 0x2633b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2633b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2633b4: 0x27a602ac  addiu       $a2, $sp, 0x2AC
    ctx->pc = 0x2633b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
    // 0x2633b8: 0x27a702a8  addiu       $a3, $sp, 0x2A8
    ctx->pc = 0x2633b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
    // 0x2633bc: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x2633bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2633c0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2633c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2633c4: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x2633C4u;
    SET_GPR_U32(ctx, 31, 0x2633CCu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x2633C4u, 0x2633CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2633CCu;
label_2633cc:
    // 0x2633cc: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2633ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2633d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2633d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2633d4: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2633d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2633d8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2633d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2633dc: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2633DCu;
    SET_GPR_U32(ctx, 31, 0x2633E4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2633DCu, 0x2633E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2633E4u;
label_2633e4:
    // 0x2633e4: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x2633e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x2633e8: 0x8fa402ac  lw          $a0, 0x2AC($sp)
    ctx->pc = 0x2633e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
    // 0x2633ec: 0x80082a  slt         $at, $a0, $zero
    ctx->pc = 0x2633ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2633f0: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2633F0u;
    {
        const bool branch_taken_0x2633f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2633f0) {
            ctx->pc = 0x26341Cu;
            goto label_26341c;
        }
    }
    ctx->pc = 0x2633F8u;
    // 0x2633f8: 0x8fa202ac  lw          $v0, 0x2AC($sp)
    ctx->pc = 0x2633f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
    // 0x2633fc: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x2633fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x263400: 0xafa0024c  sw          $zero, 0x24C($sp)
    ctx->pc = 0x263400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 0));
    // 0x263404: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x263404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
    // 0x263408: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x263408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x26340c: 0x246400bc  addiu       $a0, $v1, 0xBC
    ctx->pc = 0x26340cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 188));
    // 0x263410: 0x27a50248  addiu       $a1, $sp, 0x248
    ctx->pc = 0x263410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x263414: 0xc09921c  jal         func_264870
    ctx->pc = 0x263414u;
    SET_GPR_U32(ctx, 31, 0x26341Cu);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x263414u, 0x26341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26341Cu;
label_26341c:
    // 0x26341c: 0x8fa302a8  lw          $v1, 0x2A8($sp)
    ctx->pc = 0x26341cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x263420: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x263420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x263424: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x263424u;
    {
        const bool branch_taken_0x263424 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x263424) {
            ctx->pc = 0x263464u;
            goto label_263464;
        }
    }
    ctx->pc = 0x26342Cu;
    // 0x26342c: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x26342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x263430: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x263430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x263434: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x263434u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x263438: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x263438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x26343c: 0xafa0024c  sw          $zero, 0x24C($sp)
    ctx->pc = 0x26343cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 0));
    // 0x263440: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x263440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263444: 0xafa40250  sw          $a0, 0x250($sp)
    ctx->pc = 0x263444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 4));
    // 0x263448: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x263448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x26344c: 0x24a200bc  addiu       $v0, $a1, 0xBC
    ctx->pc = 0x26344cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 188));
    // 0x263450: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263454: 0x27a50248  addiu       $a1, $sp, 0x248
    ctx->pc = 0x263454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x263458: 0xc09921c  jal         func_264870
    ctx->pc = 0x263458u;
    SET_GPR_U32(ctx, 31, 0x263460u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x263458u, 0x263460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263460u;
label_263460:
    // 0x263460: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x263460u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263464:
    // 0x263464: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x263464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263468: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x263468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26346c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x26346Cu;
    SET_GPR_U32(ctx, 31, 0x263474u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x26346Cu, 0x263474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263474u;
label_263474:
    // 0x263474: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x263474u;
    {
        const bool branch_taken_0x263474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263474) {
            ctx->pc = 0x2633A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2633a4;
        }
    }
    ctx->pc = 0x26347Cu;
label_26347c:
    // 0x26347c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26347cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263480: 0x27859fb0  addiu       $a1, $gp, -0x6050
    ctx->pc = 0x263480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942640));
    // 0x263484: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x263484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263488: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x263488u;
    SET_GPR_U32(ctx, 31, 0x263490u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x263488u, 0x263490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263490u;
label_263490:
    // 0x263490: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x263490u;
    {
        const bool branch_taken_0x263490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263490) {
            ctx->pc = 0x263598u;
            goto label_263598;
        }
    }
    ctx->pc = 0x263498u;
    // 0x263498: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x263498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26349c: 0xafa402a4  sw          $a0, 0x2A4($sp)
    ctx->pc = 0x26349cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 4));
    // 0x2634a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2634a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2634a4: 0xafa502a0  sw          $a1, 0x2A0($sp)
    ctx->pc = 0x2634a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 5));
    // 0x2634a8: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x2634a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2634ac: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x2634acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2634b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2634B0u;
    {
        const bool branch_taken_0x2634b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2634b0) {
            ctx->pc = 0x2634D8u;
            goto label_2634d8;
        }
    }
    ctx->pc = 0x2634B8u;
    // 0x2634b8: 0x401821  addu        $v1, $v0, $zero
    ctx->pc = 0x2634b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_2634bc:
    // 0x2634bc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2634bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2634c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2634c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2634c4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2634c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2634c8: 0x0  nop
    ctx->pc = 0x2634c8u;
    // NOP
    // 0x2634cc: 0x0  nop
    ctx->pc = 0x2634ccu;
    // NOP
    // 0x2634d0: 0x1520fffa  bnez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2634D0u;
    {
        const bool branch_taken_0x2634d0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2634d0) {
            ctx->pc = 0x2634BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2634bc;
        }
    }
    ctx->pc = 0x2634D8u;
label_2634d8:
    // 0x2634d8: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2634d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2634dc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2634dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2634e0: 0x24a5cbf8  addiu       $a1, $a1, -0x3408
    ctx->pc = 0x2634e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953976));
    // 0x2634e4: 0x27a602a4  addiu       $a2, $sp, 0x2A4
    ctx->pc = 0x2634e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 676));
    // 0x2634e8: 0x27a702a0  addiu       $a3, $sp, 0x2A0
    ctx->pc = 0x2634e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2634ec: 0x27a80160  addiu       $t0, $sp, 0x160
    ctx->pc = 0x2634ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2634f0: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x2634F0u;
    SET_GPR_U32(ctx, 31, 0x2634F8u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x2634F0u, 0x2634F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2634F8u;
label_2634f8:
    // 0x2634f8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2634f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2634fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2634fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263500: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x263500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x263504: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x263504u;
    SET_GPR_U32(ctx, 31, 0x26350Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x263504u, 0x26350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26350Cu;
label_26350c:
    // 0x26350c: 0xa3a00160  sb          $zero, 0x160($sp)
    ctx->pc = 0x26350cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 0));
    // 0x263510: 0x8fa302a4  lw          $v1, 0x2A4($sp)
    ctx->pc = 0x263510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x263514: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x263514u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x263518: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x263518u;
    {
        const bool branch_taken_0x263518 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x263518) {
            ctx->pc = 0x263548u;
            goto label_263548;
        }
    }
    ctx->pc = 0x263520u;
    // 0x263520: 0x8fa402a4  lw          $a0, 0x2A4($sp)
    ctx->pc = 0x263520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x263524: 0xafa40238  sw          $a0, 0x238($sp)
    ctx->pc = 0x263524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 4));
    // 0x263528: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x263528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26352c: 0xafa3023c  sw          $v1, 0x23C($sp)
    ctx->pc = 0x26352cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 3));
    // 0x263530: 0xafa00240  sw          $zero, 0x240($sp)
    ctx->pc = 0x263530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 0));
    // 0x263534: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x263534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263538: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x263538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x26353c: 0x27a50238  addiu       $a1, $sp, 0x238
    ctx->pc = 0x26353cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x263540: 0xc09921c  jal         func_264870
    ctx->pc = 0x263540u;
    SET_GPR_U32(ctx, 31, 0x263548u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x263540u, 0x263548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263548u;
label_263548:
    // 0x263548: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x263548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x26354c: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x26354cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x263550: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x263550u;
    {
        const bool branch_taken_0x263550 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x263550) {
            ctx->pc = 0x263584u;
            goto label_263584;
        }
    }
    ctx->pc = 0x263558u;
    // 0x263558: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x263558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x26355c: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x26355cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
    // 0x263560: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x263560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263564: 0xafa6023c  sw          $a2, 0x23C($sp)
    ctx->pc = 0x263564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 6));
    // 0x263568: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x263568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26356c: 0xafa30240  sw          $v1, 0x240($sp)
    ctx->pc = 0x26356cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 3));
    // 0x263570: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x263570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263574: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x263574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x263578: 0x27a50238  addiu       $a1, $sp, 0x238
    ctx->pc = 0x263578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x26357c: 0xc09921c  jal         func_264870
    ctx->pc = 0x26357Cu;
    SET_GPR_U32(ctx, 31, 0x263584u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x26357Cu, 0x263584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263584u;
label_263584:
    // 0x263584: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263588: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x263588u;
    SET_GPR_U32(ctx, 31, 0x263590u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x263588u, 0x263590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263590u;
label_263590:
    // 0x263590: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x263590u;
    {
        const bool branch_taken_0x263590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263590) {
            ctx->pc = 0x2634D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2634d8;
        }
    }
    ctx->pc = 0x263598u;
label_263598:
    // 0x263598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26359c: 0x27859fb8  addiu       $a1, $gp, -0x6048
    ctx->pc = 0x26359cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942648));
    // 0x2635a0: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2635a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2635a4: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x2635A4u;
    SET_GPR_U32(ctx, 31, 0x2635ACu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x2635A4u, 0x2635ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2635ACu;
label_2635ac:
    // 0x2635ac: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2635ACu;
    {
        const bool branch_taken_0x2635ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2635ac) {
            ctx->pc = 0x2636B8u;
            goto label_2636b8;
        }
    }
    ctx->pc = 0x2635B4u;
    // 0x2635b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2635b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2635b8: 0xafa3029c  sw          $v1, 0x29C($sp)
    ctx->pc = 0x2635b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 3));
    // 0x2635bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2635bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2635c0: 0xafa30298  sw          $v1, 0x298($sp)
    ctx->pc = 0x2635c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 3));
    // 0x2635c4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2635c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2635c8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2635c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2635cc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2635CCu;
    {
        const bool branch_taken_0x2635cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2635cc) {
            ctx->pc = 0x2635F4u;
            goto label_2635f4;
        }
    }
    ctx->pc = 0x2635D4u;
    // 0x2635d4: 0xa01021  addu        $v0, $a1, $zero
    ctx->pc = 0x2635d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 0)));
label_2635d8:
    // 0x2635d8: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x2635d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2635dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2635dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2635e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2635e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2635e4: 0x0  nop
    ctx->pc = 0x2635e4u;
    // NOP
    // 0x2635e8: 0x0  nop
    ctx->pc = 0x2635e8u;
    // NOP
    // 0x2635ec: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2635ECu;
    {
        const bool branch_taken_0x2635ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2635ec) {
            ctx->pc = 0x2635D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2635d8;
        }
    }
    ctx->pc = 0x2635F4u;
label_2635f4:
    // 0x2635f4: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2635f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2635f8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2635f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2635fc: 0x24a5cbf8  addiu       $a1, $a1, -0x3408
    ctx->pc = 0x2635fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953976));
    // 0x263600: 0x27a6029c  addiu       $a2, $sp, 0x29C
    ctx->pc = 0x263600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
    // 0x263604: 0x27a70298  addiu       $a3, $sp, 0x298
    ctx->pc = 0x263604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
    // 0x263608: 0x27a80140  addiu       $t0, $sp, 0x140
    ctx->pc = 0x263608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x26360c: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x26360Cu;
    SET_GPR_U32(ctx, 31, 0x263614u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x26360Cu, 0x263614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263614u;
label_263614:
    // 0x263614: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263618: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x263618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x26361c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x26361Cu;
    SET_GPR_U32(ctx, 31, 0x263624u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x26361Cu, 0x263624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263624u;
label_263624:
    // 0x263624: 0xa3a00140  sb          $zero, 0x140($sp)
    ctx->pc = 0x263624u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 320), (uint8_t)GPR_U32(ctx, 0));
    // 0x263628: 0x8fa3029c  lw          $v1, 0x29C($sp)
    ctx->pc = 0x263628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x26362c: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x26362cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x263630: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x263630u;
    {
        const bool branch_taken_0x263630 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x263630) {
            ctx->pc = 0x263664u;
            goto label_263664;
        }
    }
    ctx->pc = 0x263638u;
    // 0x263638: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x263638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x26363c: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x26363cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x263640: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263644: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x263644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x263648: 0xafa00230  sw          $zero, 0x230($sp)
    ctx->pc = 0x263648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
    // 0x26364c: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x26364cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263650: 0x248600bc  addiu       $a2, $a0, 0xBC
    ctx->pc = 0x263650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 188));
    // 0x263654: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x263654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263658: 0x27a50228  addiu       $a1, $sp, 0x228
    ctx->pc = 0x263658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x26365c: 0xc09921c  jal         func_264870
    ctx->pc = 0x26365Cu;
    SET_GPR_U32(ctx, 31, 0x263664u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x26365Cu, 0x263664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263664u;
label_263664:
    // 0x263664: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x263664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x263668: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x263668u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x26366c: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x26366Cu;
    {
        const bool branch_taken_0x26366c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26366c) {
            ctx->pc = 0x2636A0u;
            goto label_2636a0;
        }
    }
    ctx->pc = 0x263674u;
    // 0x263674: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x263674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x263678: 0xafa30228  sw          $v1, 0x228($sp)
    ctx->pc = 0x263678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 3));
    // 0x26367c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263680: 0xafa4022c  sw          $a0, 0x22C($sp)
    ctx->pc = 0x263680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 4));
    // 0x263684: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x263684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263688: 0xafa50230  sw          $a1, 0x230($sp)
    ctx->pc = 0x263688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 5));
    // 0x26368c: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x26368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263690: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x263690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x263694: 0x27a50228  addiu       $a1, $sp, 0x228
    ctx->pc = 0x263694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x263698: 0xc09921c  jal         func_264870
    ctx->pc = 0x263698u;
    SET_GPR_U32(ctx, 31, 0x2636A0u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x263698u, 0x2636A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2636A0u;
label_2636a0:
    // 0x2636a0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2636a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2636a4: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2636A4u;
    SET_GPR_U32(ctx, 31, 0x2636ACu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2636A4u, 0x2636ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2636ACu;
label_2636ac:
    // 0x2636ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2636acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2636b0: 0x14a0ffd0  bnez        $a1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2636B0u;
    {
        const bool branch_taken_0x2636b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2636b0) {
            ctx->pc = 0x2635F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2635f4;
        }
    }
    ctx->pc = 0x2636B8u;
label_2636b8:
    // 0x2636b8: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2636b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2636bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2636bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2636c0: 0x1443011e  bne         $v0, $v1, . + 4 + (0x11E << 2)
    ctx->pc = 0x2636C0u;
    {
        const bool branch_taken_0x2636c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2636c0) {
            ctx->pc = 0x263B3Cu;
            goto label_263b3c;
        }
    }
    ctx->pc = 0x2636C8u;
    // 0x2636c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2636c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2636cc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2636ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2636d0: 0x24a5cc08  addiu       $a1, $a1, -0x33F8
    ctx->pc = 0x2636d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953992));
    // 0x2636d4: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2636d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2636d8: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x2636D8u;
    SET_GPR_U32(ctx, 31, 0x2636E0u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x2636D8u, 0x2636E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2636E0u;
label_2636e0:
    // 0x2636e0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2636E0u;
    {
        const bool branch_taken_0x2636e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2636e0) {
            ctx->pc = 0x263784u;
            goto label_263784;
        }
    }
    ctx->pc = 0x2636E8u;
    // 0x2636e8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2636e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2636ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2636ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2636f0: 0x27859fc0  addiu       $a1, $gp, -0x6040
    ctx->pc = 0x2636f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942656));
    // 0x2636f4: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2636F4u;
    SET_GPR_U32(ctx, 31, 0x2636FCu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2636F4u, 0x2636FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2636FCu;
label_2636fc:
    // 0x2636fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2636FCu;
    {
        const bool branch_taken_0x2636fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2636fc) {
            ctx->pc = 0x263720u;
            goto label_263720;
        }
    }
    ctx->pc = 0x263704u;
    // 0x263704: 0x8fa602cc  lw          $a2, 0x2CC($sp)
    ctx->pc = 0x263704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263708: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x263708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x26370c: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x26370cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x263710: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x263710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x263714: 0xacc50020  sw          $a1, 0x20($a2)
    ctx->pc = 0x263714u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 5));
    // 0x263718: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x263718u;
    {
        const bool branch_taken_0x263718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263718) {
            ctx->pc = 0x263784u;
            goto label_263784;
        }
    }
    ctx->pc = 0x263720u;
label_263720:
    // 0x263720: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x263720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263728: 0x27859fc8  addiu       $a1, $gp, -0x6038
    ctx->pc = 0x263728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942664));
    // 0x26372c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x26372Cu;
    SET_GPR_U32(ctx, 31, 0x263734u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x26372Cu, 0x263734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263734u;
label_263734:
    // 0x263734: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x263734u;
    {
        const bool branch_taken_0x263734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263734) {
            ctx->pc = 0x263758u;
            goto label_263758;
        }
    }
    ctx->pc = 0x26373Cu;
    // 0x26373c: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x26373cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263740: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x263740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x263744: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x263744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x263748: 0x85a025  or          $s4, $a0, $a1
    ctx->pc = 0x263748u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x26374c: 0xac540020  sw          $s4, 0x20($v0)
    ctx->pc = 0x26374cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 20));
    // 0x263750: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x263750u;
    {
        const bool branch_taken_0x263750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263750) {
            ctx->pc = 0x263784u;
            goto label_263784;
        }
    }
    ctx->pc = 0x263758u;
label_263758:
    // 0x263758: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26375c: 0x27859fd0  addiu       $a1, $gp, -0x6030
    ctx->pc = 0x26375cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942672));
    // 0x263760: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263760u;
    SET_GPR_U32(ctx, 31, 0x263768u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263760u, 0x263768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263768u;
label_263768:
    // 0x263768: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263768u;
    {
        const bool branch_taken_0x263768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263768) {
            ctx->pc = 0x263784u;
            goto label_263784;
        }
    }
    ctx->pc = 0x263770u;
    // 0x263770: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x263770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263774: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x263774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x263778: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x263778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x26377c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x26377cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x263780: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x263780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_263784:
    // 0x263784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263788: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x263788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26378c: 0x24a5cc18  addiu       $a1, $a1, -0x33E8
    ctx->pc = 0x26378cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954008));
    // 0x263790: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x263790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263794: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x263794u;
    SET_GPR_U32(ctx, 31, 0x26379Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x263794u, 0x26379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26379Cu;
label_26379c:
    // 0x26379c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26379Cu;
    {
        const bool branch_taken_0x26379c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26379c) {
            ctx->pc = 0x2637D4u;
            goto label_2637d4;
        }
    }
    ctx->pc = 0x2637A4u;
    // 0x2637a4: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2637a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2637a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2637a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637ac: 0x27859fd8  addiu       $a1, $gp, -0x6028
    ctx->pc = 0x2637acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942680));
    // 0x2637b0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2637B0u;
    SET_GPR_U32(ctx, 31, 0x2637B8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2637B0u, 0x2637B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637B8u;
label_2637b8:
    // 0x2637b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2637B8u;
    {
        const bool branch_taken_0x2637b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2637b8) {
            ctx->pc = 0x2637D4u;
            goto label_2637d4;
        }
    }
    ctx->pc = 0x2637C0u;
    // 0x2637c0: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x2637c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2637c4: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2637c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2637c8: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2637c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2637cc: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x2637ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2637d0: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x2637d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_2637d4:
    // 0x2637d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2637d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637d8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2637d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2637dc: 0x24a5cc28  addiu       $a1, $a1, -0x33D8
    ctx->pc = 0x2637dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954024));
    // 0x2637e0: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2637e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2637e4: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x2637E4u;
    SET_GPR_U32(ctx, 31, 0x2637ECu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x2637E4u, 0x2637ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637ECu;
label_2637ec:
    // 0x2637ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2637ECu;
    {
        const bool branch_taken_0x2637ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2637ec) {
            ctx->pc = 0x263820u;
            goto label_263820;
        }
    }
    ctx->pc = 0x2637F4u;
    // 0x2637f4: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2637f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2637f8: 0x27859fd8  addiu       $a1, $gp, -0x6028
    ctx->pc = 0x2637f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942680));
    // 0x2637fc: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2637FCu;
    SET_GPR_U32(ctx, 31, 0x263804u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2637FCu, 0x263804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263804u;
label_263804:
    // 0x263804: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263804u;
    {
        const bool branch_taken_0x263804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263804) {
            ctx->pc = 0x263820u;
            goto label_263820;
        }
    }
    ctx->pc = 0x26380Cu;
    // 0x26380c: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x26380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263810: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x263810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x263814: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x263814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x263818: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x263818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26381c: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x26381cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_263820:
    // 0x263820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263824: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x263824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x263828: 0x24a5cc38  addiu       $a1, $a1, -0x33C8
    ctx->pc = 0x263828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954040));
    // 0x26382c: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x26382cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263830: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x263830u;
    SET_GPR_U32(ctx, 31, 0x263838u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x263830u, 0x263838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263838u;
label_263838:
    // 0x263838: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x263838u;
    {
        const bool branch_taken_0x263838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263838) {
            ctx->pc = 0x2638D4u;
            goto label_2638d4;
        }
    }
    ctx->pc = 0x263840u;
    // 0x263840: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263844: 0x27859fd8  addiu       $a1, $gp, -0x6028
    ctx->pc = 0x263844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942680));
    // 0x263848: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263848u;
    SET_GPR_U32(ctx, 31, 0x263850u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263848u, 0x263850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263850u;
label_263850:
    // 0x263850: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x263850u;
    {
        const bool branch_taken_0x263850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263850) {
            ctx->pc = 0x263874u;
            goto label_263874;
        }
    }
    ctx->pc = 0x263858u;
    // 0x263858: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x263858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x26385c: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x26385cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x263860: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x263860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x263864: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x263864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x263868: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x263868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x26386c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26386Cu;
    {
        const bool branch_taken_0x26386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26386c) {
            ctx->pc = 0x2638D4u;
            goto label_2638d4;
        }
    }
    ctx->pc = 0x263874u;
label_263874:
    // 0x263874: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263878: 0x27859fe0  addiu       $a1, $gp, -0x6020
    ctx->pc = 0x263878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942688));
    // 0x26387c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x26387Cu;
    SET_GPR_U32(ctx, 31, 0x263884u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x26387Cu, 0x263884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263884u;
label_263884:
    // 0x263884: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x263884u;
    {
        const bool branch_taken_0x263884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263884) {
            ctx->pc = 0x2638A8u;
            goto label_2638a8;
        }
    }
    ctx->pc = 0x26388Cu;
    // 0x26388c: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x26388cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263890: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x263890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x263894: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x263894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x263898: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x263898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x26389c: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x26389cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x2638a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2638A0u;
    {
        const bool branch_taken_0x2638a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2638a0) {
            ctx->pc = 0x2638D4u;
            goto label_2638d4;
        }
    }
    ctx->pc = 0x2638A8u;
label_2638a8:
    // 0x2638a8: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2638a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2638ac: 0x27859fe8  addiu       $a1, $gp, -0x6018
    ctx->pc = 0x2638acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942696));
    // 0x2638b0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2638B0u;
    SET_GPR_U32(ctx, 31, 0x2638B8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2638B0u, 0x2638B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2638B8u;
label_2638b8:
    // 0x2638b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2638B8u;
    {
        const bool branch_taken_0x2638b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2638b8) {
            ctx->pc = 0x2638D4u;
            goto label_2638d4;
        }
    }
    ctx->pc = 0x2638C0u;
    // 0x2638c0: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x2638c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2638c4: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2638c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2638c8: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x2638c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x2638cc: 0x853025  or          $a2, $a0, $a1
    ctx->pc = 0x2638ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2638d0: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x2638d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
label_2638d4:
    // 0x2638d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2638d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638d8: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x2638d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x2638dc: 0x24e7cc48  addiu       $a3, $a3, -0x33B8
    ctx->pc = 0x2638dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954056));
    // 0x2638e0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2638e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638e4: 0x27a801e0  addiu       $t0, $sp, 0x1E0
    ctx->pc = 0x2638e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2638e8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2638e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638ec: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x2638ECu;
    SET_GPR_U32(ctx, 31, 0x2638F4u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x2638ECu, 0x2638F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2638F4u;
label_2638f4:
    // 0x2638f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2638F4u;
    {
        const bool branch_taken_0x2638f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2638f4) {
            ctx->pc = 0x263928u;
            goto label_263928;
        }
    }
    ctx->pc = 0x2638FCu;
    // 0x2638fc: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2638fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263900: 0x27859fd8  addiu       $a1, $gp, -0x6028
    ctx->pc = 0x263900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942680));
    // 0x263904: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263904u;
    SET_GPR_U32(ctx, 31, 0x26390Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263904u, 0x26390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26390Cu;
label_26390c:
    // 0x26390c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26390Cu;
    {
        const bool branch_taken_0x26390c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26390c) {
            ctx->pc = 0x263928u;
            goto label_263928;
        }
    }
    ctx->pc = 0x263914u;
    // 0x263914: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x263914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263918: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x263918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x26391c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x26391cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x263920: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x263920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x263924: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x263924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
label_263928:
    // 0x263928: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x263928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x26392c: 0x2484cb70  addiu       $a0, $a0, -0x3490
    ctx->pc = 0x26392cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953840));
    // 0x263930: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x263930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x263934: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x263934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x263938: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x263938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26393c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26393cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_263940:
    // 0x263940: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x263940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x263944: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x263944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x263948: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x263948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x26394c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x26394cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x263950: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x263950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x263954: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x263954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x263958: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x263958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x26395c: 0x1cc0fff8  bgtz        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26395Cu;
    {
        const bool branch_taken_0x26395c = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x26395c) {
            ctx->pc = 0x263940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263940;
        }
    }
    ctx->pc = 0x263964u;
    // 0x263964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263968: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x263968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x26396c: 0x2442cc58  addiu       $v0, $v0, -0x33A8
    ctx->pc = 0x26396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954072));
    // 0x263970: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263974: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x263974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263978: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x263978u;
    SET_GPR_U32(ctx, 31, 0x263980u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x263978u, 0x263980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263980u;
label_263980:
    // 0x263980: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x263980u;
    {
        const bool branch_taken_0x263980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263980) {
            ctx->pc = 0x2639E4u;
            goto label_2639e4;
        }
    }
    ctx->pc = 0x263988u;
    // 0x263988: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x263988u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26398c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26398Cu;
    {
        const bool branch_taken_0x26398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26398c) {
            ctx->pc = 0x2639D8u;
            goto label_2639d8;
        }
    }
    ctx->pc = 0x263994u;
label_263994:
    // 0x263994: 0x172880  sll         $a1, $s7, 2
    ctx->pc = 0x263994u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x263998: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x263998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x26399c: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x26399cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2639a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2639a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2639a4: 0x8cc800d0  lw          $t0, 0xD0($a2)
    ctx->pc = 0x2639a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x2639a8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2639a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2639ac: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2639ACu;
    SET_GPR_U32(ctx, 31, 0x2639B4u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2639ACu, 0x2639B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2639B4u;
label_2639b4:
    // 0x2639b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2639B4u;
    {
        const bool branch_taken_0x2639b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2639b4) {
            ctx->pc = 0x2639D0u;
            goto label_2639d0;
        }
    }
    ctx->pc = 0x2639BCu;
    // 0x2639bc: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x2639bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2639c0: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2639c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2639c4: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x2639c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x2639c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2639C8u;
    {
        const bool branch_taken_0x2639c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2639c8) {
            ctx->pc = 0x2639E4u;
            goto label_2639e4;
        }
    }
    ctx->pc = 0x2639D0u;
label_2639d0:
    // 0x2639d0: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x2639d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2639d4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2639d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2639d8:
    // 0x2639d8: 0x2ee4001a  sltiu       $a0, $s7, 0x1A
    ctx->pc = 0x2639d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2639dc: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2639DCu;
    {
        const bool branch_taken_0x2639dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2639dc) {
            ctx->pc = 0x263994u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263994;
        }
    }
    ctx->pc = 0x2639E4u;
label_2639e4:
    // 0x2639e4: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x2639e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2639e8: 0x2ca10004  sltiu       $at, $a1, 0x4
    ctx->pc = 0x2639e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2639ec: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x2639ECu;
    {
        const bool branch_taken_0x2639ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2639ec) {
            ctx->pc = 0x263A9Cu;
            goto label_263a9c;
        }
    }
    ctx->pc = 0x2639F4u;
    // 0x2639f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2639f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2639f8: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2639f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2639fc: 0x24c6cc68  addiu       $a2, $a2, -0x3398
    ctx->pc = 0x2639fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954088));
    // 0x263a00: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x263a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a04: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x263a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263a08: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x263a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a0c: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x263A0Cu;
    SET_GPR_U32(ctx, 31, 0x263A14u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x263A0Cu, 0x263A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A14u;
label_263a14:
    // 0x263a14: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x263a14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a18: 0x11000020  beqz        $t0, . + 4 + (0x20 << 2)
    ctx->pc = 0x263A18u;
    {
        const bool branch_taken_0x263a18 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x263a18) {
            ctx->pc = 0x263A9Cu;
            goto label_263a9c;
        }
    }
    ctx->pc = 0x263A20u;
    // 0x263a20: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x263a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263a24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a28: 0x27839ff0  addiu       $v1, $gp, -0x6010
    ctx->pc = 0x263a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942704));
    // 0x263a2c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x263a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a30: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263A30u;
    SET_GPR_U32(ctx, 31, 0x263A38u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263A30u, 0x263A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A38u;
label_263a38:
    // 0x263a38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a3c: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x263A3Cu;
    {
        const bool branch_taken_0x263a3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x263a3c) {
            ctx->pc = 0x263A60u;
            goto label_263a60;
        }
    }
    ctx->pc = 0x263A44u;
    // 0x263a44: 0x8fa802cc  lw          $t0, 0x2CC($sp)
    ctx->pc = 0x263a44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263a48: 0x8d020020  lw          $v0, 0x20($t0)
    ctx->pc = 0x263a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x263a4c: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x263a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x263a50: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x263a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x263a54: 0xad030020  sw          $v1, 0x20($t0)
    ctx->pc = 0x263a54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 3));
    // 0x263a58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x263A58u;
    {
        const bool branch_taken_0x263a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263a58) {
            ctx->pc = 0x263A9Cu;
            goto label_263a9c;
        }
    }
    ctx->pc = 0x263A60u;
label_263a60:
    // 0x263a60: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x263a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x263a64: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x263a64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x263a68: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x263a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263a6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x263a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x263a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a74: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x263a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x263a78: 0x24a5cc78  addiu       $a1, $a1, -0x3388
    ctx->pc = 0x263a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954104));
    // 0x263a7c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x263a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x263a80: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x263a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a84: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x263A84u;
    SET_GPR_U32(ctx, 31, 0x263A8Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x263A84u, 0x263A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A8Cu;
label_263a8c:
    // 0x263a8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x263a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a90: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x263a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x263a94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x263a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x263a98: 0xafa202c0  sw          $v0, 0x2C0($sp)
    ctx->pc = 0x263a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 2));
label_263a9c:
    // 0x263a9c: 0x2fc10002  sltiu       $at, $fp, 0x2
    ctx->pc = 0x263a9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x263aa0: 0x102001aa  beqz        $at, . + 4 + (0x1AA << 2)
    ctx->pc = 0x263AA0u;
    {
        const bool branch_taken_0x263aa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x263aa0) {
            ctx->pc = 0x26414Cu;
            goto label_26414c;
        }
    }
    ctx->pc = 0x263AA8u;
    // 0x263aa8: 0x27829ff4  addiu       $v0, $gp, -0x600C
    ctx->pc = 0x263aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942708));
    // 0x263aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ab0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x263ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ab4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x263ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x263ab8: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x263AB8u;
    SET_GPR_U32(ctx, 31, 0x263AC0u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x263AB8u, 0x263AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AC0u;
label_263ac0:
    // 0x263ac0: 0x144001a2  bnez        $v0, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x263AC0u;
    {
        const bool branch_taken_0x263ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263ac0) {
            ctx->pc = 0x26414Cu;
            goto label_26414c;
        }
    }
    ctx->pc = 0x263AC8u;
    // 0x263ac8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x263ac8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263acc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x263ACCu;
    {
        const bool branch_taken_0x263acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263acc) {
            ctx->pc = 0x263ADCu;
            goto label_263adc;
        }
    }
    ctx->pc = 0x263AD4u;
label_263ad4:
    // 0x263ad4: 0x26c50001  addiu       $a1, $s6, 0x1
    ctx->pc = 0x263ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x263ad8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x263ad8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_263adc:
    // 0x263adc: 0x2161021  addu        $v0, $s0, $s6
    ctx->pc = 0x263adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x263ae0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x263ae0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263ae4: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x263ae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x263ae8: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x263ae8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x263aec: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x263aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x263af0: 0x14c2fff8  bne         $a2, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x263AF0u;
    {
        const bool branch_taken_0x263af0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x263af0) {
            ctx->pc = 0x263AD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263ad4;
        }
    }
    ctx->pc = 0x263AF8u;
    // 0x263af8: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x263af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x263afc: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x263afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263b00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x263b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263b04: 0x24640090  addiu       $a0, $v1, 0x90
    ctx->pc = 0x263b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x263b08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x263b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b0c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x263b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b10: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x263B10u;
    SET_GPR_U32(ctx, 31, 0x263B18u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x263B10u, 0x263B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B18u;
label_263b18:
    // 0x263b18: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x263b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x263b1c: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x263b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263b20: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x263b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x263b24: 0xd63821  addu        $a3, $a2, $s6
    ctx->pc = 0x263b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x263b28: 0xa0e00090  sb          $zero, 0x90($a3)
    ctx->pc = 0x263b28u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x263b2c: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x263b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x263b30: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x263b30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b34: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x263B34u;
    {
        const bool branch_taken_0x263b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263b34) {
            ctx->pc = 0x26414Cu;
            goto label_26414c;
        }
    }
    ctx->pc = 0x263B3Cu;
label_263b3c:
    // 0x263b3c: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x263b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x263b40: 0x14400182  bnez        $v0, . + 4 + (0x182 << 2)
    ctx->pc = 0x263B40u;
    {
        const bool branch_taken_0x263b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263b40) {
            ctx->pc = 0x26414Cu;
            goto label_26414c;
        }
    }
    ctx->pc = 0x263B48u;
    // 0x263b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b4c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x263b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x263b50: 0x24a5cc88  addiu       $a1, $a1, -0x3378
    ctx->pc = 0x263b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954120));
    // 0x263b54: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x263b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263b58: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x263B58u;
    SET_GPR_U32(ctx, 31, 0x263B60u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x263B58u, 0x263B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B60u;
label_263b60:
    // 0x263b60: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x263B60u;
    {
        const bool branch_taken_0x263b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263b60) {
            ctx->pc = 0x263D14u;
            goto label_263d14;
        }
    }
    ctx->pc = 0x263B68u;
    // 0x263b68: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263b6c: 0x27829ff8  addiu       $v0, $gp, -0x6008
    ctx->pc = 0x263b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942712));
    // 0x263b70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b74: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263B74u;
    SET_GPR_U32(ctx, 31, 0x263B7Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263B74u, 0x263B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B7Cu;
label_263b7c:
    // 0x263b7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x263b7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b80: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x263B80u;
    {
        const bool branch_taken_0x263b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263b80) {
            ctx->pc = 0x263BB8u;
            goto label_263bb8;
        }
    }
    ctx->pc = 0x263B88u;
    // 0x263b88: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x263b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263b8c: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x263b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x263b90: 0x34a20100  ori         $v0, $a1, 0x100
    ctx->pc = 0x263b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x263b94: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x263b94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x263b98: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x263b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263b9c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x263b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x263ba0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x263ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x263ba4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x263ba4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x263ba8: 0x34441000  ori         $a0, $v0, 0x1000
    ctx->pc = 0x263ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x263bac: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x263bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x263bb0: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x263BB0u;
    {
        const bool branch_taken_0x263bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263bb0) {
            ctx->pc = 0x263D14u;
            goto label_263d14;
        }
    }
    ctx->pc = 0x263BB8u;
label_263bb8:
    // 0x263bb8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x263bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263bbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x263bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263bc0: 0x2782a000  addiu       $v0, $gp, -0x6000
    ctx->pc = 0x263bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942720));
    // 0x263bc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263bc8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263BC8u;
    SET_GPR_U32(ctx, 31, 0x263BD0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263BC8u, 0x263BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263BD0u;
label_263bd0:
    // 0x263bd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263bd4: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x263BD4u;
    {
        const bool branch_taken_0x263bd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x263bd4) {
            ctx->pc = 0x263C04u;
            goto label_263c04;
        }
    }
    ctx->pc = 0x263BDCu;
    // 0x263bdc: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x263bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263be0: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x263be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x263be4: 0x34a20100  ori         $v0, $a1, 0x100
    ctx->pc = 0x263be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x263be8: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x263be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x263bec: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x263becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263bf0: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x263bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x263bf4: 0x34c20800  ori         $v0, $a2, 0x800
    ctx->pc = 0x263bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
    // 0x263bf8: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x263bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x263bfc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x263BFCu;
    {
        const bool branch_taken_0x263bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263bfc) {
            ctx->pc = 0x263D14u;
            goto label_263d14;
        }
    }
    ctx->pc = 0x263C04u;
label_263c04:
    // 0x263c04: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263c08: 0x2785a008  addiu       $a1, $gp, -0x5FF8
    ctx->pc = 0x263c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942728));
    // 0x263c0c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263C0Cu;
    SET_GPR_U32(ctx, 31, 0x263C14u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263C0Cu, 0x263C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C14u;
label_263c14:
    // 0x263c14: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x263C14u;
    {
        const bool branch_taken_0x263c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263c14) {
            ctx->pc = 0x263C44u;
            goto label_263c44;
        }
    }
    ctx->pc = 0x263C1Cu;
    // 0x263c1c: 0x8fa902cc  lw          $t1, 0x2CC($sp)
    ctx->pc = 0x263c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263c20: 0x8d230020  lw          $v1, 0x20($t1)
    ctx->pc = 0x263c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x263c24: 0x34640400  ori         $a0, $v1, 0x400
    ctx->pc = 0x263c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x263c28: 0xad240020  sw          $a0, 0x20($t1)
    ctx->pc = 0x263c28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 4));
    // 0x263c2c: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x263c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263c30: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x263c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x263c34: 0x34c71000  ori         $a3, $a2, 0x1000
    ctx->pc = 0x263c34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
    // 0x263c38: 0xaca70020  sw          $a3, 0x20($a1)
    ctx->pc = 0x263c38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 7));
    // 0x263c3c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x263C3Cu;
    {
        const bool branch_taken_0x263c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263c3c) {
            ctx->pc = 0x263D14u;
            goto label_263d14;
        }
    }
    ctx->pc = 0x263C44u;
label_263c44:
    // 0x263c44: 0x27a801e0  addiu       $t0, $sp, 0x1E0
    ctx->pc = 0x263c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263c48: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x263c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c4c: 0x2782a010  addiu       $v0, $gp, -0x5FF0
    ctx->pc = 0x263c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942736));
    // 0x263c50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c54: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263C54u;
    SET_GPR_U32(ctx, 31, 0x263C5Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263C54u, 0x263C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C5Cu;
label_263c5c:
    // 0x263c5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c60: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x263C60u;
    {
        const bool branch_taken_0x263c60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x263c60) {
            ctx->pc = 0x263C90u;
            goto label_263c90;
        }
    }
    ctx->pc = 0x263C68u;
    // 0x263c68: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x263c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263c6c: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x263c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x263c70: 0x34430400  ori         $v1, $v0, 0x400
    ctx->pc = 0x263c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x263c74: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x263c74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x263c78: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x263c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263c7c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x263c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x263c80: 0x34620800  ori         $v0, $v1, 0x800
    ctx->pc = 0x263c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x263c84: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x263c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x263c88: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x263C88u;
    {
        const bool branch_taken_0x263c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263c88) {
            ctx->pc = 0x263D14u;
            goto label_263d14;
        }
    }
    ctx->pc = 0x263C90u;
label_263c90:
    // 0x263c90: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263c94: 0x2785a018  addiu       $a1, $gp, -0x5FE8
    ctx->pc = 0x263c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942744));
    // 0x263c98: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263C98u;
    SET_GPR_U32(ctx, 31, 0x263CA0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263C98u, 0x263CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CA0u;
label_263ca0:
    // 0x263ca0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x263CA0u;
    {
        const bool branch_taken_0x263ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263ca0) {
            ctx->pc = 0x263CD0u;
            goto label_263cd0;
        }
    }
    ctx->pc = 0x263CA8u;
    // 0x263ca8: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x263ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263cac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x263cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x263cb0: 0x34460200  ori         $a2, $v0, 0x200
    ctx->pc = 0x263cb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x263cb4: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x263cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
    // 0x263cb8: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x263cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263cbc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x263cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x263cc0: 0x34441000  ori         $a0, $v0, 0x1000
    ctx->pc = 0x263cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x263cc4: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x263cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x263cc8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x263CC8u;
    {
        const bool branch_taken_0x263cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263cc8) {
            ctx->pc = 0x263D14u;
            goto label_263d14;
        }
    }
    ctx->pc = 0x263CD0u;
label_263cd0:
    // 0x263cd0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x263cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263cd4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x263cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263cd8: 0x2782a020  addiu       $v0, $gp, -0x5FE0
    ctx->pc = 0x263cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942752));
    // 0x263cdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ce0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263CE0u;
    SET_GPR_U32(ctx, 31, 0x263CE8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263CE0u, 0x263CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CE8u;
label_263ce8:
    // 0x263ce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263cec: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x263CECu;
    {
        const bool branch_taken_0x263cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x263cec) {
            ctx->pc = 0x263D14u;
            goto label_263d14;
        }
    }
    ctx->pc = 0x263CF4u;
    // 0x263cf4: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x263cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263cf8: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x263cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x263cfc: 0x34a60200  ori         $a2, $a1, 0x200
    ctx->pc = 0x263cfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x263d00: 0xac460020  sw          $a2, 0x20($v0)
    ctx->pc = 0x263d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
    // 0x263d04: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x263d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263d08: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x263d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x263d0c: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x263d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x263d10: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x263d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_263d14:
    // 0x263d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d18: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x263d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x263d1c: 0x24a5cc98  addiu       $a1, $a1, -0x3368
    ctx->pc = 0x263d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954136));
    // 0x263d20: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x263d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263d24: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x263D24u;
    SET_GPR_U32(ctx, 31, 0x263D2Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x263D24u, 0x263D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D2Cu;
label_263d2c:
    // 0x263d2c: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x263D2Cu;
    {
        const bool branch_taken_0x263d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263d2c) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x263D34u;
    // 0x263d34: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263d38: 0x2785a028  addiu       $a1, $gp, -0x5FD8
    ctx->pc = 0x263d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942760));
    // 0x263d3c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263D3Cu;
    SET_GPR_U32(ctx, 31, 0x263D44u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263D3Cu, 0x263D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D44u;
label_263d44:
    // 0x263d44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x263d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d48: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x263D48u;
    {
        const bool branch_taken_0x263d48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x263d48) {
            ctx->pc = 0x263D68u;
            goto label_263d68;
        }
    }
    ctx->pc = 0x263D50u;
    // 0x263d50: 0x8fa702cc  lw          $a3, 0x2CC($sp)
    ctx->pc = 0x263d50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263d54: 0x8ce80024  lw          $t0, 0x24($a3)
    ctx->pc = 0x263d54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x263d58: 0x35020002  ori         $v0, $t0, 0x2
    ctx->pc = 0x263d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x263d5c: 0xace20024  sw          $v0, 0x24($a3)
    ctx->pc = 0x263d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 2));
    // 0x263d60: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x263D60u;
    {
        const bool branch_taken_0x263d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263d60) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x263D68u;
label_263d68:
    // 0x263d68: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263d6c: 0x2785a030  addiu       $a1, $gp, -0x5FD0
    ctx->pc = 0x263d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942768));
    // 0x263d70: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263D70u;
    SET_GPR_U32(ctx, 31, 0x263D78u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263D70u, 0x263D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D78u;
label_263d78:
    // 0x263d78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x263D78u;
    {
        const bool branch_taken_0x263d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263d78) {
            ctx->pc = 0x263D98u;
            goto label_263d98;
        }
    }
    ctx->pc = 0x263D80u;
    // 0x263d80: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x263d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263d84: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x263d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x263d88: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x263d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x263d8c: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x263d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x263d90: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x263D90u;
    {
        const bool branch_taken_0x263d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263d90) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x263D98u;
label_263d98:
    // 0x263d98: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263d9c: 0x2786a038  addiu       $a2, $gp, -0x5FC8
    ctx->pc = 0x263d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942776));
    // 0x263da0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x263da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263da4: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263DA4u;
    SET_GPR_U32(ctx, 31, 0x263DACu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263DA4u, 0x263DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DACu;
label_263dac:
    // 0x263dac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263db0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x263DB0u;
    {
        const bool branch_taken_0x263db0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x263db0) {
            ctx->pc = 0x263DD0u;
            goto label_263dd0;
        }
    }
    ctx->pc = 0x263DB8u;
    // 0x263db8: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x263db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263dbc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x263dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x263dc0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x263dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x263dc4: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x263dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x263dc8: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x263DC8u;
    {
        const bool branch_taken_0x263dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263dc8) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x263DD0u;
label_263dd0:
    // 0x263dd0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263dd4: 0x2785a040  addiu       $a1, $gp, -0x5FC0
    ctx->pc = 0x263dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942784));
    // 0x263dd8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263DD8u;
    SET_GPR_U32(ctx, 31, 0x263DE0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263DD8u, 0x263DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DE0u;
label_263de0:
    // 0x263de0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x263DE0u;
    {
        const bool branch_taken_0x263de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263de0) {
            ctx->pc = 0x263E00u;
            goto label_263e00;
        }
    }
    ctx->pc = 0x263DE8u;
    // 0x263de8: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x263de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263dec: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x263decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x263df0: 0x34a20020  ori         $v0, $a1, 0x20
    ctx->pc = 0x263df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
    // 0x263df4: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x263df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x263df8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x263DF8u;
    {
        const bool branch_taken_0x263df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263df8) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x263E00u;
label_263e00:
    // 0x263e00: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263e04: 0x2785a048  addiu       $a1, $gp, -0x5FB8
    ctx->pc = 0x263e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942792));
    // 0x263e08: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263E08u;
    SET_GPR_U32(ctx, 31, 0x263E10u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263E08u, 0x263E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E10u;
label_263e10:
    // 0x263e10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x263E10u;
    {
        const bool branch_taken_0x263e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263e10) {
            ctx->pc = 0x263E30u;
            goto label_263e30;
        }
    }
    ctx->pc = 0x263E18u;
    // 0x263e18: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x263e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263e1c: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x263e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x263e20: 0x34a60008  ori         $a2, $a1, 0x8
    ctx->pc = 0x263e20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x263e24: 0xac660024  sw          $a2, 0x24($v1)
    ctx->pc = 0x263e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 6));
    // 0x263e28: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x263E28u;
    {
        const bool branch_taken_0x263e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263e28) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x263E30u;
label_263e30:
    // 0x263e30: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x263e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263e34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e38: 0x2785a050  addiu       $a1, $gp, -0x5FB0
    ctx->pc = 0x263e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942800));
    // 0x263e3c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263E3Cu;
    SET_GPR_U32(ctx, 31, 0x263E44u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263E3Cu, 0x263E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E44u;
label_263e44:
    // 0x263e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e48: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x263E48u;
    {
        const bool branch_taken_0x263e48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x263e48) {
            ctx->pc = 0x263E68u;
            goto label_263e68;
        }
    }
    ctx->pc = 0x263E50u;
    // 0x263e50: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x263e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263e54: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x263e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x263e58: 0x34c30040  ori         $v1, $a2, 0x40
    ctx->pc = 0x263e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x263e5c: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x263e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x263e60: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x263E60u;
    {
        const bool branch_taken_0x263e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263e60) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x263E68u;
label_263e68:
    // 0x263e68: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263e6c: 0x2785a058  addiu       $a1, $gp, -0x5FA8
    ctx->pc = 0x263e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942808));
    // 0x263e70: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263E70u;
    SET_GPR_U32(ctx, 31, 0x263E78u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263E70u, 0x263E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E78u;
label_263e78:
    // 0x263e78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x263E78u;
    {
        const bool branch_taken_0x263e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263e78) {
            ctx->pc = 0x263E98u;
            goto label_263e98;
        }
    }
    ctx->pc = 0x263E80u;
    // 0x263e80: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x263e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263e84: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x263e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x263e88: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x263e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x263e8c: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x263e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x263e90: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x263E90u;
    {
        const bool branch_taken_0x263e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263e90) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x263E98u;
label_263e98:
    // 0x263e98: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263e9c: 0x2785a060  addiu       $a1, $gp, -0x5FA0
    ctx->pc = 0x263e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942816));
    // 0x263ea0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263EA0u;
    SET_GPR_U32(ctx, 31, 0x263EA8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263EA0u, 0x263EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263EA8u;
label_263ea8:
    // 0x263ea8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x263ea8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263eac: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x263EACu;
    {
        const bool branch_taken_0x263eac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x263eac) {
            ctx->pc = 0x263ECCu;
            goto label_263ecc;
        }
    }
    ctx->pc = 0x263EB4u;
    // 0x263eb4: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x263eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263eb8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x263eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x263ebc: 0x34a20100  ori         $v0, $a1, 0x100
    ctx->pc = 0x263ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x263ec0: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x263ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x263ec4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x263EC4u;
    {
        const bool branch_taken_0x263ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263ec4) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x263ECCu;
label_263ecc:
    // 0x263ecc: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263ed0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x263ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x263ed4: 0x24a5cca8  addiu       $a1, $a1, -0x3358
    ctx->pc = 0x263ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954152));
    // 0x263ed8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263ED8u;
    SET_GPR_U32(ctx, 31, 0x263EE0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263ED8u, 0x263EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263EE0u;
label_263ee0:
    // 0x263ee0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x263EE0u;
    {
        const bool branch_taken_0x263ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263ee0) {
            ctx->pc = 0x263F00u;
            goto label_263f00;
        }
    }
    ctx->pc = 0x263EE8u;
    // 0x263ee8: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x263ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263eec: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x263eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x263ef0: 0x34a60200  ori         $a2, $a1, 0x200
    ctx->pc = 0x263ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x263ef4: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x263ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
    // 0x263ef8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x263EF8u;
    {
        const bool branch_taken_0x263ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263ef8) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x263F00u;
label_263f00:
    // 0x263f00: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x263f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263f04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f08: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x263f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x263f0c: 0x24a5ccb8  addiu       $a1, $a1, -0x3348
    ctx->pc = 0x263f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954168));
    // 0x263f10: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263F10u;
    SET_GPR_U32(ctx, 31, 0x263F18u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263F10u, 0x263F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F18u;
label_263f18:
    // 0x263f18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f1c: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x263F1Cu;
    {
        const bool branch_taken_0x263f1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x263f1c) {
            ctx->pc = 0x263F3Cu;
            goto label_263f3c;
        }
    }
    ctx->pc = 0x263F24u;
    // 0x263f24: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x263f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263f28: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x263f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x263f2c: 0x34640400  ori         $a0, $v1, 0x400
    ctx->pc = 0x263f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x263f30: 0xac440024  sw          $a0, 0x24($v0)
    ctx->pc = 0x263f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
    // 0x263f34: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x263F34u;
    {
        const bool branch_taken_0x263f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f34) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x263F3Cu;
label_263f3c:
    // 0x263f3c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x263f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263f40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x263f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f44: 0x2782a068  addiu       $v0, $gp, -0x5F98
    ctx->pc = 0x263f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942824));
    // 0x263f48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f4c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263F4Cu;
    SET_GPR_U32(ctx, 31, 0x263F54u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263F4Cu, 0x263F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F54u;
label_263f54:
    // 0x263f54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f58: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x263F58u;
    {
        const bool branch_taken_0x263f58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x263f58) {
            ctx->pc = 0x263F78u;
            goto label_263f78;
        }
    }
    ctx->pc = 0x263F60u;
    // 0x263f60: 0x8fa602cc  lw          $a2, 0x2CC($sp)
    ctx->pc = 0x263f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263f64: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x263f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x263f68: 0x34440800  ori         $a0, $v0, 0x800
    ctx->pc = 0x263f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x263f6c: 0xacc40024  sw          $a0, 0x24($a2)
    ctx->pc = 0x263f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 4));
    // 0x263f70: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x263F70u;
    {
        const bool branch_taken_0x263f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f70) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x263F78u;
label_263f78:
    // 0x263f78: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x263f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263f7c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x263f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f80: 0x2782a070  addiu       $v0, $gp, -0x5F90
    ctx->pc = 0x263f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942832));
    // 0x263f84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f88: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263F88u;
    SET_GPR_U32(ctx, 31, 0x263F90u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263F88u, 0x263F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F90u;
label_263f90:
    // 0x263f90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x263F90u;
    {
        const bool branch_taken_0x263f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263f90) {
            ctx->pc = 0x263FB0u;
            goto label_263fb0;
        }
    }
    ctx->pc = 0x263F98u;
    // 0x263f98: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x263f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263f9c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x263f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x263fa0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x263fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x263fa4: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x263fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x263fa8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x263FA8u;
    {
        const bool branch_taken_0x263fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263fa8) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x263FB0u;
label_263fb0:
    // 0x263fb0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x263fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263fb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x263fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fb8: 0x2786a078  addiu       $a2, $gp, -0x5F88
    ctx->pc = 0x263fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942840));
    // 0x263fbc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x263fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fc0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263FC0u;
    SET_GPR_U32(ctx, 31, 0x263FC8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263FC0u, 0x263FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FC8u;
label_263fc8:
    // 0x263fc8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x263FC8u;
    {
        const bool branch_taken_0x263fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263fc8) {
            ctx->pc = 0x263FE8u;
            goto label_263fe8;
        }
    }
    ctx->pc = 0x263FD0u;
    // 0x263fd0: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x263fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x263fd4: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x263fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x263fd8: 0x34a22000  ori         $v0, $a1, 0x2000
    ctx->pc = 0x263fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x263fdc: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x263fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x263fe0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x263FE0u;
    {
        const bool branch_taken_0x263fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263fe0) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x263FE8u;
label_263fe8:
    // 0x263fe8: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x263fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x263fec: 0x2785a080  addiu       $a1, $gp, -0x5F80
    ctx->pc = 0x263fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942848));
    // 0x263ff0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x263FF0u;
    SET_GPR_U32(ctx, 31, 0x263FF8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x263FF0u, 0x263FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FF8u;
label_263ff8:
    // 0x263ff8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x263FF8u;
    {
        const bool branch_taken_0x263ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263ff8) {
            ctx->pc = 0x264018u;
            goto label_264018;
        }
    }
    ctx->pc = 0x264000u;
    // 0x264000: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x264000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x264004: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x264004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x264008: 0x34854000  ori         $a1, $a0, 0x4000
    ctx->pc = 0x264008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x26400c: 0xac650024  sw          $a1, 0x24($v1)
    ctx->pc = 0x26400cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
    // 0x264010: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x264010u;
    {
        const bool branch_taken_0x264010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264010) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x264018u;
label_264018:
    // 0x264018: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x264018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26401c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26401cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264020: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x264020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x264024: 0x24a5ccc8  addiu       $a1, $a1, -0x3338
    ctx->pc = 0x264024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954184));
    // 0x264028: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x264028u;
    SET_GPR_U32(ctx, 31, 0x264030u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x264028u, 0x264030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264030u;
label_264030:
    // 0x264030: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x264030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264034: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x264034u;
    {
        const bool branch_taken_0x264034 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x264034) {
            ctx->pc = 0x264054u;
            goto label_264054;
        }
    }
    ctx->pc = 0x26403Cu;
    // 0x26403c: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x26403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x264040: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x264040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x264044: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x264044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x264048: 0xac440024  sw          $a0, 0x24($v0)
    ctx->pc = 0x264048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
    // 0x26404c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26404Cu;
    {
        const bool branch_taken_0x26404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26404c) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x264054u;
label_264054:
    // 0x264054: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x264054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x264058: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x264058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26405c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x26405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x264060: 0x2442ccd8  addiu       $v0, $v0, -0x3328
    ctx->pc = 0x264060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954200));
    // 0x264064: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x264064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264068: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x264068u;
    SET_GPR_U32(ctx, 31, 0x264070u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x264068u, 0x264070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264070u;
label_264070:
    // 0x264070: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x264070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264074: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x264074u;
    {
        const bool branch_taken_0x264074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264074) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x26407Cu;
    // 0x26407c: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x26407cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x264080: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x264080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x264084: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x264084u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x264088: 0xa63825  or          $a3, $a1, $a2
    ctx->pc = 0x264088u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x26408c: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x26408cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
label_264090:
    // 0x264090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264094: 0x3c08004f  lui         $t0, 0x4F
    ctx->pc = 0x264094u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)79 << 16));
    // 0x264098: 0x2508cc18  addiu       $t0, $t0, -0x33E8
    ctx->pc = 0x264098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954008));
    // 0x26409c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x26409cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640a0: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x2640a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2640a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2640a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640a8: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x2640A8u;
    SET_GPR_U32(ctx, 31, 0x2640B0u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x2640A8u, 0x2640B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2640B0u;
label_2640b0:
    // 0x2640b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2640b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640b4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2640B4u;
    {
        const bool branch_taken_0x2640b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2640b4) {
            ctx->pc = 0x2640F0u;
            goto label_2640f0;
        }
    }
    ctx->pc = 0x2640BCu;
    // 0x2640bc: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2640bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2640c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2640c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640c4: 0x27829fd8  addiu       $v0, $gp, -0x6028
    ctx->pc = 0x2640c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942680));
    // 0x2640c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2640c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640cc: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2640CCu;
    SET_GPR_U32(ctx, 31, 0x2640D4u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2640CCu, 0x2640D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2640D4u;
label_2640d4:
    // 0x2640d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2640D4u;
    {
        const bool branch_taken_0x2640d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2640d4) {
            ctx->pc = 0x2640F0u;
            goto label_2640f0;
        }
    }
    ctx->pc = 0x2640DCu;
    // 0x2640dc: 0x8fa602cc  lw          $a2, 0x2CC($sp)
    ctx->pc = 0x2640dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2640e0: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x2640e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2640e4: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x2640e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x2640e8: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x2640e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2640ec: 0xacc50020  sw          $a1, 0x20($a2)
    ctx->pc = 0x2640ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 5));
label_2640f0:
    // 0x2640f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2640f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640f4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2640f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2640f8: 0x2442cce8  addiu       $v0, $v0, -0x3318
    ctx->pc = 0x2640f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954216));
    // 0x2640fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2640fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264100: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x264100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x264104: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x264104u;
    SET_GPR_U32(ctx, 31, 0x26410Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x264104u, 0x26410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26410Cu;
label_26410c:
    // 0x26410c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26410cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264110: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x264110u;
    {
        const bool branch_taken_0x264110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x264110) {
            ctx->pc = 0x26414Cu;
            goto label_26414c;
        }
    }
    ctx->pc = 0x264118u;
    // 0x264118: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x264118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26411c: 0x27829fd8  addiu       $v0, $gp, -0x6028
    ctx->pc = 0x26411cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942680));
    // 0x264120: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x264120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264124: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x264124u;
    SET_GPR_U32(ctx, 31, 0x26412Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x264124u, 0x26412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26412Cu;
label_26412c:
    // 0x26412c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26412cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264130: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x264130u;
    {
        const bool branch_taken_0x264130 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x264130) {
            ctx->pc = 0x26414Cu;
            goto label_26414c;
        }
    }
    ctx->pc = 0x264138u;
    // 0x264138: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x264138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x26413c: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x26413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x264140: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x264140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x264144: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x264144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x264148: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x264148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
label_26414c:
    // 0x26414c: 0x2e410004  sltiu       $at, $s2, 0x4
    ctx->pc = 0x26414cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x264150: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x264150u;
    {
        const bool branch_taken_0x264150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x264150) {
            ctx->pc = 0x26421Cu;
            goto label_26421c;
        }
    }
    ctx->pc = 0x264158u;
    // 0x264158: 0xa3a000b0  sb          $zero, 0xB0($sp)
    ctx->pc = 0x264158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 0));
    // 0x26415c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26415cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264160: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x264160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x264164: 0x24a5ccf8  addiu       $a1, $a1, -0x3308
    ctx->pc = 0x264164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954232));
    // 0x264168: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x264168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26416c: 0x27a20294  addiu       $v0, $sp, 0x294
    ctx->pc = 0x26416cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
    // 0x264170: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x264170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264174: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x264174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x264178: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x264178u;
    SET_GPR_U32(ctx, 31, 0x264180u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x264178u, 0x264180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264180u;
label_264180:
    // 0x264180: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x264180u;
    {
        const bool branch_taken_0x264180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264180) {
            ctx->pc = 0x26421Cu;
            goto label_26421c;
        }
    }
    ctx->pc = 0x264188u;
    // 0x264188: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x264188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x26418c: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x26418cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x264190: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x264190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x264194: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x264194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x264198: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x264198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26419c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x26419cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2641a0: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x2641A0u;
    SET_GPR_U32(ctx, 31, 0x2641A8u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2641A0u, 0x2641A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2641A8u;
label_2641a8:
    // 0x2641a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2641a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641ac: 0x124100  sll         $t0, $s2, 4
    ctx->pc = 0x2641acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2641b0: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x2641b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2641b4: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x2641b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2641b8: 0xa060003b  sb          $zero, 0x3B($v1)
    ctx->pc = 0x2641b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 59), (uint8_t)GPR_U32(ctx, 0));
    // 0x2641bc: 0xc7a00294  lwc1        $f0, 0x294($sp)
    ctx->pc = 0x2641bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2641c0: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x2641c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2641c4: 0x8fa802cc  lw          $t0, 0x2CC($sp)
    ctx->pc = 0x2641c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2641c8: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2641c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2641cc: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x2641ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x2641d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2641d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2641d4: 0x2783a088  addiu       $v1, $gp, -0x5F78
    ctx->pc = 0x2641d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942856));
    // 0x2641d8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2641d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641dc: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2641DCu;
    SET_GPR_U32(ctx, 31, 0x2641E4u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2641DCu, 0x2641E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2641E4u;
label_2641e4:
    // 0x2641e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2641e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641e8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2641E8u;
    {
        const bool branch_taken_0x2641e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2641e8) {
            ctx->pc = 0x264208u;
            goto label_264208;
        }
    }
    ctx->pc = 0x2641F0u;
    // 0x2641f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2641f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2641f4: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x2641f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2641f8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2641f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2641fc: 0xa045007c  sb          $a1, 0x7C($v0)
    ctx->pc = 0x2641fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 5));
    // 0x264200: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x264200u;
    {
        const bool branch_taken_0x264200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264200) {
            ctx->pc = 0x264214u;
            goto label_264214;
        }
    }
    ctx->pc = 0x264208u;
label_264208:
    // 0x264208: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x264208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x26420c: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x26420cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x264210: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x264210u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
label_264214:
    // 0x264214: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x264214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x264218: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x264218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_26421c:
    // 0x26421c: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x26421cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x264220: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x264220u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x264224: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x264224u;
    {
        const bool branch_taken_0x264224 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x264224) {
            ctx->pc = 0x26426Cu;
            goto label_26426c;
        }
    }
    ctx->pc = 0x26422Cu;
    // 0x26422c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x26422cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x264230: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x264230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x264234: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x264234u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x264238: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x264238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26423c: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x26423Cu;
    {
        const bool branch_taken_0x26423c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x26423c) {
            ctx->pc = 0x26425Cu;
            goto label_26425c;
        }
    }
    ctx->pc = 0x264244u;
    // 0x264244: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x264244u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x264248: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x264248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x26424c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x26424cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x264250: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x264250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x264254: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264254u;
    {
        const bool branch_taken_0x264254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x264254) {
            ctx->pc = 0x26426Cu;
            goto label_26426c;
        }
    }
    ctx->pc = 0x26425Cu;
label_26425c:
    // 0x26425c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x26425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x264260: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264264: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x264264u;
    {
        const bool branch_taken_0x264264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264264) {
            ctx->pc = 0x26421Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26421c;
        }
    }
    ctx->pc = 0x26426Cu;
label_26426c:
    // 0x26426c: 0x26060002  addiu       $a2, $s0, 0x2
    ctx->pc = 0x26426cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x264270: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x264270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264274: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x264274u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x264278: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x264278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x26427c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x26427Cu;
    {
        const bool branch_taken_0x26427c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26427c) {
            ctx->pc = 0x26429Cu;
            goto label_26429c;
        }
    }
    ctx->pc = 0x264284u;
    // 0x264284: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x264284u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x264288: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x264288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x26428c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x26428cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x264290: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x264290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x264294: 0x1443fb99  bne         $v0, $v1, . + 4 + (-0x467 << 2)
    ctx->pc = 0x264294u;
    {
        const bool branch_taken_0x264294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x264294) {
            ctx->pc = 0x2630FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2630fc;
        }
    }
    ctx->pc = 0x26429Cu;
label_26429c:
    // 0x26429c: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x26429cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2642a0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2642a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2642a4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2642a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2642a8: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2642A8u;
    {
        const bool branch_taken_0x2642a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2642a8) {
            ctx->pc = 0x2642C0u;
            goto label_2642c0;
        }
    }
    ctx->pc = 0x2642B0u;
    // 0x2642b0: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2642b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2642b4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2642b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2642b8: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x2642b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2642bc: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x2642bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
label_2642c0:
    // 0x2642c0: 0xa3a002df  sb          $zero, 0x2DF($sp)
    ctx->pc = 0x2642c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 735), (uint8_t)GPR_U32(ctx, 0));
    // 0x2642c4: 0x8fa702d8  lw          $a3, 0x2D8($sp)
    ctx->pc = 0x2642c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x2642c8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2642c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642cc: 0x27a202cc  addiu       $v0, $sp, 0x2CC
    ctx->pc = 0x2642ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
    // 0x2642d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2642d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642d4: 0xc09913c  jal         func_2644F0
    ctx->pc = 0x2642D4u;
    SET_GPR_U32(ctx, 31, 0x2642DCu);
    ctx->pc = 0x2644F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644F0u, 0x2642D4u, 0x2642DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2642DCu;
label_2642dc:
    // 0x2642dc: 0x8fa502d4  lw          $a1, 0x2D4($sp)
    ctx->pc = 0x2642dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2642e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2642e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642e4: 0xc07ce3c  jal         func_1F38F0
    ctx->pc = 0x2642E4u;
    SET_GPR_U32(ctx, 31, 0x2642ECu);
    ctx->pc = 0x1F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38F0u, 0x2642E4u, 0x2642ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2642ECu;
label_2642ec:
    // 0x2642ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2642ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642f0: 0xafa60290  sw          $a2, 0x290($sp)
    ctx->pc = 0x2642f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 6));
    // 0x2642f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2642F4u;
    {
        const bool branch_taken_0x2642f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2642f4) {
            ctx->pc = 0x264350u;
            goto label_264350;
        }
    }
    ctx->pc = 0x2642FCu;
label_2642fc:
    // 0x2642fc: 0xafa0028c  sw          $zero, 0x28C($sp)
    ctx->pc = 0x2642fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 0));
    // 0x264300: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x264300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x264304: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x264304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
    // 0x264308: 0x27a40278  addiu       $a0, $sp, 0x278
    ctx->pc = 0x264308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
    // 0x26430c: 0xc041874  jal         func_1061D0
    ctx->pc = 0x26430Cu;
    SET_GPR_U32(ctx, 31, 0x264314u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x26430Cu, 0x264314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264314u;
label_264314:
    // 0x264314: 0x8fa3028c  lw          $v1, 0x28C($sp)
    ctx->pc = 0x264314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x264318: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x264318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26431c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26431cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264320: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x264320u;
    SET_GPR_U32(ctx, 31, 0x264328u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x264320u, 0x264328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264328u;
label_264328:
    // 0x264328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x264328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26432c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26432Cu;
    {
        const bool branch_taken_0x26432c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26432c) {
            ctx->pc = 0x264344u;
            goto label_264344;
        }
    }
    ctx->pc = 0x264334u;
    // 0x264334: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x264334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264338: 0xa3a502df  sb          $a1, 0x2DF($sp)
    ctx->pc = 0x264338u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 735), (uint8_t)GPR_U32(ctx, 5));
    // 0x26433c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26433Cu;
    {
        const bool branch_taken_0x26433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26433c) {
            ctx->pc = 0x264374u;
            goto label_264374;
        }
    }
    ctx->pc = 0x264344u;
label_264344:
    // 0x264344: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x264344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x264348: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x264348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x26434c: 0xafa30290  sw          $v1, 0x290($sp)
    ctx->pc = 0x26434cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 3));
label_264350:
    // 0x264350: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x264350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x264354: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x264354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x264358: 0x8fa402d4  lw          $a0, 0x2D4($sp)
    ctx->pc = 0x264358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x26435c: 0xc07ceb8  jal         func_1F3AE0
    ctx->pc = 0x26435Cu;
    SET_GPR_U32(ctx, 31, 0x264364u);
    ctx->pc = 0x1F3AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3AE0u, 0x26435Cu, 0x264364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264364u;
label_264364:
    // 0x264364: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x264364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264368: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x264368u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26436c: 0x1445ffe3  bne         $v0, $a1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x26436Cu;
    {
        const bool branch_taken_0x26436c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x26436c) {
            ctx->pc = 0x2642FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2642fc;
        }
    }
    ctx->pc = 0x264374u;
label_264374:
    // 0x264374: 0x93a202df  lbu         $v0, 0x2DF($sp)
    ctx->pc = 0x264374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 735)));
    // 0x264378: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x264378u;
    {
        const bool branch_taken_0x264378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264378) {
            ctx->pc = 0x2643FCu;
            goto label_2643fc;
        }
    }
    ctx->pc = 0x264380u;
    // 0x264380: 0x8fa502d4  lw          $a1, 0x2D4($sp)
    ctx->pc = 0x264380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x264384: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x264384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264388: 0x27a30278  addiu       $v1, $sp, 0x278
    ctx->pc = 0x264388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
    // 0x26438c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x26438cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264390: 0xc082c78  jal         func_20B1E0
    ctx->pc = 0x264390u;
    SET_GPR_U32(ctx, 31, 0x264398u);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x264390u, 0x264398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264398u;
label_264398:
    // 0x264398: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x264398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26439c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x26439Cu;
    {
        const bool branch_taken_0x26439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26439c) {
            ctx->pc = 0x2643FCu;
            goto label_2643fc;
        }
    }
    ctx->pc = 0x2643A4u;
label_2643a4:
    // 0x2643a4: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x2643a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2643a8: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x2643a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2643ac: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2643ACu;
    {
        const bool branch_taken_0x2643ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2643ac) {
            ctx->pc = 0x2643F4u;
            goto label_2643f4;
        }
    }
    ctx->pc = 0x2643B4u;
    // 0x2643b4: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x2643b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2643b8: 0x5363c  dsll32      $a2, $a1, 24
    ctx->pc = 0x2643b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2643bc: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x2643bcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x2643c0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2643c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2643c4: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2643C4u;
    {
        const bool branch_taken_0x2643c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2643c4) {
            ctx->pc = 0x2643E4u;
            goto label_2643e4;
        }
    }
    ctx->pc = 0x2643CCu;
    // 0x2643cc: 0x82040001  lb          $a0, 0x1($s0)
    ctx->pc = 0x2643ccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2643d0: 0x42e3c  dsll32      $a1, $a0, 24
    ctx->pc = 0x2643d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2643d4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2643d4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2643d8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2643d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2643dc: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2643DCu;
    {
        const bool branch_taken_0x2643dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2643dc) {
            ctx->pc = 0x2643F4u;
            goto label_2643f4;
        }
    }
    ctx->pc = 0x2643E4u;
label_2643e4:
    // 0x2643e4: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x2643e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2643e8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2643e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643ec: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x2643ECu;
    {
        const bool branch_taken_0x2643ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2643ec) {
            ctx->pc = 0x2643A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2643a4;
        }
    }
    ctx->pc = 0x2643F4u;
label_2643f4:
    // 0x2643f4: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x2643f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2643f8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2643f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2643fc:
    // 0x2643fc: 0x2112023  subu        $a0, $s0, $s1
    ctx->pc = 0x2643fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x264400: 0x93282a  slt         $a1, $a0, $s3
    ctx->pc = 0x264400u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x264404: 0x14a0f9f7  bnez        $a1, . + 4 + (-0x609 << 2)
    ctx->pc = 0x264404u;
    {
        const bool branch_taken_0x264404 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x264404) {
            ctx->pc = 0x262BE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262be4;
        }
    }
    ctx->pc = 0x26440Cu;
    // 0x26440c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26440Cu;
    {
        const bool branch_taken_0x26440c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26440c) {
            ctx->pc = 0x264430u;
            goto label_264430;
        }
    }
    ctx->pc = 0x264414u;
    // 0x264414: 0x8f86c008  lw          $a2, -0x3FF8($gp)
    ctx->pc = 0x264414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x264418: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x264418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26441c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26441cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264420: 0xc099124  jal         func_264490
    ctx->pc = 0x264420u;
    SET_GPR_U32(ctx, 31, 0x264428u);
    ctx->pc = 0x264490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264490u, 0x264420u, 0x264428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264428u;
label_264428:
    // 0x264428: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x264428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26442c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26442cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264430:
    // 0x264430: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x264430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264434: 0xa3a802de  sb          $t0, 0x2DE($sp)
    ctx->pc = 0x264434u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 734), (uint8_t)GPR_U32(ctx, 8));
    // 0x264438: 0x27a20278  addiu       $v0, $sp, 0x278
    ctx->pc = 0x264438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
    // 0x26443c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26443cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264440: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x264440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264444: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x264444u;
    SET_GPR_U32(ctx, 31, 0x26444Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x264444u, 0x26444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26444Cu;
label_26444c:
    // 0x26444c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26444cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264450: 0x93a202de  lbu         $v0, 0x2DE($sp)
    ctx->pc = 0x264450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 734)));
label_264454:
    // 0x264454: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x264454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x264458: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x264458u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26445c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26445cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x264460: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x264460u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264464: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x264464u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264468: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x264468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26446c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26446cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x264470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26447c: 0x27bd0310  addiu       $sp, $sp, 0x310
    ctx->pc = 0x26447cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x264480: 0x3e00008  jr          $ra
    ctx->pc = 0x264480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264488u;
    // 0x264488: 0x0  nop
    ctx->pc = 0x264488u;
    // NOP
    // 0x26448c: 0x0  nop
    ctx->pc = 0x26448cu;
    // NOP
    ctx->pc = 0x264490u;
}
