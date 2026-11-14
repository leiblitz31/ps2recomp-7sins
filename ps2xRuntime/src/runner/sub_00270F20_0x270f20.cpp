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

// Function: sub_00270F20
// Address: 0x270f20 - 0x270fc0
void sub_00270F20_0x270f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270F20_0x270f20");
#endif

    switch (ctx->pc) {
        case 0x270f48u: goto label_270f48;
        case 0x270f54u: goto label_270f54;
        case 0x270f64u: goto label_270f64;
        case 0x270f70u: goto label_270f70;
        case 0x270f98u: goto label_270f98;
        default: break;
    }

    ctx->pc = 0x270f20u;

    // 0x270f20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x270f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x270f24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x270f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x270f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x270f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x270f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x270f30: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x270f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x270f34: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x270f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x270f38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x270f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270f3c: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x270f40: 0xc0513f8  jal         func_144FE0
    ctx->pc = 0x270F40u;
    SET_GPR_U32(ctx, 31, 0x270F48u);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x270F40u, 0x270F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F48u;
label_270f48:
    // 0x270f48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x270F4Cu;
    {
        const bool branch_taken_0x270f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270f4c) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270F54u;
label_270f54:
    // 0x270f54: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x270f54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270f58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x270f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x270f5c: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x270F5Cu;
    SET_GPR_U32(ctx, 31, 0x270F64u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x270F5Cu, 0x270F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F64u;
label_270f64:
    // 0x270f64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x270f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f68: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x270F68u;
    SET_GPR_U32(ctx, 31, 0x270F70u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x270F68u, 0x270F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F70u;
label_270f70:
    // 0x270f70: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270F70u;
    {
        const bool branch_taken_0x270f70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x270f70) {
            ctx->pc = 0x270F84u;
            goto label_270f84;
        }
    }
    ctx->pc = 0x270F78u;
    // 0x270f78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270f7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x270F7Cu;
    {
        const bool branch_taken_0x270f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270f7c) {
            ctx->pc = 0x270FA4u;
            goto label_270fa4;
        }
    }
    ctx->pc = 0x270F84u;
label_270f84:
    // 0x270f84: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x270f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_270f88:
    // 0x270f88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x270f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270f8c: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x270f90: 0xc09c064  jal         func_270190
    ctx->pc = 0x270F90u;
    SET_GPR_U32(ctx, 31, 0x270F98u);
    ctx->pc = 0x270190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270190u, 0x270F90u, 0x270F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F98u;
label_270f98:
    // 0x270f98: 0x1602ffee  bne         $s0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x270F98u;
    {
        const bool branch_taken_0x270f98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x270f98) {
            ctx->pc = 0x270F54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270f54;
        }
    }
    ctx->pc = 0x270FA0u;
    // 0x270fa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x270fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270fa4:
    // 0x270fa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x270fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270fa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270fb0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x270fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x270fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x270FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270FBCu;
    // 0x270fbc: 0x0  nop
    ctx->pc = 0x270fbcu;
    // NOP
    ctx->pc = 0x270fc0u;
}
