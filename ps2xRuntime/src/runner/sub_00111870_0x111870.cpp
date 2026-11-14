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

// Function: sub_00111870
// Address: 0x111870 - 0x1118b0
void sub_00111870_0x111870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111870_0x111870");
#endif

    switch (ctx->pc) {
        case 0x111898u: goto label_111898;
        default: break;
    }

    ctx->pc = 0x111870u;

    // 0x111870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x111870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x111874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x111878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11187c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11187cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x111880: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x111880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x111884: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x111884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111888: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x111888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11188c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x11188cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111890: 0xc04462c  jal         func_1118B0
    ctx->pc = 0x111890u;
    SET_GPR_U32(ctx, 31, 0x111898u);
    ctx->pc = 0x1118B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1118B0u, 0x111890u, 0x111898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111898u;
label_111898:
    // 0x111898: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x111898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11189c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11189cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1118a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1118a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1118a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1118A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1118A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1118ACu;
    // 0x1118ac: 0x0  nop
    ctx->pc = 0x1118acu;
    // NOP
    ctx->pc = 0x1118b0u;
}
