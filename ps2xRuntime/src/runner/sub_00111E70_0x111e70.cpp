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

// Function: sub_00111E70
// Address: 0x111e70 - 0x111ec0
void sub_00111E70_0x111e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111E70_0x111e70");
#endif

    switch (ctx->pc) {
        case 0x111e94u: goto label_111e94;
        case 0x111ea4u: goto label_111ea4;
        default: break;
    }

    ctx->pc = 0x111e70u;

    // 0x111e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x111e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x111e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111e78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x111e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x111e7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x111e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x111e80: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x111e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x111e84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x111e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111e88: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x111e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111e8c: 0xc0447b0  jal         func_111EC0
    ctx->pc = 0x111E8Cu;
    SET_GPR_U32(ctx, 31, 0x111E94u);
    ctx->pc = 0x111EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111EC0u, 0x111E8Cu, 0x111E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E94u;
label_111e94:
    // 0x111e94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x111e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111e98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e9c: 0xc043980  jal         func_10E600
    ctx->pc = 0x111E9Cu;
    SET_GPR_U32(ctx, 31, 0x111EA4u);
    ctx->pc = 0x10E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E600u, 0x111E9Cu, 0x111EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EA4u;
label_111ea4:
    // 0x111ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111ea8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x111ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x111eac: 0x3e00008  jr          $ra
    ctx->pc = 0x111EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111EB4u;
    // 0x111eb4: 0x0  nop
    ctx->pc = 0x111eb4u;
    // NOP
    // 0x111eb8: 0x0  nop
    ctx->pc = 0x111eb8u;
    // NOP
    // 0x111ebc: 0x0  nop
    ctx->pc = 0x111ebcu;
    // NOP
    ctx->pc = 0x111ec0u;
}
