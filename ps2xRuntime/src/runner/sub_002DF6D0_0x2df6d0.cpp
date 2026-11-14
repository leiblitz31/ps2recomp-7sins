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

// Function: sub_002DF6D0
// Address: 0x2df6d0 - 0x2df750
void sub_002DF6D0_0x2df6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF6D0_0x2df6d0");
#endif

    switch (ctx->pc) {
        case 0x2df6f0u: goto label_2df6f0;
        case 0x2df700u: goto label_2df700;
        case 0x2df718u: goto label_2df718;
        case 0x2df730u: goto label_2df730;
        default: break;
    }

    ctx->pc = 0x2df6d0u;

    // 0x2df6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df6d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2df6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2df6dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2df6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2df6e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2df6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df6e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2df6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df6e8: 0xc0b7dd4  jal         func_2DF750
    ctx->pc = 0x2DF6E8u;
    SET_GPR_U32(ctx, 31, 0x2DF6F0u);
    ctx->pc = 0x2DF750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF750u, 0x2DF6E8u, 0x2DF6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6F0u;
label_2df6f0:
    // 0x2df6f0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2df6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df6f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2df6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df6f8: 0xc0b7d18  jal         func_2DF460
    ctx->pc = 0x2DF6F8u;
    SET_GPR_U32(ctx, 31, 0x2DF700u);
    ctx->pc = 0x2DF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF460u, 0x2DF6F8u, 0x2DF700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF700u;
label_2df700:
    // 0x2df700: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2df700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2df704: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2df704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df708: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2df708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df70c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2df70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df710: 0xc0b7d10  jal         func_2DF440
    ctx->pc = 0x2DF710u;
    SET_GPR_U32(ctx, 31, 0x2DF718u);
    ctx->pc = 0x2DF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF440u, 0x2DF710u, 0x2DF718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF718u;
label_2df718:
    // 0x2df718: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2df718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2df71c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2df71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df720: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2df720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df724: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2df724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df728: 0xc0b7d08  jal         func_2DF420
    ctx->pc = 0x2DF728u;
    SET_GPR_U32(ctx, 31, 0x2DF730u);
    ctx->pc = 0x2DF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF420u, 0x2DF728u, 0x2DF730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF730u;
label_2df730:
    // 0x2df730: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2df730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2df734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2df734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df73c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df73cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df740: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF748u;
    // 0x2df748: 0x0  nop
    ctx->pc = 0x2df748u;
    // NOP
    // 0x2df74c: 0x0  nop
    ctx->pc = 0x2df74cu;
    // NOP
    ctx->pc = 0x2df750u;
}
