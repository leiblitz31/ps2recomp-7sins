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

// Function: sub_00260090
// Address: 0x260090 - 0x2600f0
void sub_00260090_0x260090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260090_0x260090");
#endif

    switch (ctx->pc) {
        case 0x2600acu: goto label_2600ac;
        case 0x2600c0u: goto label_2600c0;
        case 0x2600ccu: goto label_2600cc;
        default: break;
    }

    ctx->pc = 0x260090u;

    // 0x260090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x260090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x260094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x260094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x260098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x260098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26009c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26009cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2600a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2600a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2600a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2600A4u;
    {
        const bool branch_taken_0x2600a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2600a4) {
            ctx->pc = 0x2600D0u;
            goto label_2600d0;
        }
    }
    ctx->pc = 0x2600ACu;
label_2600ac:
    // 0x2600ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2600acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2600b0: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2600b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2600b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2600b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2600b8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2600B8u;
    SET_GPR_U32(ctx, 31, 0x2600C0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2600B8u, 0x2600C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2600C0u;
label_2600c0:
    // 0x2600c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2600c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2600c4: 0xc098594  jal         func_261650
    ctx->pc = 0x2600C4u;
    SET_GPR_U32(ctx, 31, 0x2600CCu);
    ctx->pc = 0x261650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261650u, 0x2600C4u, 0x2600CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2600CCu;
label_2600cc:
    // 0x2600cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2600ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2600d0:
    // 0x2600d0: 0x2e030014  sltiu       $v1, $s0, 0x14
    ctx->pc = 0x2600d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2600d4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2600D4u;
    {
        const bool branch_taken_0x2600d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2600d4) {
            ctx->pc = 0x2600ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2600ac;
        }
    }
    ctx->pc = 0x2600DCu;
    // 0x2600dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2600dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2600e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2600e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2600e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2600e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2600e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2600E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2600E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2600F0u;
}
