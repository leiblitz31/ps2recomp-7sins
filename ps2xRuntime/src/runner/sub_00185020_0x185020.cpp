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

// Function: sub_00185020
// Address: 0x185020 - 0x185080
void sub_00185020_0x185020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185020_0x185020");
#endif

    switch (ctx->pc) {
        case 0x18503cu: goto label_18503c;
        case 0x18504cu: goto label_18504c;
        case 0x185060u: goto label_185060;
        default: break;
    }

    ctx->pc = 0x185020u;

    // 0x185020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x185028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18502c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18502cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x185030: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x185030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185034: 0xc05ddf0  jal         func_1777C0
    ctx->pc = 0x185034u;
    SET_GPR_U32(ctx, 31, 0x18503Cu);
    ctx->pc = 0x1777C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1777C0u, 0x185034u, 0x18503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18503Cu;
label_18503c:
    // 0x18503c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18503cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185040: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x185040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185044: 0xc06143c  jal         func_1850F0
    ctx->pc = 0x185044u;
    SET_GPR_U32(ctx, 31, 0x18504Cu);
    ctx->pc = 0x1850F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1850F0u, 0x185044u, 0x18504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18504Cu;
label_18504c:
    // 0x18504c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18504cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x185050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185054: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x185054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185058: 0xc061420  jal         func_185080
    ctx->pc = 0x185058u;
    SET_GPR_U32(ctx, 31, 0x185060u);
    ctx->pc = 0x185080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185080u, 0x185058u, 0x185060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185060u;
label_185060:
    // 0x185060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185068: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x185068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18506c: 0x3e00008  jr          $ra
    ctx->pc = 0x18506Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18506Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185074u;
    // 0x185074: 0x0  nop
    ctx->pc = 0x185074u;
    // NOP
    // 0x185078: 0x0  nop
    ctx->pc = 0x185078u;
    // NOP
    // 0x18507c: 0x0  nop
    ctx->pc = 0x18507cu;
    // NOP
    ctx->pc = 0x185080u;
}
