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

// Function: sub_00275980
// Address: 0x275980 - 0x2759c0
void sub_00275980_0x275980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275980_0x275980");
#endif

    switch (ctx->pc) {
        case 0x27599cu: goto label_27599c;
        default: break;
    }

    ctx->pc = 0x275980u;

    // 0x275980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x275988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27598c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27598cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x275990: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275994: 0xc09d670  jal         func_2759C0
    ctx->pc = 0x275994u;
    SET_GPR_U32(ctx, 31, 0x27599Cu);
    ctx->pc = 0x2759C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2759C0u, 0x275994u, 0x27599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27599Cu;
label_27599c:
    // 0x27599c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x27599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2759a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2759a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2759a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2759a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2759a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2759a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2759ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2759acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2759b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2759B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2759B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2759B8u;
    // 0x2759b8: 0x0  nop
    ctx->pc = 0x2759b8u;
    // NOP
    // 0x2759bc: 0x0  nop
    ctx->pc = 0x2759bcu;
    // NOP
    ctx->pc = 0x2759c0u;
}
