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

// Function: sub_00129F50
// Address: 0x129f50 - 0x129fb0
void sub_00129F50_0x129f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129F50_0x129f50");
#endif

    switch (ctx->pc) {
        case 0x129f74u: goto label_129f74;
        case 0x129f90u: goto label_129f90;
        default: break;
    }

    ctx->pc = 0x129f50u;

    // 0x129f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x129f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x129f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x129f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x129f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x129f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x129f5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x129f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x129f60: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x129f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x129f64: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x129f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x129f68: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x129f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129f6c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x129F6Cu;
    SET_GPR_U32(ctx, 31, 0x129F74u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x129F6Cu, 0x129F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F74u;
label_129f74:
    // 0x129f74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x129f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f78: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129F78u;
    {
        const bool branch_taken_0x129f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x129f78) {
            ctx->pc = 0x129F94u;
            goto label_129f94;
        }
    }
    ctx->pc = 0x129F80u;
    // 0x129f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f84: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x129f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129f88: 0xc04a7ec  jal         func_129FB0
    ctx->pc = 0x129F88u;
    SET_GPR_U32(ctx, 31, 0x129F90u);
    ctx->pc = 0x129FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129FB0u, 0x129F88u, 0x129F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F90u;
label_129f90:
    // 0x129f90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x129f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129f94:
    // 0x129f94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x129f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129f9c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x129f9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x129fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x129FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129FA8u;
    // 0x129fa8: 0x0  nop
    ctx->pc = 0x129fa8u;
    // NOP
    // 0x129fac: 0x0  nop
    ctx->pc = 0x129facu;
    // NOP
    ctx->pc = 0x129fb0u;
}
