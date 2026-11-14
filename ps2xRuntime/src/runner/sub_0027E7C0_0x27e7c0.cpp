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

// Function: sub_0027E7C0
// Address: 0x27e7c0 - 0x27e810
void sub_0027E7C0_0x27e7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E7C0_0x27e7c0");
#endif

    ctx->pc = 0x27e7c0u;

    // 0x27e7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27e7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27e7c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27e7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27e7c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27e7cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e7d0: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x27e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x27e7d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E7D4u;
    {
        const bool branch_taken_0x27e7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e7d4) {
            ctx->pc = 0x27E7ECu;
            goto label_27e7ec;
        }
    }
    ctx->pc = 0x27E7DCu;
    // 0x27e7dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e7e0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x27e7e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27e7e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E7E4u;
    {
        const bool branch_taken_0x27e7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e7e4) {
            ctx->pc = 0x27E7F0u;
            goto label_27e7f0;
        }
    }
    ctx->pc = 0x27E7ECu;
label_27e7ec:
    // 0x27e7ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27e7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e7f0:
    // 0x27e7f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27e7f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e7f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27e7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x27E7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E804u;
    // 0x27e804: 0x0  nop
    ctx->pc = 0x27e804u;
    // NOP
    // 0x27e808: 0x0  nop
    ctx->pc = 0x27e808u;
    // NOP
    // 0x27e80c: 0x0  nop
    ctx->pc = 0x27e80cu;
    // NOP
    ctx->pc = 0x27e810u;
}
