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

// Function: sub_00451470
// Address: 0x451470 - 0x4514b0
void sub_00451470_0x451470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00451470_0x451470");
#endif

    switch (ctx->pc) {
        case 0x45148cu: goto label_45148c;
        default: break;
    }

    ctx->pc = 0x451470u;

    // 0x451470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x451470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x451474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x451474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x451478: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x451478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45147c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45147cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x451480: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x451480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x451484: 0xc11452c  jal         func_4514B0
    ctx->pc = 0x451484u;
    SET_GPR_U32(ctx, 31, 0x45148Cu);
    ctx->pc = 0x4514B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4514B0u, 0x451484u, 0x45148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45148Cu;
label_45148c:
    // 0x45148c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x451490: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x451490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x451494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x451494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x451498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x451498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45149c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x45149cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4514a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4514A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4514A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4514A8u;
    // 0x4514a8: 0x0  nop
    ctx->pc = 0x4514a8u;
    // NOP
    // 0x4514ac: 0x0  nop
    ctx->pc = 0x4514acu;
    // NOP
    ctx->pc = 0x4514b0u;
}
