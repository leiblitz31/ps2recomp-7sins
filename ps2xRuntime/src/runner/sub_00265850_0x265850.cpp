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

// Function: sub_00265850
// Address: 0x265850 - 0x2658d0
void sub_00265850_0x265850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265850_0x265850");
#endif

    switch (ctx->pc) {
        case 0x265884u: goto label_265884;
        case 0x265894u: goto label_265894;
        case 0x2658b4u: goto label_2658b4;
        default: break;
    }

    ctx->pc = 0x265850u;

    // 0x265850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265858: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x265858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26585c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x26585cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x265860: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265864: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x265864u;
    {
        const bool branch_taken_0x265864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265864) {
            ctx->pc = 0x2658B4u;
            goto label_2658b4;
        }
    }
    ctx->pc = 0x26586Cu;
    // 0x26586c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x26586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265874: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x265874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265878: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x265878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26587c: 0xc099660  jal         func_265980
    ctx->pc = 0x26587Cu;
    SET_GPR_U32(ctx, 31, 0x265884u);
    ctx->pc = 0x265980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265980u, 0x26587Cu, 0x265884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265884u;
label_265884:
    // 0x265884: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x265884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26588c: 0xc099634  jal         func_2658D0
    ctx->pc = 0x26588Cu;
    SET_GPR_U32(ctx, 31, 0x265894u);
    ctx->pc = 0x2658D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2658D0u, 0x26588Cu, 0x265894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265894u;
label_265894:
    // 0x265894: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x265894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265898: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x265898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26589c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26589cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2658a0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2658A0u;
    {
        const bool branch_taken_0x2658a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2658a0) {
            ctx->pc = 0x2658B4u;
            goto label_2658b4;
        }
    }
    ctx->pc = 0x2658A8u;
    // 0x2658a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2658a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2658ac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2658ACu;
    SET_GPR_U32(ctx, 31, 0x2658B4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2658ACu, 0x2658B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2658B4u;
label_2658b4:
    // 0x2658b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2658b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2658b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2658b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2658bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2658bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2658c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2658C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2658C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2658C8u;
    // 0x2658c8: 0x0  nop
    ctx->pc = 0x2658c8u;
    // NOP
    // 0x2658cc: 0x0  nop
    ctx->pc = 0x2658ccu;
    // NOP
    ctx->pc = 0x2658d0u;
}
