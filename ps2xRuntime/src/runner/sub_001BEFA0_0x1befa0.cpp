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

// Function: sub_001BEFA0
// Address: 0x1befa0 - 0x1bf020
void sub_001BEFA0_0x1befa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEFA0_0x1befa0");
#endif

    switch (ctx->pc) {
        case 0x1befc8u: goto label_1befc8;
        case 0x1befd8u: goto label_1befd8;
        default: break;
    }

    ctx->pc = 0x1befa0u;

    // 0x1befa0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1befa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1befa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1befa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1befa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1befa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1befac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1befacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1befb0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1befb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1befb4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1befb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1befb8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1befb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1befbc: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1befbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1befc0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BEFC0u;
    {
        const bool branch_taken_0x1befc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1befc0) {
            ctx->pc = 0x1BEFECu;
            goto label_1befec;
        }
    }
    ctx->pc = 0x1BEFC8u;
label_1befc8:
    // 0x1befc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1befc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befcc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1befccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1befd0: 0xc06fc08  jal         func_1BF020
    ctx->pc = 0x1BEFD0u;
    SET_GPR_U32(ctx, 31, 0x1BEFD8u);
    ctx->pc = 0x1BF020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF020u, 0x1BEFD0u, 0x1BEFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFD8u;
label_1befd8:
    // 0x1befd8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1befd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1befdc: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x1befdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1befe0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1befe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1befe4: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x1befe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1befe8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1befe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1befec:
    // 0x1befec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1befecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1beff0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1beff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1beff4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BEFF4u;
    {
        const bool branch_taken_0x1beff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1beff4) {
            ctx->pc = 0x1BEFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1befc8;
        }
    }
    ctx->pc = 0x1BEFFCu;
    // 0x1beffc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1beffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf000: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bf000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf00c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1bf00cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bf010: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF018u;
    // 0x1bf018: 0x0  nop
    ctx->pc = 0x1bf018u;
    // NOP
    // 0x1bf01c: 0x0  nop
    ctx->pc = 0x1bf01cu;
    // NOP
    ctx->pc = 0x1bf020u;
}
