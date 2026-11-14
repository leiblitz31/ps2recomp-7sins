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

// Function: sub_0022D330
// Address: 0x22d330 - 0x22d370
void sub_0022D330_0x22d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D330_0x22d330");
#endif

    switch (ctx->pc) {
        case 0x22d360u: goto label_22d360;
        default: break;
    }

    ctx->pc = 0x22d330u;

    // 0x22d330: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22d330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22d334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22d338: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22d338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22d33c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22d33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22d340: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x22d340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x22d344: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22d344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d348: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22d348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d34c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x22d34cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d350: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x22d350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22d354: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22d354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d358: 0xc08b4dc  jal         func_22D370
    ctx->pc = 0x22D358u;
    SET_GPR_U32(ctx, 31, 0x22D360u);
    ctx->pc = 0x22D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D370u, 0x22D358u, 0x22D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D360u;
label_22d360:
    // 0x22d360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d364: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x22d364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22d368: 0x3e00008  jr          $ra
    ctx->pc = 0x22D368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D370u;
}
