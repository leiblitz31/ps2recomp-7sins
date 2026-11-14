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

// Function: sub_00288E00
// Address: 0x288e00 - 0x288e50
void sub_00288E00_0x288e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288E00_0x288e00");
#endif

    switch (ctx->pc) {
        case 0x288e28u: goto label_288e28;
        case 0x288e3cu: goto label_288e3c;
        default: break;
    }

    ctx->pc = 0x288e00u;

    // 0x288e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x288e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x288e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288e08: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x288e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x288e0c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x288e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x288e10: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x288e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x288e14: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x288e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x288e18: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x288e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288e1c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x288e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288e20: 0xc0a3b6c  jal         func_28EDB0
    ctx->pc = 0x288E20u;
    SET_GPR_U32(ctx, 31, 0x288E28u);
    ctx->pc = 0x28EDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EDB0u, 0x288E20u, 0x288E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E28u;
label_288e28:
    // 0x288e28: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x288e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288e2c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x288e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x288e30: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x288e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x288e34: 0xc0a2394  jal         func_288E50
    ctx->pc = 0x288E34u;
    SET_GPR_U32(ctx, 31, 0x288E3Cu);
    ctx->pc = 0x288E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288E50u, 0x288E34u, 0x288E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E3Cu;
label_288e3c:
    // 0x288e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288e40: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x288e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x288e44: 0x3e00008  jr          $ra
    ctx->pc = 0x288E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288E4Cu;
    // 0x288e4c: 0x0  nop
    ctx->pc = 0x288e4cu;
    // NOP
    ctx->pc = 0x288e50u;
}
