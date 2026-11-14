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

// Function: sub_0011BFE0
// Address: 0x11bfe0 - 0x11c020
void sub_0011BFE0_0x11bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BFE0_0x11bfe0");
#endif

    switch (ctx->pc) {
        case 0x11bffcu: goto label_11bffc;
        default: break;
    }

    ctx->pc = 0x11bfe0u;

    // 0x11bfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11bfe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11bfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11bfe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11bfec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bff0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11bff4: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x11BFF4u;
    SET_GPR_U32(ctx, 31, 0x11BFFCu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x11BFF4u, 0x11BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFFCu;
label_11bffc:
    // 0x11bffc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c000: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11c000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x11c004: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11c004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c00c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11c00cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11c010: 0x3e00008  jr          $ra
    ctx->pc = 0x11C010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C018u;
    // 0x11c018: 0x0  nop
    ctx->pc = 0x11c018u;
    // NOP
    // 0x11c01c: 0x0  nop
    ctx->pc = 0x11c01cu;
    // NOP
    ctx->pc = 0x11c020u;
}
