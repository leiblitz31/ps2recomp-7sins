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

// Function: sub_00279820
// Address: 0x279820 - 0x279890
void sub_00279820_0x279820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279820_0x279820");
#endif

    switch (ctx->pc) {
        case 0x279840u: goto label_279840;
        case 0x279854u: goto label_279854;
        case 0x279868u: goto label_279868;
        default: break;
    }

    ctx->pc = 0x279820u;

    // 0x279820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x279824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279828: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x279828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x27982c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x27982cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x279830: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x279830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x279834: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x279834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279838: 0xc09e640  jal         func_279900
    ctx->pc = 0x279838u;
    SET_GPR_U32(ctx, 31, 0x279840u);
    ctx->pc = 0x279900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279900u, 0x279838u, 0x279840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279840u;
label_279840:
    // 0x279840: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x279840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279844: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x279844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x279848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27984c: 0xc09e624  jal         func_279890
    ctx->pc = 0x27984Cu;
    SET_GPR_U32(ctx, 31, 0x279854u);
    ctx->pc = 0x279890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279890u, 0x27984Cu, 0x279854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279854u;
label_279854:
    // 0x279854: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x279854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279858: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27985c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27985cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279860: 0xc0a07e4  jal         func_281F90
    ctx->pc = 0x279860u;
    SET_GPR_U32(ctx, 31, 0x279868u);
    ctx->pc = 0x281F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281F90u, 0x279860u, 0x279868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279868u;
label_279868:
    // 0x279868: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x279868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27986c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27986cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x279870: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x279870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279878: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x279878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27987c: 0x3e00008  jr          $ra
    ctx->pc = 0x27987Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27987Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279884u;
    // 0x279884: 0x0  nop
    ctx->pc = 0x279884u;
    // NOP
    // 0x279888: 0x0  nop
    ctx->pc = 0x279888u;
    // NOP
    // 0x27988c: 0x0  nop
    ctx->pc = 0x27988cu;
    // NOP
    ctx->pc = 0x279890u;
}
