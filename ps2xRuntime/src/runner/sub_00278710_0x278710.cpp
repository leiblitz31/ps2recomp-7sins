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

// Function: sub_00278710
// Address: 0x278710 - 0x278750
void sub_00278710_0x278710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278710_0x278710");
#endif

    switch (ctx->pc) {
        case 0x278738u: goto label_278738;
        default: break;
    }

    ctx->pc = 0x278710u;

    // 0x278710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27871c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27871cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x278720: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x278720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278724: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x278724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x278728: 0x24a582c0  addiu       $a1, $a1, -0x7D40
    ctx->pc = 0x278728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935232));
    // 0x27872c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x27872cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278730: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x278730u;
    SET_GPR_U32(ctx, 31, 0x278738u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x278730u, 0x278738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278738u;
label_278738:
    // 0x278738: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27873c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27873cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278740: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x278740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x278744: 0x3e00008  jr          $ra
    ctx->pc = 0x278744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27874Cu;
    // 0x27874c: 0x0  nop
    ctx->pc = 0x27874cu;
    // NOP
    ctx->pc = 0x278750u;
}
