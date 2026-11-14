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

// Function: sub_002286A0
// Address: 0x2286a0 - 0x2286d0
void sub_002286A0_0x2286a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002286A0_0x2286a0");
#endif

    switch (ctx->pc) {
        case 0x2286b8u: goto label_2286b8;
        default: break;
    }

    ctx->pc = 0x2286a0u;

    // 0x2286a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2286a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2286a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2286a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2286a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2286a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2286ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2286acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2286b0: 0xc089e6c  jal         func_2279B0
    ctx->pc = 0x2286B0u;
    SET_GPR_U32(ctx, 31, 0x2286B8u);
    ctx->pc = 0x2279B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2279B0u, 0x2286B0u, 0x2286B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2286B8u;
label_2286b8:
    // 0x2286b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2286b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2286bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2286bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2286c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2286C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2286C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2286C8u;
    // 0x2286c8: 0x0  nop
    ctx->pc = 0x2286c8u;
    // NOP
    // 0x2286cc: 0x0  nop
    ctx->pc = 0x2286ccu;
    // NOP
    ctx->pc = 0x2286d0u;
}
