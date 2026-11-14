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

// Function: sub_002BF370
// Address: 0x2bf370 - 0x2bf3b0
void sub_002BF370_0x2bf370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF370_0x2bf370");
#endif

    switch (ctx->pc) {
        case 0x2bf38cu: goto label_2bf38c;
        default: break;
    }

    ctx->pc = 0x2bf370u;

    // 0x2bf370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bf370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bf374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bf378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bf37c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bf37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bf380: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bf380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf384: 0xc0afc98  jal         func_2BF260
    ctx->pc = 0x2BF384u;
    SET_GPR_U32(ctx, 31, 0x2BF38Cu);
    ctx->pc = 0x2BF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF260u, 0x2BF384u, 0x2BF38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF38Cu;
label_2bf38c:
    // 0x2bf38c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2bf38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf390: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bf390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bf394: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf39c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bf39cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bf3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF3A8u;
    // 0x2bf3a8: 0x0  nop
    ctx->pc = 0x2bf3a8u;
    // NOP
    // 0x2bf3ac: 0x0  nop
    ctx->pc = 0x2bf3acu;
    // NOP
    ctx->pc = 0x2bf3b0u;
}
