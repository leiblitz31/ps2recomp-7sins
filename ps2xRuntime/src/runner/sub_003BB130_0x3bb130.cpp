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

// Function: sub_003BB130
// Address: 0x3bb130 - 0x3bb3e8
void sub_003BB130_0x3bb130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB130_0x3bb130");
#endif

    switch (ctx->pc) {
        case 0x3bb130u: goto label_3bb130;
        case 0x3bb134u: goto label_3bb134;
        case 0x3bb138u: goto label_3bb138;
        case 0x3bb13cu: goto label_3bb13c;
        case 0x3bb140u: goto label_3bb140;
        case 0x3bb144u: goto label_3bb144;
        case 0x3bb148u: goto label_3bb148;
        case 0x3bb14cu: goto label_3bb14c;
        case 0x3bb150u: goto label_3bb150;
        case 0x3bb154u: goto label_3bb154;
        case 0x3bb158u: goto label_3bb158;
        case 0x3bb15cu: goto label_3bb15c;
        case 0x3bb160u: goto label_3bb160;
        case 0x3bb164u: goto label_3bb164;
        case 0x3bb168u: goto label_3bb168;
        case 0x3bb16cu: goto label_3bb16c;
        case 0x3bb170u: goto label_3bb170;
        case 0x3bb174u: goto label_3bb174;
        case 0x3bb178u: goto label_3bb178;
        case 0x3bb17cu: goto label_3bb17c;
        case 0x3bb180u: goto label_3bb180;
        case 0x3bb184u: goto label_3bb184;
        case 0x3bb188u: goto label_3bb188;
        case 0x3bb18cu: goto label_3bb18c;
        case 0x3bb190u: goto label_3bb190;
        case 0x3bb194u: goto label_3bb194;
        case 0x3bb198u: goto label_3bb198;
        case 0x3bb19cu: goto label_3bb19c;
        case 0x3bb1a0u: goto label_3bb1a0;
        case 0x3bb1a4u: goto label_3bb1a4;
        case 0x3bb1a8u: goto label_3bb1a8;
        case 0x3bb1acu: goto label_3bb1ac;
        case 0x3bb1b0u: goto label_3bb1b0;
        case 0x3bb1b4u: goto label_3bb1b4;
        case 0x3bb1b8u: goto label_3bb1b8;
        case 0x3bb1bcu: goto label_3bb1bc;
        case 0x3bb1c0u: goto label_3bb1c0;
        case 0x3bb1c4u: goto label_3bb1c4;
        case 0x3bb1c8u: goto label_3bb1c8;
        case 0x3bb1ccu: goto label_3bb1cc;
        case 0x3bb1d0u: goto label_3bb1d0;
        case 0x3bb1d4u: goto label_3bb1d4;
        case 0x3bb1d8u: goto label_3bb1d8;
        case 0x3bb1dcu: goto label_3bb1dc;
        case 0x3bb1e0u: goto label_3bb1e0;
        case 0x3bb1e4u: goto label_3bb1e4;
        case 0x3bb1e8u: goto label_3bb1e8;
        case 0x3bb1ecu: goto label_3bb1ec;
        case 0x3bb1f0u: goto label_3bb1f0;
        case 0x3bb1f4u: goto label_3bb1f4;
        case 0x3bb1f8u: goto label_3bb1f8;
        case 0x3bb1fcu: goto label_3bb1fc;
        case 0x3bb200u: goto label_3bb200;
        case 0x3bb204u: goto label_3bb204;
        case 0x3bb208u: goto label_3bb208;
        case 0x3bb20cu: goto label_3bb20c;
        case 0x3bb210u: goto label_3bb210;
        case 0x3bb214u: goto label_3bb214;
        case 0x3bb218u: goto label_3bb218;
        case 0x3bb21cu: goto label_3bb21c;
        case 0x3bb220u: goto label_3bb220;
        case 0x3bb224u: goto label_3bb224;
        case 0x3bb228u: goto label_3bb228;
        case 0x3bb22cu: goto label_3bb22c;
        case 0x3bb230u: goto label_3bb230;
        case 0x3bb234u: goto label_3bb234;
        case 0x3bb238u: goto label_3bb238;
        case 0x3bb23cu: goto label_3bb23c;
        case 0x3bb240u: goto label_3bb240;
        case 0x3bb244u: goto label_3bb244;
        case 0x3bb248u: goto label_3bb248;
        case 0x3bb24cu: goto label_3bb24c;
        case 0x3bb250u: goto label_3bb250;
        case 0x3bb254u: goto label_3bb254;
        case 0x3bb258u: goto label_3bb258;
        case 0x3bb25cu: goto label_3bb25c;
        case 0x3bb260u: goto label_3bb260;
        case 0x3bb264u: goto label_3bb264;
        case 0x3bb268u: goto label_3bb268;
        case 0x3bb26cu: goto label_3bb26c;
        case 0x3bb270u: goto label_3bb270;
        case 0x3bb274u: goto label_3bb274;
        case 0x3bb278u: goto label_3bb278;
        case 0x3bb27cu: goto label_3bb27c;
        case 0x3bb280u: goto label_3bb280;
        case 0x3bb284u: goto label_3bb284;
        case 0x3bb288u: goto label_3bb288;
        case 0x3bb28cu: goto label_3bb28c;
        case 0x3bb290u: goto label_3bb290;
        case 0x3bb294u: goto label_3bb294;
        case 0x3bb298u: goto label_3bb298;
        case 0x3bb29cu: goto label_3bb29c;
        case 0x3bb2a0u: goto label_3bb2a0;
        case 0x3bb2a4u: goto label_3bb2a4;
        case 0x3bb2a8u: goto label_3bb2a8;
        case 0x3bb2acu: goto label_3bb2ac;
        case 0x3bb2b0u: goto label_3bb2b0;
        case 0x3bb2b4u: goto label_3bb2b4;
        case 0x3bb2b8u: goto label_3bb2b8;
        case 0x3bb2bcu: goto label_3bb2bc;
        case 0x3bb2c0u: goto label_3bb2c0;
        case 0x3bb2c4u: goto label_3bb2c4;
        case 0x3bb2c8u: goto label_3bb2c8;
        case 0x3bb2ccu: goto label_3bb2cc;
        case 0x3bb2d0u: goto label_3bb2d0;
        case 0x3bb2d4u: goto label_3bb2d4;
        case 0x3bb2d8u: goto label_3bb2d8;
        case 0x3bb2dcu: goto label_3bb2dc;
        case 0x3bb2e0u: goto label_3bb2e0;
        case 0x3bb2e4u: goto label_3bb2e4;
        case 0x3bb2e8u: goto label_3bb2e8;
        case 0x3bb2ecu: goto label_3bb2ec;
        case 0x3bb2f0u: goto label_3bb2f0;
        case 0x3bb2f4u: goto label_3bb2f4;
        case 0x3bb2f8u: goto label_3bb2f8;
        case 0x3bb2fcu: goto label_3bb2fc;
        case 0x3bb300u: goto label_3bb300;
        case 0x3bb304u: goto label_3bb304;
        case 0x3bb308u: goto label_3bb308;
        case 0x3bb30cu: goto label_3bb30c;
        case 0x3bb310u: goto label_3bb310;
        case 0x3bb314u: goto label_3bb314;
        case 0x3bb318u: goto label_3bb318;
        case 0x3bb31cu: goto label_3bb31c;
        case 0x3bb320u: goto label_3bb320;
        case 0x3bb324u: goto label_3bb324;
        case 0x3bb328u: goto label_3bb328;
        case 0x3bb32cu: goto label_3bb32c;
        case 0x3bb330u: goto label_3bb330;
        case 0x3bb334u: goto label_3bb334;
        case 0x3bb338u: goto label_3bb338;
        case 0x3bb33cu: goto label_3bb33c;
        case 0x3bb340u: goto label_3bb340;
        case 0x3bb344u: goto label_3bb344;
        case 0x3bb348u: goto label_3bb348;
        case 0x3bb34cu: goto label_3bb34c;
        case 0x3bb350u: goto label_3bb350;
        case 0x3bb354u: goto label_3bb354;
        case 0x3bb358u: goto label_3bb358;
        case 0x3bb35cu: goto label_3bb35c;
        case 0x3bb360u: goto label_3bb360;
        case 0x3bb364u: goto label_3bb364;
        case 0x3bb368u: goto label_3bb368;
        case 0x3bb36cu: goto label_3bb36c;
        case 0x3bb370u: goto label_3bb370;
        case 0x3bb374u: goto label_3bb374;
        case 0x3bb378u: goto label_3bb378;
        case 0x3bb37cu: goto label_3bb37c;
        case 0x3bb380u: goto label_3bb380;
        case 0x3bb384u: goto label_3bb384;
        case 0x3bb388u: goto label_3bb388;
        case 0x3bb38cu: goto label_3bb38c;
        case 0x3bb390u: goto label_3bb390;
        case 0x3bb394u: goto label_3bb394;
        case 0x3bb398u: goto label_3bb398;
        case 0x3bb39cu: goto label_3bb39c;
        case 0x3bb3a0u: goto label_3bb3a0;
        case 0x3bb3a4u: goto label_3bb3a4;
        case 0x3bb3a8u: goto label_3bb3a8;
        case 0x3bb3acu: goto label_3bb3ac;
        case 0x3bb3b0u: goto label_3bb3b0;
        case 0x3bb3b4u: goto label_3bb3b4;
        case 0x3bb3b8u: goto label_3bb3b8;
        case 0x3bb3bcu: goto label_3bb3bc;
        case 0x3bb3c0u: goto label_3bb3c0;
        case 0x3bb3c4u: goto label_3bb3c4;
        case 0x3bb3c8u: goto label_3bb3c8;
        case 0x3bb3ccu: goto label_3bb3cc;
        case 0x3bb3d0u: goto label_3bb3d0;
        case 0x3bb3d4u: goto label_3bb3d4;
        case 0x3bb3d8u: goto label_3bb3d8;
        case 0x3bb3dcu: goto label_3bb3dc;
        case 0x3bb3e0u: goto label_3bb3e0;
        case 0x3bb3e4u: goto label_3bb3e4;
        default: break;
    }

    ctx->pc = 0x3bb130u;

label_3bb130:
    // 0x3bb130: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3bb130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3bb134:
    // 0x3bb134: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3bb134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bb138:
    // 0x3bb138: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3bb138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3bb13c:
    // 0x3bb13c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3bb13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3bb140:
    // 0x3bb140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bb140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bb144:
    // 0x3bb144: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3bb144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3bb148:
    // 0x3bb148: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3bb148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3bb14c:
    // 0x3bb14c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3bb14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3bb150:
    // 0x3bb150: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3bb150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3bb154:
    // 0x3bb154: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3bb154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_3bb158:
    // 0x3bb158: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3bb158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_3bb15c:
    // 0x3bb15c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3bb15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_3bb160:
    // 0x3bb160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bb160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bb164:
    // 0x3bb164: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3bb164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bb168:
    // 0x3bb168: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_3bb16c:
    if (ctx->pc == 0x3BB16Cu) {
        ctx->pc = 0x3BB16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB168u;
        // 0x3bb16c: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB170u;
        goto label_3bb170;
    }
    ctx->pc = 0x3BB168u;
    {
        const bool branch_taken_0x3bb168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bb168) {
            ctx->pc = 0x3BB16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB168u;
            // 0x3bb16c: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB17Cu;
            goto label_3bb17c;
        }
    }
    ctx->pc = 0x3BB170u;
label_3bb170:
    // 0x3bb170: 0xc1036d2  jal         func_40DB48
label_3bb174:
    if (ctx->pc == 0x3BB174u) {
        ctx->pc = 0x3BB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB170u;
        // 0x3bb174: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB178u;
        goto label_3bb178;
    }
    ctx->pc = 0x3BB170u;
    SET_GPR_U32(ctx, 31, 0x3BB178u);
    ctx->pc = 0x3BB174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB170u;
    // 0x3bb174: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3BB170u, 0x3BB178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB178u;
label_3bb178:
    // 0x3bb178: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3bb178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bb17c:
    // 0x3bb17c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3bb17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bb180:
    // 0x3bb180: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3bb180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bb184:
    // 0x3bb184: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_3bb188:
    if (ctx->pc == 0x3BB188u) {
        ctx->pc = 0x3BB188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB184u;
        // 0x3bb188: 0x2495ffff  addiu       $s5, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB18Cu;
        goto label_3bb18c;
    }
    ctx->pc = 0x3BB184u;
    {
        const bool branch_taken_0x3bb184 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BB188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB184u;
        // 0x3bb188: 0x2495ffff  addiu       $s5, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb184) {
            ctx->pc = 0x3BB198u;
            goto label_3bb198;
        }
    }
    ctx->pc = 0x3BB18Cu;
label_3bb18c:
    // 0x3bb18c: 0xc10376a  jal         func_40DDA8
label_3bb190:
    if (ctx->pc == 0x3BB190u) {
        ctx->pc = 0x3BB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB18Cu;
        // 0x3bb190: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB194u;
        goto label_3bb194;
    }
    ctx->pc = 0x3BB18Cu;
    SET_GPR_U32(ctx, 31, 0x3BB194u);
    ctx->pc = 0x3BB190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB18Cu;
    // 0x3bb190: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3BB18Cu, 0x3BB194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB194u;
label_3bb194:
    // 0x3bb194: 0x2455ffff  addiu       $s5, $v0, -0x1
    ctx->pc = 0x3bb194u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3bb198:
    // 0x3bb198: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3bb198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3bb19c:
    // 0x3bb19c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3bb19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3bb1a0:
    // 0x3bb1a0: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x3bb1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3bb1a4:
    // 0x3bb1a4: 0x2474ce80  addiu       $s4, $v1, -0x3180
    ctx->pc = 0x3bb1a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_3bb1a8:
    // 0x3bb1a8: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x3bb1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3bb1ac:
    // 0x3bb1ac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3bb1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3bb1b0:
    // 0x3bb1b0: 0x8e840538  lw          $a0, 0x538($s4)
    ctx->pc = 0x3bb1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1336)));
label_3bb1b4:
    // 0x3bb1b4: 0x40f809  jalr        $v0
label_3bb1b8:
    if (ctx->pc == 0x3BB1B8u) {
        ctx->pc = 0x3BB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB1B4u;
        // 0x3bb1b8: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB1BCu;
        goto label_3bb1bc;
    }
    ctx->pc = 0x3BB1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BB1BCu);
        ctx->pc = 0x3BB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB1B4u;
        // 0x3bb1b8: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB1B4u, 0x3BB1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BB1BCu;
label_3bb1bc:
    // 0x3bb1bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3bb1bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bb1c0:
    // 0x3bb1c0: 0x12600073  beqz        $s3, . + 4 + (0x73 << 2)
label_3bb1c4:
    if (ctx->pc == 0x3BB1C4u) {
        ctx->pc = 0x3BB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB1C0u;
        // 0x3bb1c4: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB1C8u;
        goto label_3bb1c8;
    }
    ctx->pc = 0x3BB1C0u;
    {
        const bool branch_taken_0x3bb1c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB1C0u;
        // 0x3bb1c4: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb1c0) {
            ctx->pc = 0x3BB390u;
            goto label_3bb390;
        }
    }
    ctx->pc = 0x3BB1C8u;
label_3bb1c8:
    // 0x3bb1c8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3bb1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3bb1cc:
    // 0x3bb1cc: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3bb1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3bb1d0:
    // 0x3bb1d0: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x3bb1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_3bb1d4:
    // 0x3bb1d4: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x3bb1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_3bb1d8:
    // 0x3bb1d8: 0x1260006d  beqz        $s3, . + 4 + (0x6D << 2)
label_3bb1dc:
    if (ctx->pc == 0x3BB1DCu) {
        ctx->pc = 0x3BB1E0u;
        goto label_3bb1e0;
    }
    ctx->pc = 0x3BB1D8u;
    {
        const bool branch_taken_0x3bb1d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb1d8) {
            ctx->pc = 0x3BB390u;
            goto label_3bb390;
        }
    }
    ctx->pc = 0x3BB1E0u;
label_3bb1e0:
    // 0x3bb1e0: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x3bb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_3bb1e4:
    // 0x3bb1e4: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x3bb1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_3bb1e8:
    // 0x3bb1e8: 0x40f809  jalr        $v0
label_3bb1ec:
    if (ctx->pc == 0x3BB1ECu) {
        ctx->pc = 0x3BB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB1E8u;
        // 0x3bb1ec: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB1F0u;
        goto label_3bb1f0;
    }
    ctx->pc = 0x3BB1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BB1F0u);
        ctx->pc = 0x3BB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB1E8u;
        // 0x3bb1ec: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB1E8u, 0x3BB1F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BB1F0u;
label_3bb1f0:
    // 0x3bb1f0: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_3bb1f4:
    if (ctx->pc == 0x3BB1F4u) {
        ctx->pc = 0x3BB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB1F0u;
        // 0x3bb1f4: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB1F8u;
        goto label_3bb1f8;
    }
    ctx->pc = 0x3BB1F0u;
    {
        const bool branch_taken_0x3bb1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB1F0u;
        // 0x3bb1f4: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb1f0) {
            ctx->pc = 0x3BB390u;
            goto label_3bb390;
        }
    }
    ctx->pc = 0x3BB1F8u;
label_3bb1f8:
    // 0x3bb1f8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3bb1f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bb1fc:
    // 0x3bb1fc: 0x1aa00062  blez        $s5, . + 4 + (0x62 << 2)
label_3bb200:
    if (ctx->pc == 0x3BB200u) {
        ctx->pc = 0x3BB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB1FCu;
        // 0x3bb200: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB204u;
        goto label_3bb204;
    }
    ctx->pc = 0x3BB1FCu;
    {
        const bool branch_taken_0x3bb1fc = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x3BB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB1FCu;
        // 0x3bb200: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb1fc) {
            ctx->pc = 0x3BB388u;
            goto label_3bb388;
        }
    }
    ctx->pc = 0x3BB204u;
label_3bb204:
    // 0x3bb204: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x3bb204u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bb208:
    // 0x3bb208: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3bb208u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bb20c:
    // 0x3bb20c: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x3bb20cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3bb210:
    // 0x3bb210: 0x1aa00003  blez        $s5, . + 4 + (0x3 << 2)
label_3bb214:
    if (ctx->pc == 0x3BB214u) {
        ctx->pc = 0x3BB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB210u;
        // 0x3bb214: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB218u;
        goto label_3bb218;
    }
    ctx->pc = 0x3BB210u;
    {
        const bool branch_taken_0x3bb210 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x3BB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB210u;
        // 0x3bb214: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb210) {
            ctx->pc = 0x3BB220u;
            goto label_3bb220;
        }
    }
    ctx->pc = 0x3BB218u;
label_3bb218:
    // 0x3bb218: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3bb21c:
    if (ctx->pc == 0x3BB21Cu) {
        ctx->pc = 0x3BB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB218u;
        // 0x3bb21c: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB220u;
        goto label_3bb220;
    }
    ctx->pc = 0x3BB218u;
    {
        const bool branch_taken_0x3bb218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB218u;
        // 0x3bb21c: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb218) {
            ctx->pc = 0x3BB290u;
            goto label_3bb290;
        }
    }
    ctx->pc = 0x3BB220u;
label_3bb220:
    // 0x3bb220: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3bb220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3bb224:
    // 0x3bb224: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3bb224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3bb228:
    // 0x3bb228: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3bb228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3bb22c:
    // 0x3bb22c: 0x24c6ce80  addiu       $a2, $a2, -0x3180
    ctx->pc = 0x3bb22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954624));
label_3bb230:
    // 0x3bb230: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x3bb230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_3bb234:
    // 0x3bb234: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3bb234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3bb238:
    // 0x3bb238: 0x8cc40534  lw          $a0, 0x534($a2)
    ctx->pc = 0x3bb238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1332)));
label_3bb23c:
    // 0x3bb23c: 0x40f809  jalr        $v0
label_3bb240:
    if (ctx->pc == 0x3BB240u) {
        ctx->pc = 0x3BB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB23Cu;
        // 0x3bb240: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB244u;
        goto label_3bb244;
    }
    ctx->pc = 0x3BB23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BB244u);
        ctx->pc = 0x3BB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB23Cu;
        // 0x3bb240: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB23Cu, 0x3BB244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BB244u;
label_3bb244:
    // 0x3bb244: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3bb244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bb248:
    // 0x3bb248: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_3bb24c:
    if (ctx->pc == 0x3BB24Cu) {
        ctx->pc = 0x3BB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB248u;
        // 0x3bb24c: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB250u;
        goto label_3bb250;
    }
    ctx->pc = 0x3BB248u;
    {
        const bool branch_taken_0x3bb248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb248) {
            ctx->pc = 0x3BB24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB248u;
            // 0x3bb24c: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB25Cu;
            goto label_3bb25c;
        }
    }
    ctx->pc = 0x3BB250u;
label_3bb250:
    // 0x3bb250: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3bb250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3bb254:
    // 0x3bb254: 0xac7e0004  sw          $fp, 0x4($v1)
    ctx->pc = 0x3bb254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 30));
label_3bb258:
    // 0x3bb258: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3bb258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3bb25c:
    // 0x3bb25c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3bb25cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3bb260:
    // 0x3bb260: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3bb260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3bb264:
    // 0x3bb264: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3bb264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3bb268:
    // 0x3bb268: 0x6a47000b  ldl         $a3, 0xB($s2)
    ctx->pc = 0x3bb268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3bb26c:
    // 0x3bb26c: 0x6e470004  ldr         $a3, 0x4($s2)
    ctx->pc = 0x3bb26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3bb270:
    // 0x3bb270: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x3bb270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3bb274:
    // 0x3bb274: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x3bb274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3bb278:
    // 0x3bb278: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x3bb278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_3bb27c:
    // 0x3bb27c: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x3bb27cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
label_3bb280:
    // 0x3bb280: 0x2d5102a  slt         $v0, $s6, $s5
    ctx->pc = 0x3bb280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_3bb284:
    // 0x3bb284: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_3bb288:
    if (ctx->pc == 0x3BB288u) {
        ctx->pc = 0x3BB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB284u;
        // 0x3bb288: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB28Cu;
        goto label_3bb28c;
    }
    ctx->pc = 0x3BB284u;
    {
        const bool branch_taken_0x3bb284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB284u;
        // 0x3bb288: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb284) {
            ctx->pc = 0x3BB388u;
            goto label_3bb388;
        }
    }
    ctx->pc = 0x3BB28Cu;
label_3bb28c:
    // 0x3bb28c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x3bb28cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bb290:
    // 0x3bb290: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x3bb290u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_3bb294:
    // 0x3bb294: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3bb294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3bb298:
    // 0x3bb298: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x3bb298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_3bb29c:
    // 0x3bb29c: 0x24e7e880  addiu       $a3, $a3, -0x1780
    ctx->pc = 0x3bb29cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
label_3bb2a0:
    // 0x3bb2a0: 0x8c640534  lw          $a0, 0x534($v1)
    ctx->pc = 0x3bb2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1332)));
label_3bb2a4:
    // 0x3bb2a4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3bb2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3bb2a8:
    // 0x3bb2a8: 0x8ce20118  lw          $v0, 0x118($a3)
    ctx->pc = 0x3bb2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 280)));
label_3bb2ac:
    // 0x3bb2ac: 0x40f809  jalr        $v0
label_3bb2b0:
    if (ctx->pc == 0x3BB2B0u) {
        ctx->pc = 0x3BB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB2ACu;
        // 0x3bb2b0: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB2B4u;
        goto label_3bb2b4;
    }
    ctx->pc = 0x3BB2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BB2B4u);
        ctx->pc = 0x3BB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB2ACu;
        // 0x3bb2b0: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB2ACu, 0x3BB2B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BB2B4u;
label_3bb2b4:
    // 0x3bb2b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3bb2b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bb2b8:
    // 0x3bb2b8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_3bb2bc:
    if (ctx->pc == 0x3BB2BCu) {
        ctx->pc = 0x3BB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB2B8u;
        // 0x3bb2bc: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB2C0u;
        goto label_3bb2c0;
    }
    ctx->pc = 0x3BB2B8u;
    {
        const bool branch_taken_0x3bb2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb2b8) {
            ctx->pc = 0x3BB2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB2B8u;
            // 0x3bb2bc: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB2CCu;
            goto label_3bb2cc;
        }
    }
    ctx->pc = 0x3BB2C0u;
label_3bb2c0:
    // 0x3bb2c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3bb2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3bb2c4:
    // 0x3bb2c4: 0xac7e0004  sw          $fp, 0x4($v1)
    ctx->pc = 0x3bb2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 30));
label_3bb2c8:
    // 0x3bb2c8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3bb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3bb2cc:
    // 0x3bb2cc: 0xac760004  sw          $s6, 0x4($v1)
    ctx->pc = 0x3bb2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 22));
label_3bb2d0:
    // 0x3bb2d0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x3bb2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_3bb2d4:
    // 0x3bb2d4: 0x6a840007  ldl         $a0, 0x7($s4)
    ctx->pc = 0x3bb2d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3bb2d8:
    // 0x3bb2d8: 0x6e840000  ldr         $a0, 0x0($s4)
    ctx->pc = 0x3bb2d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3bb2dc:
    // 0x3bb2dc: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x3bb2dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3bb2e0:
    // 0x3bb2e0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_3bb2e4:
    if (ctx->pc == 0x3BB2E4u) {
        ctx->pc = 0x3BB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB2E0u;
        // 0x3bb2e4: 0xb4440000  sdr         $a0, 0x0($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB2E8u;
        goto label_3bb2e8;
    }
    ctx->pc = 0x3BB2E0u;
    {
        const bool branch_taken_0x3bb2e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB2E0u;
        // 0x3bb2e4: 0xb4440000  sdr         $a0, 0x0($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb2e0) {
            ctx->pc = 0x3BB2F0u;
            goto label_3bb2f0;
        }
    }
    ctx->pc = 0x3BB2E8u;
label_3bb2e8:
    // 0x3bb2e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3bb2ec:
    if (ctx->pc == 0x3BB2ECu) {
        ctx->pc = 0x3BB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB2E8u;
        // 0x3bb2ec: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB2F0u;
        goto label_3bb2f0;
    }
    ctx->pc = 0x3BB2E8u;
    {
        const bool branch_taken_0x3bb2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB2E8u;
        // 0x3bb2ec: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb2e8) {
            ctx->pc = 0x3BB2FCu;
            goto label_3bb2fc;
        }
    }
    ctx->pc = 0x3BB2F0u;
label_3bb2f0:
    // 0x3bb2f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3bb2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bb2f4:
    // 0x3bb2f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3bb2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3bb2f8:
    // 0x3bb2f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3bb2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3bb2fc:
    // 0x3bb2fc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3bb2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3bb300:
    // 0x3bb300: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3bb300u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3bb304:
    // 0x3bb304: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x3bb304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_3bb308:
    // 0x3bb308: 0x24c6ce80  addiu       $a2, $a2, -0x3180
    ctx->pc = 0x3bb308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954624));
label_3bb30c:
    // 0x3bb30c: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x3bb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_3bb310:
    // 0x3bb310: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3bb310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3bb314:
    // 0x3bb314: 0x8cc40534  lw          $a0, 0x534($a2)
    ctx->pc = 0x3bb314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1332)));
label_3bb318:
    // 0x3bb318: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3bb318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3bb31c:
    // 0x3bb31c: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x3bb31cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
label_3bb320:
    // 0x3bb320: 0x40f809  jalr        $v0
label_3bb324:
    if (ctx->pc == 0x3BB324u) {
        ctx->pc = 0x3BB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB320u;
        // 0x3bb324: 0x26f20008  addiu       $s2, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB328u;
        goto label_3bb328;
    }
    ctx->pc = 0x3BB320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BB328u);
        ctx->pc = 0x3BB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB320u;
        // 0x3bb324: 0x26f20008  addiu       $s2, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB320u, 0x3BB328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BB328u;
label_3bb328:
    // 0x3bb328: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3bb328u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bb32c:
    // 0x3bb32c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3bb330:
    if (ctx->pc == 0x3BB330u) {
        ctx->pc = 0x3BB330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB32Cu;
        // 0x3bb330: 0x26d10001  addiu       $s1, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB334u;
        goto label_3bb334;
    }
    ctx->pc = 0x3BB32Cu;
    {
        const bool branch_taken_0x3bb32c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB32Cu;
        // 0x3bb330: 0x26d10001  addiu       $s1, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb32c) {
            ctx->pc = 0x3BB33Cu;
            goto label_3bb33c;
        }
    }
    ctx->pc = 0x3BB334u;
label_3bb334:
    // 0x3bb334: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3bb334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3bb338:
    // 0x3bb338: 0xac7e0004  sw          $fp, 0x4($v1)
    ctx->pc = 0x3bb338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 30));
label_3bb33c:
    // 0x3bb33c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3bb33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3bb340:
    // 0x3bb340: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x3bb340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
label_3bb344:
    // 0x3bb344: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3bb344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3bb348:
    // 0x3bb348: 0x6a87001f  ldl         $a3, 0x1F($s4)
    ctx->pc = 0x3bb348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3bb34c:
    // 0x3bb34c: 0x6e870018  ldr         $a3, 0x18($s4)
    ctx->pc = 0x3bb34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3bb350:
    // 0x3bb350: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x3bb350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3bb354:
    // 0x3bb354: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x3bb354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3bb358:
    // 0x3bb358: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_3bb35c:
    if (ctx->pc == 0x3BB35Cu) {
        ctx->pc = 0x3BB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB358u;
        // 0x3bb35c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB360u;
        goto label_3bb360;
    }
    ctx->pc = 0x3BB358u;
    {
        const bool branch_taken_0x3bb358 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb358) {
            ctx->pc = 0x3BB35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB358u;
            // 0x3bb35c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB368u;
            goto label_3bb368;
        }
    }
    ctx->pc = 0x3BB360u;
label_3bb360:
    // 0x3bb360: 0x10000003  b           . + 4 + (0x3 << 2)
label_3bb364:
    if (ctx->pc == 0x3BB364u) {
        ctx->pc = 0x3BB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB360u;
        // 0x3bb364: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB368u;
        goto label_3bb368;
    }
    ctx->pc = 0x3BB360u;
    {
        const bool branch_taken_0x3bb360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB360u;
        // 0x3bb364: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb360) {
            ctx->pc = 0x3BB370u;
            goto label_3bb370;
        }
    }
    ctx->pc = 0x3BB368u;
label_3bb368:
    // 0x3bb368: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3bb368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3bb36c:
    // 0x3bb36c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3bb36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3bb370:
    // 0x3bb370: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x3bb370u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_3bb374:
    // 0x3bb374: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3bb374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3bb378:
    // 0x3bb378: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x3bb378u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_3bb37c:
    // 0x3bb37c: 0x2d5102a  slt         $v0, $s6, $s5
    ctx->pc = 0x3bb37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_3bb380:
    // 0x3bb380: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_3bb384:
    if (ctx->pc == 0x3BB384u) {
        ctx->pc = 0x3BB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB380u;
        // 0x3bb384: 0x26f70010  addiu       $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB388u;
        goto label_3bb388;
    }
    ctx->pc = 0x3BB380u;
    {
        const bool branch_taken_0x3bb380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB380u;
        // 0x3bb384: 0x26f70010  addiu       $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb380) {
            ctx->pc = 0x3BB290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb290;
        }
    }
    ctx->pc = 0x3BB388u;
label_3bb388:
    // 0x3bb388: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x3bb388u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_3bb38c:
    // 0x3bb38c: 0xae75000c  sw          $s5, 0xC($s3)
    ctx->pc = 0x3bb38cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 21));
label_3bb390:
    // 0x3bb390: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3bb390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bb394:
    // 0x3bb394: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3bb394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3bb398:
    // 0x3bb398: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3bb398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3bb39c:
    // 0x3bb39c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3bb39cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3bb3a0:
    // 0x3bb3a0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3bb3a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3bb3a4:
    // 0x3bb3a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3bb3a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bb3a8:
    // 0x3bb3a8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3bb3a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bb3ac:
    // 0x3bb3ac: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3bb3acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bb3b0:
    // 0x3bb3b0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3bb3b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bb3b4:
    // 0x3bb3b4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3bb3b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bb3b8:
    // 0x3bb3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bb3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bb3bc:
    // 0x3bb3bc: 0x3e00008  jr          $ra
label_3bb3c0:
    if (ctx->pc == 0x3BB3C0u) {
        ctx->pc = 0x3BB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB3BCu;
        // 0x3bb3c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB3C4u;
        goto label_3bb3c4;
    }
    ctx->pc = 0x3BB3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB3BCu;
        // 0x3bb3c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB3C4u;
label_3bb3c4:
    // 0x3bb3c4: 0x0  nop
    ctx->pc = 0x3bb3c4u;
    // NOP
label_3bb3c8:
    // 0x3bb3c8: 0xaf84ab5c  sw          $a0, -0x54A4($gp)
    ctx->pc = 0x3bb3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945628), GPR_U32(ctx, 4));
label_3bb3cc:
    // 0x3bb3cc: 0x3e00008  jr          $ra
label_3bb3d0:
    if (ctx->pc == 0x3BB3D0u) {
        ctx->pc = 0x3BB3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB3CCu;
        // 0x3bb3d0: 0xaf85ab60  sw          $a1, -0x54A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945632), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB3D4u;
        goto label_3bb3d4;
    }
    ctx->pc = 0x3BB3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB3CCu;
        // 0x3bb3d0: 0xaf85ab60  sw          $a1, -0x54A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945632), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB3D4u;
label_3bb3d4:
    // 0x3bb3d4: 0x0  nop
    ctx->pc = 0x3bb3d4u;
    // NOP
label_3bb3d8:
    // 0x3bb3d8: 0xaf84ab54  sw          $a0, -0x54AC($gp)
    ctx->pc = 0x3bb3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945620), GPR_U32(ctx, 4));
label_3bb3dc:
    // 0x3bb3dc: 0x3e00008  jr          $ra
label_3bb3e0:
    if (ctx->pc == 0x3BB3E0u) {
        ctx->pc = 0x3BB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB3DCu;
        // 0x3bb3e0: 0xaf85ab58  sw          $a1, -0x54A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945624), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB3E4u;
        goto label_3bb3e4;
    }
    ctx->pc = 0x3BB3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB3DCu;
        // 0x3bb3e0: 0xaf85ab58  sw          $a1, -0x54A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945624), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB3E4u;
label_3bb3e4:
    // 0x3bb3e4: 0x0  nop
    ctx->pc = 0x3bb3e4u;
    // NOP
    ctx->pc = 0x3bb3e8u;
}
