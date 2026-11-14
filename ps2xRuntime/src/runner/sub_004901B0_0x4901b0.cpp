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

// Function: sub_004901B0
// Address: 0x4901b0 - 0x4901e0
void sub_004901B0_0x4901b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004901B0_0x4901b0");
#endif

    switch (ctx->pc) {
        case 0x4901ccu: goto label_4901cc;
        default: break;
    }

    ctx->pc = 0x4901b0u;

    // 0x4901b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4901b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4901b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4901b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4901b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4901b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4901bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4901bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4901c0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4901c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4901c4: 0xc04e50c  jal         func_139430
    ctx->pc = 0x4901C4u;
    SET_GPR_U32(ctx, 31, 0x4901CCu);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x4901C4u, 0x4901CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4901CCu;
label_4901cc:
    // 0x4901cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4901ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4901d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4901d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4901d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4901D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4901D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4901DCu;
    // 0x4901dc: 0x0  nop
    ctx->pc = 0x4901dcu;
    // NOP
    ctx->pc = 0x4901e0u;
}
