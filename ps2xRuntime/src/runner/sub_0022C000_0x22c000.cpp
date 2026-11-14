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

// Function: sub_0022C000
// Address: 0x22c000 - 0x22c040
void sub_0022C000_0x22c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C000_0x22c000");
#endif

    switch (ctx->pc) {
        case 0x22c024u: goto label_22c024;
        default: break;
    }

    ctx->pc = 0x22c000u;

    // 0x22c000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c008: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c00c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22c00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22c010: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c014: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22c014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c018: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c01c: 0xc08b010  jal         func_22C040
    ctx->pc = 0x22C01Cu;
    SET_GPR_U32(ctx, 31, 0x22C024u);
    ctx->pc = 0x22C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C040u, 0x22C01Cu, 0x22C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C024u;
label_22c024:
    // 0x22c024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c028: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c02c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C034u;
    // 0x22c034: 0x0  nop
    ctx->pc = 0x22c034u;
    // NOP
    // 0x22c038: 0x0  nop
    ctx->pc = 0x22c038u;
    // NOP
    // 0x22c03c: 0x0  nop
    ctx->pc = 0x22c03cu;
    // NOP
    ctx->pc = 0x22c040u;
}
