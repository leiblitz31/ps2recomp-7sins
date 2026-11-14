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

// Function: sub_0022A430
// Address: 0x22a430 - 0x22a470
void sub_0022A430_0x22a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A430_0x22a430");
#endif

    switch (ctx->pc) {
        case 0x22a448u: goto label_22a448;
        case 0x22a458u: goto label_22a458;
        default: break;
    }

    ctx->pc = 0x22a430u;

    // 0x22a430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22a430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22a434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a438: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22a438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22a43c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a440: 0xc08a924  jal         func_22A490
    ctx->pc = 0x22A440u;
    SET_GPR_U32(ctx, 31, 0x22A448u);
    ctx->pc = 0x22A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A490u, 0x22A440u, 0x22A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A448u;
label_22a448:
    // 0x22a448: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x22a448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22a44c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22a44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a450: 0xc08a91c  jal         func_22A470
    ctx->pc = 0x22A450u;
    SET_GPR_U32(ctx, 31, 0x22A458u);
    ctx->pc = 0x22A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A470u, 0x22A450u, 0x22A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A458u;
label_22a458:
    // 0x22a458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a45c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22a45cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22a460: 0x3e00008  jr          $ra
    ctx->pc = 0x22A460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A468u;
    // 0x22a468: 0x0  nop
    ctx->pc = 0x22a468u;
    // NOP
    // 0x22a46c: 0x0  nop
    ctx->pc = 0x22a46cu;
    // NOP
    ctx->pc = 0x22a470u;
}
