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

// Function: sub_0012B0B0
// Address: 0x12b0b0 - 0x12b130
void sub_0012B0B0_0x12b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B0B0_0x12b0b0");
#endif

    switch (ctx->pc) {
        case 0x12b0e4u: goto label_12b0e4;
        case 0x12b0f4u: goto label_12b0f4;
        case 0x12b114u: goto label_12b114;
        default: break;
    }

    ctx->pc = 0x12b0b0u;

    // 0x12b0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b0b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12b0bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x12b0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x12b0c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b0c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12B0C4u;
    {
        const bool branch_taken_0x12b0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b0c4) {
            ctx->pc = 0x12B114u;
            goto label_12b114;
        }
    }
    ctx->pc = 0x12B0CCu;
    // 0x12b0cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x12b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b0d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b0d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b0d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x12b0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12b0dc: 0xc04ac78  jal         func_12B1E0
    ctx->pc = 0x12B0DCu;
    SET_GPR_U32(ctx, 31, 0x12B0E4u);
    ctx->pc = 0x12B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B1E0u, 0x12B0DCu, 0x12B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0E4u;
label_12b0e4:
    // 0x12b0e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b0e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0ec: 0xc04ac4c  jal         func_12B130
    ctx->pc = 0x12B0ECu;
    SET_GPR_U32(ctx, 31, 0x12B0F4u);
    ctx->pc = 0x12B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B130u, 0x12B0ECu, 0x12B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0F4u;
label_12b0f4:
    // 0x12b0f4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x12b0f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b0f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12b0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12b0fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12b0fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12b100: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B100u;
    {
        const bool branch_taken_0x12b100 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12b100) {
            ctx->pc = 0x12B114u;
            goto label_12b114;
        }
    }
    ctx->pc = 0x12B108u;
    // 0x12b108: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12b108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b10c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x12B10Cu;
    SET_GPR_U32(ctx, 31, 0x12B114u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x12B10Cu, 0x12B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B114u;
label_12b114:
    // 0x12b114: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b11c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12b11cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b120: 0x3e00008  jr          $ra
    ctx->pc = 0x12B120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B128u;
    // 0x12b128: 0x0  nop
    ctx->pc = 0x12b128u;
    // NOP
    // 0x12b12c: 0x0  nop
    ctx->pc = 0x12b12cu;
    // NOP
    ctx->pc = 0x12b130u;
}
