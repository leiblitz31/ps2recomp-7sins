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

// Function: sub_00194600
// Address: 0x194600 - 0x194660
void sub_00194600_0x194600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194600_0x194600");
#endif

    switch (ctx->pc) {
        case 0x194620u: goto label_194620;
        case 0x194638u: goto label_194638;
        case 0x19464cu: goto label_19464c;
        default: break;
    }

    ctx->pc = 0x194600u;

    // 0x194600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19460c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19460cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x194610: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x194610u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x194614: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x194614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194618: 0xc06479c  jal         func_191E70
    ctx->pc = 0x194618u;
    SET_GPR_U32(ctx, 31, 0x194620u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x194618u, 0x194620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194620u;
label_194620:
    // 0x194620: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x194620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194624: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x194624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194628: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x194628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x19462c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19462cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194630: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x194630u;
    SET_GPR_U32(ctx, 31, 0x194638u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x194630u, 0x194638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194638u;
label_194638:
    // 0x194638: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x194638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19463c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19463cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194640: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x194640u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194644: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x194644u;
    SET_GPR_U32(ctx, 31, 0x19464Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x194644u, 0x19464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19464Cu;
label_19464c:
    // 0x19464c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19464cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194654: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x194654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x194658: 0x3e00008  jr          $ra
    ctx->pc = 0x194658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194660u;
}
