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

// Function: sub_00288E50
// Address: 0x288e50 - 0x288ea0
void sub_00288E50_0x288e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288E50_0x288e50");
#endif

    switch (ctx->pc) {
        case 0x288e74u: goto label_288e74;
        default: break;
    }

    ctx->pc = 0x288e50u;

    // 0x288e50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x288e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x288e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288e58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x288e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x288e5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x288e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x288e60: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x288e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x288e64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x288e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288e68: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x288e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288e6c: 0xc0a2374  jal         func_288DD0
    ctx->pc = 0x288E6Cu;
    SET_GPR_U32(ctx, 31, 0x288E74u);
    ctx->pc = 0x288DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288DD0u, 0x288E6Cu, 0x288E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E74u;
label_288e74:
    // 0x288e74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x288e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288e78: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x288e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288e7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x288e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288e80: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x288e80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x288e84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x288e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288e8c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x288e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x288e90: 0x3e00008  jr          $ra
    ctx->pc = 0x288E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288E98u;
    // 0x288e98: 0x0  nop
    ctx->pc = 0x288e98u;
    // NOP
    // 0x288e9c: 0x0  nop
    ctx->pc = 0x288e9cu;
    // NOP
    ctx->pc = 0x288ea0u;
}
