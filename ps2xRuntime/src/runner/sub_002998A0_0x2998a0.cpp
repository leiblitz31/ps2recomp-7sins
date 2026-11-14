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

// Function: sub_002998A0
// Address: 0x2998a0 - 0x299930
void sub_002998A0_0x2998a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002998A0_0x2998a0");
#endif

    switch (ctx->pc) {
        case 0x2998ecu: goto label_2998ec;
        case 0x299914u: goto label_299914;
        default: break;
    }

    ctx->pc = 0x2998a0u;

    // 0x2998a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2998a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2998a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2998a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2998a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2998a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2998ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2998acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2998b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2998b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2998b4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2998B4u;
    {
        const bool branch_taken_0x2998b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2998b4) {
            ctx->pc = 0x299914u;
            goto label_299914;
        }
    }
    ctx->pc = 0x2998BCu;
    // 0x2998bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2998bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2998c0: 0x24636140  addiu       $v1, $v1, 0x6140
    ctx->pc = 0x2998c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24896));
    // 0x2998c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2998c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2998c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2998c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2998cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2998ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2998d0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2998d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2998d4: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2998D4u;
    {
        const bool branch_taken_0x2998d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2998d4) {
            ctx->pc = 0x2998F4u;
            goto label_2998f4;
        }
    }
    ctx->pc = 0x2998DCu;
    // 0x2998dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2998dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2998e0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2998e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2998e4: 0xc0e39c0  jal         func_38E700
    ctx->pc = 0x2998E4u;
    SET_GPR_U32(ctx, 31, 0x2998ECu);
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x2998E4u, 0x2998ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2998ECu;
label_2998ec:
    // 0x2998ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2998ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2998f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2998f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2998f4:
    // 0x2998f4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2998f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2998f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2998f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2998fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2998fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x299900: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299900u;
    {
        const bool branch_taken_0x299900 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x299900) {
            ctx->pc = 0x299914u;
            goto label_299914;
        }
    }
    ctx->pc = 0x299908u;
    // 0x299908: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x299908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29990c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x29990Cu;
    SET_GPR_U32(ctx, 31, 0x299914u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x29990Cu, 0x299914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299914u;
label_299914:
    // 0x299914: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29991c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29991cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x299920: 0x3e00008  jr          $ra
    ctx->pc = 0x299920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299928u;
    // 0x299928: 0x0  nop
    ctx->pc = 0x299928u;
    // NOP
    // 0x29992c: 0x0  nop
    ctx->pc = 0x29992cu;
    // NOP
    ctx->pc = 0x299930u;
}
