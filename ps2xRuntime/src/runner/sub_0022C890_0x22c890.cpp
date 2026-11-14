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

// Function: sub_0022C890
// Address: 0x22c890 - 0x22c8d0
void sub_0022C890_0x22c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C890_0x22c890");
#endif

    switch (ctx->pc) {
        case 0x22c8a8u: goto label_22c8a8;
        case 0x22c8b8u: goto label_22c8b8;
        default: break;
    }

    ctx->pc = 0x22c890u;

    // 0x22c890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c898: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22c898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22c89c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x22c89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22c8a0: 0xc08b274  jal         func_22C9D0
    ctx->pc = 0x22C8A0u;
    SET_GPR_U32(ctx, 31, 0x22C8A8u);
    ctx->pc = 0x22C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C9D0u, 0x22C8A0u, 0x22C8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8A8u;
label_22c8a8:
    // 0x22c8a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22c8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c8ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22c8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c8b0: 0xc08b234  jal         func_22C8D0
    ctx->pc = 0x22C8B0u;
    SET_GPR_U32(ctx, 31, 0x22C8B8u);
    ctx->pc = 0x22C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C8D0u, 0x22C8B0u, 0x22C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8B8u;
label_22c8b8:
    // 0x22c8b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c8bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c8c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x22C8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C8CCu;
    // 0x22c8cc: 0x0  nop
    ctx->pc = 0x22c8ccu;
    // NOP
    ctx->pc = 0x22c8d0u;
}
