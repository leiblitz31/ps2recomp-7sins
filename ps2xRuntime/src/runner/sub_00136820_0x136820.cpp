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

// Function: sub_00136820
// Address: 0x136820 - 0x136860
void sub_00136820_0x136820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136820_0x136820");
#endif

    switch (ctx->pc) {
        case 0x136848u: goto label_136848;
        default: break;
    }

    ctx->pc = 0x136820u;

    // 0x136820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x136820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x136824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136828: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x136828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13682c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13682cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x136830: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x136830u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x136834: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x136834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136838: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x136838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13683c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x13683cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x136840: 0xc04da18  jal         func_136860
    ctx->pc = 0x136840u;
    SET_GPR_U32(ctx, 31, 0x136848u);
    ctx->pc = 0x136860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136860u, 0x136840u, 0x136848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136848u;
label_136848:
    // 0x136848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13684c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13684cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x136850: 0x3e00008  jr          $ra
    ctx->pc = 0x136850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136858u;
    // 0x136858: 0x0  nop
    ctx->pc = 0x136858u;
    // NOP
    // 0x13685c: 0x0  nop
    ctx->pc = 0x13685cu;
    // NOP
    ctx->pc = 0x136860u;
}
