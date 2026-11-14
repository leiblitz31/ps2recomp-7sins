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

// Function: sub_0028AEB0
// Address: 0x28aeb0 - 0x28af20
void sub_0028AEB0_0x28aeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AEB0_0x28aeb0");
#endif

    switch (ctx->pc) {
        case 0x28aed0u: goto label_28aed0;
        case 0x28aee4u: goto label_28aee4;
        case 0x28aef8u: goto label_28aef8;
        default: break;
    }

    ctx->pc = 0x28aeb0u;

    // 0x28aeb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28aeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28aeb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28aeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28aeb8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28aebc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28aebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28aec0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x28aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28aec4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28aec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28aec8: 0xc0a2be4  jal         func_28AF90
    ctx->pc = 0x28AEC8u;
    SET_GPR_U32(ctx, 31, 0x28AED0u);
    ctx->pc = 0x28AF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AF90u, 0x28AEC8u, 0x28AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AED0u;
label_28aed0:
    // 0x28aed0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28aed4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28aed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28aed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aedc: 0xc0a2bc8  jal         func_28AF20
    ctx->pc = 0x28AEDCu;
    SET_GPR_U32(ctx, 31, 0x28AEE4u);
    ctx->pc = 0x28AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AF20u, 0x28AEDCu, 0x28AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AEE4u;
label_28aee4:
    // 0x28aee4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28aee8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28aee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28aeec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28aeecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aef0: 0xc0a3774  jal         func_28DDD0
    ctx->pc = 0x28AEF0u;
    SET_GPR_U32(ctx, 31, 0x28AEF8u);
    ctx->pc = 0x28DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DDD0u, 0x28AEF0u, 0x28AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AEF8u;
label_28aef8:
    // 0x28aef8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28aefc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28af00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28af00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28af04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28af04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28af08: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28af08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28af0c: 0x3e00008  jr          $ra
    ctx->pc = 0x28AF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AF14u;
    // 0x28af14: 0x0  nop
    ctx->pc = 0x28af14u;
    // NOP
    // 0x28af18: 0x0  nop
    ctx->pc = 0x28af18u;
    // NOP
    // 0x28af1c: 0x0  nop
    ctx->pc = 0x28af1cu;
    // NOP
    ctx->pc = 0x28af20u;
}
