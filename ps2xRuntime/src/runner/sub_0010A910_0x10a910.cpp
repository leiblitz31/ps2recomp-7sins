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

// Function: sub_0010A910
// Address: 0x10a910 - 0x10a990
void sub_0010A910_0x10a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A910_0x10a910");
#endif

    switch (ctx->pc) {
        case 0x10a930u: goto label_10a930;
        case 0x10a940u: goto label_10a940;
        case 0x10a958u: goto label_10a958;
        case 0x10a970u: goto label_10a970;
        default: break;
    }

    ctx->pc = 0x10a910u;

    // 0x10a910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10a918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10a91c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10a920: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a924: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10a924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a928: 0xc042a64  jal         func_10A990
    ctx->pc = 0x10A928u;
    SET_GPR_U32(ctx, 31, 0x10A930u);
    ctx->pc = 0x10A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A990u, 0x10A928u, 0x10A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A930u;
label_10a930:
    // 0x10a930: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x10a930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a934: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10a934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a938: 0xc042a08  jal         func_10A820
    ctx->pc = 0x10A938u;
    SET_GPR_U32(ctx, 31, 0x10A940u);
    ctx->pc = 0x10A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A820u, 0x10A938u, 0x10A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A940u;
label_10a940:
    // 0x10a940: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10a940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10a944: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a948: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10a948u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a94c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a950: 0xc042a00  jal         func_10A800
    ctx->pc = 0x10A950u;
    SET_GPR_U32(ctx, 31, 0x10A958u);
    ctx->pc = 0x10A800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A800u, 0x10A950u, 0x10A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A958u;
label_10a958:
    // 0x10a958: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10a958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x10a95c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a960: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10a960u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a964: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10a964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a968: 0xc0429f8  jal         func_10A7E0
    ctx->pc = 0x10A968u;
    SET_GPR_U32(ctx, 31, 0x10A970u);
    ctx->pc = 0x10A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A7E0u, 0x10A968u, 0x10A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A970u;
label_10a970:
    // 0x10a970: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10a970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x10a974: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10a978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a97c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10a97cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10a980: 0x3e00008  jr          $ra
    ctx->pc = 0x10A980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A988u;
    // 0x10a988: 0x0  nop
    ctx->pc = 0x10a988u;
    // NOP
    // 0x10a98c: 0x0  nop
    ctx->pc = 0x10a98cu;
    // NOP
    ctx->pc = 0x10a990u;
}
