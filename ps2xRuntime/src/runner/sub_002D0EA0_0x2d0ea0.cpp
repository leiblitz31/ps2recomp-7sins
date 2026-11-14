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

// Function: sub_002D0EA0
// Address: 0x2d0ea0 - 0x2d0ee0
void sub_002D0EA0_0x2d0ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0EA0_0x2d0ea0");
#endif

    switch (ctx->pc) {
        case 0x2d0ebcu: goto label_2d0ebc;
        default: break;
    }

    ctx->pc = 0x2d0ea0u;

    // 0x2d0ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0ea8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d0ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d0eac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d0eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d0eb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0eb4: 0xc068ea0  jal         func_1A3A80
    ctx->pc = 0x2D0EB4u;
    SET_GPR_U32(ctx, 31, 0x2D0EBCu);
    ctx->pc = 0x1A3A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A80u, 0x2D0EB4u, 0x2D0EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0EBCu;
label_2d0ebc:
    // 0x2d0ebc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d0ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0ec0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d0ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0ec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0ecc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d0eccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0ED8u;
    // 0x2d0ed8: 0x0  nop
    ctx->pc = 0x2d0ed8u;
    // NOP
    // 0x2d0edc: 0x0  nop
    ctx->pc = 0x2d0edcu;
    // NOP
    ctx->pc = 0x2d0ee0u;
}
