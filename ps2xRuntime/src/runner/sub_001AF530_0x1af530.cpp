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

// Function: sub_001AF530
// Address: 0x1af530 - 0x1af570
void sub_001AF530_0x1af530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF530_0x1af530");
#endif

    switch (ctx->pc) {
        case 0x1af54cu: goto label_1af54c;
        case 0x1af55cu: goto label_1af55c;
        default: break;
    }

    ctx->pc = 0x1af530u;

    // 0x1af530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af538: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1af538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1af53c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af540: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x1af540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1af544: 0xc05ef10  jal         func_17BC40
    ctx->pc = 0x1AF544u;
    SET_GPR_U32(ctx, 31, 0x1AF54Cu);
    ctx->pc = 0x17BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC40u, 0x1AF544u, 0x1AF54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF54Cu;
label_1af54c:
    // 0x1af54c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af550: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1af550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1af554: 0xc05ef10  jal         func_17BC40
    ctx->pc = 0x1AF554u;
    SET_GPR_U32(ctx, 31, 0x1AF55Cu);
    ctx->pc = 0x17BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC40u, 0x1AF554u, 0x1AF55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF55Cu;
label_1af55c:
    // 0x1af55c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af564: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1af564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1af568: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF570u;
}
