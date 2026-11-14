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

// Function: sub_002E1C90
// Address: 0x2e1c90 - 0x2e2230
void sub_002E1C90_0x2e1c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1C90_0x2e1c90");
#endif

    switch (ctx->pc) {
        case 0x2e1cb8u: goto label_2e1cb8;
        case 0x2e1cc4u: goto label_2e1cc4;
        case 0x2e1cd4u: goto label_2e1cd4;
        case 0x2e1cf4u: goto label_2e1cf4;
        case 0x2e1d04u: goto label_2e1d04;
        case 0x2e1d20u: goto label_2e1d20;
        case 0x2e1d38u: goto label_2e1d38;
        case 0x2e1dc8u: goto label_2e1dc8;
        case 0x2e1e44u: goto label_2e1e44;
        case 0x2e1ebcu: goto label_2e1ebc;
        case 0x2e1f38u: goto label_2e1f38;
        case 0x2e1fb0u: goto label_2e1fb0;
        case 0x2e202cu: goto label_2e202c;
        case 0x2e20a4u: goto label_2e20a4;
        case 0x2e2120u: goto label_2e2120;
        case 0x2e2178u: goto label_2e2178;
        case 0x2e218cu: goto label_2e218c;
        case 0x2e21a0u: goto label_2e21a0;
        case 0x2e21c0u: goto label_2e21c0;
        default: break;
    }

    ctx->pc = 0x2e1c90u;

    // 0x2e1c90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e1c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e1c94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e1c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e1c98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e1c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e1c9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e1c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e1ca0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e1ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e1ca4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e1ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e1ca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e1ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e1cac: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2e1cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2e1cb0: 0xc11904c  jal         func_464130
    ctx->pc = 0x2E1CB0u;
    SET_GPR_U32(ctx, 31, 0x2E1CB8u);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x2E1CB0u, 0x2E1CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1CB8u;
label_2e1cb8:
    // 0x2e1cb8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e1cb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1cbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e1cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1cc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e1cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1cc4:
    // 0x2e1cc4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e1cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1cc8: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x2e1cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2e1ccc: 0xc0b8204  jal         func_2E0810
    ctx->pc = 0x2E1CCCu;
    SET_GPR_U32(ctx, 31, 0x2E1CD4u);
    ctx->pc = 0x2E0810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0810u, 0x2E1CCCu, 0x2E1CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1CD4u;
label_2e1cd4:
    // 0x2e1cd4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E1CD4u;
    {
        const bool branch_taken_0x2e1cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1cd4) {
            ctx->pc = 0x2E1D40u;
            goto label_2e1d40;
        }
    }
    ctx->pc = 0x2E1CDCu;
    // 0x2e1cdc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1ce0: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x2e1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2e1ce4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e1ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1ce8: 0x2465003c  addiu       $a1, $v1, 0x3C
    ctx->pc = 0x2e1ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2e1cec: 0xc0b8240  jal         func_2E0900
    ctx->pc = 0x2E1CECu;
    SET_GPR_U32(ctx, 31, 0x2E1CF4u);
    ctx->pc = 0x2E0900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0900u, 0x2E1CECu, 0x2E1CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1CF4u;
label_2e1cf4:
    // 0x2e1cf4: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x2e1cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2e1cf8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e1cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1cfc: 0xc0b81fc  jal         func_2E07F0
    ctx->pc = 0x2E1CFCu;
    SET_GPR_U32(ctx, 31, 0x2E1D04u);
    ctx->pc = 0x2E07F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07F0u, 0x2E1CFCu, 0x2E1D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1D04u;
label_2e1d04:
    // 0x2e1d04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e1d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1d08: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e1d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1d0c: 0xac820094  sw          $v0, 0x94($a0)
    ctx->pc = 0x2e1d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x2e1d10: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e1d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1d14: 0x8ca40094  lw          $a0, 0x94($a1)
    ctx->pc = 0x2e1d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x2e1d18: 0xc0b81f4  jal         func_2E07D0
    ctx->pc = 0x2E1D18u;
    SET_GPR_U32(ctx, 31, 0x2E1D20u);
    ctx->pc = 0x2E07D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07D0u, 0x2E1D18u, 0x2E1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1D20u;
label_2e1d20:
    // 0x2e1d20: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e1d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1d24: 0xac62008c  sw          $v0, 0x8C($v1)
    ctx->pc = 0x2e1d24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 2));
    // 0x2e1d28: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1d2c: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2e1d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e1d30: 0xc0b81e8  jal         func_2E07A0
    ctx->pc = 0x2E1D30u;
    SET_GPR_U32(ctx, 31, 0x2E1D38u);
    ctx->pc = 0x2E07A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07A0u, 0x2E1D30u, 0x2E1D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1D38u;
label_2e1d38:
    // 0x2e1d38: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1d3c: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x2e1d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
label_2e1d40:
    // 0x2e1d40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e1d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1d44: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1d48: 0x8c520094  lw          $s2, 0x94($v0)
    ctx->pc = 0x2e1d48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e1d4c: 0x8e520014  lw          $s2, 0x14($s2)
    ctx->pc = 0x2e1d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2e1d50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1d54: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1D54u;
    {
        const bool branch_taken_0x2e1d54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e1d54) {
            ctx->pc = 0x2E1D64u;
            goto label_2e1d64;
        }
    }
    ctx->pc = 0x2E1D5Cu;
    // 0x2e1d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1d60: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e1d60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e1d64:
    // 0x2e1d64: 0x160000f7  bnez        $s0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x2E1D64u;
    {
        const bool branch_taken_0x2e1d64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1d64) {
            ctx->pc = 0x2E2144u;
            goto label_2e2144;
        }
    }
    ctx->pc = 0x2E1D6Cu;
    // 0x2e1d6c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1d70: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x2e1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e1d74: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1d78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1d7c: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x2e1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2e1d80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e1d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e1d84: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E1D84u;
    {
        const bool branch_taken_0x2e1d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1d84) {
            ctx->pc = 0x2E1DE4u;
            goto label_2e1de4;
        }
    }
    ctx->pc = 0x2E1D8Cu;
    // 0x2e1d8c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1d90: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2e1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2e1d94: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2e1d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e1d98: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2e1d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1d9c: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2e1d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1da0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1da4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1da8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1dac: 0x8cc60090  lw          $a2, 0x90($a2)
    ctx->pc = 0x2e1dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x2e1db0: 0x8ce70084  lw          $a3, 0x84($a3)
    ctx->pc = 0x2e1db0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x2e1db4: 0x8c680088  lw          $t0, 0x88($v1)
    ctx->pc = 0x2e1db4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2e1db8: 0x8c490094  lw          $t1, 0x94($v0)
    ctx->pc = 0x2e1db8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e1dbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e1dbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1dc0: 0xc0b8310  jal         func_2E0C40
    ctx->pc = 0x2E1DC0u;
    SET_GPR_U32(ctx, 31, 0x2E1DC8u);
    ctx->pc = 0x2E0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C40u, 0x2E1DC0u, 0x2E1DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1DC8u;
label_2e1dc8:
    // 0x2e1dc8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e1dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1dcc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e1dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e1dd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e1dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e1dd4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e1dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e1dd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e1dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e1ddc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e1ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e1de0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e1de0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e1de4:
    // 0x2e1de4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1de8: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x2e1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e1dec: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1df0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1df4: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x2e1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2e1df8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e1df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e1dfc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E1DFCu;
    {
        const bool branch_taken_0x2e1dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1dfc) {
            ctx->pc = 0x2E1E60u;
            goto label_2e1e60;
        }
    }
    ctx->pc = 0x2E1E04u;
    // 0x2e1e04: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1e08: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2e1e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2e1e0c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2e1e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e1e10: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1e14: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x2e1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2e1e18: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x2e1e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e1e1c: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2e1e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1e20: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1e24: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1e28: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e1e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1e2c: 0x8ce70084  lw          $a3, 0x84($a3)
    ctx->pc = 0x2e1e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x2e1e30: 0x8c680088  lw          $t0, 0x88($v1)
    ctx->pc = 0x2e1e30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2e1e34: 0x8c490094  lw          $t1, 0x94($v0)
    ctx->pc = 0x2e1e34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e1e38: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2e1e38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1e3c: 0xc0b8310  jal         func_2E0C40
    ctx->pc = 0x2E1E3Cu;
    SET_GPR_U32(ctx, 31, 0x2E1E44u);
    ctx->pc = 0x2E0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C40u, 0x2E1E3Cu, 0x2E1E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1E44u;
label_2e1e44:
    // 0x2e1e44: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e1e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1e48: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e1e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e1e4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e1e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e1e50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e1e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e1e54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e1e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e1e58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e1e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e1e5c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e1e5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e1e60:
    // 0x2e1e60: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1e64: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x2e1e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e1e68: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1e6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1e70: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x2e1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2e1e74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e1e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e1e78: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E1E78u;
    {
        const bool branch_taken_0x2e1e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e78) {
            ctx->pc = 0x2E1ED8u;
            goto label_2e1ed8;
        }
    }
    ctx->pc = 0x2E1E80u;
    // 0x2e1e80: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e1e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1e84: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1e88: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x2e1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2e1e8c: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x2e1e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e1e90: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2e1e90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1e94: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e1e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1e98: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1e9c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e1e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1ea0: 0x8ca5008c  lw          $a1, 0x8C($a1)
    ctx->pc = 0x2e1ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2e1ea4: 0x8ce70084  lw          $a3, 0x84($a3)
    ctx->pc = 0x2e1ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x2e1ea8: 0x8c680088  lw          $t0, 0x88($v1)
    ctx->pc = 0x2e1ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2e1eac: 0x8c490094  lw          $t1, 0x94($v0)
    ctx->pc = 0x2e1eacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e1eb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e1eb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1eb4: 0xc0b8310  jal         func_2E0C40
    ctx->pc = 0x2E1EB4u;
    SET_GPR_U32(ctx, 31, 0x2E1EBCu);
    ctx->pc = 0x2E0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C40u, 0x2E1EB4u, 0x2E1EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1EBCu;
label_2e1ebc:
    // 0x2e1ebc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e1ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1ec0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e1ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e1ec4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e1ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e1ec8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e1ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e1ecc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e1eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e1ed0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e1ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e1ed4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e1ed4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e1ed8:
    // 0x2e1ed8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1edc: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x2e1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e1ee0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1ee4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e1ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1ee8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x2e1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x2e1eec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e1eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e1ef0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E1EF0u;
    {
        const bool branch_taken_0x2e1ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1ef0) {
            ctx->pc = 0x2E1F54u;
            goto label_2e1f54;
        }
    }
    ctx->pc = 0x2E1EF8u;
    // 0x2e1ef8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1efc: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2e1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2e1f00: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2e1f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e1f04: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1f08: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x2e1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2e1f0c: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x2e1f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e1f10: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2e1f10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1f14: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e1f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1f18: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1f1c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e1f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1f20: 0x8ce70084  lw          $a3, 0x84($a3)
    ctx->pc = 0x2e1f20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x2e1f24: 0x8c680088  lw          $t0, 0x88($v1)
    ctx->pc = 0x2e1f24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2e1f28: 0x8c490094  lw          $t1, 0x94($v0)
    ctx->pc = 0x2e1f28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e1f2c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2e1f2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1f30: 0xc0b8310  jal         func_2E0C40
    ctx->pc = 0x2E1F30u;
    SET_GPR_U32(ctx, 31, 0x2E1F38u);
    ctx->pc = 0x2E0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C40u, 0x2E1F30u, 0x2E1F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1F38u;
label_2e1f38:
    // 0x2e1f38: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e1f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1f3c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e1f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e1f40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e1f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e1f44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e1f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e1f48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e1f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e1f4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e1f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e1f50: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e1f50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e1f54:
    // 0x2e1f54: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1f58: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x2e1f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e1f5c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1f60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e1f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1f64: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x2e1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e1f68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e1f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e1f6c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E1F6Cu;
    {
        const bool branch_taken_0x2e1f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f6c) {
            ctx->pc = 0x2E1FCCu;
            goto label_2e1fcc;
        }
    }
    ctx->pc = 0x2E1F74u;
    // 0x2e1f74: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1f78: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2e1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2e1f7c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2e1f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e1f80: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2e1f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1f84: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2e1f84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1f88: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1f8c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1f90: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e1f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1f94: 0x8cc60090  lw          $a2, 0x90($a2)
    ctx->pc = 0x2e1f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x2e1f98: 0x8ce70084  lw          $a3, 0x84($a3)
    ctx->pc = 0x2e1f98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x2e1f9c: 0x8c680088  lw          $t0, 0x88($v1)
    ctx->pc = 0x2e1f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2e1fa0: 0x8c490094  lw          $t1, 0x94($v0)
    ctx->pc = 0x2e1fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e1fa4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e1fa4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1fa8: 0xc0b8310  jal         func_2E0C40
    ctx->pc = 0x2E1FA8u;
    SET_GPR_U32(ctx, 31, 0x2E1FB0u);
    ctx->pc = 0x2E0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C40u, 0x2E1FA8u, 0x2E1FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1FB0u;
label_2e1fb0:
    // 0x2e1fb0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e1fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1fb4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e1fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e1fb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e1fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e1fbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e1fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e1fc0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e1fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e1fc4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e1fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e1fc8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e1fc8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e1fcc:
    // 0x2e1fcc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1fd0: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x2e1fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e1fd4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1fd8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e1fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1fdc: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x2e1fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x2e1fe0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e1fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e1fe4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E1FE4u;
    {
        const bool branch_taken_0x2e1fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1fe4) {
            ctx->pc = 0x2E2048u;
            goto label_2e2048;
        }
    }
    ctx->pc = 0x2E1FECu;
    // 0x2e1fec: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1ff0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2e1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2e1ff4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2e1ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e1ff8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1ffc: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x2e1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2e2000: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2e2000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e2004: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2e2004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2008: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e2008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e200c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2010: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e2010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2014: 0x8ce70084  lw          $a3, 0x84($a3)
    ctx->pc = 0x2e2014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x2e2018: 0x8c680088  lw          $t0, 0x88($v1)
    ctx->pc = 0x2e2018u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2e201c: 0x8c490094  lw          $t1, 0x94($v0)
    ctx->pc = 0x2e201cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e2020: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2e2020u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2024: 0xc0b8310  jal         func_2E0C40
    ctx->pc = 0x2E2024u;
    SET_GPR_U32(ctx, 31, 0x2E202Cu);
    ctx->pc = 0x2E0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C40u, 0x2E2024u, 0x2E202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E202Cu;
label_2e202c:
    // 0x2e202c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e202cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e2030: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e2030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e2034: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e2034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e2038: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e2038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e203c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e203cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e2040: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e2040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e2044: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e2044u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e2048:
    // 0x2e2048: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e2048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e204c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x2e204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e2050: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e2050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2054: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e2054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2058: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x2e2058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2e205c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e205cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e2060: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E2060u;
    {
        const bool branch_taken_0x2e2060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2060) {
            ctx->pc = 0x2E20C0u;
            goto label_2e20c0;
        }
    }
    ctx->pc = 0x2E2068u;
    // 0x2e2068: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e2068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e206c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2070: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x2e2070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2e2074: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2e2074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e2078: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2e2078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e207c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2080: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e2080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2084: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e2084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2088: 0x8ca5008c  lw          $a1, 0x8C($a1)
    ctx->pc = 0x2e2088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2e208c: 0x8ce70084  lw          $a3, 0x84($a3)
    ctx->pc = 0x2e208cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x2e2090: 0x8c680088  lw          $t0, 0x88($v1)
    ctx->pc = 0x2e2090u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2e2094: 0x8c490094  lw          $t1, 0x94($v0)
    ctx->pc = 0x2e2094u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e2098: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e2098u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e209c: 0xc0b8310  jal         func_2E0C40
    ctx->pc = 0x2E209Cu;
    SET_GPR_U32(ctx, 31, 0x2E20A4u);
    ctx->pc = 0x2E0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C40u, 0x2E209Cu, 0x2E20A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E20A4u;
label_2e20a4:
    // 0x2e20a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e20a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e20a8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e20a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e20ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e20acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e20b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e20b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e20b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e20b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e20b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e20b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e20bc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e20bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e20c0:
    // 0x2e20c0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e20c4: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x2e20c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e20c8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e20cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e20ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e20d0: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x2e20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x2e20d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e20d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e20d8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E20D8u;
    {
        const bool branch_taken_0x2e20d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e20d8) {
            ctx->pc = 0x2E213Cu;
            goto label_2e213c;
        }
    }
    ctx->pc = 0x2E20E0u;
    // 0x2e20e0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e20e4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2e20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2e20e8: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2e20e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e20ec: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e20f0: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x2e20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2e20f4: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2e20f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e20f8: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2e20f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e20fc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e20fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2100: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e2100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2104: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e2104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2108: 0x8ce70084  lw          $a3, 0x84($a3)
    ctx->pc = 0x2e2108u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x2e210c: 0x8c680088  lw          $t0, 0x88($v1)
    ctx->pc = 0x2e210cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2e2110: 0x8c490094  lw          $t1, 0x94($v0)
    ctx->pc = 0x2e2110u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e2114: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2e2114u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2118: 0xc0b8310  jal         func_2E0C40
    ctx->pc = 0x2E2118u;
    SET_GPR_U32(ctx, 31, 0x2E2120u);
    ctx->pc = 0x2E0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C40u, 0x2E2118u, 0x2E2120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2120u;
label_2e2120:
    // 0x2e2120: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e2120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e2124: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e2124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e2128: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e2128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e212c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e212cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e2130: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e2130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e2134: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e2134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e2138: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e2138u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e213c:
    // 0x2e213c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e213cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e2140: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e2140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2144:
    // 0x2e2144: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e2144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2148: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e2148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e214c: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x2e214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x2e2150: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2e2150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2e2154: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e2154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2158: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e2158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e215c: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x2e215cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2e2160: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e2160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2164: 0x2465003c  addiu       $a1, $v1, 0x3C
    ctx->pc = 0x2e2164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2e2168: 0x24420094  addiu       $v0, $v0, 0x94
    ctx->pc = 0x2e2168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x2e216c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e216cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2170: 0xc0b8150  jal         func_2E0540
    ctx->pc = 0x2E2170u;
    SET_GPR_U32(ctx, 31, 0x2E2178u);
    ctx->pc = 0x2E0540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0540u, 0x2E2170u, 0x2E2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2178u;
label_2e2178:
    // 0x2e2178: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e2178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e217c: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x2e217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x2e2180: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x2e2180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2e2184: 0xc0b8124  jal         func_2E0490
    ctx->pc = 0x2E2184u;
    SET_GPR_U32(ctx, 31, 0x2E218Cu);
    ctx->pc = 0x2E0490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0490u, 0x2E2184u, 0x2E218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E218Cu;
label_2e218c:
    // 0x2e218c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x2e218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2e2190: 0x27a20064  addiu       $v0, $sp, 0x64
    ctx->pc = 0x2e2190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x2e2194: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e2194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2198: 0xc041998  jal         func_106660
    ctx->pc = 0x2E2198u;
    SET_GPR_U32(ctx, 31, 0x2E21A0u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x2E2198u, 0x2E21A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E21A0u;
label_2e21a0:
    // 0x2e21a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e21a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e21a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E21A4u;
    {
        const bool branch_taken_0x2e21a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e21a4) {
            ctx->pc = 0x2E21C0u;
            goto label_2e21c0;
        }
    }
    ctx->pc = 0x2E21ACu;
    // 0x2e21ac: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e21acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e21b0: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2e21b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2e21b4: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x2e21b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2e21b8: 0xc0b80dc  jal         func_2E0370
    ctx->pc = 0x2E21B8u;
    SET_GPR_U32(ctx, 31, 0x2E21C0u);
    ctx->pc = 0x2E0370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0370u, 0x2E21B8u, 0x2E21C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E21C0u;
label_2e21c0:
    // 0x2e21c0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2e21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e21c4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2e21c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e21c8: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E21C8u;
    {
        const bool branch_taken_0x2e21c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e21c8) {
            ctx->pc = 0x2E21E8u;
            goto label_2e21e8;
        }
    }
    ctx->pc = 0x2E21D0u;
    // 0x2e21d0: 0x2e210015  sltiu       $at, $s1, 0x15
    ctx->pc = 0x2e21d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x2e21d4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E21D4u;
    {
        const bool branch_taken_0x2e21d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e21d4) {
            ctx->pc = 0x2E21E8u;
            goto label_2e21e8;
        }
    }
    ctx->pc = 0x2E21DCu;
    // 0x2e21dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e21dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e21e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E21E0u;
    {
        const bool branch_taken_0x2e21e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e21e0) {
            ctx->pc = 0x2E220Cu;
            goto label_2e220c;
        }
    }
    ctx->pc = 0x2E21E8u;
label_2e21e8:
    // 0x2e21e8: 0x1200feb6  beqz        $s0, . + 4 + (-0x14A << 2)
    ctx->pc = 0x2E21E8u;
    {
        const bool branch_taken_0x2e21e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e21e8) {
            ctx->pc = 0x2E1CC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1cc4;
        }
    }
    ctx->pc = 0x2E21F0u;
    // 0x2e21f0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E21F0u;
    {
        const bool branch_taken_0x2e21f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e21f0) {
            ctx->pc = 0x2E2204u;
            goto label_2e2204;
        }
    }
    ctx->pc = 0x2E21F8u;
    // 0x2e21f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2e21f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e21fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E21FCu;
    {
        const bool branch_taken_0x2e21fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e21fc) {
            ctx->pc = 0x2E2208u;
            goto label_2e2208;
        }
    }
    ctx->pc = 0x2E2204u;
label_2e2204:
    // 0x2e2204: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2e2204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e2208:
    // 0x2e2208: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2e2208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e220c:
    // 0x2e220c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e220cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e2210: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e2210u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e2214: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e2214u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e2218: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e2218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e221c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e221cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2224: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2e2224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e2228: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2230u;
}
