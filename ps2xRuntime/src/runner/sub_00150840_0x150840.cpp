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

// Function: sub_00150840
// Address: 0x150840 - 0x150880
void sub_00150840_0x150840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150840_0x150840");
#endif

    switch (ctx->pc) {
        case 0x150868u: goto label_150868;
        default: break;
    }

    ctx->pc = 0x150840u;

    // 0x150840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x150840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x150844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x150848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15084c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15084cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x150850: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x150850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x150854: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x150854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150858: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x150858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15085c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x15085cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150860: 0xc054220  jal         func_150880
    ctx->pc = 0x150860u;
    SET_GPR_U32(ctx, 31, 0x150868u);
    ctx->pc = 0x150880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150880u, 0x150860u, 0x150868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150868u;
label_150868:
    // 0x150868: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x150868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15086c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15086cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150870: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x150870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x150874: 0x3e00008  jr          $ra
    ctx->pc = 0x150874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15087Cu;
    // 0x15087c: 0x0  nop
    ctx->pc = 0x15087cu;
    // NOP
    ctx->pc = 0x150880u;
}
