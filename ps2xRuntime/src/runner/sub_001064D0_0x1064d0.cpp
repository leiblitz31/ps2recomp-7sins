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

// Function: sub_001064D0
// Address: 0x1064d0 - 0x106550
void sub_001064D0_0x1064d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001064D0_0x1064d0");
#endif

    switch (ctx->pc) {
        case 0x106520u: goto label_106520;
        default: break;
    }

    ctx->pc = 0x1064d0u;

    // 0x1064d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1064d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1064d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1064d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1064d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1064d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1064dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1064dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1064e0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1064e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1064e4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1064e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1064e8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1064e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1064ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1064ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1064f0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1064F0u;
    {
        const bool branch_taken_0x1064f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1064f0) {
            ctx->pc = 0x106504u;
            goto label_106504;
        }
    }
    ctx->pc = 0x1064F8u;
    // 0x1064f8: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x1064f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1064fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1064FCu;
    {
        const bool branch_taken_0x1064fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1064fc) {
            ctx->pc = 0x106530u;
            goto label_106530;
        }
    }
    ctx->pc = 0x106504u;
label_106504:
    // 0x106504: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x106504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106508: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10650c: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x10650cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106510: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x106510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106514: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x106514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106518: 0xc0bb7a4  jal         func_2EDE90
    ctx->pc = 0x106518u;
    SET_GPR_U32(ctx, 31, 0x106520u);
    ctx->pc = 0x2EDE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE90u, 0x106518u, 0x106520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106520u;
label_106520:
    // 0x106520: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x106520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106524: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x106524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106528: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x106528u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10652c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x10652cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_106530:
    // 0x106530: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x106530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106534: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10653c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x10653cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x106540: 0x3e00008  jr          $ra
    ctx->pc = 0x106540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106548u;
    // 0x106548: 0x0  nop
    ctx->pc = 0x106548u;
    // NOP
    // 0x10654c: 0x0  nop
    ctx->pc = 0x10654cu;
    // NOP
    ctx->pc = 0x106550u;
}
