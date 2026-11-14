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

// Function: sub_0010E770
// Address: 0x10e770 - 0x10e7f0
void sub_0010E770_0x10e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E770_0x10e770");
#endif

    switch (ctx->pc) {
        case 0x10e7a4u: goto label_10e7a4;
        case 0x10e7b4u: goto label_10e7b4;
        case 0x10e7d4u: goto label_10e7d4;
        default: break;
    }

    ctx->pc = 0x10e770u;

    // 0x10e770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e778: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10e778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10e77c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10e77cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x10e780: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e784: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10E784u;
    {
        const bool branch_taken_0x10e784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e784) {
            ctx->pc = 0x10E7D4u;
            goto label_10e7d4;
        }
    }
    ctx->pc = 0x10E78Cu;
    // 0x10e78c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e790: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e794: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10e794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10e798: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x10e798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10e79c: 0xc043a28  jal         func_10E8A0
    ctx->pc = 0x10E79Cu;
    SET_GPR_U32(ctx, 31, 0x10E7A4u);
    ctx->pc = 0x10E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8A0u, 0x10E79Cu, 0x10E7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E7A4u;
label_10e7a4:
    // 0x10e7a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10e7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7ac: 0xc0439fc  jal         func_10E7F0
    ctx->pc = 0x10E7ACu;
    SET_GPR_U32(ctx, 31, 0x10E7B4u);
    ctx->pc = 0x10E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7F0u, 0x10E7ACu, 0x10E7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E7B4u;
label_10e7b4:
    // 0x10e7b4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10e7b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e7b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10e7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10e7bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10e7bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10e7c0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E7C0u;
    {
        const bool branch_taken_0x10e7c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10e7c0) {
            ctx->pc = 0x10E7D4u;
            goto label_10e7d4;
        }
    }
    ctx->pc = 0x10E7C8u;
    // 0x10e7c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e7cc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x10E7CCu;
    SET_GPR_U32(ctx, 31, 0x10E7D4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10E7CCu, 0x10E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E7D4u;
label_10e7d4:
    // 0x10e7d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e7d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e7dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10e7dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10e7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x10E7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E7E8u;
    // 0x10e7e8: 0x0  nop
    ctx->pc = 0x10e7e8u;
    // NOP
    // 0x10e7ec: 0x0  nop
    ctx->pc = 0x10e7ecu;
    // NOP
    ctx->pc = 0x10e7f0u;
}
