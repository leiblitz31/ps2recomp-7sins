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

// Function: sub_002CC4F0
// Address: 0x2cc4f0 - 0x2cc550
void sub_002CC4F0_0x2cc4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC4F0_0x2cc4f0");
#endif

    switch (ctx->pc) {
        case 0x2cc514u: goto label_2cc514;
        default: break;
    }

    ctx->pc = 0x2cc4f0u;

    // 0x2cc4f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cc4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cc4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cc4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cc4f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc4fc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2cc4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2cc500: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2cc500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2cc504: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2cc504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cc508: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2cc508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc50c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CC50Cu;
    SET_GPR_U32(ctx, 31, 0x2CC514u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CC50Cu, 0x2CC514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC514u;
label_2cc514:
    // 0x2cc514: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2cc514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2cc518: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC518u;
    {
        const bool branch_taken_0x2cc518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc518) {
            ctx->pc = 0x2CC530u;
            goto label_2cc530;
        }
    }
    ctx->pc = 0x2CC520u;
    // 0x2cc520: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2cc520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc524: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cc524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc528: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2cc528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2cc52c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2cc52cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2cc530:
    // 0x2cc530: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x2cc530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2cc534: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cc534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc53c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2cc53cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cc540: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC548u;
    // 0x2cc548: 0x0  nop
    ctx->pc = 0x2cc548u;
    // NOP
    // 0x2cc54c: 0x0  nop
    ctx->pc = 0x2cc54cu;
    // NOP
    ctx->pc = 0x2cc550u;
}
