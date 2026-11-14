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

// Function: sub_0028FEA0
// Address: 0x28fea0 - 0x28ff00
void sub_0028FEA0_0x28fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FEA0_0x28fea0");
#endif

    switch (ctx->pc) {
        case 0x28fec4u: goto label_28fec4;
        case 0x28fee0u: goto label_28fee0;
        default: break;
    }

    ctx->pc = 0x28fea0u;

    // 0x28fea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28fea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28fea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28fea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28fea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28feac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28feacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28feb0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28feb4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x28feb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28feb8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x28feb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28febc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x28FEBCu;
    SET_GPR_U32(ctx, 31, 0x28FEC4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x28FEBCu, 0x28FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEC4u;
label_28fec4:
    // 0x28fec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28fec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fec8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28FEC8u;
    {
        const bool branch_taken_0x28fec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fec8) {
            ctx->pc = 0x28FEE4u;
            goto label_28fee4;
        }
    }
    ctx->pc = 0x28FED0u;
    // 0x28fed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fed4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28fed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fed8: 0xc0a3fc0  jal         func_28FF00
    ctx->pc = 0x28FED8u;
    SET_GPR_U32(ctx, 31, 0x28FEE0u);
    ctx->pc = 0x28FF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF00u, 0x28FED8u, 0x28FEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEE0u;
label_28fee0:
    // 0x28fee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28fee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28fee4:
    // 0x28fee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28fee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28fee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28feec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28feecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28fef0: 0x3e00008  jr          $ra
    ctx->pc = 0x28FEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FEF8u;
    // 0x28fef8: 0x0  nop
    ctx->pc = 0x28fef8u;
    // NOP
    // 0x28fefc: 0x0  nop
    ctx->pc = 0x28fefcu;
    // NOP
    ctx->pc = 0x28ff00u;
}
