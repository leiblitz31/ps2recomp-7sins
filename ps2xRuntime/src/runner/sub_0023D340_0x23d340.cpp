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

// Function: sub_0023D340
// Address: 0x23d340 - 0x23d380
void sub_0023D340_0x23d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D340_0x23d340");
#endif

    switch (ctx->pc) {
        case 0x23d370u: goto label_23d370;
        default: break;
    }

    ctx->pc = 0x23d340u;

    // 0x23d340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23d344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d348: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23d348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23d34c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23d34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x23d350: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x23d350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x23d354: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23d354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d358: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23d358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d35c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x23d35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d360: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x23d360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23d364: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23d364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d368: 0xc08f4e0  jal         func_23D380
    ctx->pc = 0x23D368u;
    SET_GPR_U32(ctx, 31, 0x23D370u);
    ctx->pc = 0x23D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D380u, 0x23D368u, 0x23D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D370u;
label_23d370:
    // 0x23d370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d374: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x23d374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23d378: 0x3e00008  jr          $ra
    ctx->pc = 0x23D378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D380u;
}
