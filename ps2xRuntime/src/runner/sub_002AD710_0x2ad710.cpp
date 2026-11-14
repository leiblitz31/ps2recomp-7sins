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

// Function: sub_002AD710
// Address: 0x2ad710 - 0x2ad750
void sub_002AD710_0x2ad710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD710_0x2ad710");
#endif

    switch (ctx->pc) {
        case 0x2ad738u: goto label_2ad738;
        default: break;
    }

    ctx->pc = 0x2ad710u;

    // 0x2ad710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ad710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ad714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad718: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2ad718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2ad71c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2ad71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2ad720: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2ad720u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ad724: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ad724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad728: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2ad728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad72c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2ad72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2ad730: 0xc0ab5d4  jal         func_2AD750
    ctx->pc = 0x2AD730u;
    SET_GPR_U32(ctx, 31, 0x2AD738u);
    ctx->pc = 0x2AD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD750u, 0x2AD730u, 0x2AD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD738u;
label_2ad738:
    // 0x2ad738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad73c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ad73cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ad740: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD748u;
    // 0x2ad748: 0x0  nop
    ctx->pc = 0x2ad748u;
    // NOP
    // 0x2ad74c: 0x0  nop
    ctx->pc = 0x2ad74cu;
    // NOP
    ctx->pc = 0x2ad750u;
}
