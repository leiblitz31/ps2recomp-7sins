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

// Function: sub_0010C020
// Address: 0x10c020 - 0x10c070
void sub_0010C020_0x10c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C020_0x10c020");
#endif

    switch (ctx->pc) {
        case 0x10c03cu: goto label_10c03c;
        case 0x10c050u: goto label_10c050;
        case 0x10c060u: goto label_10c060;
        default: break;
    }

    ctx->pc = 0x10c020u;

    // 0x10c020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10c024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c028: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10c028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10c02c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x10c030: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x10c030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10c034: 0xc041b48  jal         func_106D20
    ctx->pc = 0x10C034u;
    SET_GPR_U32(ctx, 31, 0x10C03Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x10C034u, 0x10C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C03Cu;
label_10c03c:
    // 0x10c03c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c040: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10c040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c044: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x10c044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10c048: 0xc04301c  jal         func_10C070
    ctx->pc = 0x10C048u;
    SET_GPR_U32(ctx, 31, 0x10C050u);
    ctx->pc = 0x10C070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C070u, 0x10C048u, 0x10C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C050u;
label_10c050:
    // 0x10c050: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x10c050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10c054: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10c054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10c058: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x10C058u;
    SET_GPR_U32(ctx, 31, 0x10C060u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x10C058u, 0x10C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C060u;
label_10c060:
    // 0x10c060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c064: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10c064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10c068: 0x3e00008  jr          $ra
    ctx->pc = 0x10C068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C070u;
}
