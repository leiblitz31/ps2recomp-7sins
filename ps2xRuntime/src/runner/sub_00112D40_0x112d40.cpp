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

// Function: sub_00112D40
// Address: 0x112d40 - 0x112f50
void sub_00112D40_0x112d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112D40_0x112d40");
#endif

    switch (ctx->pc) {
        case 0x112db0u: goto label_112db0;
        case 0x112dc0u: goto label_112dc0;
        case 0x112dd8u: goto label_112dd8;
        case 0x112df0u: goto label_112df0;
        case 0x112e00u: goto label_112e00;
        case 0x112e20u: goto label_112e20;
        case 0x112e30u: goto label_112e30;
        case 0x112e48u: goto label_112e48;
        case 0x112e60u: goto label_112e60;
        case 0x112e7cu: goto label_112e7c;
        case 0x112e8cu: goto label_112e8c;
        case 0x112e9cu: goto label_112e9c;
        case 0x112eb4u: goto label_112eb4;
        case 0x112ec4u: goto label_112ec4;
        case 0x112ed4u: goto label_112ed4;
        case 0x112ee4u: goto label_112ee4;
        case 0x112f00u: goto label_112f00;
        case 0x112f20u: goto label_112f20;
        default: break;
    }

    ctx->pc = 0x112d40u;

    // 0x112d40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x112d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x112d44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x112d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x112d48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x112d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x112d4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x112d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x112d50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x112d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x112d54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x112d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x112d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x112d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x112d5c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x112d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x112d60: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x112d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x112d64: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x112d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x112d68: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x112d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x112d6c: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x112d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x112d70: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x112d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x112d74: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x112d74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x112d78: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x112d78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112d7c: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x112d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112d80: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x112d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112d84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x112d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112d88: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x112D88u;
    {
        const bool branch_taken_0x112d88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x112d88) {
            ctx->pc = 0x112DE0u;
            goto label_112de0;
        }
    }
    ctx->pc = 0x112D90u;
    // 0x112d90: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x112D90u;
    {
        const bool branch_taken_0x112d90 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x112d90) {
            ctx->pc = 0x112E6Cu;
            goto label_112e6c;
        }
    }
    ctx->pc = 0x112D98u;
    // 0x112d98: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x112D98u;
    {
        const bool branch_taken_0x112d98 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x112d98) {
            ctx->pc = 0x112DE0u;
            goto label_112de0;
        }
    }
    ctx->pc = 0x112DA0u;
    // 0x112da0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x112da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x112da4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x112da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112da8: 0xc0446a4  jal         func_111A90
    ctx->pc = 0x112DA8u;
    SET_GPR_U32(ctx, 31, 0x112DB0u);
    ctx->pc = 0x111A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A90u, 0x112DA8u, 0x112DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DB0u;
label_112db0:
    // 0x112db0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x112db0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112db8: 0xc044694  jal         func_111A50
    ctx->pc = 0x112DB8u;
    SET_GPR_U32(ctx, 31, 0x112DC0u);
    ctx->pc = 0x111A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A50u, 0x112DB8u, 0x112DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DC0u;
label_112dc0:
    // 0x112dc0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x112dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112dc4: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x112dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x112dc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x112dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112dcc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x112dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112dd0: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x112DD0u;
    SET_GPR_U32(ctx, 31, 0x112DD8u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x112DD0u, 0x112DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DD8u;
label_112dd8:
    // 0x112dd8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x112DD8u;
    {
        const bool branch_taken_0x112dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112dd8) {
            ctx->pc = 0x112E6Cu;
            goto label_112e6c;
        }
    }
    ctx->pc = 0x112DE0u;
label_112de0:
    // 0x112de0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x112de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112de4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x112de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112de8: 0xc044bdc  jal         func_112F70
    ctx->pc = 0x112DE8u;
    SET_GPR_U32(ctx, 31, 0x112DF0u);
    ctx->pc = 0x112F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112F70u, 0x112DE8u, 0x112DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DF0u;
label_112df0:
    // 0x112df0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112df8: 0xc04468c  jal         func_111A30
    ctx->pc = 0x112DF8u;
    SET_GPR_U32(ctx, 31, 0x112E00u);
    ctx->pc = 0x111A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A30u, 0x112DF8u, 0x112E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E00u;
label_112e00:
    // 0x112e00: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x112e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x112e04: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x112e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112e08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x112e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112e0c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x112E0Cu;
    {
        const bool branch_taken_0x112e0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x112e0c) {
            ctx->pc = 0x112E3Cu;
            goto label_112e3c;
        }
    }
    ctx->pc = 0x112E14u;
    // 0x112e14: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x112e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112e18: 0xc04383c  jal         func_10E0F0
    ctx->pc = 0x112E18u;
    SET_GPR_U32(ctx, 31, 0x112E20u);
    ctx->pc = 0x10E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0F0u, 0x112E18u, 0x112E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E20u;
label_112e20:
    // 0x112e20: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x112e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x112e24: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x112e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112e28: 0xc04382c  jal         func_10E0B0
    ctx->pc = 0x112E28u;
    SET_GPR_U32(ctx, 31, 0x112E30u);
    ctx->pc = 0x10E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0B0u, 0x112E28u, 0x112E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E30u;
label_112e30:
    // 0x112e30: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x112e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x112e34: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x112E34u;
    {
        const bool branch_taken_0x112e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112e34) {
            ctx->pc = 0x112EB8u;
            goto label_112eb8;
        }
    }
    ctx->pc = 0x112E3Cu;
label_112e3c:
    // 0x112e3c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x112e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112e40: 0xc043834  jal         func_10E0D0
    ctx->pc = 0x112E40u;
    SET_GPR_U32(ctx, 31, 0x112E48u);
    ctx->pc = 0x10E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0D0u, 0x112E40u, 0x112E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E48u;
label_112e48:
    // 0x112e48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x112e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112e4c: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x112E4Cu;
    {
        const bool branch_taken_0x112e4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x112e4c) {
            ctx->pc = 0x112EB8u;
            goto label_112eb8;
        }
    }
    ctx->pc = 0x112E54u;
    // 0x112e54: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x112e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112e58: 0xc043834  jal         func_10E0D0
    ctx->pc = 0x112E58u;
    SET_GPR_U32(ctx, 31, 0x112E60u);
    ctx->pc = 0x10E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0D0u, 0x112E58u, 0x112E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E60u;
label_112e60:
    // 0x112e60: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x112e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x112e64: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x112E64u;
    {
        const bool branch_taken_0x112e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112e64) {
            ctx->pc = 0x112EB8u;
            goto label_112eb8;
        }
    }
    ctx->pc = 0x112E6Cu;
label_112e6c:
    // 0x112e6c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x112e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112e70: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x112e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112e74: 0xc044bdc  jal         func_112F70
    ctx->pc = 0x112E74u;
    SET_GPR_U32(ctx, 31, 0x112E7Cu);
    ctx->pc = 0x112F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112F70u, 0x112E74u, 0x112E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E7Cu;
label_112e7c:
    // 0x112e7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e84: 0xc044684  jal         func_111A10
    ctx->pc = 0x112E84u;
    SET_GPR_U32(ctx, 31, 0x112E8Cu);
    ctx->pc = 0x111A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A10u, 0x112E84u, 0x112E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E8Cu;
label_112e8c:
    // 0x112e8c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x112e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x112e90: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x112e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112e94: 0xc04382c  jal         func_10E0B0
    ctx->pc = 0x112E94u;
    SET_GPR_U32(ctx, 31, 0x112E9Cu);
    ctx->pc = 0x10E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0B0u, 0x112E94u, 0x112E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E9Cu;
label_112e9c:
    // 0x112e9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x112e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112ea0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112EA0u;
    {
        const bool branch_taken_0x112ea0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x112ea0) {
            ctx->pc = 0x112EB8u;
            goto label_112eb8;
        }
    }
    ctx->pc = 0x112EA8u;
    // 0x112ea8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x112ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112eac: 0xc04382c  jal         func_10E0B0
    ctx->pc = 0x112EACu;
    SET_GPR_U32(ctx, 31, 0x112EB4u);
    ctx->pc = 0x10E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0B0u, 0x112EACu, 0x112EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EB4u;
label_112eb4:
    // 0x112eb4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x112eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_112eb8:
    // 0x112eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ebc: 0xc044bd4  jal         func_112F50
    ctx->pc = 0x112EBCu;
    SET_GPR_U32(ctx, 31, 0x112EC4u);
    ctx->pc = 0x112F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112F50u, 0x112EBCu, 0x112EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EC4u;
label_112ec4:
    // 0x112ec4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x112ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x112ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ecc: 0xc04468c  jal         func_111A30
    ctx->pc = 0x112ECCu;
    SET_GPR_U32(ctx, 31, 0x112ED4u);
    ctx->pc = 0x111A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A30u, 0x112ECCu, 0x112ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112ED4u;
label_112ed4:
    // 0x112ed4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x112ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x112ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112edc: 0xc044684  jal         func_111A10
    ctx->pc = 0x112EDCu;
    SET_GPR_U32(ctx, 31, 0x112EE4u);
    ctx->pc = 0x111A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A10u, 0x112EDCu, 0x112EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EE4u;
label_112ee4:
    // 0x112ee4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x112ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x112ee8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x112ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112eec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x112eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ef4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x112ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x112ef8: 0xc042858  jal         func_10A160
    ctx->pc = 0x112EF8u;
    SET_GPR_U32(ctx, 31, 0x112F00u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x112EF8u, 0x112F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F00u;
label_112f00:
    // 0x112f00: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x112f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112f04: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x112f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x112f08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112f0c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x112f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x112f10: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x112f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x112f14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f18: 0xc043980  jal         func_10E600
    ctx->pc = 0x112F18u;
    SET_GPR_U32(ctx, 31, 0x112F20u);
    ctx->pc = 0x10E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E600u, 0x112F18u, 0x112F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F20u;
label_112f20:
    // 0x112f20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x112f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112f24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x112f24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112f28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x112f28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112f2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x112f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112f30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x112f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x112f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112f38: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x112f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x112f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x112F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112F44u;
    // 0x112f44: 0x0  nop
    ctx->pc = 0x112f44u;
    // NOP
    // 0x112f48: 0x0  nop
    ctx->pc = 0x112f48u;
    // NOP
    // 0x112f4c: 0x0  nop
    ctx->pc = 0x112f4cu;
    // NOP
    ctx->pc = 0x112f50u;
}
