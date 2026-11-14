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

// Function: sub_0018C3E0
// Address: 0x18c3e0 - 0x18c460
void sub_0018C3E0_0x18c3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C3E0_0x18c3e0");
#endif

    switch (ctx->pc) {
        case 0x18c414u: goto label_18c414;
        case 0x18c424u: goto label_18c424;
        case 0x18c444u: goto label_18c444;
        default: break;
    }

    ctx->pc = 0x18c3e0u;

    // 0x18c3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c3e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18c3ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x18c3ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x18c3f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c3f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18C3F4u;
    {
        const bool branch_taken_0x18c3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c3f4) {
            ctx->pc = 0x18C444u;
            goto label_18c444;
        }
    }
    ctx->pc = 0x18C3FCu;
    // 0x18c3fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c400: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c404: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18c404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c408: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x18c408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18c40c: 0xc063144  jal         func_18C510
    ctx->pc = 0x18C40Cu;
    SET_GPR_U32(ctx, 31, 0x18C414u);
    ctx->pc = 0x18C510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C510u, 0x18C40Cu, 0x18C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C414u;
label_18c414:
    // 0x18c414: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18c418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c41c: 0xc063118  jal         func_18C460
    ctx->pc = 0x18C41Cu;
    SET_GPR_U32(ctx, 31, 0x18C424u);
    ctx->pc = 0x18C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C460u, 0x18C41Cu, 0x18C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C424u;
label_18c424:
    // 0x18c424: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x18c424u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c428: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c42c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c42cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c430: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C430u;
    {
        const bool branch_taken_0x18c430 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18c430) {
            ctx->pc = 0x18C444u;
            goto label_18c444;
        }
    }
    ctx->pc = 0x18C438u;
    // 0x18c438: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c43c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x18C43Cu;
    SET_GPR_U32(ctx, 31, 0x18C444u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x18C43Cu, 0x18C444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C444u;
label_18c444:
    // 0x18c444: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c44c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18c44cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18c450: 0x3e00008  jr          $ra
    ctx->pc = 0x18C450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C458u;
    // 0x18c458: 0x0  nop
    ctx->pc = 0x18c458u;
    // NOP
    // 0x18c45c: 0x0  nop
    ctx->pc = 0x18c45cu;
    // NOP
    ctx->pc = 0x18c460u;
}
