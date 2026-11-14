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

// Function: sub_0046C9E0
// Address: 0x46c9e0 - 0x46ca40
void sub_0046C9E0_0x46c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C9E0_0x46c9e0");
#endif

    switch (ctx->pc) {
        case 0x46ca04u: goto label_46ca04;
        case 0x46ca20u: goto label_46ca20;
        default: break;
    }

    ctx->pc = 0x46c9e0u;

    // 0x46c9e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46c9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46c9e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46c9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46c9e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46c9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46c9ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46c9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46c9f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46c9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x46c9f4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x46c9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x46c9f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46c9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c9fc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x46C9FCu;
    SET_GPR_U32(ctx, 31, 0x46CA04u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x46C9FCu, 0x46CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CA04u;
label_46ca04:
    // 0x46ca04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46ca04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ca08: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x46CA08u;
    {
        const bool branch_taken_0x46ca08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ca08) {
            ctx->pc = 0x46CA24u;
            goto label_46ca24;
        }
    }
    ctx->pc = 0x46CA10u;
    // 0x46ca10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46ca10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ca14: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46ca14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46ca18: 0xc11b290  jal         func_46CA40
    ctx->pc = 0x46CA18u;
    SET_GPR_U32(ctx, 31, 0x46CA20u);
    ctx->pc = 0x46CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CA40u, 0x46CA18u, 0x46CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CA20u;
label_46ca20:
    // 0x46ca20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46ca20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46ca24:
    // 0x46ca24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46ca24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ca28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46ca28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46ca2c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46ca2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46ca30: 0x3e00008  jr          $ra
    ctx->pc = 0x46CA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CA38u;
    // 0x46ca38: 0x0  nop
    ctx->pc = 0x46ca38u;
    // NOP
    // 0x46ca3c: 0x0  nop
    ctx->pc = 0x46ca3cu;
    // NOP
    ctx->pc = 0x46ca40u;
}
