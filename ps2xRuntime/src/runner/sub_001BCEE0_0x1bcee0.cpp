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

// Function: sub_001BCEE0
// Address: 0x1bcee0 - 0x1bcf60
void sub_001BCEE0_0x1bcee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCEE0_0x1bcee0");
#endif

    switch (ctx->pc) {
        case 0x1bcf14u: goto label_1bcf14;
        case 0x1bcf24u: goto label_1bcf24;
        case 0x1bcf44u: goto label_1bcf44;
        default: break;
    }

    ctx->pc = 0x1bcee0u;

    // 0x1bcee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bcee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bcee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bcee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bcee8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1bcee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1bceec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1bceecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1bcef0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bcef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcef4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BCEF4u;
    {
        const bool branch_taken_0x1bcef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcef4) {
            ctx->pc = 0x1BCF44u;
            goto label_1bcf44;
        }
    }
    ctx->pc = 0x1BCEFCu;
    // 0x1bcefc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1bcefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bcf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bcf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bcf08: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bcf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bcf0c: 0xc06f404  jal         func_1BD010
    ctx->pc = 0x1BCF0Cu;
    SET_GPR_U32(ctx, 31, 0x1BCF14u);
    ctx->pc = 0x1BD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD010u, 0x1BCF0Cu, 0x1BCF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF14u;
label_1bcf14:
    // 0x1bcf14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bcf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bcf18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf1c: 0xc06f3d8  jal         func_1BCF60
    ctx->pc = 0x1BCF1Cu;
    SET_GPR_U32(ctx, 31, 0x1BCF24u);
    ctx->pc = 0x1BCF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCF60u, 0x1BCF1Cu, 0x1BCF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF24u;
label_1bcf24:
    // 0x1bcf24: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1bcf24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bcf28: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bcf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bcf2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1bcf2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1bcf30: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCF30u;
    {
        const bool branch_taken_0x1bcf30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1bcf30) {
            ctx->pc = 0x1BCF44u;
            goto label_1bcf44;
        }
    }
    ctx->pc = 0x1BCF38u;
    // 0x1bcf38: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bcf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf3c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1BCF3Cu;
    SET_GPR_U32(ctx, 31, 0x1BCF44u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1BCF3Cu, 0x1BCF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF44u;
label_1bcf44:
    // 0x1bcf44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bcf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bcf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bcf4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1bcf4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bcf50: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCF58u;
    // 0x1bcf58: 0x0  nop
    ctx->pc = 0x1bcf58u;
    // NOP
    // 0x1bcf5c: 0x0  nop
    ctx->pc = 0x1bcf5cu;
    // NOP
    ctx->pc = 0x1bcf60u;
}
