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

// Function: sub_0010BFC0
// Address: 0x10bfc0 - 0x10c000
void sub_0010BFC0_0x10bfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BFC0_0x10bfc0");
#endif

    switch (ctx->pc) {
        case 0x10bfdcu: goto label_10bfdc;
        default: break;
    }

    ctx->pc = 0x10bfc0u;

    // 0x10bfc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10bfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10bfc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10bfc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10bfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10bfcc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10bfd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10bfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bfd4: 0xc043000  jal         func_10C000
    ctx->pc = 0x10BFD4u;
    SET_GPR_U32(ctx, 31, 0x10BFDCu);
    ctx->pc = 0x10C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C000u, 0x10BFD4u, 0x10BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BFDCu;
label_10bfdc:
    // 0x10bfdc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bfe0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x10bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x10bfe4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10bfe8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10bfec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10bff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bff4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10bff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10bff8: 0x3e00008  jr          $ra
    ctx->pc = 0x10BFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C000u;
}
