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

// Function: sub_004914E0
// Address: 0x4914e0 - 0x491540
void sub_004914E0_0x4914e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004914E0_0x4914e0");
#endif

    switch (ctx->pc) {
        case 0x491504u: goto label_491504;
        default: break;
    }

    ctx->pc = 0x4914e0u;

    // 0x4914e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4914e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4914e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4914e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4914e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4914e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4914ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x4914ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x4914f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x4914f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x4914f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4914f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4914f8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4914f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4914fc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x4914FCu;
    SET_GPR_U32(ctx, 31, 0x491504u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x4914FCu, 0x491504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491504u;
label_491504:
    // 0x491504: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x491504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x491508: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x491508u;
    {
        const bool branch_taken_0x491508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491508) {
            ctx->pc = 0x491520u;
            goto label_491520;
        }
    }
    ctx->pc = 0x491510u;
    // 0x491510: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x491510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x491514: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x491514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x491518: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x491518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x49151c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x49151cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_491520:
    // 0x491520: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x491520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x491524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x491524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x491528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x491528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49152c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x49152cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x491530: 0x3e00008  jr          $ra
    ctx->pc = 0x491530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491538u;
    // 0x491538: 0x0  nop
    ctx->pc = 0x491538u;
    // NOP
    // 0x49153c: 0x0  nop
    ctx->pc = 0x49153cu;
    // NOP
    ctx->pc = 0x491540u;
}
