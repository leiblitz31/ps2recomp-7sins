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

// Function: sub_0024F7E0
// Address: 0x24f7e0 - 0x24f820
void sub_0024F7E0_0x24f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F7E0_0x24f7e0");
#endif

    switch (ctx->pc) {
        case 0x24f7f8u: goto label_24f7f8;
        case 0x24f808u: goto label_24f808;
        default: break;
    }

    ctx->pc = 0x24f7e0u;

    // 0x24f7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24f7e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f7e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24f7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24f7ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f7f0: 0xc093d70  jal         func_24F5C0
    ctx->pc = 0x24F7F0u;
    SET_GPR_U32(ctx, 31, 0x24F7F8u);
    ctx->pc = 0x24F5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F5C0u, 0x24F7F0u, 0x24F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F7F8u;
label_24f7f8:
    // 0x24f7f8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x24f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x24f7fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24f7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f800: 0xc093e08  jal         func_24F820
    ctx->pc = 0x24F800u;
    SET_GPR_U32(ctx, 31, 0x24F808u);
    ctx->pc = 0x24F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F820u, 0x24F800u, 0x24F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F808u;
label_24f808:
    // 0x24f808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f80c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24f80cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24f810: 0x3e00008  jr          $ra
    ctx->pc = 0x24F810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F818u;
    // 0x24f818: 0x0  nop
    ctx->pc = 0x24f818u;
    // NOP
    // 0x24f81c: 0x0  nop
    ctx->pc = 0x24f81cu;
    // NOP
    ctx->pc = 0x24f820u;
}
