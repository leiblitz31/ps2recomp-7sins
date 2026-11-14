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

// Function: sub_00216900
// Address: 0x216900 - 0x216950
void sub_00216900_0x216900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216900_0x216900");
#endif

    switch (ctx->pc) {
        case 0x216924u: goto label_216924;
        default: break;
    }

    ctx->pc = 0x216900u;

    // 0x216900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x216900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x216904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216908: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x216908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21690c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21690cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x216910: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x216910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x216914: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x216914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216918: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x216918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21691c: 0xc085a54  jal         func_216950
    ctx->pc = 0x21691Cu;
    SET_GPR_U32(ctx, 31, 0x216924u);
    ctx->pc = 0x216950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216950u, 0x21691Cu, 0x216924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216924u;
label_216924:
    // 0x216924: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x216924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216928: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21692c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x21692cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x216930: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216938: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x216938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21693c: 0x3e00008  jr          $ra
    ctx->pc = 0x21693Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21693Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216944u;
    // 0x216944: 0x0  nop
    ctx->pc = 0x216944u;
    // NOP
    // 0x216948: 0x0  nop
    ctx->pc = 0x216948u;
    // NOP
    // 0x21694c: 0x0  nop
    ctx->pc = 0x21694cu;
    // NOP
    ctx->pc = 0x216950u;
}
