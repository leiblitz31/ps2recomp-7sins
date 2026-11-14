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

// Function: sub_004529D0
// Address: 0x4529d0 - 0x452a10
void sub_004529D0_0x4529d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004529D0_0x4529d0");
#endif

    switch (ctx->pc) {
        case 0x4529ecu: goto label_4529ec;
        default: break;
    }

    ctx->pc = 0x4529d0u;

    // 0x4529d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4529d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4529d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4529d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4529d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4529d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4529dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4529dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4529e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4529e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4529e4: 0xc114a84  jal         func_452A10
    ctx->pc = 0x4529E4u;
    SET_GPR_U32(ctx, 31, 0x4529ECu);
    ctx->pc = 0x452A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452A10u, 0x4529E4u, 0x4529ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4529ECu;
label_4529ec:
    // 0x4529ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4529ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4529f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4529f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4529f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4529f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4529f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4529f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4529fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4529fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x452a00: 0x3e00008  jr          $ra
    ctx->pc = 0x452A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452A08u;
    // 0x452a08: 0x0  nop
    ctx->pc = 0x452a08u;
    // NOP
    // 0x452a0c: 0x0  nop
    ctx->pc = 0x452a0cu;
    // NOP
    ctx->pc = 0x452a10u;
}
