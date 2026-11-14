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

// Function: sub_0024F580
// Address: 0x24f580 - 0x24f5c0
void sub_0024F580_0x24f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F580_0x24f580");
#endif

    switch (ctx->pc) {
        case 0x24f598u: goto label_24f598;
        case 0x24f5a8u: goto label_24f5a8;
        default: break;
    }

    ctx->pc = 0x24f580u;

    // 0x24f580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24f580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24f584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f588: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24f588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24f58c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24f58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f590: 0xc093d70  jal         func_24F5C0
    ctx->pc = 0x24F590u;
    SET_GPR_U32(ctx, 31, 0x24F598u);
    ctx->pc = 0x24F5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F5C0u, 0x24F590u, 0x24F598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F598u;
label_24f598:
    // 0x24f598: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x24f598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x24f59c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24f59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f5a0: 0xc093e08  jal         func_24F820
    ctx->pc = 0x24F5A0u;
    SET_GPR_U32(ctx, 31, 0x24F5A8u);
    ctx->pc = 0x24F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F820u, 0x24F5A0u, 0x24F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F5A8u;
label_24f5a8:
    // 0x24f5a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f5ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24f5acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24f5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x24F5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F5B8u;
    // 0x24f5b8: 0x0  nop
    ctx->pc = 0x24f5b8u;
    // NOP
    // 0x24f5bc: 0x0  nop
    ctx->pc = 0x24f5bcu;
    // NOP
    ctx->pc = 0x24f5c0u;
}
