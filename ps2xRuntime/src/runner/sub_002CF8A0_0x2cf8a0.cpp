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

// Function: sub_002CF8A0
// Address: 0x2cf8a0 - 0x2cf920
void sub_002CF8A0_0x2cf8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF8A0_0x2cf8a0");
#endif

    switch (ctx->pc) {
        case 0x2cf8d4u: goto label_2cf8d4;
        case 0x2cf8e4u: goto label_2cf8e4;
        case 0x2cf904u: goto label_2cf904;
        default: break;
    }

    ctx->pc = 0x2cf8a0u;

    // 0x2cf8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf8a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf8a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cf8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cf8ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2cf8acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cf8b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cf8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf8b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CF8B4u;
    {
        const bool branch_taken_0x2cf8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf8b4) {
            ctx->pc = 0x2CF904u;
            goto label_2cf904;
        }
    }
    ctx->pc = 0x2CF8BCu;
    // 0x2cf8bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2cf8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf8c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cf8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf8c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf8c8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2cf8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cf8cc: 0xc0b2e58  jal         func_2CB960
    ctx->pc = 0x2CF8CCu;
    SET_GPR_U32(ctx, 31, 0x2CF8D4u);
    ctx->pc = 0x2CB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB960u, 0x2CF8CCu, 0x2CF8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF8D4u;
label_2cf8d4:
    // 0x2cf8d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cf8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf8d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf8dc: 0xc0b3e48  jal         func_2CF920
    ctx->pc = 0x2CF8DCu;
    SET_GPR_U32(ctx, 31, 0x2CF8E4u);
    ctx->pc = 0x2CF920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF920u, 0x2CF8DCu, 0x2CF8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF8E4u;
label_2cf8e4:
    // 0x2cf8e4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2cf8e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf8e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2cf8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cf8ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cf8ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cf8f0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF8F0u;
    {
        const bool branch_taken_0x2cf8f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cf8f0) {
            ctx->pc = 0x2CF904u;
            goto label_2cf904;
        }
    }
    ctx->pc = 0x2CF8F8u;
    // 0x2cf8f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cf8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf8fc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2CF8FCu;
    SET_GPR_U32(ctx, 31, 0x2CF904u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2CF8FCu, 0x2CF904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF904u;
label_2cf904:
    // 0x2cf904: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cf904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf90c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cf90cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cf910: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF918u;
    // 0x2cf918: 0x0  nop
    ctx->pc = 0x2cf918u;
    // NOP
    // 0x2cf91c: 0x0  nop
    ctx->pc = 0x2cf91cu;
    // NOP
    ctx->pc = 0x2cf920u;
}
