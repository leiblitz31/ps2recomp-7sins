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

// Function: sub_0016F220
// Address: 0x16f220 - 0x16f250
void sub_0016F220_0x16f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F220_0x16f220");
#endif

    switch (ctx->pc) {
        case 0x16f238u: goto label_16f238;
        default: break;
    }

    ctx->pc = 0x16f220u;

    // 0x16f220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f228: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16f228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16f22c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f230: 0xc0402ec  jal         func_100BB0
    ctx->pc = 0x16F230u;
    SET_GPR_U32(ctx, 31, 0x16F238u);
    ctx->pc = 0x100BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100BB0u, 0x16F230u, 0x16F238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F238u;
label_16f238:
    // 0x16f238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f23c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16f23cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16f240: 0x3e00008  jr          $ra
    ctx->pc = 0x16F240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F248u;
    // 0x16f248: 0x0  nop
    ctx->pc = 0x16f248u;
    // NOP
    // 0x16f24c: 0x0  nop
    ctx->pc = 0x16f24cu;
    // NOP
    ctx->pc = 0x16f250u;
}
