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

// Function: sub_0024FEB0
// Address: 0x24feb0 - 0x24ff10
void sub_0024FEB0_0x24feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FEB0_0x24feb0");
#endif

    switch (ctx->pc) {
        case 0x24fed4u: goto label_24fed4;
        case 0x24fef0u: goto label_24fef0;
        default: break;
    }

    ctx->pc = 0x24feb0u;

    // 0x24feb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24feb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24feb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24feb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24feb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24feb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24febc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24febcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24fec0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x24fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x24fec4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x24fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x24fec8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x24fec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fecc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x24FECCu;
    SET_GPR_U32(ctx, 31, 0x24FED4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x24FECCu, 0x24FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FED4u;
label_24fed4:
    // 0x24fed4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24fed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fed8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24FED8u;
    {
        const bool branch_taken_0x24fed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fed8) {
            ctx->pc = 0x24FEF4u;
            goto label_24fef4;
        }
    }
    ctx->pc = 0x24FEE0u;
    // 0x24fee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24fee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fee4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x24fee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fee8: 0xc093fc4  jal         func_24FF10
    ctx->pc = 0x24FEE8u;
    SET_GPR_U32(ctx, 31, 0x24FEF0u);
    ctx->pc = 0x24FF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FF10u, 0x24FEE8u, 0x24FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FEF0u;
label_24fef0:
    // 0x24fef0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24fef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24fef4:
    // 0x24fef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24fef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24fef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fefc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24fefcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24ff00: 0x3e00008  jr          $ra
    ctx->pc = 0x24FF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FF08u;
    // 0x24ff08: 0x0  nop
    ctx->pc = 0x24ff08u;
    // NOP
    // 0x24ff0c: 0x0  nop
    ctx->pc = 0x24ff0cu;
    // NOP
    ctx->pc = 0x24ff10u;
}
