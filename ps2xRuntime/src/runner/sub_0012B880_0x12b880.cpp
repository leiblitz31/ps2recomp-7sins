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

// Function: sub_0012B880
// Address: 0x12b880 - 0x12b8c0
void sub_0012B880_0x12b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B880_0x12b880");
#endif

    switch (ctx->pc) {
        case 0x12b89cu: goto label_12b89c;
        default: break;
    }

    ctx->pc = 0x12b880u;

    // 0x12b880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12b888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12b88c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x12b88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x12b890: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12b890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b894: 0xc04ae30  jal         func_12B8C0
    ctx->pc = 0x12B894u;
    SET_GPR_U32(ctx, 31, 0x12B89Cu);
    ctx->pc = 0x12B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B8C0u, 0x12B894u, 0x12B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B89Cu;
label_12b89c:
    // 0x12b89c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b8a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12b8a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12b8a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b8ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12b8acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x12B8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B8B8u;
    // 0x12b8b8: 0x0  nop
    ctx->pc = 0x12b8b8u;
    // NOP
    // 0x12b8bc: 0x0  nop
    ctx->pc = 0x12b8bcu;
    // NOP
    ctx->pc = 0x12b8c0u;
}
