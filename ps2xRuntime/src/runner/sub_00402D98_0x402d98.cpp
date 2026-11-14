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

// Function: sub_00402D98
// Address: 0x402d98 - 0x403410
void sub_00402D98_0x402d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00402D98_0x402d98");
#endif

    switch (ctx->pc) {
        case 0x402df8u: goto label_402df8;
        case 0x402e14u: goto label_402e14;
        case 0x402e2cu: goto label_402e2c;
        case 0x402e5cu: goto label_402e5c;
        case 0x402ed8u: goto label_402ed8;
        case 0x402f04u: goto label_402f04;
        case 0x402f38u: goto label_402f38;
        case 0x402f78u: goto label_402f78;
        case 0x402f8cu: goto label_402f8c;
        case 0x402fb8u: goto label_402fb8;
        case 0x402fe0u: goto label_402fe0;
        case 0x40300cu: goto label_40300c;
        case 0x40308cu: goto label_40308c;
        case 0x40309cu: goto label_40309c;
        case 0x4030a4u: goto label_4030a4;
        case 0x4030b4u: goto label_4030b4;
        case 0x4030d4u: goto label_4030d4;
        case 0x4030e4u: goto label_4030e4;
        case 0x40317cu: goto label_40317c;
        case 0x40318cu: goto label_40318c;
        case 0x4031acu: goto label_4031ac;
        case 0x4031bcu: goto label_4031bc;
        case 0x4031c8u: goto label_4031c8;
        case 0x403220u: goto label_403220;
        case 0x403230u: goto label_403230;
        case 0x40325cu: goto label_40325c;
        case 0x40326cu: goto label_40326c;
        case 0x403298u: goto label_403298;
        case 0x4032a8u: goto label_4032a8;
        case 0x4032b8u: goto label_4032b8;
        case 0x4032d8u: goto label_4032d8;
        case 0x4032e8u: goto label_4032e8;
        case 0x403308u: goto label_403308;
        case 0x403318u: goto label_403318;
        case 0x403338u: goto label_403338;
        case 0x403348u: goto label_403348;
        case 0x403368u: goto label_403368;
        case 0x403378u: goto label_403378;
        case 0x403394u: goto label_403394;
        case 0x4033e0u: goto label_4033e0;
        default: break;
    }

    ctx->pc = 0x402d98u;

    // 0x402d98: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x402d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x402d9c: 0xafa80034  sw          $t0, 0x34($sp)
    ctx->pc = 0x402d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    // 0x402da0: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x402da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x402da4: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x402da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x402da8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x402da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402dac: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x402dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x402db0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x402db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402db4: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x402db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x402db8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x402db8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402dbc: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x402dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x402dc0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x402dc0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402dc4: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x402dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x402dc8: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x402dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x402dcc: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x402dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x402dd0: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x402dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x402dd4: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x402dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x402dd8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x402dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x402ddc: 0xafa90038  sw          $t1, 0x38($sp)
    ctx->pc = 0x402ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 9));
    // 0x402de0: 0xafaa003c  sw          $t2, 0x3C($sp)
    ctx->pc = 0x402de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 10));
    // 0x402de4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x402DE4u;
    {
        const bool branch_taken_0x402de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x402DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402DE4u;
        // 0x402de8: 0xafab0040  sw          $t3, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402de4) {
            ctx->pc = 0x402DF8u;
            goto label_402df8;
        }
    }
    ctx->pc = 0x402DECu;
    // 0x402dec: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x402decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x402df0: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x402DF0u;
    SET_GPR_U32(ctx, 31, 0x402DF8u);
    ctx->pc = 0x402DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402DF0u;
    // 0x402df4: 0x24a50468  addiu       $a1, $a1, 0x468 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x402DF0u, 0x402DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402DF8u;
label_402df8:
    // 0x402df8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x402df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x402dfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x402dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402e00: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x402e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x402e04: 0xffa20050  sd          $v0, 0x50($sp)
    ctx->pc = 0x402e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
    // 0x402e08: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x402e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402e0c: 0xc100970  jal         func_4025C0
    ctx->pc = 0x402E0Cu;
    SET_GPR_U32(ctx, 31, 0x402E14u);
    ctx->pc = 0x402E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402E0Cu;
    // 0x402e10: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4025C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4025C0u, 0x402E0Cu, 0x402E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402E14u;
label_402e14:
    // 0x402e14: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x402e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x402e18: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x402e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x402e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x402e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x402e20: 0xffa30058  sd          $v1, 0x58($sp)
    ctx->pc = 0x402e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 3));
    // 0x402e24: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x402E24u;
    SET_GPR_U32(ctx, 31, 0x402E2Cu);
    ctx->pc = 0x402E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402E24u;
    // 0x402e28: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x402E24u, 0x402E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402E2Cu;
label_402e2c:
    // 0x402e2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x402e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x402e30: 0x4182b  sltu        $v1, $zero, $a0
    ctx->pc = 0x402e30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x402e34: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x402e34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x402e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x402e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x402e3c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x402e3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x402e40: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x402e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x402e44: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x402e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402e48: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x402e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x402e4c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x402e4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x402e50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x402e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x402e54: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x402E54u;
    SET_GPR_U32(ctx, 31, 0x402E5Cu);
    ctx->pc = 0x402E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402E54u;
    // 0x402e58: 0x2454000a  addiu       $s4, $v0, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x402E54u, 0x402E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402E5Cu;
label_402e5c:
    // 0x402e5c: 0x10263b  dsra        $a0, $s0, 24
    ctx->pc = 0x402e5cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> 24);
    // 0x402e60: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x402e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x402e64: 0x10143b  dsra        $v0, $s0, 16
    ctx->pc = 0x402e64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 16) >> 16);
    // 0x402e68: 0xffa40080  sd          $a0, 0x80($sp)
    ctx->pc = 0x402e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 4));
    // 0x402e6c: 0x111e3b  dsra        $v1, $s1, 24
    ctx->pc = 0x402e6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 17) >> 24);
    // 0x402e70: 0x11243b  dsra        $a0, $s1, 16
    ctx->pc = 0x402e70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> 16);
    // 0x402e74: 0xffa20070  sd          $v0, 0x70($sp)
    ctx->pc = 0x402e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x402e78: 0x10823b  dsra        $s0, $s0, 8
    ctx->pc = 0x402e78u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> 8);
    // 0x402e7c: 0x118a3b  dsra        $s1, $s1, 8
    ctx->pc = 0x402e7cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> 8);
    // 0x402e80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x402e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x402e84: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x402e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x402e88: 0xffa30088  sd          $v1, 0x88($sp)
    ctx->pc = 0x402e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 3));
    // 0x402e8c: 0xffa40078  sd          $a0, 0x78($sp)
    ctx->pc = 0x402e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 4));
    // 0x402e90: 0x1840006a  blez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x402E90u;
    {
        const bool branch_taken_0x402e90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x402E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402E90u;
        // 0x402e94: 0xffb10068  sd          $s1, 0x68($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402e90) {
            ctx->pc = 0x40303Cu;
            goto label_40303c;
        }
    }
    ctx->pc = 0x402E98u;
    // 0x402e98: 0x245effff  addiu       $fp, $v0, -0x1
    ctx->pc = 0x402e98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x402e9c: 0x8fb0004c  lw          $s0, 0x4C($sp)
    ctx->pc = 0x402e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x402ea0: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x402ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x402ea4: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x402EA4u;
    {
        const bool branch_taken_0x402ea4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x402EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402EA4u;
        // 0x402ea8: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x402ea4) {
            ctx->pc = 0x402F2Cu;
            goto label_402f2c;
        }
    }
    ctx->pc = 0x402EACu;
    // 0x402eac: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x402EACu;
    {
        const bool branch_taken_0x402eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x402EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402EACu;
        // 0x402eb0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x402eac) {
            ctx->pc = 0x402F6Cu;
            goto label_402f6c;
        }
    }
    ctx->pc = 0x402EB4u;
    // 0x402eb4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x402EB4u;
    {
        const bool branch_taken_0x402eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x402EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402EB4u;
        // 0x402eb8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402eb4) {
            ctx->pc = 0x402F30u;
            goto label_402f30;
        }
    }
    ctx->pc = 0x402EBCu;
    // 0x402ebc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x402ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x402ec0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x402EC0u;
    {
        const bool branch_taken_0x402ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x402ec0) {
            ctx->pc = 0x402EFCu;
            goto label_402efc;
        }
    }
    ctx->pc = 0x402EC8u;
    // 0x402ec8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x402ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x402ecc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x402eccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x402ed0: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x402ED0u;
    SET_GPR_U32(ctx, 31, 0x402ED8u);
    ctx->pc = 0x402ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402ED0u;
    // 0x402ed4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x402ED0u, 0x402ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402ED8u;
label_402ed8:
    // 0x402ed8: 0x1e182b  sltu        $v1, $zero, $fp
    ctx->pc = 0x402ed8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x402edc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x402edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x402ee0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x402ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x402ee4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x402ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x402ee8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x402ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x402eec: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x402eecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x402ef0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x402ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x402ef4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x402ef4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x402ef8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x402ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_402efc:
    // 0x402efc: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x402EFCu;
    SET_GPR_U32(ctx, 31, 0x402F04u);
    ctx->pc = 0x402F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402EFCu;
    // 0x402f00: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x402EFCu, 0x402F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402F04u;
label_402f04:
    // 0x402f04: 0x2be1826  xor         $v1, $s5, $fp
    ctx->pc = 0x402f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 30));
    // 0x402f08: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x402f08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x402f0c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x402f0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x402f10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x402f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x402f14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x402f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x402f18: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x402f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x402f1c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x402f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x402f20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x402f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x402f24: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x402f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x402f28: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x402f28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_402f2c:
    // 0x402f2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x402f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_402f30:
    // 0x402f30: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x402F30u;
    SET_GPR_U32(ctx, 31, 0x402F38u);
    ctx->pc = 0x402F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402F30u;
    // 0x402f34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x402F30u, 0x402F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402F38u;
label_402f38:
    // 0x402f38: 0x2be1826  xor         $v1, $s5, $fp
    ctx->pc = 0x402f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 30));
    // 0x402f3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x402f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x402f40: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x402f40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x402f44: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x402f44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x402f48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x402f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x402f4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x402f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x402f50: 0x2a4182a  slt         $v1, $s5, $a0
    ctx->pc = 0x402f50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x402f54: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x402f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x402f58: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x402f58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x402f5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x402f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x402f60: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x402f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x402f64: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x402F64u;
    {
        const bool branch_taken_0x402f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x402F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402F64u;
        // 0x402f68: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402f64) {
            ctx->pc = 0x40303Cu;
            goto label_40303c;
        }
    }
    ctx->pc = 0x402F6Cu;
label_402f6c:
    // 0x402f6c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x402f6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402f70: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x402f70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402f74: 0x0  nop
    ctx->pc = 0x402f74u;
    // NOP
label_402f78:
    // 0x402f78: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x402f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x402f7c: 0x26b00001  addiu       $s0, $s5, 0x1
    ctx->pc = 0x402f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x402f80: 0x26b10002  addiu       $s1, $s5, 0x2
    ctx->pc = 0x402f80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x402f84: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x402F84u;
    SET_GPR_U32(ctx, 31, 0x402F8Cu);
    ctx->pc = 0x402F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402F84u;
    // 0x402f88: 0x26b20003  addiu       $s2, $s5, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x402F84u, 0x402F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402F8Cu;
label_402f8c:
    // 0x402f8c: 0x2be1826  xor         $v1, $s5, $fp
    ctx->pc = 0x402f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 30));
    // 0x402f90: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x402f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x402f94: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x402f94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x402f98: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x402f98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x402f9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x402f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x402fa0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x402fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x402fa4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x402fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x402fa8: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x402fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x402fac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x402facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x402fb0: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x402FB0u;
    SET_GPR_U32(ctx, 31, 0x402FB8u);
    ctx->pc = 0x402FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402FB0u;
    // 0x402fb4: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x402FB0u, 0x402FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402FB8u;
label_402fb8:
    // 0x402fb8: 0x21e8026  xor         $s0, $s0, $fp
    ctx->pc = 0x402fb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 30));
    // 0x402fbc: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x402fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x402fc0: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x402fc0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x402fc4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x402fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x402fc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x402fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x402fcc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x402fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x402fd0: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x402fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x402fd4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x402fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x402fd8: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x402FD8u;
    SET_GPR_U32(ctx, 31, 0x402FE0u);
    ctx->pc = 0x402FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402FD8u;
    // 0x402fdc: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x402FD8u, 0x402FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402FE0u;
label_402fe0:
    // 0x402fe0: 0x23e8826  xor         $s1, $s1, $fp
    ctx->pc = 0x402fe0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 30));
    // 0x402fe4: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x402fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x402fe8: 0x11882b  sltu        $s1, $zero, $s1
    ctx->pc = 0x402fe8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x402fec: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x402fecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x402ff0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x402ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x402ff4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x402ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x402ff8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x402ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x402ffc: 0xfe620010  sd          $v0, 0x10($s3)
    ctx->pc = 0x402ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 2));
    // 0x403000: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x403000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x403004: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x403004u;
    SET_GPR_U32(ctx, 31, 0x40300Cu);
    ctx->pc = 0x403008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403004u;
    // 0x403008: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x403004u, 0x40300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40300Cu;
label_40300c:
    // 0x40300c: 0x25e9026  xor         $s2, $s2, $fp
    ctx->pc = 0x40300cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 30));
    // 0x403010: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x403010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x403014: 0x12902b  sltu        $s2, $zero, $s2
    ctx->pc = 0x403014u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x403018: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x403018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x40301c: 0x2a4182a  slt         $v1, $s5, $a0
    ctx->pc = 0x40301cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x403020: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x403020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x403024: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x403024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x403028: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x403028u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x40302c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x40302cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x403030: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x403030u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x403034: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x403034u;
    {
        const bool branch_taken_0x403034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x403038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403034u;
        // 0x403038: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403034) {
            ctx->pc = 0x402F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_402f78;
        }
    }
    ctx->pc = 0x40303Cu;
label_40303c:
    // 0x40303c: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x40303cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x403040: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x403040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x403044: 0x2323e  dsrl32      $a2, $v0, 8
    ctx->pc = 0x403044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x403048: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x403048u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x40304c: 0x21c3e  dsrl32      $v1, $v0, 16
    ctx->pc = 0x40304cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x403050: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x403050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x403054: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x403054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x403058: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x403058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x40305c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x40305cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x403060: 0x2163e  dsrl32      $v0, $v0, 24
    ctx->pc = 0x403060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 24));
    // 0x403064: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x403064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x403068: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x403068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x40306c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x40306cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x403070: 0xa3a60012  sb          $a2, 0x12($sp)
    ctx->pc = 0x403070u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 6));
    // 0x403074: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x403074u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x403078: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x403078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40307c: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x40307cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x403080: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x403080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x403084: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x403084u;
    SET_GPR_U32(ctx, 31, 0x40308Cu);
    ctx->pc = 0x403088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403084u;
    // 0x403088: 0xa3a70013  sb          $a3, 0x13($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x403084u, 0x40308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40308Cu;
label_40308c:
    // 0x40308c: 0x2785ac90  addiu       $a1, $gp, -0x5370
    ctx->pc = 0x40308cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945936));
    // 0x403090: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x403090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x403094: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x403094u;
    SET_GPR_U32(ctx, 31, 0x40309Cu);
    ctx->pc = 0x403098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403094u;
    // 0x403098: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x403094u, 0x40309Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40309Cu;
label_40309c:
    // 0x40309c: 0xc0f85de  jal         func_3E1778
    ctx->pc = 0x40309Cu;
    SET_GPR_U32(ctx, 31, 0x4030A4u);
    ctx->pc = 0x4030A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40309Cu;
    // 0x4030a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1778u, 0x40309Cu, 0x4030A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4030A4u;
label_4030a4:
    // 0x4030a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4030a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4030a8: 0x2785ac90  addiu       $a1, $gp, -0x5370
    ctx->pc = 0x4030a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945936));
    // 0x4030ac: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4030ACu;
    SET_GPR_U32(ctx, 31, 0x4030B4u);
    ctx->pc = 0x4030B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4030ACu;
    // 0x4030b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4030ACu, 0x4030B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4030B4u;
label_4030b4:
    // 0x4030b4: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x4030b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4030b8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x4030B8u;
    {
        const bool branch_taken_0x4030b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4030BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4030B8u;
        // 0x4030bc: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4030b8) {
            ctx->pc = 0x4030E4u;
            goto label_4030e4;
        }
    }
    ctx->pc = 0x4030C0u;
    // 0x4030c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4030C0u;
    {
        const bool branch_taken_0x4030c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4030C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4030C0u;
        // 0x4030c4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4030c0) {
            ctx->pc = 0x4030E4u;
            goto label_4030e4;
        }
    }
    ctx->pc = 0x4030C8u;
    // 0x4030c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4030c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4030cc: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4030CCu;
    SET_GPR_U32(ctx, 31, 0x4030D4u);
    ctx->pc = 0x4030D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4030CCu;
    // 0x4030d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4030CCu, 0x4030D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4030D4u;
label_4030d4:
    // 0x4030d4: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x4030d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x4030d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4030d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4030dc: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4030DCu;
    SET_GPR_U32(ctx, 31, 0x4030E4u);
    ctx->pc = 0x4030E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4030DCu;
    // 0x4030e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4030DCu, 0x4030E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4030E4u;
label_4030e4:
    // 0x4030e4: 0xdfa30080  ld          $v1, 0x80($sp)
    ctx->pc = 0x4030e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4030e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4030e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4030ec: 0xdfa40070  ld          $a0, 0x70($sp)
    ctx->pc = 0x4030ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4030f0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x4030f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4030f4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x4030f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4030f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4030f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4030fc: 0xdfa40060  ld          $a0, 0x60($sp)
    ctx->pc = 0x4030fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x403100: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x403100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x403104: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x403104u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x403108: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x403108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x40310c: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x40310cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x403110: 0xdfa40088  ld          $a0, 0x88($sp)
    ctx->pc = 0x403110u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x403114: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x403114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x403118: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x403118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x40311c: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x40311cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x403120: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x403120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x403124: 0xdfa40078  ld          $a0, 0x78($sp)
    ctx->pc = 0x403124u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x403128: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x403128u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x40312c: 0xa3a60002  sb          $a2, 0x2($sp)
    ctx->pc = 0x40312cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x403130: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x403130u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x403134: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x403134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x403138: 0xdfa40068  ld          $a0, 0x68($sp)
    ctx->pc = 0x403138u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x40313c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x40313cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x403140: 0xa3a70004  sb          $a3, 0x4($sp)
    ctx->pc = 0x403140u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x403144: 0x308900ff  andi        $t1, $a0, 0xFF
    ctx->pc = 0x403144u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x403148: 0xa3a80005  sb          $t0, 0x5($sp)
    ctx->pc = 0x403148u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 8));
    // 0x40314c: 0xdfa40050  ld          $a0, 0x50($sp)
    ctx->pc = 0x40314cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x403150: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x403150u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x403154: 0xa3a90006  sb          $t1, 0x6($sp)
    ctx->pc = 0x403154u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 9));
    // 0x403158: 0x308a00ff  andi        $t2, $a0, 0xFF
    ctx->pc = 0x403158u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x40315c: 0xa3a20008  sb          $v0, 0x8($sp)
    ctx->pc = 0x40315cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x403160: 0xdfa40058  ld          $a0, 0x58($sp)
    ctx->pc = 0x403160u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x403164: 0xa3aa0003  sb          $t2, 0x3($sp)
    ctx->pc = 0x403164u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x403168: 0x308b00ff  andi        $t3, $a0, 0xFF
    ctx->pc = 0x403168u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x40316c: 0xa3a30009  sb          $v1, 0x9($sp)
    ctx->pc = 0x40316cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x403170: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x403170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403174: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x403174u;
    SET_GPR_U32(ctx, 31, 0x40317Cu);
    ctx->pc = 0x403178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403174u;
    // 0x403178: 0xa3ab0007  sb          $t3, 0x7($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x403174u, 0x40317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40317Cu;
label_40317c:
    // 0x40317c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x40317cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403180: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x403180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403184: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x403184u;
    SET_GPR_U32(ctx, 31, 0x40318Cu);
    ctx->pc = 0x403188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403184u;
    // 0x403188: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x403184u, 0x40318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40318Cu;
label_40318c:
    // 0x40318c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x40318cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x403190: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x403190u;
    {
        const bool branch_taken_0x403190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x403194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403190u;
        // 0x403194: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403190) {
            ctx->pc = 0x4031BCu;
            goto label_4031bc;
        }
    }
    ctx->pc = 0x403198u;
    // 0x403198: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x403198u;
    {
        const bool branch_taken_0x403198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403198u;
        // 0x40319c: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403198) {
            ctx->pc = 0x4031BCu;
            goto label_4031bc;
        }
    }
    ctx->pc = 0x4031A0u;
    // 0x4031a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4031a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4031a4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4031A4u;
    SET_GPR_U32(ctx, 31, 0x4031ACu);
    ctx->pc = 0x4031A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4031A4u;
    // 0x4031a8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4031A4u, 0x4031ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4031ACu;
label_4031ac:
    // 0x4031ac: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x4031acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x4031b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4031b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4031b4: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4031B4u;
    SET_GPR_U32(ctx, 31, 0x4031BCu);
    ctx->pc = 0x4031B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4031B4u;
    // 0x4031b8: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4031B4u, 0x4031BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4031BCu;
label_4031bc:
    // 0x4031bc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4031bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4031c0: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x4031C0u;
    SET_GPR_U32(ctx, 31, 0x4031C8u);
    ctx->pc = 0x4031C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4031C0u;
    // 0x4031c4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x4031C0u, 0x4031C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4031C8u;
label_4031c8:
    // 0x4031c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x4031c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4031cc: 0x1860006e  blez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x4031CCu;
    {
        const bool branch_taken_0x4031cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4031D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4031CCu;
        // 0x4031d0: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4031cc) {
            ctx->pc = 0x403388u;
            goto label_403388;
        }
    }
    ctx->pc = 0x4031D4u;
    // 0x4031d4: 0x8fab0040  lw          $t3, 0x40($sp)
    ctx->pc = 0x4031d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4031d8: 0x151023  negu        $v0, $s5
    ctx->pc = 0x4031d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x4031dc: 0x8fb2004c  lw          $s2, 0x4C($sp)
    ctx->pc = 0x4031dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x4031e0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4031e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4031e4: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x4031E4u;
    {
        const bool branch_taken_0x4031e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4031E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4031E4u;
        // 0x4031e8: 0x160982d  daddu       $s3, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4031e4) {
            ctx->pc = 0x4032B8u;
            goto label_4032b8;
        }
    }
    ctx->pc = 0x4031ECu;
    // 0x4031ec: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4031ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4031f0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4031F0u;
    {
        const bool branch_taken_0x4031f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4031F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4031F0u;
        // 0x4031f4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4031f0) {
            ctx->pc = 0x403278u;
            goto label_403278;
        }
    }
    ctx->pc = 0x4031F8u;
    // 0x4031f8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x4031F8u;
    {
        const bool branch_taken_0x4031f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4031f8) {
            ctx->pc = 0x4031FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4031F8u;
            // 0x4031fc: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x403240u;
            goto label_403240;
        }
    }
    ctx->pc = 0x403200u;
    // 0x403200: 0x8d700000  lw          $s0, 0x0($t3)
    ctx->pc = 0x403200u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x403204: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x403204u;
    {
        const bool branch_taken_0x403204 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x403208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403204u;
        // 0x403208: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403204) {
            ctx->pc = 0x403230u;
            goto label_403230;
        }
    }
    ctx->pc = 0x40320Cu;
    // 0x40320c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x40320Cu;
    {
        const bool branch_taken_0x40320c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x403210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40320Cu;
        // 0x403210: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40320c) {
            ctx->pc = 0x403230u;
            goto label_403230;
        }
    }
    ctx->pc = 0x403214u;
    // 0x403214: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x403214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403218: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x403218u;
    SET_GPR_U32(ctx, 31, 0x403220u);
    ctx->pc = 0x40321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403218u;
    // 0x40321c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x403218u, 0x403220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403220u;
label_403220:
    // 0x403220: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x403220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403224: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x403224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403228: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x403228u;
    SET_GPR_U32(ctx, 31, 0x403230u);
    ctx->pc = 0x40322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403228u;
    // 0x40322c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x403228u, 0x403230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403230u;
label_403230:
    // 0x403230: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x403230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x403234: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x403234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x403238: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x403238u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x40323c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x40323cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_403240:
    // 0x403240: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x403240u;
    {
        const bool branch_taken_0x403240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x403244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403240u;
        // 0x403244: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403240) {
            ctx->pc = 0x40326Cu;
            goto label_40326c;
        }
    }
    ctx->pc = 0x403248u;
    // 0x403248: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x403248u;
    {
        const bool branch_taken_0x403248 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403248u;
        // 0x40324c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403248) {
            ctx->pc = 0x40326Cu;
            goto label_40326c;
        }
    }
    ctx->pc = 0x403250u;
    // 0x403250: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x403250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403254: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x403254u;
    SET_GPR_U32(ctx, 31, 0x40325Cu);
    ctx->pc = 0x403258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403254u;
    // 0x403258: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x403254u, 0x40325Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40325Cu;
label_40325c:
    // 0x40325c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40325cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403260: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x403260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403264: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x403264u;
    SET_GPR_U32(ctx, 31, 0x40326Cu);
    ctx->pc = 0x403268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403264u;
    // 0x403268: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x403264u, 0x40326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40326Cu;
label_40326c:
    // 0x40326c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x40326cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x403270: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x403270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x403274: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x403274u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_403278:
    // 0x403278: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x403278u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x40327c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x40327Cu;
    {
        const bool branch_taken_0x40327c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x403280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40327Cu;
        // 0x403280: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40327c) {
            ctx->pc = 0x4032A8u;
            goto label_4032a8;
        }
    }
    ctx->pc = 0x403284u;
    // 0x403284: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x403284u;
    {
        const bool branch_taken_0x403284 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x403288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403284u;
        // 0x403288: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403284) {
            ctx->pc = 0x4032A8u;
            goto label_4032a8;
        }
    }
    ctx->pc = 0x40328Cu;
    // 0x40328c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x40328cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403290: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x403290u;
    SET_GPR_U32(ctx, 31, 0x403298u);
    ctx->pc = 0x403294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403290u;
    // 0x403294: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x403290u, 0x403298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403298u;
label_403298:
    // 0x403298: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x403298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40329c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x40329cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4032a0: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4032A0u;
    SET_GPR_U32(ctx, 31, 0x4032A8u);
    ctx->pc = 0x4032A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4032A0u;
    // 0x4032a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4032A0u, 0x4032A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4032A8u;
label_4032a8:
    // 0x4032a8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x4032a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x4032ac: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x4032acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x4032b0: 0x12a00035  beqz        $s5, . + 4 + (0x35 << 2)
    ctx->pc = 0x4032B0u;
    {
        const bool branch_taken_0x4032b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4032B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4032B0u;
        // 0x4032b4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4032b0) {
            ctx->pc = 0x403388u;
            goto label_403388;
        }
    }
    ctx->pc = 0x4032B8u;
label_4032b8:
    // 0x4032b8: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x4032b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4032bc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x4032BCu;
    {
        const bool branch_taken_0x4032bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4032C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4032BCu;
        // 0x4032c0: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4032bc) {
            ctx->pc = 0x4032E8u;
            goto label_4032e8;
        }
    }
    ctx->pc = 0x4032C4u;
    // 0x4032c4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4032C4u;
    {
        const bool branch_taken_0x4032c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4032C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4032C4u;
        // 0x4032c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4032c4) {
            ctx->pc = 0x4032E8u;
            goto label_4032e8;
        }
    }
    ctx->pc = 0x4032CCu;
    // 0x4032cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4032ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4032d0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4032D0u;
    SET_GPR_U32(ctx, 31, 0x4032D8u);
    ctx->pc = 0x4032D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4032D0u;
    // 0x4032d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4032D0u, 0x4032D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4032D8u;
label_4032d8:
    // 0x4032d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4032d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4032dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4032dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4032e0: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4032E0u;
    SET_GPR_U32(ctx, 31, 0x4032E8u);
    ctx->pc = 0x4032E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4032E0u;
    // 0x4032e4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4032E0u, 0x4032E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4032E8u;
label_4032e8:
    // 0x4032e8: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x4032e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4032ec: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x4032ECu;
    {
        const bool branch_taken_0x4032ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4032F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4032ECu;
        // 0x4032f0: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4032ec) {
            ctx->pc = 0x403318u;
            goto label_403318;
        }
    }
    ctx->pc = 0x4032F4u;
    // 0x4032f4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4032F4u;
    {
        const bool branch_taken_0x4032f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4032F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4032F4u;
        // 0x4032f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4032f4) {
            ctx->pc = 0x403318u;
            goto label_403318;
        }
    }
    ctx->pc = 0x4032FCu;
    // 0x4032fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4032fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403300: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x403300u;
    SET_GPR_U32(ctx, 31, 0x403308u);
    ctx->pc = 0x403304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403300u;
    // 0x403304: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x403300u, 0x403308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403308u;
label_403308:
    // 0x403308: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x403308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40330c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x40330cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403310: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x403310u;
    SET_GPR_U32(ctx, 31, 0x403318u);
    ctx->pc = 0x403314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403310u;
    // 0x403314: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x403310u, 0x403318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403318u;
label_403318:
    // 0x403318: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x403318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x40331c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x40331Cu;
    {
        const bool branch_taken_0x40331c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x403320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40331Cu;
        // 0x403320: 0x8e510010  lw          $s1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40331c) {
            ctx->pc = 0x403348u;
            goto label_403348;
        }
    }
    ctx->pc = 0x403324u;
    // 0x403324: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x403324u;
    {
        const bool branch_taken_0x403324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x403328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403324u;
        // 0x403328: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403324) {
            ctx->pc = 0x403348u;
            goto label_403348;
        }
    }
    ctx->pc = 0x40332Cu;
    // 0x40332c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x40332cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403330: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x403330u;
    SET_GPR_U32(ctx, 31, 0x403338u);
    ctx->pc = 0x403334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403330u;
    // 0x403334: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x403330u, 0x403338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403338u;
label_403338:
    // 0x403338: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x403338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40333c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x40333cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403340: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x403340u;
    SET_GPR_U32(ctx, 31, 0x403348u);
    ctx->pc = 0x403344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403340u;
    // 0x403344: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x403340u, 0x403348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403348u;
label_403348:
    // 0x403348: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x403348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x40334c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x40334Cu;
    {
        const bool branch_taken_0x40334c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x403350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40334Cu;
        // 0x403350: 0x8e510018  lw          $s1, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40334c) {
            ctx->pc = 0x403378u;
            goto label_403378;
        }
    }
    ctx->pc = 0x403354u;
    // 0x403354: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x403354u;
    {
        const bool branch_taken_0x403354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x403358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403354u;
        // 0x403358: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403354) {
            ctx->pc = 0x403378u;
            goto label_403378;
        }
    }
    ctx->pc = 0x40335Cu;
    // 0x40335c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x40335cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403360: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x403360u;
    SET_GPR_U32(ctx, 31, 0x403368u);
    ctx->pc = 0x403364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403360u;
    // 0x403364: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x403360u, 0x403368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403368u;
label_403368:
    // 0x403368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x403368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40336c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x40336cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403370: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x403370u;
    SET_GPR_U32(ctx, 31, 0x403378u);
    ctx->pc = 0x403374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403370u;
    // 0x403374: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x403370u, 0x403378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403378u;
label_403378:
    // 0x403378: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x403378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x40337c: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x40337cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x403380: 0x16a0ffcd  bnez        $s5, . + 4 + (-0x33 << 2)
    ctx->pc = 0x403380u;
    {
        const bool branch_taken_0x403380 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x403384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403380u;
        // 0x403384: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403380) {
            ctx->pc = 0x4032B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4032b8;
        }
    }
    ctx->pc = 0x403388u;
label_403388:
    // 0x403388: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x403388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x40338c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x40338Cu;
    SET_GPR_U32(ctx, 31, 0x403394u);
    ctx->pc = 0x403390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40338Cu;
    // 0x403390: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x40338Cu, 0x403394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403394u;
label_403394:
    // 0x403394: 0xdee201f0  ld          $v0, 0x1F0($s7)
    ctx->pc = 0x403394u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 496)));
    // 0x403398: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x403398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40339c: 0x92e601f3  lbu         $a2, 0x1F3($s7)
    ctx->pc = 0x40339cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 499)));
    // 0x4033a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4033a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4033a4: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x4033a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x4033a8: 0x23a3a  dsrl        $a3, $v0, 8
    ctx->pc = 0x4033a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> 8);
    // 0x4033ac: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4033acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4033b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4033b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4033b4: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x4033b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4033b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4033b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4033bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4033bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4033c0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x4033c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4033c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4033c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4033c8: 0xa3a60020  sb          $a2, 0x20($sp)
    ctx->pc = 0x4033c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
    // 0x4033cc: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x4033ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x4033d0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4033d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4033d4: 0xa3a70022  sb          $a3, 0x22($sp)
    ctx->pc = 0x4033d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 7));
    // 0x4033d8: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4033D8u;
    SET_GPR_U32(ctx, 31, 0x4033E0u);
    ctx->pc = 0x4033DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4033D8u;
    // 0x4033dc: 0xa3a20023  sb          $v0, 0x23($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4033D8u, 0x4033E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4033E0u;
label_4033e0:
    // 0x4033e0: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x4033e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x4033e4: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x4033e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4033e8: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x4033e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4033ec: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x4033ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x4033f0: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x4033f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x4033f4: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x4033f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4033f8: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x4033f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4033fc: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x4033fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x403400: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x403400u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x403404: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x403404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x403408: 0x3e00008  jr          $ra
    ctx->pc = 0x403408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403408u;
        // 0x40340c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x403410u;
}
