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

// Function: sub_002B8580
// Address: 0x2b8580 - 0x2b85f0
void sub_002B8580_0x2b8580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8580_0x2b8580");
#endif

    switch (ctx->pc) {
        case 0x2b859cu: goto label_2b859c;
        case 0x2b85c0u: goto label_2b85c0;
        case 0x2b85d4u: goto label_2b85d4;
        default: break;
    }

    ctx->pc = 0x2b8580u;

    // 0x2b8580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b8588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b858c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8590: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b8590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b8594: 0xc0adf00  jal         func_2B7C00
    ctx->pc = 0x2B8594u;
    SET_GPR_U32(ctx, 31, 0x2B859Cu);
    ctx->pc = 0x2B7C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C00u, 0x2B8594u, 0x2B859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B859Cu;
label_2b859c:
    // 0x2b859c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B859Cu;
    {
        const bool branch_taken_0x2b859c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b859c) {
            ctx->pc = 0x2B85B0u;
            goto label_2b85b0;
        }
    }
    ctx->pc = 0x2B85A4u;
    // 0x2b85a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b85a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b85a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B85A8u;
    {
        const bool branch_taken_0x2b85a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b85a8) {
            ctx->pc = 0x2B85D8u;
            goto label_2b85d8;
        }
    }
    ctx->pc = 0x2B85B0u;
label_2b85b0:
    // 0x2b85b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b85b4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b85b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b85b8: 0xc0ae010  jal         func_2B8040
    ctx->pc = 0x2B85B8u;
    SET_GPR_U32(ctx, 31, 0x2B85C0u);
    ctx->pc = 0x2B8040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8040u, 0x2B85B8u, 0x2B85C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B85C0u;
label_2b85c0:
    // 0x2b85c0: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2b85c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b85c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b85c8: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b85c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b85cc: 0xc0ae138  jal         func_2B84E0
    ctx->pc = 0x2B85CCu;
    SET_GPR_U32(ctx, 31, 0x2B85D4u);
    ctx->pc = 0x2B84E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B84E0u, 0x2B85CCu, 0x2B85D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B85D4u;
label_2b85d4:
    // 0x2b85d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b85d8:
    // 0x2b85d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b85d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b85dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b85dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b85e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B85E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B85E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B85E8u;
    // 0x2b85e8: 0x0  nop
    ctx->pc = 0x2b85e8u;
    // NOP
    // 0x2b85ec: 0x0  nop
    ctx->pc = 0x2b85ecu;
    // NOP
    ctx->pc = 0x2b85f0u;
}
