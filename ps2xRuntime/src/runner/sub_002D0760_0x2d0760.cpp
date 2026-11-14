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

// Function: sub_002D0760
// Address: 0x2d0760 - 0x2d07b0
void sub_002D0760_0x2d0760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0760_0x2d0760");
#endif

    switch (ctx->pc) {
        case 0x2d0784u: goto label_2d0784;
        default: break;
    }

    ctx->pc = 0x2d0760u;

    // 0x2d0760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d0760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d0764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0768: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d0768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d076c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d076cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d0770: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2d0770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2d0774: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0778: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2d0778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d077c: 0xc0b41ec  jal         func_2D07B0
    ctx->pc = 0x2D077Cu;
    SET_GPR_U32(ctx, 31, 0x2D0784u);
    ctx->pc = 0x2D07B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D07B0u, 0x2D077Cu, 0x2D0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0784u;
label_2d0784:
    // 0x2d0784: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2d0784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0788: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d078c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d078cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d0790: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0798: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d0798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d079c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D079Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D079Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D07A4u;
    // 0x2d07a4: 0x0  nop
    ctx->pc = 0x2d07a4u;
    // NOP
    // 0x2d07a8: 0x0  nop
    ctx->pc = 0x2d07a8u;
    // NOP
    // 0x2d07ac: 0x0  nop
    ctx->pc = 0x2d07acu;
    // NOP
    ctx->pc = 0x2d07b0u;
}
