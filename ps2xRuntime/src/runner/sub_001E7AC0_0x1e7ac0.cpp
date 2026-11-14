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

// Function: sub_001E7AC0
// Address: 0x1e7ac0 - 0x1e7b20
void sub_001E7AC0_0x1e7ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7AC0_0x1e7ac0");
#endif

    switch (ctx->pc) {
        case 0x1e7ae4u: goto label_1e7ae4;
        case 0x1e7b00u: goto label_1e7b00;
        default: break;
    }

    ctx->pc = 0x1e7ac0u;

    // 0x1e7ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e7ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e7ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e7ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7acc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e7accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e7ad0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e7ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e7ad4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e7ad8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e7ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7adc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1E7ADCu;
    SET_GPR_U32(ctx, 31, 0x1E7AE4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1E7ADCu, 0x1E7AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7AE4u;
label_1e7ae4:
    // 0x1e7ae4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e7ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ae8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7AE8u;
    {
        const bool branch_taken_0x1e7ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ae8) {
            ctx->pc = 0x1E7B04u;
            goto label_1e7b04;
        }
    }
    ctx->pc = 0x1E7AF0u;
    // 0x1e7af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7af4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e7af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7af8: 0xc079f40  jal         func_1E7D00
    ctx->pc = 0x1E7AF8u;
    SET_GPR_U32(ctx, 31, 0x1E7B00u);
    ctx->pc = 0x1E7D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7D00u, 0x1E7AF8u, 0x1E7B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B00u;
label_1e7b00:
    // 0x1e7b00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e7b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e7b04:
    // 0x1e7b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7b0c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e7b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e7b10: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7B18u;
    // 0x1e7b18: 0x0  nop
    ctx->pc = 0x1e7b18u;
    // NOP
    // 0x1e7b1c: 0x0  nop
    ctx->pc = 0x1e7b1cu;
    // NOP
    ctx->pc = 0x1e7b20u;
}
