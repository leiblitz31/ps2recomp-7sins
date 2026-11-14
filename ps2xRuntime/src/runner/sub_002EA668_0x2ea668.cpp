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

// Function: sub_002EA668
// Address: 0x2ea668 - 0x2eb8d0
void sub_002EA668_0x2ea668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA668_0x2ea668");
#endif

    switch (ctx->pc) {
        case 0x2ea6d8u: goto label_2ea6d8;
        case 0x2ea798u: goto label_2ea798;
        case 0x2ea7e0u: goto label_2ea7e0;
        case 0x2ea894u: goto label_2ea894;
        case 0x2ea8b0u: goto label_2ea8b0;
        case 0x2ea8f4u: goto label_2ea8f4;
        case 0x2ea908u: goto label_2ea908;
        case 0x2ea91cu: goto label_2ea91c;
        case 0x2ea928u: goto label_2ea928;
        case 0x2ea93cu: goto label_2ea93c;
        case 0x2ea94cu: goto label_2ea94c;
        case 0x2ea95cu: goto label_2ea95c;
        case 0x2ea96cu: goto label_2ea96c;
        case 0x2ea97cu: goto label_2ea97c;
        case 0x2ea98cu: goto label_2ea98c;
        case 0x2ea9c0u: goto label_2ea9c0;
        case 0x2eab00u: goto label_2eab00;
        case 0x2eab2cu: goto label_2eab2c;
        case 0x2eab9cu: goto label_2eab9c;
        case 0x2eabb0u: goto label_2eabb0;
        case 0x2eabccu: goto label_2eabcc;
        case 0x2eabecu: goto label_2eabec;
        case 0x2eac20u: goto label_2eac20;
        case 0x2eac30u: goto label_2eac30;
        case 0x2eac4cu: goto label_2eac4c;
        case 0x2eac7cu: goto label_2eac7c;
        case 0x2eacb4u: goto label_2eacb4;
        case 0x2eacc0u: goto label_2eacc0;
        case 0x2eacd0u: goto label_2eacd0;
        case 0x2eace4u: goto label_2eace4;
        case 0x2ead2cu: goto label_2ead2c;
        case 0x2ead40u: goto label_2ead40;
        case 0x2ead58u: goto label_2ead58;
        case 0x2ead68u: goto label_2ead68;
        case 0x2eada0u: goto label_2eada0;
        case 0x2eadb0u: goto label_2eadb0;
        case 0x2eadb8u: goto label_2eadb8;
        case 0x2eadccu: goto label_2eadcc;
        case 0x2eade0u: goto label_2eade0;
        case 0x2eadf0u: goto label_2eadf0;
        case 0x2eadfcu: goto label_2eadfc;
        case 0x2eae0cu: goto label_2eae0c;
        case 0x2eae28u: goto label_2eae28;
        case 0x2eae44u: goto label_2eae44;
        case 0x2eae54u: goto label_2eae54;
        case 0x2eae94u: goto label_2eae94;
        case 0x2eae98u: goto label_2eae98;
        case 0x2eaea4u: goto label_2eaea4;
        case 0x2eaeb0u: goto label_2eaeb0;
        case 0x2eaec0u: goto label_2eaec0;
        case 0x2eaeecu: goto label_2eaeec;
        case 0x2eaefcu: goto label_2eaefc;
        case 0x2eaf18u: goto label_2eaf18;
        case 0x2eaf28u: goto label_2eaf28;
        case 0x2eaf38u: goto label_2eaf38;
        case 0x2eaf74u: goto label_2eaf74;
        case 0x2eafecu: goto label_2eafec;
        case 0x2eaffcu: goto label_2eaffc;
        case 0x2eb010u: goto label_2eb010;
        case 0x2eb020u: goto label_2eb020;
        case 0x2eb02cu: goto label_2eb02c;
        case 0x2eb038u: goto label_2eb038;
        case 0x2eb048u: goto label_2eb048;
        case 0x2eb058u: goto label_2eb058;
        case 0x2eb07cu: goto label_2eb07c;
        case 0x2eb090u: goto label_2eb090;
        case 0x2eb0a8u: goto label_2eb0a8;
        case 0x2eb0c8u: goto label_2eb0c8;
        case 0x2eb118u: goto label_2eb118;
        case 0x2eb12cu: goto label_2eb12c;
        case 0x2eb1ecu: goto label_2eb1ec;
        case 0x2eb260u: goto label_2eb260;
        case 0x2eb274u: goto label_2eb274;
        case 0x2eb284u: goto label_2eb284;
        case 0x2eb2a8u: goto label_2eb2a8;
        case 0x2eb2bcu: goto label_2eb2bc;
        case 0x2eb2ccu: goto label_2eb2cc;
        case 0x2eb2e8u: goto label_2eb2e8;
        case 0x2eb354u: goto label_2eb354;
        case 0x2eb3ecu: goto label_2eb3ec;
        case 0x2eb40cu: goto label_2eb40c;
        case 0x2eb424u: goto label_2eb424;
        case 0x2eb440u: goto label_2eb440;
        case 0x2eb464u: goto label_2eb464;
        case 0x2eb4a8u: goto label_2eb4a8;
        case 0x2eb4b8u: goto label_2eb4b8;
        case 0x2eb508u: goto label_2eb508;
        case 0x2eb524u: goto label_2eb524;
        case 0x2eb544u: goto label_2eb544;
        case 0x2eb554u: goto label_2eb554;
        case 0x2eb570u: goto label_2eb570;
        case 0x2eb584u: goto label_2eb584;
        case 0x2eb5acu: goto label_2eb5ac;
        case 0x2eb5c8u: goto label_2eb5c8;
        case 0x2eb5e0u: goto label_2eb5e0;
        case 0x2eb5f4u: goto label_2eb5f4;
        case 0x2eb604u: goto label_2eb604;
        case 0x2eb618u: goto label_2eb618;
        case 0x2eb634u: goto label_2eb634;
        case 0x2eb644u: goto label_2eb644;
        case 0x2eb6a8u: goto label_2eb6a8;
        case 0x2eb6b8u: goto label_2eb6b8;
        case 0x2eb738u: goto label_2eb738;
        case 0x2eb74cu: goto label_2eb74c;
        case 0x2eb760u: goto label_2eb760;
        case 0x2eb788u: goto label_2eb788;
        case 0x2eb798u: goto label_2eb798;
        case 0x2eb7c8u: goto label_2eb7c8;
        case 0x2eb814u: goto label_2eb814;
        case 0x2eb840u: goto label_2eb840;
        case 0x2eb864u: goto label_2eb864;
        case 0x2eb870u: goto label_2eb870;
        case 0x2eb87cu: goto label_2eb87c;
        default: break;
    }

    ctx->pc = 0x2ea668u;

    // 0x2ea668: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ea668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ea66c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2ea66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2ea670: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2ea670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea674: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2ea674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2ea678: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ea678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea67c: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x2ea67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x2ea680: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2ea680u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea684: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2ea684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2ea688: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2ea688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2ea68c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2ea68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2ea690: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2ea690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2ea694: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2ea694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2ea698: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2ea698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2ea69c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2ea69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2ea6a0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2ea6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2ea6a4: 0x8eeb0040  lw          $t3, 0x40($s7)
    ctx->pc = 0x2ea6a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x2ea6a8: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x2ea6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x2ea6ac: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x2ea6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x2ea6b0: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x2EA6B0u;
    {
        const bool branch_taken_0x2ea6b0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6B0u;
        // 0x2ea6b4: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea6b0) {
            ctx->pc = 0x2EA6DCu;
            goto label_2ea6dc;
        }
    }
    ctx->pc = 0x2EA6B8u;
    // 0x2ea6b8: 0x8ee60044  lw          $a2, 0x44($s7)
    ctx->pc = 0x2ea6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
    // 0x2ea6bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea6c0: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2ea6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6c4: 0xad660004  sw          $a2, 0x4($t3)
    ctx->pc = 0x2ea6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
    // 0x2ea6c8: 0x8ee20044  lw          $v0, 0x44($s7)
    ctx->pc = 0x2ea6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
    // 0x2ea6cc: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2ea6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ea6d0: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2EA6D0u;
    SET_GPR_U32(ctx, 31, 0x2EA6D8u);
    ctx->pc = 0x2EA6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA6D0u;
    // 0x2ea6d4: 0xad630008  sw          $v1, 0x8($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2EA6D0u, 0x2EA6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA6D8u;
label_2ea6d8:
    // 0x2ea6d8: 0xaee00040  sw          $zero, 0x40($s7)
    ctx->pc = 0x2ea6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 0));
label_2ea6dc:
    // 0x2ea6dc: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x2ea6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x2ea6e0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2ea6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea6e4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2ea6e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2ea6e8: 0x483000c  bgezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EA6E8u;
    {
        const bool branch_taken_0x2ea6e8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2ea6e8) {
            ctx->pc = 0x2EA6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA6E8u;
            // 0x2ea6ec: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA71Cu;
            goto label_2ea71c;
        }
    }
    ctx->pc = 0x2EA6F0u;
    // 0x2ea6f0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2ea6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2ea6f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2ea6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2ea6f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ea6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ea6fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ea6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ea700: 0x283a024  and         $s4, $s4, $v1
    ctx->pc = 0x2ea700u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x2ea704: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ea704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ea708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea70c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ea70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea710: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ea710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ea714: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2ea714u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x2ea718: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x2ea718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
label_2ea71c:
    // 0x2ea71c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2ea71cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea720: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2ea720u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2ea724: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2ea724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2ea728: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x2ea728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x2ea72c: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EA72Cu;
    {
        const bool branch_taken_0x2ea72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA72Cu;
        // 0x2ea730: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea72c) {
            ctx->pc = 0x2EA788u;
            goto label_2ea788;
        }
    }
    ctx->pc = 0x2EA734u;
    // 0x2ea734: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ea734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ea738: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2ea738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2ea73c: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x2ea73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x2ea740: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x2ea740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x2ea744: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA744u;
    {
        const bool branch_taken_0x2ea744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA744u;
        // 0x2ea748: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea744) {
            ctx->pc = 0x2EA758u;
            goto label_2ea758;
        }
    }
    ctx->pc = 0x2EA74Cu;
    // 0x2ea74c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ea74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2ea750: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA750u;
    {
        const bool branch_taken_0x2ea750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA750u;
        // 0x2ea754: 0x24559090  addiu       $s5, $v0, -0x6F70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea750) {
            ctx->pc = 0x2EA760u;
            goto label_2ea760;
        }
    }
    ctx->pc = 0x2EA758u;
label_2ea758:
    // 0x2ea758: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ea758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2ea75c: 0x245590a0  addiu       $s5, $v0, -0x6F60
    ctx->pc = 0x2ea75cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938784));
label_2ea760:
    // 0x2ea760: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2ea760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2ea764: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EA764u;
    {
        const bool branch_taken_0x2ea764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA764u;
        // 0x2ea768: 0x26a30008  addiu       $v1, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea764) {
            ctx->pc = 0x2EA7C8u;
            goto label_2ea7c8;
        }
    }
    ctx->pc = 0x2EA76Cu;
    // 0x2ea76c: 0x82a20003  lb          $v0, 0x3($s5)
    ctx->pc = 0x2ea76cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x2ea770: 0x26a40003  addiu       $a0, $s5, 0x3
    ctx->pc = 0x2ea770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x2ea774: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x2ea774u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2ea778: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2ea778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2ea77c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EA77Cu;
    {
        const bool branch_taken_0x2ea77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA77Cu;
        // 0x2ea780: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea77c) {
            ctx->pc = 0x2EA7C8u;
            goto label_2ea7c8;
        }
    }
    ctx->pc = 0x2EA784u;
    // 0x2ea784: 0x0  nop
    ctx->pc = 0x2ea784u;
    // NOP
label_2ea788:
    // 0x2ea788: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ea788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea78c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea790: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EA790u;
    SET_GPR_U32(ctx, 31, 0x2EA798u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EA790u, 0x2EA798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA798u;
label_2ea798:
    // 0x2ea798: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EA798u;
    {
        const bool branch_taken_0x2ea798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA798u;
        // 0x2ea79c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea798) {
            ctx->pc = 0x2EA7D0u;
            goto label_2ea7d0;
        }
    }
    ctx->pc = 0x2EA7A0u;
    // 0x2ea7a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ea7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea7a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea7a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2ea7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2ea7ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2ea7acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2ea7b0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2ea7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2ea7b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA7B4u;
    {
        const bool branch_taken_0x2ea7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7B4u;
        // 0x2ea7b8: 0x247590a8  addiu       $s5, $v1, -0x6F58 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7b4) {
            ctx->pc = 0x2EA7C8u;
            goto label_2ea7c8;
        }
    }
    ctx->pc = 0x2EA7BCu;
    // 0x2ea7bc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2ea7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2ea7c0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x2ea7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ea7c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ea7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2ea7c8:
    // 0x2ea7c8: 0x10000434  b           . + 4 + (0x434 << 2)
    ctx->pc = 0x2EA7C8u;
    {
        const bool branch_taken_0x2ea7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7C8u;
        // 0x2ea7cc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7c8) {
            ctx->pc = 0x2EB89Cu;
            goto label_2eb89c;
        }
    }
    ctx->pc = 0x2EA7D0u;
label_2ea7d0:
    // 0x2ea7d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ea7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ea7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7d8: 0xc0bbb9e  jal         func_2EEE78
    ctx->pc = 0x2EA7D8u;
    SET_GPR_U32(ctx, 31, 0x2EA7E0u);
    ctx->pc = 0x2EA7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7D8u;
    // 0x2ea7dc: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEE78u, 0x2EA7D8u, 0x2EA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7E0u;
label_2ea7e0:
    // 0x2ea7e0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2ea7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2ea7e4: 0x101502  srl         $v0, $s0, 20
    ctx->pc = 0x2ea7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x2ea7e8: 0x305307ff  andi        $s3, $v0, 0x7FF
    ctx->pc = 0x2ea7e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2ea7ec: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EA7ECu;
    {
        const bool branch_taken_0x2ea7ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7ECu;
        // 0x2ea7f0: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7ec) {
            ctx->pc = 0x2EA840u;
            goto label_2ea840;
        }
    }
    ctx->pc = 0x2EA7F4u;
    // 0x2ea7f4: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2ea7f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7f8: 0x16183f  dsra32      $v1, $s6, 0
    ctx->pc = 0x2ea7f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x2ea7fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ea7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ea800: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ea800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ea804: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2ea804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2ea808: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2ea808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2ea80c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ea80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ea810: 0x2c5b024  and         $s6, $s6, $a1
    ctx->pc = 0x2ea810u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x2ea814: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x2ea814u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x2ea818: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x2ea818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x2ea81c: 0x16103f  dsra32      $v0, $s6, 0
    ctx->pc = 0x2ea81cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x2ea820: 0x2c5b024  and         $s6, $s6, $a1
    ctx->pc = 0x2ea820u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x2ea824: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ea824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ea828: 0x2673fc01  addiu       $s3, $s3, -0x3FF
    ctx->pc = 0x2ea828u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966273));
    // 0x2ea82c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ea82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea830: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2ea830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2ea834: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x2ea834u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x2ea838: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2EA838u;
    {
        const bool branch_taken_0x2ea838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA838u;
        // 0x2ea83c: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea838) {
            ctx->pc = 0x2EA8E0u;
            goto label_2ea8e0;
        }
    }
    ctx->pc = 0x2EA840u;
label_2ea840:
    // 0x2ea840: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2ea840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea844: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x2ea844u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ea848: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2ea848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ea84c: 0x24930432  addiu       $s3, $a0, 0x432
    ctx->pc = 0x2ea84cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1074));
    // 0x2ea850: 0x2a620021  slti        $v0, $s3, 0x21
    ctx->pc = 0x2ea850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2ea854: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EA854u;
    {
        const bool branch_taken_0x2ea854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA854u;
        // 0x2ea858: 0x131023  negu        $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea854) {
            ctx->pc = 0x2EA880u;
            goto label_2ea880;
        }
    }
    ctx->pc = 0x2EA85Cu;
    // 0x2ea85c: 0x24840412  addiu       $a0, $a0, 0x412
    ctx->pc = 0x2ea85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1042));
    // 0x2ea860: 0x131823  negu        $v1, $s3
    ctx->pc = 0x2ea860u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x2ea864: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x2ea864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2ea868: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ea868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ea86c: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x2ea86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x2ea870: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x2ea870u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2ea874: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA874u;
    {
        const bool branch_taken_0x2ea874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA874u;
        // 0x2ea878: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea874) {
            ctx->pc = 0x2EA88Cu;
            goto label_2ea88c;
        }
    }
    ctx->pc = 0x2EA87Cu;
    // 0x2ea87c: 0x0  nop
    ctx->pc = 0x2ea87cu;
    // NOP
label_2ea880:
    // 0x2ea880: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x2ea880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2ea884: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ea884u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ea888: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x2ea888u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_2ea88c:
    // 0x2ea88c: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x2EA88Cu;
    SET_GPR_U32(ctx, 31, 0x2EA894u);
    ctx->pc = 0x2EA890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA88Cu;
    // 0x2ea890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x2EA88Cu, 0x2EA894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA894u;
label_2ea894:
    // 0x2ea894: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA894u;
    {
        const bool branch_taken_0x2ea894 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2ea894) {
            ctx->pc = 0x2EA8B0u;
            goto label_2ea8b0;
        }
    }
    ctx->pc = 0x2EA89Cu;
    // 0x2ea89c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x2ea89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x2ea8a0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2ea8a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2ea8a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ea8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea8a8: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2EA8A8u;
    SET_GPR_U32(ctx, 31, 0x2EA8B0u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2EA8A8u, 0x2EA8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA8B0u;
label_2ea8b0:
    // 0x2ea8b0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ea8b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea8b4: 0x3c02fe10  lui         $v0, 0xFE10
    ctx->pc = 0x2ea8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65040 << 16));
    // 0x2ea8b8: 0x16183f  dsra32      $v1, $s6, 0
    ctx->pc = 0x2ea8b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x2ea8bc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2ea8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2ea8c0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ea8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ea8c4: 0x2c4b024  and         $s6, $s6, $a0
    ctx->pc = 0x2ea8c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 4));
    // 0x2ea8c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ea8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea8cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ea8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ea8d0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2ea8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2ea8d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ea8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ea8d8: 0x2673fbcd  addiu       $s3, $s3, -0x433
    ctx->pc = 0x2ea8d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966221));
    // 0x2ea8dc: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x2ea8dcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
label_2ea8e0:
    // 0x2ea8e0: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x2ea8e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x2ea8e4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2ea8e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2ea8e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ea8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea8ec: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2EA8ECu;
    SET_GPR_U32(ctx, 31, 0x2EA8F4u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2EA8ECu, 0x2EA8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA8F4u;
label_2ea8f4:
    // 0x2ea8f4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2ea8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2ea8f8: 0xdc2590b0  ld          $a1, -0x6F50($at)
    ctx->pc = 0x2ea8f8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5F90B0u));
    // 0x2ea8fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ea8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea900: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EA900u;
    SET_GPR_U32(ctx, 31, 0x2EA908u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EA900u, 0x2EA908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA908u;
label_2ea908:
    // 0x2ea908: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2ea908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2ea90c: 0xdc2590b8  ld          $a1, -0x6F48($at)
    ctx->pc = 0x2ea90cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5F90B8u));
    // 0x2ea910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ea910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea914: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2EA914u;
    SET_GPR_U32(ctx, 31, 0x2EA91Cu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2EA914u, 0x2EA91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA91Cu;
label_2ea91c:
    // 0x2ea91c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ea91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea920: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x2EA920u;
    SET_GPR_U32(ctx, 31, 0x2EA928u);
    ctx->pc = 0x2EA924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA920u;
    // 0x2ea924: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x2EA920u, 0x2EA928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA928u;
label_2ea928:
    // 0x2ea928: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2ea928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2ea92c: 0xdc2590c0  ld          $a1, -0x6F40($at)
    ctx->pc = 0x2ea92cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5F90C0u));
    // 0x2ea930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ea930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea934: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EA934u;
    SET_GPR_U32(ctx, 31, 0x2EA93Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EA934u, 0x2EA93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA93Cu;
label_2ea93c:
    // 0x2ea93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea940: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ea940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea944: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2EA944u;
    SET_GPR_U32(ctx, 31, 0x2EA94Cu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2EA944u, 0x2EA94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA94Cu;
label_2ea94c:
    // 0x2ea94c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ea94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea954: 0xc0bef18  jal         func_2FBC60
    ctx->pc = 0x2EA954u;
    SET_GPR_U32(ctx, 31, 0x2EA95Cu);
    ctx->pc = 0x2FBC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBC60u, 0x2EA954u, 0x2EA95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA95Cu;
label_2ea95c:
    // 0x2ea95c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea964: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EA964u;
    SET_GPR_U32(ctx, 31, 0x2EA96Cu);
    ctx->pc = 0x2EA968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA964u;
    // 0x2ea968: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EA964u, 0x2EA96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA96Cu;
label_2ea96c:
    // 0x2ea96c: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EA96Cu;
    {
        const bool branch_taken_0x2ea96c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA96Cu;
        // 0x2ea970: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea96c) {
            ctx->pc = 0x2EA998u;
            goto label_2ea998;
        }
    }
    ctx->pc = 0x2EA974u;
    // 0x2ea974: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x2EA974u;
    SET_GPR_U32(ctx, 31, 0x2EA97Cu);
    ctx->pc = 0x2EA978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA974u;
    // 0x2ea978: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x2EA974u, 0x2EA97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA97Cu;
label_2ea97c:
    // 0x2ea97c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea980: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ea980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea984: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EA984u;
    SET_GPR_U32(ctx, 31, 0x2EA98Cu);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EA984u, 0x2EA98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA98Cu;
label_2ea98c:
    // 0x2ea98c: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x2ea98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x2ea990: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x2ea990u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
    // 0x2ea994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea998:
    // 0x2ea998: 0x2fc20017  sltiu       $v0, $fp, 0x17
    ctx->pc = 0x2ea998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x2ea99c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EA99Cu;
    {
        const bool branch_taken_0x2ea99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA99Cu;
        // 0x2ea9a0: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea99c) {
            ctx->pc = 0x2EA9CCu;
            goto label_2ea9cc;
        }
    }
    ctx->pc = 0x2EA9A4u;
    // 0x2ea9a4: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x2ea9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x2ea9a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ea9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9ac: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2ea9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2ea9b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2ea9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ea9b4: 0xdca59148  ld          $a1, -0x6EB8($a1)
    ctx->pc = 0x2ea9b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294938952)));
    // 0x2ea9b8: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EA9B8u;
    SET_GPR_U32(ctx, 31, 0x2EA9C0u);
    ctx->pc = 0x2EA9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA9B8u;
    // 0x2ea9bc: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EA9B8u, 0x2EA9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA9C0u;
label_2ea9c0:
    // 0x2ea9c0: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x2ea9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x2ea9c4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2ea9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2ea9c8: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x2ea9c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
label_2ea9cc:
    // 0x2ea9cc: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x2ea9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2ea9d0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2ea9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ea9d4: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA9D4u;
    {
        const bool branch_taken_0x2ea9d4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2ea9d4) {
            ctx->pc = 0x2EA9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA9D4u;
            // 0x2ea9d8: 0x108023  negu        $s0, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA9E8u;
            goto label_2ea9e8;
        }
    }
    ctx->pc = 0x2EA9DCu;
    // 0x2ea9dc: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x2ea9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x2ea9e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA9E0u;
    {
        const bool branch_taken_0x2ea9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9E0u;
        // 0x2ea9e4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9e0) {
            ctx->pc = 0x2EA9F0u;
            goto label_2ea9f0;
        }
    }
    ctx->pc = 0x2EA9E8u;
label_2ea9e8:
    // 0x2ea9e8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2ea9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2ea9ec: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x2ea9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_2ea9f0:
    // 0x2ea9f0: 0x7c00007  bltz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA9F0u;
    {
        const bool branch_taken_0x2ea9f0 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x2EA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9F0u;
        // 0x2ea9f4: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9f0) {
            ctx->pc = 0x2EAA10u;
            goto label_2eaa10;
        }
    }
    ctx->pc = 0x2EA9F8u;
    // 0x2ea9f8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2ea9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2ea9fc: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x2ea9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x2eaa00: 0xafbe003c  sw          $fp, 0x3C($sp)
    ctx->pc = 0x2eaa00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 30));
    // 0x2eaa04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EAA04u;
    {
        const bool branch_taken_0x2eaa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA04u;
        // 0x2eaa08: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa04) {
            ctx->pc = 0x2EAA28u;
            goto label_2eaa28;
        }
    }
    ctx->pc = 0x2EAA0Cu;
    // 0x2eaa0c: 0x0  nop
    ctx->pc = 0x2eaa0cu;
    // NOP
label_2eaa10:
    // 0x2eaa10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2eaa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eaa14: 0x1e1823  negu        $v1, $fp
    ctx->pc = 0x2eaa14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x2eaa18: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x2eaa18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x2eaa1c: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x2eaa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2eaa20: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2eaa20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x2eaa24: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2eaa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2eaa28:
    // 0x2eaa28: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2eaa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eaa2c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2eaa2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eaa30: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x2eaa30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2eaa34: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x2eaa34u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x2eaa38: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x2eaa38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2eaa3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EAA3Cu;
    {
        const bool branch_taken_0x2eaa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA3Cu;
        // 0x2eaa40: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa3c) {
            ctx->pc = 0x2EAA50u;
            goto label_2eaa50;
        }
    }
    ctx->pc = 0x2EAA44u;
    // 0x2eaa44: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2eaa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2eaa48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2eaa48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa4c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2eaa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_2eaa50:
    // 0x2eaa50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2eaa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eaa54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2eaa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eaa58: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x2eaa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x2eaa5c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2eaa5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2eaa60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2eaa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eaa64: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2eaa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x2eaa68: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EAA68u;
    {
        const bool branch_taken_0x2eaa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA68u;
        // 0x2eaa6c: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa68) {
            ctx->pc = 0x2EAAECu;
            goto label_2eaaec;
        }
    }
    ctx->pc = 0x2EAA70u;
    // 0x2eaa70: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2eaa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eaa74: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2eaa74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eaa78: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2eaa78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2eaa7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2eaa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eaa80: 0x8c6390d0  lw          $v1, -0x6F30($v1)
    ctx->pc = 0x2eaa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938832)));
    // 0x2eaa84: 0x600008  jr          $v1
    ctx->pc = 0x2EAA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EAA90u: goto label_2eaa90;
            case 0x2EAAA0u: goto label_2eaaa0;
            case 0x2EAAA4u: goto label_2eaaa4;
            case 0x2EAAC8u: goto label_2eaac8;
            case 0x2EAACCu: goto label_2eaacc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAA84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EAA8Cu;
    // 0x2eaa8c: 0x0  nop
    ctx->pc = 0x2eaa8cu;
    // NOP
label_2eaa90:
    // 0x2eaa90: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x2eaa90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2eaa94: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EAA94u;
    {
        const bool branch_taken_0x2eaa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA94u;
        // 0x2eaa98: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa94) {
            ctx->pc = 0x2EAAECu;
            goto label_2eaaec;
        }
    }
    ctx->pc = 0x2EAA9Cu;
    // 0x2eaa9c: 0x0  nop
    ctx->pc = 0x2eaa9cu;
    // NOP
label_2eaaa0:
    // 0x2eaaa0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2eaaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_2eaaa4:
    // 0x2eaaa4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2eaaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2eaaa8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2eaaa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eaaac: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x2eaaacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2eaab0: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x2eaab0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x2eaab4: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x2eaab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x2eaab8: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x2eaab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
    // 0x2eaabc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EAABCu;
    {
        const bool branch_taken_0x2eaabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAABCu;
        // 0x2eaac0: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaabc) {
            ctx->pc = 0x2EAAECu;
            goto label_2eaaec;
        }
    }
    ctx->pc = 0x2EAAC4u;
    // 0x2eaac4: 0x0  nop
    ctx->pc = 0x2eaac4u;
    // NOP
label_2eaac8:
    // 0x2eaac8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2eaac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_2eaacc:
    // 0x2eaacc: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2eaaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2eaad0: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x2eaad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x2eaad4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2eaad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eaad8: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x2eaad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2eaadc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2eaadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2eaae0: 0x13182a  slt         $v1, $zero, $s3
    ctx->pc = 0x2eaae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2eaae4: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x2eaae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x2eaae8: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x2eaae8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_2eaaec:
    // 0x2eaaec: 0x2e620018  sltiu       $v0, $s3, 0x18
    ctx->pc = 0x2eaaecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x2eaaf0: 0xaee00044  sw          $zero, 0x44($s7)
    ctx->pc = 0x2eaaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 0));
    // 0x2eaaf4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EAAF4u;
    {
        const bool branch_taken_0x2eaaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAF4u;
        // 0x2eaaf8: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaaf4) {
            ctx->pc = 0x2EAB20u;
            goto label_2eab20;
        }
    }
    ctx->pc = 0x2EAAFCu;
    // 0x2eaafc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2eaafcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eab00:
    // 0x2eab00: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x2eab00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2eab04: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x2eab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2eab08: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2eab08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2eab0c: 0x0  nop
    ctx->pc = 0x2eab0cu;
    // NOP
    // 0x2eab10: 0x0  nop
    ctx->pc = 0x2eab10u;
    // NOP
    // 0x2eab14: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EAB14u;
    {
        const bool branch_taken_0x2eab14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB14u;
        // 0x2eab18: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab14) {
            ctx->pc = 0x2EAB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eab00;
        }
    }
    ctx->pc = 0x2EAB1Cu;
    // 0x2eab1c: 0xaee30044  sw          $v1, 0x44($s7)
    ctx->pc = 0x2eab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 3));
label_2eab20:
    // 0x2eab20: 0x8ee50044  lw          $a1, 0x44($s7)
    ctx->pc = 0x2eab20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
    // 0x2eab24: 0xc0bb84a  jal         func_2EE128
    ctx->pc = 0x2EAB24u;
    SET_GPR_U32(ctx, 31, 0x2EAB2Cu);
    ctx->pc = 0x2EAB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB24u;
    // 0x2eab28: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE128u, 0x2EAB24u, 0x2EAB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB2Cu;
label_2eab2c:
    // 0x2eab2c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2eab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x2eab30: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2eab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eab34: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x2eab34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2eab38: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x2eab38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x2eab3c: 0xaee40040  sw          $a0, 0x40($s7)
    ctx->pc = 0x2eab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 4));
    // 0x2eab40: 0x10400113  beqz        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x2EAB40u;
    {
        const bool branch_taken_0x2eab40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB40u;
        // 0x2eab44: 0x8fb50054  lw          $s5, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab40) {
            ctx->pc = 0x2EAF90u;
            goto label_2eaf90;
        }
    }
    ctx->pc = 0x2EAB48u;
    // 0x2eab48: 0x52200112  beql        $s1, $zero, . + 4 + (0x112 << 2)
    ctx->pc = 0x2EAB48u;
    {
        const bool branch_taken_0x2eab48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eab48) {
            ctx->pc = 0x2EAB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAB48u;
            // 0x2eab4c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF94u;
            goto label_2eaf94;
        }
    }
    ctx->pc = 0x2EAB50u;
    // 0x2eab50: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2eab50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab54: 0xafbe002c  sw          $fp, 0x2C($sp)
    ctx->pc = 0x2eab54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 30));
    // 0x2eab58: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2eab58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x2eab5c: 0x1bc00026  blez        $fp, . + 4 + (0x26 << 2)
    ctx->pc = 0x2EAB5Cu;
    {
        const bool branch_taken_0x2eab5c = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x2EAB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB5Cu;
        // 0x2eab60: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab5c) {
            ctx->pc = 0x2EABF8u;
            goto label_2eabf8;
        }
    }
    ctx->pc = 0x2EAB64u;
    // 0x2eab64: 0x33c2000f  andi        $v0, $fp, 0xF
    ctx->pc = 0x2eab64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)15);
    // 0x2eab68: 0x1e8103  sra         $s0, $fp, 4
    ctx->pc = 0x2eab68u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 30), 4));
    // 0x2eab6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2eab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2eab70: 0x32030010  andi        $v1, $s0, 0x10
    ctx->pc = 0x2eab70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x2eab74: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x2eab74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x2eab78: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2eab78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2eab7c: 0xde319148  ld          $s1, -0x6EB8($s1)
    ctx->pc = 0x2eab7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 17), 4294938952)));
    // 0x2eab80: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EAB80u;
    {
        const bool branch_taken_0x2eab80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB80u;
        // 0x2eab84: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab80) {
            ctx->pc = 0x2EABA0u;
            goto label_2eaba0;
        }
    }
    ctx->pc = 0x2EAB88u;
    // 0x2eab88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eab88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab8c: 0xdc459230  ld          $a1, -0x6DD0($v0)
    ctx->pc = 0x2eab8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294939184)));
    // 0x2eab90: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x2eab90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2eab94: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x2EAB94u;
    SET_GPR_U32(ctx, 31, 0x2EAB9Cu);
    ctx->pc = 0x2EAB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB94u;
    // 0x2eab98: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x2EAB94u, 0x2EAB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB9Cu;
label_2eab9c:
    // 0x2eab9c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2eab9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eaba0:
    // 0x2eaba0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EABA0u;
    {
        const bool branch_taken_0x2eaba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABA0u;
        // 0x2eaba4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaba0) {
            ctx->pc = 0x2EABDCu;
            goto label_2eabdc;
        }
    }
    ctx->pc = 0x2EABA8u;
    // 0x2eaba8: 0x24529210  addiu       $s2, $v0, -0x6DF0
    ctx->pc = 0x2eaba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939152));
    // 0x2eabac: 0x0  nop
    ctx->pc = 0x2eabacu;
    // NOP
label_2eabb0:
    // 0x2eabb0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2eabb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2eabb4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EABB4u;
    {
        const bool branch_taken_0x2eabb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eabb4) {
            ctx->pc = 0x2EABB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EABB4u;
            // 0x2eabb8: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EABD4u;
            goto label_2eabd4;
        }
    }
    ctx->pc = 0x2EABBCu;
    // 0x2eabbc: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x2eabbcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2eabc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eabc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabc4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EABC4u;
    SET_GPR_U32(ctx, 31, 0x2EABCCu);
    ctx->pc = 0x2EABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EABC4u;
    // 0x2eabc8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EABC4u, 0x2EABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EABCCu;
label_2eabcc:
    // 0x2eabcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2eabccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabd0: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2eabd0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_2eabd4:
    // 0x2eabd4: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2EABD4u;
    {
        const bool branch_taken_0x2eabd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABD4u;
        // 0x2eabd8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eabd4) {
            ctx->pc = 0x2EABB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eabb0;
        }
    }
    ctx->pc = 0x2EABDCu;
label_2eabdc:
    // 0x2eabdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eabdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eabe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabe4: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x2EABE4u;
    SET_GPR_U32(ctx, 31, 0x2EABECu);
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x2EABE4u, 0x2EABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EABECu;
label_2eabec:
    // 0x2eabec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2EABECu;
    {
        const bool branch_taken_0x2eabec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABECu;
        // 0x2eabf0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eabec) {
            ctx->pc = 0x2EAC5Cu;
            goto label_2eac5c;
        }
    }
    ctx->pc = 0x2EABF4u;
    // 0x2eabf4: 0x0  nop
    ctx->pc = 0x2eabf4u;
    // NOP
label_2eabf8:
    // 0x2eabf8: 0x1e8823  negu        $s1, $fp
    ctx->pc = 0x2eabf8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x2eabfc: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EABFCu;
    {
        const bool branch_taken_0x2eabfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABFCu;
        // 0x2eac00: 0x3222000f  andi        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eabfc) {
            ctx->pc = 0x2EAC5Cu;
            goto label_2eac5c;
        }
    }
    ctx->pc = 0x2EAC04u;
    // 0x2eac04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2eac04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac08: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2eac08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2eac0c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2eac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2eac10: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2eac10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eac14: 0xdc849148  ld          $a0, -0x6EB8($a0)
    ctx->pc = 0x2eac14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294938952)));
    // 0x2eac18: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EAC18u;
    SET_GPR_U32(ctx, 31, 0x2EAC20u);
    ctx->pc = 0x2EAC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC18u;
    // 0x2eac1c: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EAC18u, 0x2EAC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC20u;
label_2eac20:
    // 0x2eac20: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EAC20u;
    {
        const bool branch_taken_0x2eac20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC20u;
        // 0x2eac24: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac20) {
            ctx->pc = 0x2EAC5Cu;
            goto label_2eac5c;
        }
    }
    ctx->pc = 0x2EAC28u;
    // 0x2eac28: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2eac28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2eac2c: 0x24519210  addiu       $s1, $v0, -0x6DF0
    ctx->pc = 0x2eac2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939152));
label_2eac30:
    // 0x2eac30: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2eac30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2eac34: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EAC34u;
    {
        const bool branch_taken_0x2eac34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eac34) {
            ctx->pc = 0x2EAC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAC34u;
            // 0x2eac38: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAC54u;
            goto label_2eac54;
        }
    }
    ctx->pc = 0x2EAC3Cu;
    // 0x2eac3c: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x2eac3cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eac40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2eac40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac44: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EAC44u;
    SET_GPR_U32(ctx, 31, 0x2EAC4Cu);
    ctx->pc = 0x2EAC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC44u;
    // 0x2eac48: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EAC44u, 0x2EAC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC4Cu;
label_2eac4c:
    // 0x2eac4c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2eac4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac50: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2eac50u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_2eac54:
    // 0x2eac54: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2EAC54u;
    {
        const bool branch_taken_0x2eac54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC54u;
        // 0x2eac58: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac54) {
            ctx->pc = 0x2EAC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eac30;
        }
    }
    ctx->pc = 0x2EAC5Cu;
label_2eac5c:
    // 0x2eac5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2eac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eac60: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EAC60u;
    {
        const bool branch_taken_0x2eac60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eac60) {
            ctx->pc = 0x2EACB8u;
            goto label_2eacb8;
        }
    }
    ctx->pc = 0x2EAC68u;
    // 0x2eac68: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2eac68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2eac6c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2eac6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2eac70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eac70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac74: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EAC74u;
    SET_GPR_U32(ctx, 31, 0x2EAC7Cu);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EAC74u, 0x2EAC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC7Cu;
label_2eac7c:
    // 0x2eac7c: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EAC7Cu;
    {
        const bool branch_taken_0x2eac7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EAC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC7Cu;
        // 0x2eac80: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac7c) {
            ctx->pc = 0x2EACB8u;
            goto label_2eacb8;
        }
    }
    ctx->pc = 0x2EAC84u;
    // 0x2eac84: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EAC84u;
    {
        const bool branch_taken_0x2eac84 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EAC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC84u;
        // 0x2eac88: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac84) {
            ctx->pc = 0x2EACB8u;
            goto label_2eacb8;
        }
    }
    ctx->pc = 0x2EAC8Cu;
    // 0x2eac8c: 0x188000bc  blez        $a0, . + 4 + (0xBC << 2)
    ctx->pc = 0x2EAC8Cu;
    {
        const bool branch_taken_0x2eac8c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2EAC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC8Cu;
        // 0x2eac90: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac8c) {
            ctx->pc = 0x2EAF80u;
            goto label_2eaf80;
        }
    }
    ctx->pc = 0x2EAC94u;
    // 0x2eac94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2eac94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2eac98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2eac98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac9c: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x2eac9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2eaca0: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x2eaca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x2eaca4: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x2eaca4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x2eaca8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2eaca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2eacac: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EACACu;
    SET_GPR_U32(ctx, 31, 0x2EACB4u);
    ctx->pc = 0x2EACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACACu;
    // 0x2eacb0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EACACu, 0x2EACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACB4u;
label_2eacb4:
    // 0x2eacb4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2eacb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eacb8:
    // 0x2eacb8: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x2EACB8u;
    SET_GPR_U32(ctx, 31, 0x2EACC0u);
    ctx->pc = 0x2EACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACB8u;
    // 0x2eacbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x2EACB8u, 0x2EACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACC0u;
label_2eacc0:
    // 0x2eacc0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2eacc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eacc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacc8: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EACC8u;
    SET_GPR_U32(ctx, 31, 0x2EACD0u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EACC8u, 0x2EACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACD0u;
label_2eacd0:
    // 0x2eacd0: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x2eacd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x2eacd4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2eacd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2eacd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eacd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacdc: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2EACDCu;
    SET_GPR_U32(ctx, 31, 0x2EACE4u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2EACDCu, 0x2EACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACE4u;
label_2eace4:
    // 0x2eace4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2eace4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2eace8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2eace8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2eacec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2eacecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacf0: 0x3c02fcc0  lui         $v0, 0xFCC0
    ctx->pc = 0x2eacf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64704 << 16));
    // 0x2eacf4: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x2eacf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x2eacf8: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x2eacf8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x2eacfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2eacfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ead00: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ead00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ead04: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x2ead04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x2ead08: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2ead08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ead0c: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EAD0Cu;
    {
        const bool branch_taken_0x2ead0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD0Cu;
        // 0x2ead10: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead0c) {
            ctx->pc = 0x2EAD78u;
            goto label_2ead78;
        }
    }
    ctx->pc = 0x2EAD14u;
    // 0x2ead14: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x2ead14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x2ead18: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2ead18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2ead1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ead1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead20: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2ead20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2ead24: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2EAD24u;
    SET_GPR_U32(ctx, 31, 0x2EAD2Cu);
    ctx->pc = 0x2EAD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD24u;
    // 0x2ead28: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2EAD24u, 0x2EAD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD2Cu;
label_2ead2c:
    // 0x2ead2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ead2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ead30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ead34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead38: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EAD38u;
    SET_GPR_U32(ctx, 31, 0x2EAD40u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EAD38u, 0x2EAD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD40u;
label_2ead40:
    // 0x2ead40: 0x1c4001e3  bgtz        $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x2EAD40u;
    {
        const bool branch_taken_0x2ead40 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD40u;
        // 0x2ead44: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead40) {
            ctx->pc = 0x2EB4D0u;
            goto label_2eb4d0;
        }
    }
    ctx->pc = 0x2EAD48u;
    // 0x2ead48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ead48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ead4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead50: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2EAD50u;
    SET_GPR_U32(ctx, 31, 0x2EAD58u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2EAD50u, 0x2EAD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD58u;
label_2ead58:
    // 0x2ead58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ead58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ead5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead60: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EAD60u;
    SET_GPR_U32(ctx, 31, 0x2EAD68u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EAD60u, 0x2EAD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD68u;
label_2ead68:
    // 0x2ead68: 0x44001d5  bltz        $v0, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x2EAD68u;
    {
        const bool branch_taken_0x2ead68 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD68u;
        // 0x2ead6c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead68) {
            ctx->pc = 0x2EB4C0u;
            goto label_2eb4c0;
        }
    }
    ctx->pc = 0x2EAD70u;
    // 0x2ead70: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x2EAD70u;
    {
        const bool branch_taken_0x2ead70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ead70) {
            ctx->pc = 0x2EAF80u;
            goto label_2eaf80;
        }
    }
    ctx->pc = 0x2EAD78u;
label_2ead78:
    // 0x2ead78: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2EAD78u;
    {
        const bool branch_taken_0x2ead78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD78u;
        // 0x2ead7c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead78) {
            ctx->pc = 0x2EAE78u;
            goto label_2eae78;
        }
    }
    ctx->pc = 0x2EAD80u;
    // 0x2ead80: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x2ead80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2ead84: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2ead84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2ead88: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2ead88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ead8c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2ead8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2ead90: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2ead90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ead94: 0xdca59140  ld          $a1, -0x6EC0($a1)
    ctx->pc = 0x2ead94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294938944)));
    // 0x2ead98: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x2EAD98u;
    SET_GPR_U32(ctx, 31, 0x2EADA0u);
    ctx->pc = 0x2EAD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD98u;
    // 0x2ead9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x2EAD98u, 0x2EADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADA0u;
label_2eada0:
    // 0x2eada0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eada0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eada4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eada4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eada8: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2EADA8u;
    SET_GPR_U32(ctx, 31, 0x2EADB0u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2EADA8u, 0x2EADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADB0u;
label_2eadb0:
    // 0x2eadb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2EADB0u;
    {
        const bool branch_taken_0x2eadb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADB0u;
        // 0x2eadb4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadb0) {
            ctx->pc = 0x2EADE4u;
            goto label_2eade4;
        }
    }
    ctx->pc = 0x2EADB8u;
label_2eadb8:
    // 0x2eadb8: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x2eadb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2eadbc: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x2eadbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x2eadc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eadc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadc4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EADC4u;
    SET_GPR_U32(ctx, 31, 0x2EADCCu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EADC4u, 0x2EADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADCCu;
label_2eadcc:
    // 0x2eadcc: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x2eadccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2eadd0: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x2eadd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x2eadd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eadd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadd8: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EADD8u;
    SET_GPR_U32(ctx, 31, 0x2EADE0u);
    ctx->pc = 0x2EADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EADD8u;
    // 0x2eaddc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EADD8u, 0x2EADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADE0u;
label_2eade0:
    // 0x2eade0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2eade0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eade4:
    // 0x2eade4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eade4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eade8: 0xc0bef18  jal         func_2FBC60
    ctx->pc = 0x2EADE8u;
    SET_GPR_U32(ctx, 31, 0x2EADF0u);
    ctx->pc = 0x2FBC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBC60u, 0x2EADE8u, 0x2EADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADF0u;
label_2eadf0:
    // 0x2eadf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eadf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadf4: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x2EADF4u;
    SET_GPR_U32(ctx, 31, 0x2EADFCu);
    ctx->pc = 0x2EADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EADF4u;
    // 0x2eadf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x2EADF4u, 0x2EADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADFCu;
label_2eadfc:
    // 0x2eadfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eadfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eae00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae04: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2EAE04u;
    SET_GPR_U32(ctx, 31, 0x2EAE0Cu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2EAE04u, 0x2EAE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE0Cu;
label_2eae0c:
    // 0x2eae0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eae0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2eae10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae14: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2eae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2eae18: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2eae18u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2eae1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eae1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae20: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EAE20u;
    SET_GPR_U32(ctx, 31, 0x2EAE28u);
    ctx->pc = 0x2EAE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE20u;
    // 0x2eae24: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EAE20u, 0x2EAE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE28u;
label_2eae28:
    // 0x2eae28: 0x4400292  bltz        $v0, . + 4 + (0x292 << 2)
    ctx->pc = 0x2EAE28u;
    {
        const bool branch_taken_0x2eae28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE28u;
        // 0x2eae2c: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae28) {
            ctx->pc = 0x2EB874u;
            goto label_2eb874;
        }
    }
    ctx->pc = 0x2EAE30u;
    // 0x2eae30: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x2eae30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2eae34: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2eae34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2eae38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eae38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae3c: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2EAE3Cu;
    SET_GPR_U32(ctx, 31, 0x2EAE44u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2EAE3Cu, 0x2EAE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE44u;
label_2eae44:
    // 0x2eae44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eae44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eae48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae4c: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EAE4Cu;
    SET_GPR_U32(ctx, 31, 0x2EAE54u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EAE4Cu, 0x2EAE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE54u;
label_2eae54:
    // 0x2eae54: 0x4400099  bltz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2EAE54u;
    {
        const bool branch_taken_0x2eae54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE54u;
        // 0x2eae58: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae54) {
            ctx->pc = 0x2EB0BCu;
            goto label_2eb0bc;
        }
    }
    ctx->pc = 0x2EAE5Cu;
    // 0x2eae5c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2eae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eae60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2eae60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2eae64: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x2eae64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2eae68: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2EAE68u;
    {
        const bool branch_taken_0x2eae68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE68u;
        // 0x2eae6c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae68) {
            ctx->pc = 0x2EADB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eadb8;
        }
    }
    ctx->pc = 0x2EAE70u;
    // 0x2eae70: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2EAE70u;
    {
        const bool branch_taken_0x2eae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eae70) {
            ctx->pc = 0x2EAF80u;
            goto label_2eaf80;
        }
    }
    ctx->pc = 0x2EAE78u;
label_2eae78:
    // 0x2eae78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eae78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae7c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2eae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2eae80: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2eae80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2eae84: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2eae84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eae88: 0xdc849140  ld          $a0, -0x6EC0($a0)
    ctx->pc = 0x2eae88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294938944)));
    // 0x2eae8c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EAE8Cu;
    SET_GPR_U32(ctx, 31, 0x2EAE94u);
    ctx->pc = 0x2EAE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE8Cu;
    // 0x2eae90: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EAE8Cu, 0x2EAE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE94u;
label_2eae94:
    // 0x2eae94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2eae94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eae98:
    // 0x2eae98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eae98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae9c: 0xc0bef18  jal         func_2FBC60
    ctx->pc = 0x2EAE9Cu;
    SET_GPR_U32(ctx, 31, 0x2EAEA4u);
    ctx->pc = 0x2FBC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBC60u, 0x2EAE9Cu, 0x2EAEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEA4u;
label_2eaea4:
    // 0x2eaea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eaea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaea8: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x2EAEA8u;
    SET_GPR_U32(ctx, 31, 0x2EAEB0u);
    ctx->pc = 0x2EAEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAEA8u;
    // 0x2eaeac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x2EAEA8u, 0x2EAEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEB0u;
label_2eaeb0:
    // 0x2eaeb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eaeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaeb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eaeb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaeb8: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2EAEB8u;
    SET_GPR_U32(ctx, 31, 0x2EAEC0u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2EAEB8u, 0x2EAEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEC0u;
label_2eaec0:
    // 0x2eaec0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2eaec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaec4: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2eaec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2eaec8: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2eaec8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2eaecc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2eaeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eaed0: 0x16640023  bne         $s3, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2EAED0u;
    {
        const bool branch_taken_0x2eaed0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EAED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAED0u;
        // 0x2eaed4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaed0) {
            ctx->pc = 0x2EAF60u;
            goto label_2eaf60;
        }
    }
    ctx->pc = 0x2EAED8u;
    // 0x2eaed8: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x2eaed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2eaedc: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2eaedcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2eaee0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eaee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaee4: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2EAEE4u;
    SET_GPR_U32(ctx, 31, 0x2EAEECu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2EAEE4u, 0x2EAEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEECu;
label_2eaeec:
    // 0x2eaeec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eaeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaef0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eaef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaef4: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EAEF4u;
    SET_GPR_U32(ctx, 31, 0x2EAEFCu);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EAEF4u, 0x2EAEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEFCu;
label_2eaefc:
    // 0x2eaefc: 0x1c40006f  bgtz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2EAEFCu;
    {
        const bool branch_taken_0x2eaefc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEFCu;
        // 0x2eaf00: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaefc) {
            ctx->pc = 0x2EB0BCu;
            goto label_2eb0bc;
        }
    }
    ctx->pc = 0x2EAF04u;
    // 0x2eaf04: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x2eaf04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2eaf08: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2eaf08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2eaf0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eaf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf10: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2EAF10u;
    SET_GPR_U32(ctx, 31, 0x2EAF18u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2EAF10u, 0x2EAF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF18u;
label_2eaf18:
    // 0x2eaf18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eaf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eaf1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf20: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EAF20u;
    SET_GPR_U32(ctx, 31, 0x2EAF28u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EAF20u, 0x2EAF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF28u;
label_2eaf28:
    // 0x2eaf28: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EAF28u;
    {
        const bool branch_taken_0x2eaf28 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF28u;
        // 0x2eaf2c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf28) {
            ctx->pc = 0x2EAF80u;
            goto label_2eaf80;
        }
    }
    ctx->pc = 0x2EAF30u;
    // 0x2eaf30: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2eaf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2eaf34: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2eaf34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2eaf38:
    // 0x2eaf38: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2eaf38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2eaf3c: 0x0  nop
    ctx->pc = 0x2eaf3cu;
    // NOP
    // 0x2eaf40: 0x0  nop
    ctx->pc = 0x2eaf40u;
    // NOP
    // 0x2eaf44: 0x0  nop
    ctx->pc = 0x2eaf44u;
    // NOP
    // 0x2eaf48: 0x0  nop
    ctx->pc = 0x2eaf48u;
    // NOP
    // 0x2eaf4c: 0x5043fffa  beql        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EAF4Cu;
    {
        const bool branch_taken_0x2eaf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eaf4c) {
            ctx->pc = 0x2EAF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAF4Cu;
            // 0x2eaf50: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eaf38;
        }
    }
    ctx->pc = 0x2EAF54u;
    // 0x2eaf54: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x2EAF54u;
    {
        const bool branch_taken_0x2eaf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF54u;
        // 0x2eaf58: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf54) {
            ctx->pc = 0x2EB870u;
            goto label_2eb870;
        }
    }
    ctx->pc = 0x2EAF5Cu;
    // 0x2eaf5c: 0x0  nop
    ctx->pc = 0x2eaf5cu;
    // NOP
label_2eaf60:
    // 0x2eaf60: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x2eaf60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2eaf64: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x2eaf64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x2eaf68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eaf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf6c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EAF6Cu;
    SET_GPR_U32(ctx, 31, 0x2EAF74u);
    ctx->pc = 0x2EAF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF6Cu;
    // 0x2eaf70: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EAF6Cu, 0x2EAF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF74u;
label_2eaf74:
    // 0x2eaf74: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x2EAF74u;
    {
        const bool branch_taken_0x2eaf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF74u;
        // 0x2eaf78: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf74) {
            ctx->pc = 0x2EAE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eae98;
        }
    }
    ctx->pc = 0x2EAF7Cu;
    // 0x2eaf7c: 0x0  nop
    ctx->pc = 0x2eaf7cu;
    // NOP
label_2eaf80:
    // 0x2eaf80: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x2eaf80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf84: 0x8fbe002c  lw          $fp, 0x2C($sp)
    ctx->pc = 0x2eaf84u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2eaf88: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2eaf88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2eaf8c: 0x8fb50054  lw          $s5, 0x54($sp)
    ctx->pc = 0x2eaf8cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2eaf90:
    // 0x2eaf90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2eaf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2eaf94:
    // 0x2eaf94: 0x460006a  bltz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x2EAF94u;
    {
        const bool branch_taken_0x2eaf94 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2EAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF94u;
        // 0x2eaf98: 0x2bc2000f  slti        $v0, $fp, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf94) {
            ctx->pc = 0x2EB140u;
            goto label_2eb140;
        }
    }
    ctx->pc = 0x2EAF9Cu;
    // 0x2eaf9c: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2EAF9Cu;
    {
        const bool branch_taken_0x2eaf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF9Cu;
        // 0x2eafa0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf9c) {
            ctx->pc = 0x2EB144u;
            goto label_2eb144;
        }
    }
    ctx->pc = 0x2EAFA4u;
    // 0x2eafa4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2eafa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2eafa8: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x2eafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x2eafac: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x2eafacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x2eafb0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2eafb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2eafb4: 0xde319148  ld          $s1, -0x6EB8($s1)
    ctx->pc = 0x2eafb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 17), 4294938952)));
    // 0x2eafb8: 0x4610015  bgez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EAFB8u;
    {
        const bool branch_taken_0x2eafb8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2EAFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFB8u;
        // 0x2eafbc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafb8) {
            ctx->pc = 0x2EB010u;
            goto label_2eb010;
        }
    }
    ctx->pc = 0x2EAFC0u;
    // 0x2eafc0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2eafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eafc4: 0x1c800012  bgtz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EAFC4u;
    {
        const bool branch_taken_0x2eafc4 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2eafc4) {
            ctx->pc = 0x2EB010u;
            goto label_2eb010;
        }
    }
    ctx->pc = 0x2EAFCCu;
    // 0x2eafcc: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2eafccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2eafd0: 0x480013b  bltz        $a0, . + 4 + (0x13B << 2)
    ctx->pc = 0x2EAFD0u;
    {
        const bool branch_taken_0x2eafd0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2EAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFD0u;
        // 0x2eafd4: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafd0) {
            ctx->pc = 0x2EB4C0u;
            goto label_2eb4c0;
        }
    }
    ctx->pc = 0x2EAFD8u;
    // 0x2eafd8: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x2eafd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x2eafdc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2eafdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2eafe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eafe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eafe4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EAFE4u;
    SET_GPR_U32(ctx, 31, 0x2EAFECu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EAFE4u, 0x2EAFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFECu;
label_2eafec:
    // 0x2eafec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eafecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaff0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eaff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaff4: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EAFF4u;
    SET_GPR_U32(ctx, 31, 0x2EAFFCu);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EAFF4u, 0x2EAFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFFCu;
label_2eaffc:
    // 0x2eaffc: 0x18400131  blez        $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x2EAFFCu;
    {
        const bool branch_taken_0x2eaffc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2EB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFFCu;
        // 0x2eb000: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaffc) {
            ctx->pc = 0x2EB4C4u;
            goto label_2eb4c4;
        }
    }
    ctx->pc = 0x2EB004u;
    // 0x2eb004: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x2EB004u;
    {
        const bool branch_taken_0x2eb004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB004u;
        // 0x2eb008: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb004) {
            ctx->pc = 0x2EB4D0u;
            goto label_2eb4d0;
        }
    }
    ctx->pc = 0x2EB00Cu;
    // 0x2eb00c: 0x0  nop
    ctx->pc = 0x2eb00cu;
    // NOP
label_2eb010:
    // 0x2eb010: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eb010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb014: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eb014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb018: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x2EB018u;
    SET_GPR_U32(ctx, 31, 0x2EB020u);
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x2EB018u, 0x2EB020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB020u;
label_2eb020:
    // 0x2eb020: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eb020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb024: 0xc0bef18  jal         func_2FBC60
    ctx->pc = 0x2EB024u;
    SET_GPR_U32(ctx, 31, 0x2EB02Cu);
    ctx->pc = 0x2FBC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBC60u, 0x2EB024u, 0x2EB02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB02Cu;
label_2eb02c:
    // 0x2eb02c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb030: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x2EB030u;
    SET_GPR_U32(ctx, 31, 0x2EB038u);
    ctx->pc = 0x2EB034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB030u;
    // 0x2eb034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x2EB030u, 0x2EB038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB038u;
label_2eb038:
    // 0x2eb038: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eb038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb03c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eb03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb040: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EB040u;
    SET_GPR_U32(ctx, 31, 0x2EB048u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EB040u, 0x2EB048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB048u;
label_2eb048:
    // 0x2eb048: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eb048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb04c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb050: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2EB050u;
    SET_GPR_U32(ctx, 31, 0x2EB058u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2EB050u, 0x2EB058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB058u;
label_2eb058:
    // 0x2eb058: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb05c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2eb05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2eb060: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2eb060u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2eb064: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2eb064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb068: 0x16620027  bne         $s3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2EB068u;
    {
        const bool branch_taken_0x2eb068 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB068u;
        // 0x2eb06c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb068) {
            ctx->pc = 0x2EB108u;
            goto label_2eb108;
        }
    }
    ctx->pc = 0x2EB070u;
    // 0x2eb070: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2eb070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb074: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2EB074u;
    SET_GPR_U32(ctx, 31, 0x2EB07Cu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2EB074u, 0x2EB07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB07Cu;
label_2eb07c:
    // 0x2eb07c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eb07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb080: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2eb080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb088: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EB088u;
    SET_GPR_U32(ctx, 31, 0x2EB090u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EB088u, 0x2EB090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB090u;
label_2eb090:
    // 0x2eb090: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB090u;
    {
        const bool branch_taken_0x2eb090 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB090u;
        // 0x2eb094: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb090) {
            ctx->pc = 0x2EB0BCu;
            goto label_2eb0bc;
        }
    }
    ctx->pc = 0x2EB098u;
    // 0x2eb098: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb09c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eb09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0a0: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EB0A0u;
    SET_GPR_U32(ctx, 31, 0x2EB0A8u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EB0A0u, 0x2EB0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0A8u;
label_2eb0a8:
    // 0x2eb0a8: 0x144001f2  bnez        $v0, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x2EB0A8u;
    {
        const bool branch_taken_0x2eb0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0A8u;
        // 0x2eb0ac: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb0a8) {
            ctx->pc = 0x2EB874u;
            goto label_2eb874;
        }
    }
    ctx->pc = 0x2EB0B0u;
    // 0x2eb0b0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2eb0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2eb0b4: 0x104001ef  beqz        $v0, . + 4 + (0x1EF << 2)
    ctx->pc = 0x2EB0B4u;
    {
        const bool branch_taken_0x2eb0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0B4u;
        // 0x2eb0b8: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb0b4) {
            ctx->pc = 0x2EB874u;
            goto label_2eb874;
        }
    }
    ctx->pc = 0x2EB0BCu;
label_2eb0bc:
    // 0x2eb0bc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2eb0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2eb0c0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2eb0c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2eb0c4: 0x0  nop
    ctx->pc = 0x2eb0c4u;
    // NOP
label_2eb0c8:
    // 0x2eb0c8: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2eb0c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2eb0cc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB0CCu;
    {
        const bool branch_taken_0x2eb0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0CCu;
        // 0x2eb0d0: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb0cc) {
            ctx->pc = 0x2EB0F8u;
            goto label_2eb0f8;
        }
    }
    ctx->pc = 0x2EB0D4u;
    // 0x2eb0d4: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x2eb0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2eb0d8: 0x0  nop
    ctx->pc = 0x2eb0d8u;
    // NOP
    // 0x2eb0dc: 0x0  nop
    ctx->pc = 0x2eb0dcu;
    // NOP
    // 0x2eb0e0: 0x0  nop
    ctx->pc = 0x2eb0e0u;
    // NOP
    // 0x2eb0e4: 0x56a4fff8  bnel        $s5, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EB0E4u;
    {
        const bool branch_taken_0x2eb0e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x2eb0e4) {
            ctx->pc = 0x2EB0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB0E4u;
            // 0x2eb0e8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb0c8;
        }
    }
    ctx->pc = 0x2EB0ECu;
    // 0x2eb0ec: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x2eb0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2eb0f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2eb0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0f4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2eb0f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2eb0f8:
    // 0x2eb0f8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2eb0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2eb0fc: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2eb0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2eb100: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x2EB100u;
    {
        const bool branch_taken_0x2eb100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB100u;
        // 0x2eb104: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb100) {
            ctx->pc = 0x2EB870u;
            goto label_2eb870;
        }
    }
    ctx->pc = 0x2EB108u;
label_2eb108:
    // 0x2eb108: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x2eb108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2eb10c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x2eb10cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x2eb110: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2EB110u;
    SET_GPR_U32(ctx, 31, 0x2EB118u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2EB110u, 0x2EB118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB118u;
label_2eb118:
    // 0x2eb118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb11c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eb11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb120: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2eb120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb124: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2EB124u;
    SET_GPR_U32(ctx, 31, 0x2EB12Cu);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2EB124u, 0x2EB12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB12Cu;
label_2eb12c:
    // 0x2eb12c: 0x104001d0  beqz        $v0, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x2EB12Cu;
    {
        const bool branch_taken_0x2eb12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB12Cu;
        // 0x2eb130: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb12c) {
            ctx->pc = 0x2EB870u;
            goto label_2eb870;
        }
    }
    ctx->pc = 0x2EB134u;
    // 0x2eb134: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x2EB134u;
    {
        const bool branch_taken_0x2eb134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb134) {
            ctx->pc = 0x2EB010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb010;
        }
    }
    ctx->pc = 0x2EB13Cu;
    // 0x2eb13c: 0x0  nop
    ctx->pc = 0x2eb13cu;
    // NOP
label_2eb140:
    // 0x2eb140: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2eb140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2eb144:
    // 0x2eb144: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2eb144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2eb148: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x2eb148u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb14c: 0x28560002  slti        $s6, $v0, 0x2
    ctx->pc = 0x2eb14cu;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2eb150: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x2eb150u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2eb154: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2eb154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2eb158: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2EB158u;
    {
        const bool branch_taken_0x2eb158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB158u;
        // 0x2eb15c: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb158) {
            ctx->pc = 0x2EB1FCu;
            goto label_2eb1fc;
        }
    }
    ctx->pc = 0x2EB160u;
    // 0x2eb160: 0x52c00009  beql        $s6, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB160u;
    {
        const bool branch_taken_0x2eb160 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb160) {
            ctx->pc = 0x2EB164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB160u;
            // 0x2eb164: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB188u;
            goto label_2eb188;
        }
    }
    ctx->pc = 0x2EB168u;
    // 0x2eb168: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2eb168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eb16c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EB16Cu;
    {
        const bool branch_taken_0x2eb16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB16Cu;
        // 0x2eb170: 0x24730433  addiu       $s3, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb16c) {
            ctx->pc = 0x2EB1D4u;
            goto label_2eb1d4;
        }
    }
    ctx->pc = 0x2EB174u;
    // 0x2eb174: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2eb174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2eb178: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2eb178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2eb17c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EB17Cu;
    {
        const bool branch_taken_0x2eb17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB17Cu;
        // 0x2eb180: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb17c) {
            ctx->pc = 0x2EB1D4u;
            goto label_2eb1d4;
        }
    }
    ctx->pc = 0x2EB184u;
    // 0x2eb184: 0x0  nop
    ctx->pc = 0x2eb184u;
    // NOP
label_2eb188:
    // 0x2eb188: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2eb188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2eb18c: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x2eb18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2eb190: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x2eb190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2eb194: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB194u;
    {
        const bool branch_taken_0x2eb194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB194u;
        // 0x2eb198: 0x909023  subu        $s2, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb194) {
            ctx->pc = 0x2EB1BCu;
            goto label_2eb1bc;
        }
    }
    ctx->pc = 0x2EB19Cu;
    // 0x2eb19c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2eb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2eb1a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2eb1a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1a4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2eb1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2eb1a8: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2eb1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2eb1ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2eb1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2eb1b0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2eb1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2eb1b4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2eb1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2eb1b8: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x2eb1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_2eb1bc:
    // 0x2eb1bc: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x2eb1bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb1c0: 0x6610005  bgez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB1C0u;
    {
        const bool branch_taken_0x2eb1c0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2EB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1C0u;
        // 0x2eb1c4: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb1c0) {
            ctx->pc = 0x2EB1D8u;
            goto label_2eb1d8;
        }
    }
    ctx->pc = 0x2EB1C8u;
    // 0x2eb1c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2eb1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb1cc: 0x938823  subu        $s1, $a0, $s3
    ctx->pc = 0x2eb1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2eb1d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2eb1d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb1d4:
    // 0x2eb1d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2eb1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2eb1d8:
    // 0x2eb1d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eb1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb1e0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2eb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2eb1e4: 0xc0bb95e  jal         func_2EE578
    ctx->pc = 0x2EB1E4u;
    SET_GPR_U32(ctx, 31, 0x2EB1ECu);
    ctx->pc = 0x2EB1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1E4u;
    // 0x2eb1e8: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE578u, 0x2EB1E4u, 0x2EB1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1ECu;
label_2eb1ec:
    // 0x2eb1ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2eb1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb1f0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2eb1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2eb1f4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2eb1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2eb1f8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2eb1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2eb1fc:
    // 0x2eb1fc: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2EB1FCu;
    {
        const bool branch_taken_0x2eb1fc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2EB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1FCu;
        // 0x2eb200: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb1fc) {
            ctx->pc = 0x2EB234u;
            goto label_2eb234;
        }
    }
    ctx->pc = 0x2EB204u;
    // 0x2eb204: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2eb204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2eb208: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB208u;
    {
        const bool branch_taken_0x2eb208 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2EB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB208u;
        // 0x2eb20c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb208) {
            ctx->pc = 0x2EB234u;
            goto label_2eb234;
        }
    }
    ctx->pc = 0x2EB210u;
    // 0x2eb210: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2eb210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2eb214: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x2eb214u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x2eb218: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2eb218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb21c: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x2eb21cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2eb220: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x2eb220u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2eb224: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2eb224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2eb228: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2eb228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2eb22c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2eb22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2eb230: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x2eb230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2eb234:
    // 0x2eb234: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2EB234u;
    {
        const bool branch_taken_0x2eb234 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB234u;
        // 0x2eb238: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb234) {
            ctx->pc = 0x2EB2C4u;
            goto label_2eb2c4;
        }
    }
    ctx->pc = 0x2EB23Cu;
    // 0x2eb23c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2eb23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2eb240: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EB240u;
    {
        const bool branch_taken_0x2eb240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB240u;
        // 0x2eb244: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb240) {
            ctx->pc = 0x2EB2B0u;
            goto label_2eb2b0;
        }
    }
    ctx->pc = 0x2EB248u;
    // 0x2eb248: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EB248u;
    {
        const bool branch_taken_0x2eb248 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2EB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB248u;
        // 0x2eb24c: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb248) {
            ctx->pc = 0x2EB28Cu;
            goto label_2eb28c;
        }
    }
    ctx->pc = 0x2EB250u;
    // 0x2eb250: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2eb250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2eb254: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb258: 0xc0bb9f0  jal         func_2EE7C0
    ctx->pc = 0x2EB258u;
    SET_GPR_U32(ctx, 31, 0x2EB260u);
    ctx->pc = 0x2EB25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB258u;
    // 0x2eb25c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE7C0u, 0x2EB258u, 0x2EB260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB260u;
label_2eb260:
    // 0x2eb260: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb264: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x2eb264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2eb268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb26c: 0xc0bb96c  jal         func_2EE5B0
    ctx->pc = 0x2EB26Cu;
    SET_GPR_U32(ctx, 31, 0x2EB274u);
    ctx->pc = 0x2EB270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB26Cu;
    // 0x2eb270: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5B0u, 0x2EB26Cu, 0x2EB274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB274u;
label_2eb274:
    // 0x2eb274: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb278: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2eb278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2eb27c: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2EB27Cu;
    SET_GPR_U32(ctx, 31, 0x2EB284u);
    ctx->pc = 0x2EB280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB27Cu;
    // 0x2eb280: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2EB27Cu, 0x2EB284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB284u;
label_2eb284:
    // 0x2eb284: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x2eb284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
    // 0x2eb288: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2eb288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2eb28c:
    // 0x2eb28c: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x2eb28cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2eb290: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2EB290u;
    {
        const bool branch_taken_0x2eb290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb290) {
            ctx->pc = 0x2EB294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB290u;
            // 0x2eb294: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB2C4u;
            goto label_2eb2c4;
        }
    }
    ctx->pc = 0x2EB298u;
    // 0x2eb298: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2eb298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2eb29c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2eb29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2a0: 0xc0bb9f0  jal         func_2EE7C0
    ctx->pc = 0x2EB2A0u;
    SET_GPR_U32(ctx, 31, 0x2EB2A8u);
    ctx->pc = 0x2EB2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2A0u;
    // 0x2eb2a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE7C0u, 0x2EB2A0u, 0x2EB2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2A8u;
label_2eb2a8:
    // 0x2eb2a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB2A8u;
    {
        const bool branch_taken_0x2eb2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2A8u;
        // 0x2eb2ac: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2a8) {
            ctx->pc = 0x2EB2C0u;
            goto label_2eb2c0;
        }
    }
    ctx->pc = 0x2EB2B0u;
label_2eb2b0:
    // 0x2eb2b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2b4: 0xc0bb9f0  jal         func_2EE7C0
    ctx->pc = 0x2EB2B4u;
    SET_GPR_U32(ctx, 31, 0x2EB2BCu);
    ctx->pc = 0x2EB2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2B4u;
    // 0x2eb2b8: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE7C0u, 0x2EB2B4u, 0x2EB2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2BCu;
label_2eb2bc:
    // 0x2eb2bc: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2eb2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_2eb2c0:
    // 0x2eb2c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2eb2c4:
    // 0x2eb2c4: 0xc0bb95e  jal         func_2EE578
    ctx->pc = 0x2EB2C4u;
    SET_GPR_U32(ctx, 31, 0x2EB2CCu);
    ctx->pc = 0x2EB2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2C4u;
    // 0x2eb2c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE578u, 0x2EB2C4u, 0x2EB2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2CCu;
label_2eb2cc:
    // 0x2eb2cc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2eb2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2eb2d0: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB2D0u;
    {
        const bool branch_taken_0x2eb2d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2D0u;
        // 0x2eb2d4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2d0) {
            ctx->pc = 0x2EB2ECu;
            goto label_2eb2ec;
        }
    }
    ctx->pc = 0x2EB2D8u;
    // 0x2eb2d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2e0: 0xc0bb9f0  jal         func_2EE7C0
    ctx->pc = 0x2EB2E0u;
    SET_GPR_U32(ctx, 31, 0x2EB2E8u);
    ctx->pc = 0x2EB2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2E0u;
    // 0x2eb2e4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE7C0u, 0x2EB2E0u, 0x2EB2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2E8u;
label_2eb2e8:
    // 0x2eb2e8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2eb2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2eb2ec:
    // 0x2eb2ec: 0x12c00011  beqz        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EB2ECu;
    {
        const bool branch_taken_0x2eb2ec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2ECu;
        // 0x2eb2f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2ec) {
            ctx->pc = 0x2EB334u;
            goto label_2eb334;
        }
    }
    ctx->pc = 0x2EB2F4u;
    // 0x2eb2f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2eb2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eb2f8: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2eb2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2eb2fc: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x2eb2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x2eb300: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EB300u;
    {
        const bool branch_taken_0x2eb300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB300u;
        // 0x2eb304: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb300) {
            ctx->pc = 0x2EB338u;
            goto label_2eb338;
        }
    }
    ctx->pc = 0x2EB308u;
    // 0x2eb308: 0x14103f  dsra32      $v0, $s4, 0
    ctx->pc = 0x2eb308u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x2eb30c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2eb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2eb310: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eb314: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB314u;
    {
        const bool branch_taken_0x2eb314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB314u;
        // 0x2eb318: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb314) {
            ctx->pc = 0x2EB334u;
            goto label_2eb334;
        }
    }
    ctx->pc = 0x2EB31Cu;
    // 0x2eb31c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2eb31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb320: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2eb320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2eb324: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2eb324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2eb328: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2eb328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2eb32c: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2eb32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2eb330: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2eb330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_2eb334:
    // 0x2eb334: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2eb334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_2eb338:
    // 0x2eb338: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB338u;
    {
        const bool branch_taken_0x2eb338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB338u;
        // 0x2eb33c: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb338) {
            ctx->pc = 0x2EB360u;
            goto label_2eb360;
        }
    }
    ctx->pc = 0x2EB340u;
    // 0x2eb340: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2eb340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2eb344: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eb344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eb348: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2eb348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2eb34c: 0xc0bb90e  jal         func_2EE438
    ctx->pc = 0x2EB34Cu;
    SET_GPR_U32(ctx, 31, 0x2EB354u);
    ctx->pc = 0x2EB350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB34Cu;
    // 0x2eb350: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE438u, 0x2EB34Cu, 0x2EB354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB354u;
label_2eb354:
    // 0x2eb354: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2eb354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2eb358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB358u;
    {
        const bool branch_taken_0x2eb358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB358u;
        // 0x2eb35c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb358) {
            ctx->pc = 0x2EB368u;
            goto label_2eb368;
        }
    }
    ctx->pc = 0x2EB360u;
label_2eb360:
    // 0x2eb360: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2eb360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2eb364: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2eb364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2eb368:
    // 0x2eb368: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x2eb368u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2eb36c: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EB36Cu;
    {
        const bool branch_taken_0x2eb36c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB36Cu;
        // 0x2eb370: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb36c) {
            ctx->pc = 0x2EB378u;
            goto label_2eb378;
        }
    }
    ctx->pc = 0x2EB374u;
    // 0x2eb374: 0x539823  subu        $s3, $v0, $s3
    ctx->pc = 0x2eb374u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2eb378:
    // 0x2eb378: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x2eb378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2eb37c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB37Cu;
    {
        const bool branch_taken_0x2eb37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB37Cu;
        // 0x2eb380: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb37c) {
            ctx->pc = 0x2EB3A8u;
            goto label_2eb3a8;
        }
    }
    ctx->pc = 0x2EB384u;
    // 0x2eb384: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2eb384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2eb388: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x2eb388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x2eb38c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2eb38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb390: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x2eb390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2eb394: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2eb394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2eb398: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2eb398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2eb39c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2eb39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2eb3a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EB3A0u;
    {
        const bool branch_taken_0x2eb3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3A0u;
        // 0x2eb3a4: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb3a0) {
            ctx->pc = 0x2EB3D0u;
            goto label_2eb3d0;
        }
    }
    ctx->pc = 0x2EB3A8u;
label_2eb3a8:
    // 0x2eb3a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB3A8u;
    {
        const bool branch_taken_0x2eb3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3A8u;
        // 0x2eb3ac: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb3a8) {
            ctx->pc = 0x2EB3D4u;
            goto label_2eb3d4;
        }
    }
    ctx->pc = 0x2EB3B0u;
    // 0x2eb3b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2eb3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2eb3b4: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x2eb3b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x2eb3b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2eb3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb3bc: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x2eb3bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2eb3c0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2eb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2eb3c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2eb3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2eb3c8: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2eb3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2eb3cc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2eb3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2eb3d0:
    // 0x2eb3d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2eb3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2eb3d4:
    // 0x2eb3d4: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB3D4u;
    {
        const bool branch_taken_0x2eb3d4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2eb3d4) {
            ctx->pc = 0x2EB3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB3D4u;
            // 0x2eb3d8: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB3F4u;
            goto label_2eb3f4;
        }
    }
    ctx->pc = 0x2EB3DCu;
    // 0x2eb3dc: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2eb3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2eb3e0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2eb3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3e4: 0xc0bba30  jal         func_2EE8C0
    ctx->pc = 0x2EB3E4u;
    SET_GPR_U32(ctx, 31, 0x2EB3ECu);
    ctx->pc = 0x2EB3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3E4u;
    // 0x2eb3e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8C0u, 0x2EB3E4u, 0x2EB3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3ECu;
label_2eb3ec:
    // 0x2eb3ec: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2eb3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2eb3f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2eb3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2eb3f4:
    // 0x2eb3f4: 0x18800007  blez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB3F4u;
    {
        const bool branch_taken_0x2eb3f4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2EB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3F4u;
        // 0x2eb3f8: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb3f4) {
            ctx->pc = 0x2EB414u;
            goto label_2eb414;
        }
    }
    ctx->pc = 0x2EB3FCu;
    // 0x2eb3fc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2eb3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb400: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2eb400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb404: 0xc0bba30  jal         func_2EE8C0
    ctx->pc = 0x2EB404u;
    SET_GPR_U32(ctx, 31, 0x2EB40Cu);
    ctx->pc = 0x2EB408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB404u;
    // 0x2eb408: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8C0u, 0x2EB404u, 0x2EB40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB40Cu;
label_2eb40c:
    // 0x2eb40c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2eb40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2eb410: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2eb410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2eb414:
    // 0x2eb414: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EB414u;
    {
        const bool branch_taken_0x2eb414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB414u;
        // 0x2eb418: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb414) {
            ctx->pc = 0x2EB470u;
            goto label_2eb470;
        }
    }
    ctx->pc = 0x2EB41Cu;
    // 0x2eb41c: 0xc0bba86  jal         func_2EEA18
    ctx->pc = 0x2EB41Cu;
    SET_GPR_U32(ctx, 31, 0x2EB424u);
    ctx->pc = 0x2EB420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB41Cu;
    // 0x2eb420: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA18u, 0x2EB41Cu, 0x2EB424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB424u;
label_2eb424:
    // 0x2eb424: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EB424u;
    {
        const bool branch_taken_0x2eb424 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2eb424) {
            ctx->pc = 0x2EB428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB424u;
            // 0x2eb428: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB474u;
            goto label_2eb474;
        }
    }
    ctx->pc = 0x2EB42Cu;
    // 0x2eb42c: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2eb42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2eb430: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb434: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2eb434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2eb438: 0xc0bb880  jal         func_2EE200
    ctx->pc = 0x2EB438u;
    SET_GPR_U32(ctx, 31, 0x2EB440u);
    ctx->pc = 0x2EB43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB438u;
    // 0x2eb43c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE200u, 0x2EB438u, 0x2EB440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB440u;
label_2eb440:
    // 0x2eb440: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x2eb440u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x2eb444: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2eb444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2eb448: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB448u;
    {
        const bool branch_taken_0x2eb448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB448u;
        // 0x2eb44c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb448) {
            ctx->pc = 0x2EB468u;
            goto label_2eb468;
        }
    }
    ctx->pc = 0x2EB450u;
    // 0x2eb450: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2eb450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2eb454: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb458: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2eb458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2eb45c: 0xc0bb880  jal         func_2EE200
    ctx->pc = 0x2EB45Cu;
    SET_GPR_U32(ctx, 31, 0x2EB464u);
    ctx->pc = 0x2EB460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB45Cu;
    // 0x2eb460: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE200u, 0x2EB45Cu, 0x2EB464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB464u;
label_2eb464:
    // 0x2eb464: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2eb464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_2eb468:
    // 0x2eb468: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2eb468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2eb46c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2eb46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2eb470:
    // 0x2eb470: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2eb470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2eb474:
    // 0x2eb474: 0x1c40001c  bgtz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EB474u;
    {
        const bool branch_taken_0x2eb474 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EB478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB474u;
        // 0x2eb478: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb474) {
            ctx->pc = 0x2EB4E8u;
            goto label_2eb4e8;
        }
    }
    ctx->pc = 0x2EB47Cu;
    // 0x2eb47c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2eb47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eb480: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2eb480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2eb484: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EB484u;
    {
        const bool branch_taken_0x2eb484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb484) {
            ctx->pc = 0x2EB4E8u;
            goto label_2eb4e8;
        }
    }
    ctx->pc = 0x2EB48Cu;
    // 0x2eb48c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2eb48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb490: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EB490u;
    {
        const bool branch_taken_0x2eb490 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2EB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB490u;
        // 0x2eb494: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb490) {
            ctx->pc = 0x2EB4C0u;
            goto label_2eb4c0;
        }
    }
    ctx->pc = 0x2EB498u;
    // 0x2eb498: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb49c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2eb49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2eb4a0: 0xc0bb880  jal         func_2EE200
    ctx->pc = 0x2EB4A0u;
    SET_GPR_U32(ctx, 31, 0x2EB4A8u);
    ctx->pc = 0x2EB4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB4A0u;
    // 0x2eb4a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE200u, 0x2EB4A0u, 0x2EB4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB4A8u;
label_2eb4a8:
    // 0x2eb4a8: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2eb4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2eb4ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb4b0: 0xc0bba86  jal         func_2EEA18
    ctx->pc = 0x2EB4B0u;
    SET_GPR_U32(ctx, 31, 0x2EB4B8u);
    ctx->pc = 0x2EB4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB4B0u;
    // 0x2eb4b4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA18u, 0x2EB4B0u, 0x2EB4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB4B8u;
label_2eb4b8:
    // 0x2eb4b8: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB4B8u;
    {
        const bool branch_taken_0x2eb4b8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2eb4b8) {
            ctx->pc = 0x2EB4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB4B8u;
            // 0x2eb4bc: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB4D0u;
            goto label_2eb4d0;
        }
    }
    ctx->pc = 0x2EB4C0u;
label_2eb4c0:
    // 0x2eb4c0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2eb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2eb4c4:
    // 0x2eb4c4: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x2EB4C4u;
    {
        const bool branch_taken_0x2eb4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4C4u;
        // 0x2eb4c8: 0x2f027  nor         $fp, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb4c4) {
            ctx->pc = 0x2EB834u;
            goto label_2eb834;
        }
    }
    ctx->pc = 0x2EB4CCu;
    // 0x2eb4cc: 0x0  nop
    ctx->pc = 0x2eb4ccu;
    // NOP
label_2eb4d0:
    // 0x2eb4d0: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2eb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2eb4d4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2eb4d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2eb4d8: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x2eb4d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2eb4dc: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x2EB4DCu;
    {
        const bool branch_taken_0x2eb4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4DCu;
        // 0x2eb4e0: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb4dc) {
            ctx->pc = 0x2EB834u;
            goto label_2eb834;
        }
    }
    ctx->pc = 0x2EB4E4u;
    // 0x2eb4e4: 0x0  nop
    ctx->pc = 0x2eb4e4u;
    // NOP
label_2eb4e8:
    // 0x2eb4e8: 0x1080009a  beqz        $a0, . + 4 + (0x9A << 2)
    ctx->pc = 0x2EB4E8u;
    {
        const bool branch_taken_0x2eb4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4E8u;
        // 0x2eb4ec: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb4e8) {
            ctx->pc = 0x2EB754u;
            goto label_2eb754;
        }
    }
    ctx->pc = 0x2EB4F0u;
    // 0x2eb4f0: 0x1a200007  blez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB4F0u;
    {
        const bool branch_taken_0x2eb4f0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2EB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4F0u;
        // 0x2eb4f4: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb4f0) {
            ctx->pc = 0x2EB510u;
            goto label_2eb510;
        }
    }
    ctx->pc = 0x2EB4F8u;
    // 0x2eb4f8: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2eb4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2eb4fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2eb4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb500: 0xc0bba30  jal         func_2EE8C0
    ctx->pc = 0x2EB500u;
    SET_GPR_U32(ctx, 31, 0x2EB508u);
    ctx->pc = 0x2EB504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB500u;
    // 0x2eb504: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8C0u, 0x2EB500u, 0x2EB508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB508u;
label_2eb508:
    // 0x2eb508: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2eb508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2eb50c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2eb50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2eb510:
    // 0x2eb510: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EB510u;
    {
        const bool branch_taken_0x2eb510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB510u;
        // 0x2eb514: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb510) {
            ctx->pc = 0x2EB558u;
            goto label_2eb558;
        }
    }
    ctx->pc = 0x2EB518u;
    // 0x2eb518: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2eb518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2eb51c: 0xc0bb84a  jal         func_2EE128
    ctx->pc = 0x2EB51Cu;
    SET_GPR_U32(ctx, 31, 0x2EB524u);
    ctx->pc = 0x2EB520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB51Cu;
    // 0x2eb520: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE128u, 0x2EB51Cu, 0x2EB524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB524u;
label_2eb524:
    // 0x2eb524: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2eb524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2eb528: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2eb528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2eb52c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2eb52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2eb530: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x2eb530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2eb534: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x2eb534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2eb538: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2eb538u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2eb53c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x2EB53Cu;
    SET_GPR_U32(ctx, 31, 0x2EB544u);
    ctx->pc = 0x2EB540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB53Cu;
    // 0x2eb540: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x2EB53Cu, 0x2EB544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB544u;
label_2eb544:
    // 0x2eb544: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb548: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2eb548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2eb54c: 0xc0bba30  jal         func_2EE8C0
    ctx->pc = 0x2EB54Cu;
    SET_GPR_U32(ctx, 31, 0x2EB554u);
    ctx->pc = 0x2EB550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB54Cu;
    // 0x2eb550: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8C0u, 0x2EB54Cu, 0x2EB554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB554u;
label_2eb554:
    // 0x2eb554: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2eb554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_2eb558:
    // 0x2eb558: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x2eb558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2eb55c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2eb55cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2eb560: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2eb560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb564: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2EB564u;
    {
        const bool branch_taken_0x2eb564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB564u;
        // 0x2eb568: 0x30560001  andi        $s6, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb564) {
            ctx->pc = 0x2EB5E8u;
            goto label_2eb5e8;
        }
    }
    ctx->pc = 0x2EB56Cu;
    // 0x2eb56c: 0x0  nop
    ctx->pc = 0x2eb56cu;
    // NOP
label_2eb570:
    // 0x2eb570: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2eb570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2eb574: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb578: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2eb578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2eb57c: 0xc0bb880  jal         func_2EE200
    ctx->pc = 0x2EB57Cu;
    SET_GPR_U32(ctx, 31, 0x2EB584u);
    ctx->pc = 0x2EB580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB57Cu;
    // 0x2eb580: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE200u, 0x2EB57Cu, 0x2EB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB584u;
label_2eb584:
    // 0x2eb584: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2eb584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2eb588: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2eb588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2eb58c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2eb58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2eb590: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB590u;
    {
        const bool branch_taken_0x2eb590 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB590u;
        // 0x2eb594: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb590) {
            ctx->pc = 0x2EB5B8u;
            goto label_2eb5b8;
        }
    }
    ctx->pc = 0x2EB598u;
    // 0x2eb598: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb59c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5a0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2eb5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2eb5a4: 0xc0bb880  jal         func_2EE200
    ctx->pc = 0x2EB5A4u;
    SET_GPR_U32(ctx, 31, 0x2EB5ACu);
    ctx->pc = 0x2EB5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5A4u;
    // 0x2eb5a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE200u, 0x2EB5A4u, 0x2EB5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5ACu;
label_2eb5ac:
    // 0x2eb5ac: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2eb5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2eb5b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2EB5B0u;
    {
        const bool branch_taken_0x2eb5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5B0u;
        // 0x2eb5b4: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb5b0) {
            ctx->pc = 0x2EB5E4u;
            goto label_2eb5e4;
        }
    }
    ctx->pc = 0x2EB5B8u;
label_2eb5b8:
    // 0x2eb5b8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2eb5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2eb5bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5c0: 0xc0bb880  jal         func_2EE200
    ctx->pc = 0x2EB5C0u;
    SET_GPR_U32(ctx, 31, 0x2EB5C8u);
    ctx->pc = 0x2EB5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5C0u;
    // 0x2eb5c4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE200u, 0x2EB5C0u, 0x2EB5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5C8u;
label_2eb5c8:
    // 0x2eb5c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5cc: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2eb5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2eb5d0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2eb5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2eb5d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb5d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5d8: 0xc0bb880  jal         func_2EE200
    ctx->pc = 0x2EB5D8u;
    SET_GPR_U32(ctx, 31, 0x2EB5E0u);
    ctx->pc = 0x2EB5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5D8u;
    // 0x2eb5dc: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE200u, 0x2EB5D8u, 0x2EB5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5E0u;
label_2eb5e0:
    // 0x2eb5e0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2eb5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_2eb5e4:
    // 0x2eb5e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2eb5e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2eb5e8:
    // 0x2eb5e8: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2eb5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2eb5ec: 0xc0ba90e  jal         func_2EA438
    ctx->pc = 0x2EB5ECu;
    SET_GPR_U32(ctx, 31, 0x2EB5F4u);
    ctx->pc = 0x2EB5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5ECu;
    // 0x2eb5f0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA438u, 0x2EB5ECu, 0x2EB5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5F4u;
label_2eb5f4:
    // 0x2eb5f4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2eb5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2eb5f8: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x2eb5f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2eb5fc: 0xc0bba86  jal         func_2EEA18
    ctx->pc = 0x2EB5FCu;
    SET_GPR_U32(ctx, 31, 0x2EB604u);
    ctx->pc = 0x2EB600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5FCu;
    // 0x2eb600: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA18u, 0x2EB5FCu, 0x2EB604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB604u;
label_2eb604:
    // 0x2eb604: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb608: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2eb608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb60c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb610: 0xc0bbaa0  jal         func_2EEA80
    ctx->pc = 0x2EB610u;
    SET_GPR_U32(ctx, 31, 0x2EB618u);
    ctx->pc = 0x2EB614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB610u;
    // 0x2eb614: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA80u, 0x2EB610u, 0x2EB618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB618u;
label_2eb618:
    // 0x2eb618: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2eb618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb61c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2eb61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2eb620: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB620u;
    {
        const bool branch_taken_0x2eb620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB620u;
        // 0x2eb624: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb620) {
            ctx->pc = 0x2EB638u;
            goto label_2eb638;
        }
    }
    ctx->pc = 0x2EB628u;
    // 0x2eb628: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2eb628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2eb62c: 0xc0bba86  jal         func_2EEA18
    ctx->pc = 0x2EB62Cu;
    SET_GPR_U32(ctx, 31, 0x2EB634u);
    ctx->pc = 0x2EB630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB62Cu;
    // 0x2eb630: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA18u, 0x2EB62Cu, 0x2EB634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB634u;
label_2eb634:
    // 0x2eb634: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2eb634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb638:
    // 0x2eb638: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eb638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb63c: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2EB63Cu;
    SET_GPR_U32(ctx, 31, 0x2EB644u);
    ctx->pc = 0x2EB640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB63Cu;
    // 0x2eb640: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2EB63Cu, 0x2EB644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB644u;
label_2eb644:
    // 0x2eb644: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB644u;
    {
        const bool branch_taken_0x2eb644 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB644u;
        // 0x2eb648: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb644) {
            ctx->pc = 0x2EB670u;
            goto label_2eb670;
        }
    }
    ctx->pc = 0x2EB64Cu;
    // 0x2eb64c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EB64Cu;
    {
        const bool branch_taken_0x2eb64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb64c) {
            ctx->pc = 0x2EB670u;
            goto label_2eb670;
        }
    }
    ctx->pc = 0x2EB654u;
    // 0x2eb654: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB654u;
    {
        const bool branch_taken_0x2eb654 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB654u;
        // 0x2eb658: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb654) {
            ctx->pc = 0x2EB670u;
            goto label_2eb670;
        }
    }
    ctx->pc = 0x2EB65Cu;
    // 0x2eb65c: 0x12840029  beq         $s4, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2EB65Cu;
    {
        const bool branch_taken_0x2eb65c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB65Cu;
        // 0x2eb660: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb65c) {
            ctx->pc = 0x2EB704u;
            goto label_2eb704;
        }
    }
    ctx->pc = 0x2EB664u;
    // 0x2eb664: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2eb664u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2eb668: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2EB668u;
    {
        const bool branch_taken_0x2eb668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB668u;
        // 0x2eb66c: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb668) {
            ctx->pc = 0x2EB830u;
            goto label_2eb830;
        }
    }
    ctx->pc = 0x2EB670u;
label_2eb670:
    // 0x2eb670: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB670u;
    {
        const bool branch_taken_0x2eb670 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2eb670) {
            ctx->pc = 0x2EB690u;
            goto label_2eb690;
        }
    }
    ctx->pc = 0x2EB678u;
    // 0x2eb678: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2EB678u;
    {
        const bool branch_taken_0x2eb678 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB678u;
        // 0x2eb67c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb678) {
            ctx->pc = 0x2EB6F0u;
            goto label_2eb6f0;
        }
    }
    ctx->pc = 0x2EB680u;
    // 0x2eb680: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EB680u;
    {
        const bool branch_taken_0x2eb680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb680) {
            ctx->pc = 0x2EB6F0u;
            goto label_2eb6f0;
        }
    }
    ctx->pc = 0x2EB688u;
    // 0x2eb688: 0x16c00019  bnez        $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EB688u;
    {
        const bool branch_taken_0x2eb688 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb688) {
            ctx->pc = 0x2EB6F0u;
            goto label_2eb6f0;
        }
    }
    ctx->pc = 0x2EB690u;
label_2eb690:
    // 0x2eb690: 0x5a200067  blezl       $s1, . + 4 + (0x67 << 2)
    ctx->pc = 0x2EB690u;
    {
        const bool branch_taken_0x2eb690 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2eb690) {
            ctx->pc = 0x2EB694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB690u;
            // 0x2eb694: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB830u;
            goto label_2eb830;
        }
    }
    ctx->pc = 0x2EB698u;
    // 0x2eb698: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2eb698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2eb69c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2eb69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb6a0: 0xc0bba30  jal         func_2EE8C0
    ctx->pc = 0x2EB6A0u;
    SET_GPR_U32(ctx, 31, 0x2EB6A8u);
    ctx->pc = 0x2EB6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB6A0u;
    // 0x2eb6a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8C0u, 0x2EB6A0u, 0x2EB6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB6A8u;
label_2eb6a8:
    // 0x2eb6a8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2eb6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb6ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eb6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb6b0: 0xc0bba86  jal         func_2EEA18
    ctx->pc = 0x2EB6B0u;
    SET_GPR_U32(ctx, 31, 0x2EB6B8u);
    ctx->pc = 0x2EB6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB6B0u;
    // 0x2eb6b4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA18u, 0x2EB6B0u, 0x2EB6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB6B8u;
label_2eb6b8:
    // 0x2eb6b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2eb6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb6bc: 0x5e200007  bgtzl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB6BCu;
    {
        const bool branch_taken_0x2eb6bc = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x2eb6bc) {
            ctx->pc = 0x2EB6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB6BCu;
            // 0x2eb6c0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB6DCu;
            goto label_2eb6dc;
        }
    }
    ctx->pc = 0x2EB6C4u;
    // 0x2eb6c4: 0x5620005a  bnel        $s1, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x2EB6C4u;
    {
        const bool branch_taken_0x2eb6c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb6c4) {
            ctx->pc = 0x2EB6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB6C4u;
            // 0x2eb6c8: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB830u;
            goto label_2eb830;
        }
    }
    ctx->pc = 0x2EB6CCu;
    // 0x2eb6cc: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x2eb6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2eb6d0: 0x50400057  beql        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x2EB6D0u;
    {
        const bool branch_taken_0x2eb6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb6d0) {
            ctx->pc = 0x2EB6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB6D0u;
            // 0x2eb6d4: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB830u;
            goto label_2eb830;
        }
    }
    ctx->pc = 0x2EB6D8u;
    // 0x2eb6d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2eb6d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2eb6dc:
    // 0x2eb6dc: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x2eb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2eb6e0: 0x52820009  beql        $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB6E0u;
    {
        const bool branch_taken_0x2eb6e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb6e0) {
            ctx->pc = 0x2EB6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB6E0u;
            // 0x2eb6e4: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB708u;
            goto label_2eb708;
        }
    }
    ctx->pc = 0x2EB6E8u;
    // 0x2eb6e8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2EB6E8u;
    {
        const bool branch_taken_0x2eb6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6E8u;
        // 0x2eb6ec: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6e8) {
            ctx->pc = 0x2EB830u;
            goto label_2eb830;
        }
    }
    ctx->pc = 0x2EB6F0u;
label_2eb6f0:
    // 0x2eb6f0: 0x5a20000b  blezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2EB6F0u;
    {
        const bool branch_taken_0x2eb6f0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2eb6f0) {
            ctx->pc = 0x2EB6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB6F0u;
            // 0x2eb6f4: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB720u;
            goto label_2eb720;
        }
    }
    ctx->pc = 0x2EB6F8u;
    // 0x2eb6f8: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x2eb6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2eb6fc: 0x16830006  bne         $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB6FCu;
    {
        const bool branch_taken_0x2eb6fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EB700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6FCu;
        // 0x2eb700: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6fc) {
            ctx->pc = 0x2EB718u;
            goto label_2eb718;
        }
    }
    ctx->pc = 0x2EB704u;
label_2eb704:
    // 0x2eb704: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x2eb704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_2eb708:
    // 0x2eb708: 0xa2a40000  sb          $a0, 0x0($s5)
    ctx->pc = 0x2eb708u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2eb70c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2EB70Cu;
    {
        const bool branch_taken_0x2eb70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB70Cu;
        // 0x2eb710: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb70c) {
            ctx->pc = 0x2EB7B8u;
            goto label_2eb7b8;
        }
    }
    ctx->pc = 0x2EB714u;
    // 0x2eb714: 0x0  nop
    ctx->pc = 0x2eb714u;
    // NOP
label_2eb718:
    // 0x2eb718: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2EB718u;
    {
        const bool branch_taken_0x2eb718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB718u;
        // 0x2eb71c: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb718) {
            ctx->pc = 0x2EB830u;
            goto label_2eb830;
        }
    }
    ctx->pc = 0x2EB720u;
label_2eb720:
    // 0x2eb720: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2eb720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb724: 0x1662ff92  bne         $s3, $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x2EB724u;
    {
        const bool branch_taken_0x2eb724 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB724u;
        // 0x2eb728: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb724) {
            ctx->pc = 0x2EB570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb570;
        }
    }
    ctx->pc = 0x2EB72Cu;
    // 0x2eb72c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2EB72Cu;
    {
        const bool branch_taken_0x2eb72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB72Cu;
        // 0x2eb730: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb72c) {
            ctx->pc = 0x2EB77Cu;
            goto label_2eb77c;
        }
    }
    ctx->pc = 0x2EB734u;
    // 0x2eb734: 0x0  nop
    ctx->pc = 0x2eb734u;
    // NOP
label_2eb738:
    // 0x2eb738: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2eb738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2eb73c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2eb73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb740: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2eb740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2eb744: 0xc0bb880  jal         func_2EE200
    ctx->pc = 0x2EB744u;
    SET_GPR_U32(ctx, 31, 0x2EB74Cu);
    ctx->pc = 0x2EB748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB744u;
    // 0x2eb748: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE200u, 0x2EB744u, 0x2EB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB74Cu;
label_2eb74c:
    // 0x2eb74c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2eb74cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2eb750: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2eb750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_2eb754:
    // 0x2eb754: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2eb754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2eb758: 0xc0ba90e  jal         func_2EA438
    ctx->pc = 0x2EB758u;
    SET_GPR_U32(ctx, 31, 0x2EB760u);
    ctx->pc = 0x2EB75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB758u;
    // 0x2eb75c: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA438u, 0x2EB758u, 0x2EB760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB760u;
label_2eb760:
    // 0x2eb760: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2eb760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb764: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x2eb764u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2eb768: 0xa2b40000  sb          $s4, 0x0($s5)
    ctx->pc = 0x2eb768u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x2eb76c: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x2eb76cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2eb770: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2EB770u;
    {
        const bool branch_taken_0x2eb770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB770u;
        // 0x2eb774: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb770) {
            ctx->pc = 0x2EB738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb738;
        }
    }
    ctx->pc = 0x2EB778u;
    // 0x2eb778: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2eb778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2eb77c:
    // 0x2eb77c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2eb77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb780: 0xc0bba30  jal         func_2EE8C0
    ctx->pc = 0x2EB780u;
    SET_GPR_U32(ctx, 31, 0x2EB788u);
    ctx->pc = 0x2EB784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB780u;
    // 0x2eb784: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8C0u, 0x2EB780u, 0x2EB788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB788u;
label_2eb788:
    // 0x2eb788: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2eb788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb78c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eb78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb790: 0xc0bba86  jal         func_2EEA18
    ctx->pc = 0x2EB790u;
    SET_GPR_U32(ctx, 31, 0x2EB798u);
    ctx->pc = 0x2EB794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB790u;
    // 0x2eb794: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA18u, 0x2EB790u, 0x2EB798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB798u;
label_2eb798:
    // 0x2eb798: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb79c: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB79Cu;
    {
        const bool branch_taken_0x2eb79c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2eb79c) {
            ctx->pc = 0x2EB7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB79Cu;
            // 0x2eb7a0: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB7BCu;
            goto label_2eb7bc;
        }
    }
    ctx->pc = 0x2EB7A4u;
    // 0x2eb7a4: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EB7A4u;
    {
        const bool branch_taken_0x2eb7a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7A4u;
        // 0x2eb7a8: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7a4) {
            ctx->pc = 0x2EB810u;
            goto label_2eb810;
        }
    }
    ctx->pc = 0x2EB7ACu;
    // 0x2eb7ac: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x2eb7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2eb7b0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EB7B0u;
    {
        const bool branch_taken_0x2eb7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb7b0) {
            ctx->pc = 0x2EB7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB7B0u;
            // 0x2eb7b4: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB814u;
            goto label_2eb814;
        }
    }
    ctx->pc = 0x2EB7B8u;
label_2eb7b8:
    // 0x2eb7b8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2eb7b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2eb7bc:
    // 0x2eb7bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB7BCu;
    {
        const bool branch_taken_0x2eb7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7BCu;
        // 0x2eb7c0: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7bc) {
            ctx->pc = 0x2EB7D8u;
            goto label_2eb7d8;
        }
    }
    ctx->pc = 0x2EB7C4u;
    // 0x2eb7c4: 0x0  nop
    ctx->pc = 0x2eb7c4u;
    // NOP
label_2eb7c8:
    // 0x2eb7c8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2eb7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2eb7cc: 0x52a2000a  beql        $s5, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB7CCu;
    {
        const bool branch_taken_0x2eb7cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb7cc) {
            ctx->pc = 0x2EB7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB7CCu;
            // 0x2eb7d0: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB7F8u;
            goto label_2eb7f8;
        }
    }
    ctx->pc = 0x2EB7D4u;
    // 0x2eb7d4: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2eb7d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2eb7d8:
    // 0x2eb7d8: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2eb7d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2eb7dc: 0x0  nop
    ctx->pc = 0x2eb7dcu;
    // NOP
    // 0x2eb7e0: 0x0  nop
    ctx->pc = 0x2eb7e0u;
    // NOP
    // 0x2eb7e4: 0x1043fff8  beq         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EB7E4u;
    {
        const bool branch_taken_0x2eb7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7E4u;
        // 0x2eb7e8: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7e4) {
            ctx->pc = 0x2EB7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb7c8;
        }
    }
    ctx->pc = 0x2EB7ECu;
    // 0x2eb7ec: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2eb7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2eb7f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EB7F0u;
    {
        const bool branch_taken_0x2eb7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7F0u;
        // 0x2eb7f4: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7f0) {
            ctx->pc = 0x2EB830u;
            goto label_2eb830;
        }
    }
    ctx->pc = 0x2EB7F8u;
label_2eb7f8:
    // 0x2eb7f8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2eb7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2eb7fc: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2eb7fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2eb800: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2eb800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2eb804: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EB804u;
    {
        const bool branch_taken_0x2eb804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB804u;
        // 0x2eb808: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb804) {
            ctx->pc = 0x2EB834u;
            goto label_2eb834;
        }
    }
    ctx->pc = 0x2EB80Cu;
    // 0x2eb80c: 0x0  nop
    ctx->pc = 0x2eb80cu;
    // NOP
label_2eb810:
    // 0x2eb810: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2eb810u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2eb814:
    // 0x2eb814: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2eb814u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2eb818: 0x0  nop
    ctx->pc = 0x2eb818u;
    // NOP
    // 0x2eb81c: 0x0  nop
    ctx->pc = 0x2eb81cu;
    // NOP
    // 0x2eb820: 0x0  nop
    ctx->pc = 0x2eb820u;
    // NOP
    // 0x2eb824: 0x0  nop
    ctx->pc = 0x2eb824u;
    // NOP
    // 0x2eb828: 0x5043fffa  beql        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EB828u;
    {
        const bool branch_taken_0x2eb828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb828) {
            ctx->pc = 0x2EB82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB828u;
            // 0x2eb82c: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb814;
        }
    }
    ctx->pc = 0x2EB830u;
label_2eb830:
    // 0x2eb830: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2eb830u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2eb834:
    // 0x2eb834: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2eb834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb838: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2EB838u;
    SET_GPR_U32(ctx, 31, 0x2EB840u);
    ctx->pc = 0x2EB83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB838u;
    // 0x2eb83c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2EB838u, 0x2EB840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB840u;
label_2eb840:
    // 0x2eb840: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x2eb840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2eb844: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB844u;
    {
        const bool branch_taken_0x2eb844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB844u;
        // 0x2eb848: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb844) {
            ctx->pc = 0x2EB870u;
            goto label_2eb870;
        }
    }
    ctx->pc = 0x2EB84Cu;
    // 0x2eb84c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB84Cu;
    {
        const bool branch_taken_0x2eb84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB84Cu;
        // 0x2eb850: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb84c) {
            ctx->pc = 0x2EB868u;
            goto label_2eb868;
        }
    }
    ctx->pc = 0x2EB854u;
    // 0x2eb854: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB854u;
    {
        const bool branch_taken_0x2eb854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB854u;
        // 0x2eb858: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb854) {
            ctx->pc = 0x2EB864u;
            goto label_2eb864;
        }
    }
    ctx->pc = 0x2EB85Cu;
    // 0x2eb85c: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2EB85Cu;
    SET_GPR_U32(ctx, 31, 0x2EB864u);
    ctx->pc = 0x2EB860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB85Cu;
    // 0x2eb860: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2EB85Cu, 0x2EB864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB864u;
label_2eb864:
    // 0x2eb864: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2eb864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2eb868:
    // 0x2eb868: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2EB868u;
    SET_GPR_U32(ctx, 31, 0x2EB870u);
    ctx->pc = 0x2EB86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB868u;
    // 0x2eb86c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2EB868u, 0x2EB870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB870u;
label_2eb870:
    // 0x2eb870: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2eb870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2eb874:
    // 0x2eb874: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2EB874u;
    SET_GPR_U32(ctx, 31, 0x2EB87Cu);
    ctx->pc = 0x2EB878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB874u;
    // 0x2eb878: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2EB874u, 0x2EB87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB87Cu;
label_2eb87c:
    // 0x2eb87c: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x2eb87cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eb880: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x2eb880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2eb884: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2eb884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb888: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2eb888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2eb88c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2eb88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2eb890: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EB890u;
    {
        const bool branch_taken_0x2eb890 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb890) {
            ctx->pc = 0x2EB894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB890u;
            // 0x2eb894: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB898u;
            goto label_2eb898;
        }
    }
    ctx->pc = 0x2EB898u;
label_2eb898:
    // 0x2eb898: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2eb898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2eb89c:
    // 0x2eb89c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2eb89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eb8a0: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2eb8a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2eb8a4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2eb8a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2eb8a8: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2eb8a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2eb8ac: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2eb8acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2eb8b0: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2eb8b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2eb8b4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2eb8b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2eb8b8: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x2eb8b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2eb8bc: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2eb8bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2eb8c0: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2eb8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2eb8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8C4u;
        // 0x2eb8c8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB8CCu;
    // 0x2eb8cc: 0x0  nop
    ctx->pc = 0x2eb8ccu;
    // NOP
    ctx->pc = 0x2eb8d0u;
}
