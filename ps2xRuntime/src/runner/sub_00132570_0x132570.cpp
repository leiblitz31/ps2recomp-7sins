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

// Function: sub_00132570
// Address: 0x132570 - 0x1325b0
void sub_00132570_0x132570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132570_0x132570");
#endif

    switch (ctx->pc) {
        case 0x132588u: goto label_132588;
        case 0x132598u: goto label_132598;
        default: break;
    }

    ctx->pc = 0x132570u;

    // 0x132570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x132570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x132574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132578: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x132578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13257c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x13257cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x132580: 0xc04ca30  jal         func_1328C0
    ctx->pc = 0x132580u;
    SET_GPR_U32(ctx, 31, 0x132588u);
    ctx->pc = 0x1328C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328C0u, 0x132580u, 0x132588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132588u;
label_132588:
    // 0x132588: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x132588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13258c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13258cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132590: 0xc04c9f0  jal         func_1327C0
    ctx->pc = 0x132590u;
    SET_GPR_U32(ctx, 31, 0x132598u);
    ctx->pc = 0x1327C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327C0u, 0x132590u, 0x132598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132598u;
label_132598:
    // 0x132598: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x132598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13259c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13259cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1325a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1325a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1325a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1325A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1325A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1325ACu;
    // 0x1325ac: 0x0  nop
    ctx->pc = 0x1325acu;
    // NOP
    ctx->pc = 0x1325b0u;
}
