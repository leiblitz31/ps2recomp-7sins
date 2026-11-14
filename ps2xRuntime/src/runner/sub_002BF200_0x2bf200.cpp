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

// Function: sub_002BF200
// Address: 0x2bf200 - 0x2bf240
void sub_002BF200_0x2bf200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF200_0x2bf200");
#endif

    switch (ctx->pc) {
        case 0x2bf228u: goto label_2bf228;
        default: break;
    }

    ctx->pc = 0x2bf200u;

    // 0x2bf200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bf200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bf204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf208: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bf208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bf20c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bf20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bf210: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2bf210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2bf214: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bf214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf218: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2bf218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf21c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2bf21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf220: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2BF220u;
    SET_GPR_U32(ctx, 31, 0x2BF228u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2BF220u, 0x2BF228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF228u;
label_2bf228:
    // 0x2bf228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf22c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2bf22cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bf230: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF238u;
    // 0x2bf238: 0x0  nop
    ctx->pc = 0x2bf238u;
    // NOP
    // 0x2bf23c: 0x0  nop
    ctx->pc = 0x2bf23cu;
    // NOP
    ctx->pc = 0x2bf240u;
}
