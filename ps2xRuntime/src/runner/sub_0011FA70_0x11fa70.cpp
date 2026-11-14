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

// Function: sub_0011FA70
// Address: 0x11fa70 - 0x11fac0
void sub_0011FA70_0x11fa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FA70_0x11fa70");
#endif

    switch (ctx->pc) {
        case 0x11faacu: goto label_11faac;
        default: break;
    }

    ctx->pc = 0x11fa70u;

    // 0x11fa70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11fa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11fa74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11fa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11fa78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11fa7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11fa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11fa80: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x11fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x11fa84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fa88: 0x8c6300b0  lw          $v1, 0xB0($v1)
    ctx->pc = 0x11fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x11fa8c: 0x10030007  beq         $zero, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11FA8Cu;
    {
        const bool branch_taken_0x11fa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x11fa8c) {
            ctx->pc = 0x11FAACu;
            goto label_11faac;
        }
    }
    ctx->pc = 0x11FA94u;
    // 0x11fa94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fa98: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x11fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x11fa9c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x11fa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11faa0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x11faa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11faa4: 0xc060b28  jal         func_182CA0
    ctx->pc = 0x11FAA4u;
    SET_GPR_U32(ctx, 31, 0x11FAACu);
    ctx->pc = 0x182CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182CA0u, 0x11FAA4u, 0x11FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FAACu;
label_11faac:
    // 0x11faac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11faacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fab0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x11fab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11fab4: 0x3e00008  jr          $ra
    ctx->pc = 0x11FAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FABCu;
    // 0x11fabc: 0x0  nop
    ctx->pc = 0x11fabcu;
    // NOP
    ctx->pc = 0x11fac0u;
}
