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

// Function: sub_0044F4A0
// Address: 0x44f4a0 - 0x44f520
void sub_0044F4A0_0x44f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F4A0_0x44f4a0");
#endif

    switch (ctx->pc) {
        case 0x44f4d4u: goto label_44f4d4;
        case 0x44f4e4u: goto label_44f4e4;
        case 0x44f504u: goto label_44f504;
        default: break;
    }

    ctx->pc = 0x44f4a0u;

    // 0x44f4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44f4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44f4a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44f4a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44f4ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x44f4acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x44f4b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f4b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x44F4B4u;
    {
        const bool branch_taken_0x44f4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f4b4) {
            ctx->pc = 0x44F504u;
            goto label_44f504;
        }
    }
    ctx->pc = 0x44F4BCu;
    // 0x44f4bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x44f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f4c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f4c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x44f4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44f4c8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x44f4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x44f4cc: 0xc113d74  jal         func_44F5D0
    ctx->pc = 0x44F4CCu;
    SET_GPR_U32(ctx, 31, 0x44F4D4u);
    ctx->pc = 0x44F5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F5D0u, 0x44F4CCu, 0x44F4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F4D4u;
label_44f4d4:
    // 0x44f4d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f4d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44f4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f4dc: 0xc113d48  jal         func_44F520
    ctx->pc = 0x44F4DCu;
    SET_GPR_U32(ctx, 31, 0x44F4E4u);
    ctx->pc = 0x44F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F520u, 0x44F4DCu, 0x44F4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F4E4u;
label_44f4e4:
    // 0x44f4e4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x44f4e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f4e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x44f4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x44f4ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44f4ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x44f4f0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44F4F0u;
    {
        const bool branch_taken_0x44f4f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44f4f0) {
            ctx->pc = 0x44F504u;
            goto label_44f504;
        }
    }
    ctx->pc = 0x44F4F8u;
    // 0x44f4f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f4fc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x44F4FCu;
    SET_GPR_U32(ctx, 31, 0x44F504u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x44F4FCu, 0x44F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F504u;
label_44f504:
    // 0x44f504: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f50c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44f50cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44f510: 0x3e00008  jr          $ra
    ctx->pc = 0x44F510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F518u;
    // 0x44f518: 0x0  nop
    ctx->pc = 0x44f518u;
    // NOP
    // 0x44f51c: 0x0  nop
    ctx->pc = 0x44f51cu;
    // NOP
    ctx->pc = 0x44f520u;
}
