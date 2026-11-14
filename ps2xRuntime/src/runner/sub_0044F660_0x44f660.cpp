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

// Function: sub_0044F660
// Address: 0x44f660 - 0x44f6e0
void sub_0044F660_0x44f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F660_0x44f660");
#endif

    switch (ctx->pc) {
        case 0x44f694u: goto label_44f694;
        case 0x44f6a4u: goto label_44f6a4;
        case 0x44f6c4u: goto label_44f6c4;
        default: break;
    }

    ctx->pc = 0x44f660u;

    // 0x44f660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44f660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44f664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44f668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44f66c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x44f66cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x44f670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f674: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x44F674u;
    {
        const bool branch_taken_0x44f674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f674) {
            ctx->pc = 0x44F6C4u;
            goto label_44f6c4;
        }
    }
    ctx->pc = 0x44F67Cu;
    // 0x44f67c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x44f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f680: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f684: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x44f684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44f688: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x44f688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x44f68c: 0xc113de4  jal         func_44F790
    ctx->pc = 0x44F68Cu;
    SET_GPR_U32(ctx, 31, 0x44F694u);
    ctx->pc = 0x44F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F790u, 0x44F68Cu, 0x44F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F694u;
label_44f694:
    // 0x44f694: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44f698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f69c: 0xc113db8  jal         func_44F6E0
    ctx->pc = 0x44F69Cu;
    SET_GPR_U32(ctx, 31, 0x44F6A4u);
    ctx->pc = 0x44F6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F6E0u, 0x44F69Cu, 0x44F6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F6A4u;
label_44f6a4:
    // 0x44f6a4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x44f6a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f6a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x44f6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x44f6ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44f6acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x44f6b0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44F6B0u;
    {
        const bool branch_taken_0x44f6b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44f6b0) {
            ctx->pc = 0x44F6C4u;
            goto label_44f6c4;
        }
    }
    ctx->pc = 0x44F6B8u;
    // 0x44f6b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f6bc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x44F6BCu;
    SET_GPR_U32(ctx, 31, 0x44F6C4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x44F6BCu, 0x44F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F6C4u;
label_44f6c4:
    // 0x44f6c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f6c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f6cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44f6ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44f6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x44F6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F6D8u;
    // 0x44f6d8: 0x0  nop
    ctx->pc = 0x44f6d8u;
    // NOP
    // 0x44f6dc: 0x0  nop
    ctx->pc = 0x44f6dcu;
    // NOP
    ctx->pc = 0x44f6e0u;
}
