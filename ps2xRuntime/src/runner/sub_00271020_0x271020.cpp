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

// Function: sub_00271020
// Address: 0x271020 - 0x271080
void sub_00271020_0x271020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271020_0x271020");
#endif

    switch (ctx->pc) {
        case 0x27104cu: goto label_27104c;
        case 0x271068u: goto label_271068;
        default: break;
    }

    ctx->pc = 0x271020u;

    // 0x271020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x271020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x271024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x271024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x271028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x271028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27102c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271030: 0x90420041  lbu         $v0, 0x41($v0)
    ctx->pc = 0x271030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 65)));
    // 0x271034: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x271034u;
    {
        const bool branch_taken_0x271034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271034) {
            ctx->pc = 0x271058u;
            goto label_271058;
        }
    }
    ctx->pc = 0x27103Cu;
    // 0x27103c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271040: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x271040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x271044: 0xc09c290  jal         func_270A40
    ctx->pc = 0x271044u;
    SET_GPR_U32(ctx, 31, 0x27104Cu);
    ctx->pc = 0x270A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270A40u, 0x271044u, 0x27104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27104Cu;
label_27104c:
    // 0x27104c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x271050: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x271050u;
    {
        const bool branch_taken_0x271050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271050) {
            ctx->pc = 0x271068u;
            goto label_271068;
        }
    }
    ctx->pc = 0x271058u;
label_271058:
    // 0x271058: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x271058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27105c: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x27105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x271060: 0xc09c290  jal         func_270A40
    ctx->pc = 0x271060u;
    SET_GPR_U32(ctx, 31, 0x271068u);
    ctx->pc = 0x270A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270A40u, 0x271060u, 0x271068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271068u;
label_271068:
    // 0x271068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x271068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27106c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27106cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x271070: 0x3e00008  jr          $ra
    ctx->pc = 0x271070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271078u;
    // 0x271078: 0x0  nop
    ctx->pc = 0x271078u;
    // NOP
    // 0x27107c: 0x0  nop
    ctx->pc = 0x27107cu;
    // NOP
    ctx->pc = 0x271080u;
}
