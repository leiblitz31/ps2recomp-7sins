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

// Function: sub_0048E400
// Address: 0x48e400 - 0x48e440
void sub_0048E400_0x48e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E400_0x48e400");
#endif

    switch (ctx->pc) {
        case 0x48e428u: goto label_48e428;
        default: break;
    }

    ctx->pc = 0x48e400u;

    // 0x48e400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48e404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48e408: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48e408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48e40c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48e410: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x48e410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x48e414: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48e414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e418: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48e418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e41c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x48e41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48e420: 0xc123910  jal         func_48E440
    ctx->pc = 0x48E420u;
    SET_GPR_U32(ctx, 31, 0x48E428u);
    ctx->pc = 0x48E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E440u, 0x48E420u, 0x48E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E428u;
label_48e428:
    // 0x48e428: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48e428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e42c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e430: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48e434: 0x3e00008  jr          $ra
    ctx->pc = 0x48E434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E43Cu;
    // 0x48e43c: 0x0  nop
    ctx->pc = 0x48e43cu;
    // NOP
    ctx->pc = 0x48e440u;
}
