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

// Function: sub_00115DA0
// Address: 0x115da0 - 0x115ea0
void sub_00115DA0_0x115da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115DA0_0x115da0");
#endif

    switch (ctx->pc) {
        case 0x115dc8u: goto label_115dc8;
        case 0x115dd8u: goto label_115dd8;
        case 0x115df8u: goto label_115df8;
        case 0x115e04u: goto label_115e04;
        case 0x115e14u: goto label_115e14;
        case 0x115e24u: goto label_115e24;
        case 0x115e30u: goto label_115e30;
        case 0x115e3cu: goto label_115e3c;
        case 0x115e4cu: goto label_115e4c;
        case 0x115e70u: goto label_115e70;
        default: break;
    }

    ctx->pc = 0x115da0u;

    // 0x115da0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x115da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x115da4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x115da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x115da8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x115da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x115dac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x115dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x115db0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x115db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x115db4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x115db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x115db8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x115db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x115dbc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x115dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115dc0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x115DC0u;
    SET_GPR_U32(ctx, 31, 0x115DC8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x115DC0u, 0x115DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115DC8u;
label_115dc8:
    // 0x115dc8: 0x8f84b9b0  lw          $a0, -0x4650($gp)
    ctx->pc = 0x115dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949296)));
    // 0x115dcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x115dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115dd0: 0xc045944  jal         func_116510
    ctx->pc = 0x115DD0u;
    SET_GPR_U32(ctx, 31, 0x115DD8u);
    ctx->pc = 0x116510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116510u, 0x115DD0u, 0x115DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115DD8u;
label_115dd8:
    // 0x115dd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x115dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ddc: 0x14120004  bne         $zero, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x115DDCu;
    {
        const bool branch_taken_0x115ddc = (GPR_U64(ctx, 0) != GPR_U64(ctx, 18));
        if (branch_taken_0x115ddc) {
            ctx->pc = 0x115DF0u;
            goto label_115df0;
        }
    }
    ctx->pc = 0x115DE4u;
    // 0x115de4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115de8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x115DE8u;
    {
        const bool branch_taken_0x115de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115de8) {
            ctx->pc = 0x115E7Cu;
            goto label_115e7c;
        }
    }
    ctx->pc = 0x115DF0u;
label_115df0:
    // 0x115df0: 0xc090864  jal         func_242190
    ctx->pc = 0x115DF0u;
    SET_GPR_U32(ctx, 31, 0x115DF8u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x115DF0u, 0x115DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115DF8u;
label_115df8:
    // 0x115df8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x115df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115dfc: 0xc090590  jal         func_241640
    ctx->pc = 0x115DFCu;
    SET_GPR_U32(ctx, 31, 0x115E04u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x115DFCu, 0x115E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E04u;
label_115e04:
    // 0x115e04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x115e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e08: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x115e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x115e0c: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x115E0Cu;
    SET_GPR_U32(ctx, 31, 0x115E14u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x115E0Cu, 0x115E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E14u;
label_115e14:
    // 0x115e14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x115e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e1c: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x115E1Cu;
    SET_GPR_U32(ctx, 31, 0x115E24u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x115E1Cu, 0x115E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E24u;
label_115e24:
    // 0x115e24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x115e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e28: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x115E28u;
    {
        const bool branch_taken_0x115e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115e28) {
            ctx->pc = 0x115E64u;
            goto label_115e64;
        }
    }
    ctx->pc = 0x115E30u;
label_115e30:
    // 0x115e30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x115e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x115e34: 0xc09138c  jal         func_244E30
    ctx->pc = 0x115E34u;
    SET_GPR_U32(ctx, 31, 0x115E3Cu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x115E34u, 0x115E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E3Cu;
label_115e3c:
    // 0x115e3c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x115e3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e44: 0xc0457d8  jal         func_115F60
    ctx->pc = 0x115E44u;
    SET_GPR_U32(ctx, 31, 0x115E4Cu);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x115E44u, 0x115E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E4Cu;
label_115e4c:
    // 0x115e4c: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115E4Cu;
    {
        const bool branch_taken_0x115e4c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x115e4c) {
            ctx->pc = 0x115E60u;
            goto label_115e60;
        }
    }
    ctx->pc = 0x115E54u;
    // 0x115e54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x115e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x115e58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x115E58u;
    {
        const bool branch_taken_0x115e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115e58) {
            ctx->pc = 0x115E7Cu;
            goto label_115e7c;
        }
    }
    ctx->pc = 0x115E60u;
label_115e60:
    // 0x115e60: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x115e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_115e64:
    // 0x115e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e68: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x115E68u;
    SET_GPR_U32(ctx, 31, 0x115E70u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x115E68u, 0x115E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E70u;
label_115e70:
    // 0x115e70: 0x1602ffef  bne         $s0, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x115E70u;
    {
        const bool branch_taken_0x115e70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x115e70) {
            ctx->pc = 0x115E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115e30;
        }
    }
    ctx->pc = 0x115E78u;
    // 0x115e78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115e7c:
    // 0x115e7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x115e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115e80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x115e80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115e84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x115e84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115e88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x115e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115e8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x115e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115e90: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x115e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x115e94: 0x3e00008  jr          $ra
    ctx->pc = 0x115E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115E9Cu;
    // 0x115e9c: 0x0  nop
    ctx->pc = 0x115e9cu;
    // NOP
    ctx->pc = 0x115ea0u;
}
