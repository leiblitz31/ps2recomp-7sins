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

// Function: sub_00215370
// Address: 0x215370 - 0x2153b0
void sub_00215370_0x215370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215370_0x215370");
#endif

    switch (ctx->pc) {
        case 0x215394u: goto label_215394;
        default: break;
    }

    ctx->pc = 0x215370u;

    // 0x215370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x215378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21537c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215380: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215384: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x215384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x215388: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x215388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21538c: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x21538Cu;
    SET_GPR_U32(ctx, 31, 0x215394u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x21538Cu, 0x215394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215394u;
label_215394:
    // 0x215394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215398: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x215398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21539c: 0x3e00008  jr          $ra
    ctx->pc = 0x21539Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21539Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2153A4u;
    // 0x2153a4: 0x0  nop
    ctx->pc = 0x2153a4u;
    // NOP
    // 0x2153a8: 0x0  nop
    ctx->pc = 0x2153a8u;
    // NOP
    // 0x2153ac: 0x0  nop
    ctx->pc = 0x2153acu;
    // NOP
    ctx->pc = 0x2153b0u;
}
