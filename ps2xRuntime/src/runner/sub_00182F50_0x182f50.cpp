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

// Function: sub_00182F50
// Address: 0x182f50 - 0x182ff0
void sub_00182F50_0x182f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182F50_0x182f50");
#endif

    switch (ctx->pc) {
        case 0x182f90u: goto label_182f90;
        case 0x182facu: goto label_182fac;
        case 0x182fbcu: goto label_182fbc;
        case 0x182fd8u: goto label_182fd8;
        default: break;
    }

    ctx->pc = 0x182f50u;

    // 0x182f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x182f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x182f54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x182f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x182f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182f60: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x182f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x182f64: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x182f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x182f68: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x182f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182f6c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x182f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x182f70: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x182F70u;
    {
        const bool branch_taken_0x182f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x182f70) {
            ctx->pc = 0x182F80u;
            goto label_182f80;
        }
    }
    ctx->pc = 0x182F78u;
    // 0x182f78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x182F78u;
    {
        const bool branch_taken_0x182f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182f78) {
            ctx->pc = 0x182FD8u;
            goto label_182fd8;
        }
    }
    ctx->pc = 0x182F80u;
label_182f80:
    // 0x182f80: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x182f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182f84: 0x27859108  addiu       $a1, $gp, -0x6EF8
    ctx->pc = 0x182f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938888));
    // 0x182f88: 0xc05621c  jal         func_158870
    ctx->pc = 0x182F88u;
    SET_GPR_U32(ctx, 31, 0x182F90u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x182F88u, 0x182F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182F90u;
label_182f90:
    // 0x182f90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x182f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x182f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182f98: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x182f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x182f9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x182f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fa4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x182FA4u;
    SET_GPR_U32(ctx, 31, 0x182FACu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x182FA4u, 0x182FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FACu;
label_182fac:
    // 0x182fac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x182facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182fb0: 0x27859100  addiu       $a1, $gp, -0x6F00
    ctx->pc = 0x182fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938880));
    // 0x182fb4: 0xc05621c  jal         func_158870
    ctx->pc = 0x182FB4u;
    SET_GPR_U32(ctx, 31, 0x182FBCu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x182FB4u, 0x182FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FBCu;
label_182fbc:
    // 0x182fbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x182fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fc0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x182fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182fc4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x182fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x182fc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fd0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x182FD0u;
    SET_GPR_U32(ctx, 31, 0x182FD8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x182FD0u, 0x182FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FD8u;
label_182fd8:
    // 0x182fd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x182fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182fdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182fe4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x182fe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x182fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x182FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182FF0u;
}
