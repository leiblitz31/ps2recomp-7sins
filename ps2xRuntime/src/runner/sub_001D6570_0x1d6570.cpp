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

// Function: sub_001D6570
// Address: 0x1d6570 - 0x1d65f0
void sub_001D6570_0x1d6570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6570_0x1d6570");
#endif

    switch (ctx->pc) {
        case 0x1d65a4u: goto label_1d65a4;
        case 0x1d65b4u: goto label_1d65b4;
        case 0x1d65d4u: goto label_1d65d4;
        default: break;
    }

    ctx->pc = 0x1d6570u;

    // 0x1d6570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d657c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d657cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d6580: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6584: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D6584u;
    {
        const bool branch_taken_0x1d6584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6584) {
            ctx->pc = 0x1D65D4u;
            goto label_1d65d4;
        }
    }
    ctx->pc = 0x1D658Cu;
    // 0x1d658c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d658cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6590: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6594: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d6594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6598: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1d6598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d659c: 0xc0759a4  jal         func_1D6690
    ctx->pc = 0x1D659Cu;
    SET_GPR_U32(ctx, 31, 0x1D65A4u);
    ctx->pc = 0x1D6690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6690u, 0x1D659Cu, 0x1D65A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D65A4u;
label_1d65a4:
    // 0x1d65a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d65a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d65a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d65a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d65ac: 0xc07597c  jal         func_1D65F0
    ctx->pc = 0x1D65ACu;
    SET_GPR_U32(ctx, 31, 0x1D65B4u);
    ctx->pc = 0x1D65F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D65F0u, 0x1D65ACu, 0x1D65B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D65B4u;
label_1d65b4:
    // 0x1d65b4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d65b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d65b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d65b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d65bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d65bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d65c0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D65C0u;
    {
        const bool branch_taken_0x1d65c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d65c0) {
            ctx->pc = 0x1D65D4u;
            goto label_1d65d4;
        }
    }
    ctx->pc = 0x1D65C8u;
    // 0x1d65c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d65c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d65cc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1D65CCu;
    SET_GPR_U32(ctx, 31, 0x1D65D4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D65CCu, 0x1D65D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D65D4u;
label_1d65d4:
    // 0x1d65d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d65d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d65d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d65dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d65dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d65e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D65E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D65E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D65E8u;
    // 0x1d65e8: 0x0  nop
    ctx->pc = 0x1d65e8u;
    // NOP
    // 0x1d65ec: 0x0  nop
    ctx->pc = 0x1d65ecu;
    // NOP
    ctx->pc = 0x1d65f0u;
}
