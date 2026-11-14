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

// Function: sub_00259FF0
// Address: 0x259ff0 - 0x25a030
void sub_00259FF0_0x259ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259FF0_0x259ff0");
#endif

    switch (ctx->pc) {
        case 0x25a00cu: goto label_25a00c;
        default: break;
    }

    ctx->pc = 0x259ff0u;

    // 0x259ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259ff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x259ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x259ffc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x259ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25a000: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25a000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a004: 0xc09680c  jal         func_25A030
    ctx->pc = 0x25A004u;
    SET_GPR_U32(ctx, 31, 0x25A00Cu);
    ctx->pc = 0x25A030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A030u, 0x25A004u, 0x25A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A00Cu;
label_25a00c:
    // 0x25a00c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a010: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25a010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a01c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25a01cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25a020: 0x3e00008  jr          $ra
    ctx->pc = 0x25A020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A028u;
    // 0x25a028: 0x0  nop
    ctx->pc = 0x25a028u;
    // NOP
    // 0x25a02c: 0x0  nop
    ctx->pc = 0x25a02cu;
    // NOP
    ctx->pc = 0x25a030u;
}
