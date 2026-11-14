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

// Function: sub_0017C820
// Address: 0x17c820 - 0x17c860
void sub_0017C820_0x17c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C820_0x17c820");
#endif

    switch (ctx->pc) {
        case 0x17c850u: goto label_17c850;
        default: break;
    }

    ctx->pc = 0x17c820u;

    // 0x17c820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17c820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17c824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c828: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17c828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17c82c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17c830: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x17c830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x17c834: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x17c834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x17c838: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17c838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c83c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17c83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c840: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x17c840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c844: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x17c844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c848: 0xc060414  jal         func_181050
    ctx->pc = 0x17C848u;
    SET_GPR_U32(ctx, 31, 0x17C850u);
    ctx->pc = 0x181050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181050u, 0x17C848u, 0x17C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C850u;
label_17c850:
    // 0x17c850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c854: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17c854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17c858: 0x3e00008  jr          $ra
    ctx->pc = 0x17C858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C860u;
}
