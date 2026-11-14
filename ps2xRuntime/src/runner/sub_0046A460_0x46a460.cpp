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

// Function: sub_0046A460
// Address: 0x46a460 - 0x46a4e0
void sub_0046A460_0x46a460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A460_0x46a460");
#endif

    switch (ctx->pc) {
        case 0x46a498u: goto label_46a498;
        case 0x46a4b0u: goto label_46a4b0;
        case 0x46a4c8u: goto label_46a4c8;
        default: break;
    }

    ctx->pc = 0x46a460u;

    // 0x46a460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46a460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46a464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a468: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46a468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46a46c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46a470: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46a470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46a474: 0x24636cd8  addiu       $v1, $v1, 0x6CD8
    ctx->pc = 0x46a474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27864));
    // 0x46a478: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a47c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46a480: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46a480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a484: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46a484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a488: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x46a488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x46a48c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x46a48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46a490: 0xc042844  jal         func_10A110
    ctx->pc = 0x46A490u;
    SET_GPR_U32(ctx, 31, 0x46A498u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x46A490u, 0x46A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A498u;
label_46a498:
    // 0x46a498: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46a498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a49c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a4a0: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x46a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x46a4a4: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x46a4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x46a4a8: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x46A4A8u;
    SET_GPR_U32(ctx, 31, 0x46A4B0u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x46A4A8u, 0x46A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A4B0u;
label_46a4b0:
    // 0x46a4b0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a4b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a4b8: 0x2464001c  addiu       $a0, $v1, 0x1C
    ctx->pc = 0x46a4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x46a4bc: 0x2445001c  addiu       $a1, $v0, 0x1C
    ctx->pc = 0x46a4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x46a4c0: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x46A4C0u;
    SET_GPR_U32(ctx, 31, 0x46A4C8u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x46A4C0u, 0x46A4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A4C8u;
label_46a4c8:
    // 0x46a4c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a4cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a4d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46a4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46a4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x46A4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A4DCu;
    // 0x46a4dc: 0x0  nop
    ctx->pc = 0x46a4dcu;
    // NOP
    ctx->pc = 0x46a4e0u;
}
