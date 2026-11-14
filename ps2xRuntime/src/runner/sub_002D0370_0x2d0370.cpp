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

// Function: sub_002D0370
// Address: 0x2d0370 - 0x2d03f0
void sub_002D0370_0x2d0370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0370_0x2d0370");
#endif

    switch (ctx->pc) {
        case 0x2d03a4u: goto label_2d03a4;
        case 0x2d03b4u: goto label_2d03b4;
        case 0x2d03d4u: goto label_2d03d4;
        default: break;
    }

    ctx->pc = 0x2d0370u;

    // 0x2d0370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d0378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d037c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2d037cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d0380: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0384: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D0384u;
    {
        const bool branch_taken_0x2d0384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0384) {
            ctx->pc = 0x2D03D4u;
            goto label_2d03d4;
        }
    }
    ctx->pc = 0x2D038Cu;
    // 0x2d038c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2d038cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0390: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0394: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d0394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d0398: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d0398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d039c: 0xc0b4128  jal         func_2D04A0
    ctx->pc = 0x2D039Cu;
    SET_GPR_U32(ctx, 31, 0x2D03A4u);
    ctx->pc = 0x2D04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D04A0u, 0x2D039Cu, 0x2D03A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D03A4u;
label_2d03a4:
    // 0x2d03a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d03a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d03a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d03a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d03ac: 0xc0b40fc  jal         func_2D03F0
    ctx->pc = 0x2D03ACu;
    SET_GPR_U32(ctx, 31, 0x2D03B4u);
    ctx->pc = 0x2D03F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03F0u, 0x2D03ACu, 0x2D03B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D03B4u;
label_2d03b4:
    // 0x2d03b4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2d03b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d03b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d03b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d03bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d03bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d03c0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D03C0u;
    {
        const bool branch_taken_0x2d03c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d03c0) {
            ctx->pc = 0x2D03D4u;
            goto label_2d03d4;
        }
    }
    ctx->pc = 0x2D03C8u;
    // 0x2d03c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d03c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d03cc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2D03CCu;
    SET_GPR_U32(ctx, 31, 0x2D03D4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2D03CCu, 0x2D03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D03D4u;
label_2d03d4:
    // 0x2d03d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d03d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d03d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d03d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d03dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d03dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d03e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D03E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D03E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D03E8u;
    // 0x2d03e8: 0x0  nop
    ctx->pc = 0x2d03e8u;
    // NOP
    // 0x2d03ec: 0x0  nop
    ctx->pc = 0x2d03ecu;
    // NOP
    ctx->pc = 0x2d03f0u;
}
