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

// Function: sub_0025D670
// Address: 0x25d670 - 0x25d6f0
void sub_0025D670_0x25d670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D670_0x25d670");
#endif

    switch (ctx->pc) {
        case 0x25d6a4u: goto label_25d6a4;
        case 0x25d6b4u: goto label_25d6b4;
        case 0x25d6d4u: goto label_25d6d4;
        default: break;
    }

    ctx->pc = 0x25d670u;

    // 0x25d670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d678: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25d678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25d67c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25d67cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x25d680: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d684: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25D684u;
    {
        const bool branch_taken_0x25d684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d684) {
            ctx->pc = 0x25D6D4u;
            goto label_25d6d4;
        }
    }
    ctx->pc = 0x25D68Cu;
    // 0x25d68c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d694: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25d694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25d698: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25d698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25d69c: 0xc0975e4  jal         func_25D790
    ctx->pc = 0x25D69Cu;
    SET_GPR_U32(ctx, 31, 0x25D6A4u);
    ctx->pc = 0x25D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D790u, 0x25D69Cu, 0x25D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D6A4u;
label_25d6a4:
    // 0x25d6a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d6a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d6ac: 0xc0975bc  jal         func_25D6F0
    ctx->pc = 0x25D6ACu;
    SET_GPR_U32(ctx, 31, 0x25D6B4u);
    ctx->pc = 0x25D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D6F0u, 0x25D6ACu, 0x25D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D6B4u;
label_25d6b4:
    // 0x25d6b4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25d6b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d6b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25d6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25d6bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25d6bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25d6c0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D6C0u;
    {
        const bool branch_taken_0x25d6c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25d6c0) {
            ctx->pc = 0x25D6D4u;
            goto label_25d6d4;
        }
    }
    ctx->pc = 0x25D6C8u;
    // 0x25d6c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d6cc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x25D6CCu;
    SET_GPR_U32(ctx, 31, 0x25D6D4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x25D6CCu, 0x25D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D6D4u;
label_25d6d4:
    // 0x25d6d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d6dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d6dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x25D6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D6E8u;
    // 0x25d6e8: 0x0  nop
    ctx->pc = 0x25d6e8u;
    // NOP
    // 0x25d6ec: 0x0  nop
    ctx->pc = 0x25d6ecu;
    // NOP
    ctx->pc = 0x25d6f0u;
}
