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

// Function: sub_001A6F50
// Address: 0x1a6f50 - 0x1a6fe0
void sub_001A6F50_0x1a6f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6F50_0x1a6f50");
#endif

    switch (ctx->pc) {
        case 0x1a6f70u: goto label_1a6f70;
        case 0x1a6f90u: goto label_1a6f90;
        case 0x1a6fa8u: goto label_1a6fa8;
        default: break;
    }

    ctx->pc = 0x1a6f50u;

    // 0x1a6f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6f58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a6f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a6f5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a6f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a6f60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a6f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6f64: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6f68: 0xc069d10  jal         func_1A7440
    ctx->pc = 0x1A6F68u;
    SET_GPR_U32(ctx, 31, 0x1A6F70u);
    ctx->pc = 0x1A7440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7440u, 0x1A6F68u, 0x1A6F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F70u;
label_1a6f70:
    // 0x1a6f70: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A6F70u;
    {
        const bool branch_taken_0x1a6f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f70) {
            ctx->pc = 0x1A6FC0u;
            goto label_1a6fc0;
        }
    }
    ctx->pc = 0x1A6F78u;
    // 0x1a6f78: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6f7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6f80: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1a6f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1a6f84: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x1a6f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1a6f88: 0xc05614c  jal         func_158530
    ctx->pc = 0x1A6F88u;
    SET_GPR_U32(ctx, 31, 0x1A6F90u);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x1A6F88u, 0x1A6F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F90u;
label_1a6f90:
    // 0x1a6f90: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a6f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6f94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6f98: 0x2464001c  addiu       $a0, $v1, 0x1C
    ctx->pc = 0x1a6f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x1a6f9c: 0x2445002c  addiu       $a1, $v0, 0x2C
    ctx->pc = 0x1a6f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x1a6fa0: 0xc069bf8  jal         func_1A6FE0
    ctx->pc = 0x1A6FA0u;
    SET_GPR_U32(ctx, 31, 0x1A6FA8u);
    ctx->pc = 0x1A6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FE0u, 0x1A6FA0u, 0x1A6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FA8u;
label_1a6fa8:
    // 0x1a6fa8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a6fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a6fac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6fb0: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1a6fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x1a6fb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6fb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6FB8u;
    {
        const bool branch_taken_0x1a6fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6fb8) {
            ctx->pc = 0x1A6FC4u;
            goto label_1a6fc4;
        }
    }
    ctx->pc = 0x1A6FC0u;
label_1a6fc0:
    // 0x1a6fc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6fc4:
    // 0x1a6fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6fc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a6fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a6fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6FD4u;
    // 0x1a6fd4: 0x0  nop
    ctx->pc = 0x1a6fd4u;
    // NOP
    // 0x1a6fd8: 0x0  nop
    ctx->pc = 0x1a6fd8u;
    // NOP
    // 0x1a6fdc: 0x0  nop
    ctx->pc = 0x1a6fdcu;
    // NOP
    ctx->pc = 0x1a6fe0u;
}
