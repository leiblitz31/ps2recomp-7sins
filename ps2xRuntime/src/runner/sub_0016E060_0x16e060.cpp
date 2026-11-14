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

// Function: sub_0016E060
// Address: 0x16e060 - 0x16e0e0
void sub_0016E060_0x16e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E060_0x16e060");
#endif

    switch (ctx->pc) {
        case 0x16e094u: goto label_16e094;
        case 0x16e0a4u: goto label_16e0a4;
        case 0x16e0c4u: goto label_16e0c4;
        default: break;
    }

    ctx->pc = 0x16e060u;

    // 0x16e060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16e060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16e064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16e068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16e06c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x16e06cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x16e070: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e074: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16E074u;
    {
        const bool branch_taken_0x16e074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e074) {
            ctx->pc = 0x16E0C4u;
            goto label_16e0c4;
        }
    }
    ctx->pc = 0x16E07Cu;
    // 0x16e07c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e080: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e084: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16e084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e088: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x16e088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16e08c: 0xc05b864  jal         func_16E190
    ctx->pc = 0x16E08Cu;
    SET_GPR_U32(ctx, 31, 0x16E094u);
    ctx->pc = 0x16E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E190u, 0x16E08Cu, 0x16E094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E094u;
label_16e094:
    // 0x16e094: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16e094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e09c: 0xc05b838  jal         func_16E0E0
    ctx->pc = 0x16E09Cu;
    SET_GPR_U32(ctx, 31, 0x16E0A4u);
    ctx->pc = 0x16E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E0E0u, 0x16E09Cu, 0x16E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0A4u;
label_16e0a4:
    // 0x16e0a4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x16e0a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e0a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16e0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16e0ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16e0acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16e0b0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E0B0u;
    {
        const bool branch_taken_0x16e0b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16e0b0) {
            ctx->pc = 0x16E0C4u;
            goto label_16e0c4;
        }
    }
    ctx->pc = 0x16E0B8u;
    // 0x16e0b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e0bc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x16E0BCu;
    SET_GPR_U32(ctx, 31, 0x16E0C4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x16E0BCu, 0x16E0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0C4u;
label_16e0c4:
    // 0x16e0c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e0c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e0cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16e0ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16e0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x16E0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E0D8u;
    // 0x16e0d8: 0x0  nop
    ctx->pc = 0x16e0d8u;
    // NOP
    // 0x16e0dc: 0x0  nop
    ctx->pc = 0x16e0dcu;
    // NOP
    ctx->pc = 0x16e0e0u;
}
