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

// Function: sub_00178010
// Address: 0x178010 - 0x178050
void sub_00178010_0x178010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178010_0x178010");
#endif

    switch (ctx->pc) {
        case 0x178030u: goto label_178030;
        default: break;
    }

    ctx->pc = 0x178010u;

    // 0x178010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178018: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x178018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17801c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17801cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x178020: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x178020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178024: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x178024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178028: 0xc05e014  jal         func_178050
    ctx->pc = 0x178028u;
    SET_GPR_U32(ctx, 31, 0x178030u);
    ctx->pc = 0x178050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178050u, 0x178028u, 0x178030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178030u;
label_178030:
    // 0x178030: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x178030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178038: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x178038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17803c: 0x3e00008  jr          $ra
    ctx->pc = 0x17803Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17803Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178044u;
    // 0x178044: 0x0  nop
    ctx->pc = 0x178044u;
    // NOP
    // 0x178048: 0x0  nop
    ctx->pc = 0x178048u;
    // NOP
    // 0x17804c: 0x0  nop
    ctx->pc = 0x17804cu;
    // NOP
    ctx->pc = 0x178050u;
}
