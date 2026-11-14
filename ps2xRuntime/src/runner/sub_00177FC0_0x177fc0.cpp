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

// Function: sub_00177FC0
// Address: 0x177fc0 - 0x178010
void sub_00177FC0_0x177fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177FC0_0x177fc0");
#endif

    switch (ctx->pc) {
        case 0x177fd8u: goto label_177fd8;
        case 0x177fe8u: goto label_177fe8;
        default: break;
    }

    ctx->pc = 0x177fc0u;

    // 0x177fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177fc8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x177fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x177fcc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x177fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x177fd0: 0xc05e044  jal         func_178110
    ctx->pc = 0x177FD0u;
    SET_GPR_U32(ctx, 31, 0x177FD8u);
    ctx->pc = 0x178110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178110u, 0x177FD0u, 0x177FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177FD8u;
label_177fd8:
    // 0x177fd8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177fdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x177fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fe0: 0xc05e004  jal         func_178010
    ctx->pc = 0x177FE0u;
    SET_GPR_U32(ctx, 31, 0x177FE8u);
    ctx->pc = 0x178010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178010u, 0x177FE0u, 0x177FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177FE8u;
label_177fe8:
    // 0x177fe8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x177fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x177fec: 0x24633e48  addiu       $v1, $v1, 0x3E48
    ctx->pc = 0x177fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15944));
    // 0x177ff0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x177ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177ff4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x177ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x177ff8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x177ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178000: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x178000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x178004: 0x3e00008  jr          $ra
    ctx->pc = 0x178004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17800Cu;
    // 0x17800c: 0x0  nop
    ctx->pc = 0x17800cu;
    // NOP
    ctx->pc = 0x178010u;
}
