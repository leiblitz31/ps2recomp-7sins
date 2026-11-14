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

// Function: sub_00177780
// Address: 0x177780 - 0x1777c0
void sub_00177780_0x177780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177780_0x177780");
#endif

    switch (ctx->pc) {
        case 0x17779cu: goto label_17779c;
        default: break;
    }

    ctx->pc = 0x177780u;

    // 0x177780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177788: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x177788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17778c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17778cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x177790: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x177790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177794: 0xc05ddf0  jal         func_1777C0
    ctx->pc = 0x177794u;
    SET_GPR_U32(ctx, 31, 0x17779Cu);
    ctx->pc = 0x1777C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1777C0u, 0x177794u, 0x17779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17779Cu;
label_17779c:
    // 0x17779c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17779cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1777a0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1777a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1777a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1777a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1777a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1777a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1777ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1777acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1777b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1777b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1777b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1777b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1777b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1777B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1777B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1777C0u;
}
