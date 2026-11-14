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

// Function: sub_00407130
// Address: 0x407130 - 0x407188
void sub_00407130_0x407130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407130_0x407130");
#endif

    switch (ctx->pc) {
        case 0x40714cu: goto label_40714c;
        case 0x40715cu: goto label_40715c;
        case 0x407164u: goto label_407164;
        default: break;
    }

    ctx->pc = 0x407130u;

    // 0x407130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x407130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x407134: 0x2785ac48  addiu       $a1, $gp, -0x53B8
    ctx->pc = 0x407134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945864));
    // 0x407138: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x407138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40713c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40713cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x407140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x407144: 0xc101b98  jal         func_406E60
    ctx->pc = 0x407144u;
    SET_GPR_U32(ctx, 31, 0x40714Cu);
    ctx->pc = 0x407148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407144u;
    // 0x407148: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x407144u, 0x40714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40714Cu;
label_40714c:
    // 0x40714c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40714cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x407150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407154: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x407154u;
    SET_GPR_U32(ctx, 31, 0x40715Cu);
    ctx->pc = 0x407158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407154u;
    // 0x407158: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x407154u, 0x40715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40715Cu;
label_40715c:
    // 0x40715c: 0xc101bda  jal         func_406F68
    ctx->pc = 0x40715Cu;
    SET_GPR_U32(ctx, 31, 0x407164u);
    ctx->pc = 0x407160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40715Cu;
    // 0x407160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x40715Cu, 0x407164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407164u;
label_407164:
    // 0x407164: 0xde0200f8  ld          $v0, 0xF8($s0)
    ctx->pc = 0x407164u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x407168: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x407168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x40716c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40716cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x407170: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x407170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x407174: 0xfe0200f8  sd          $v0, 0xF8($s0)
    ctx->pc = 0x407174u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 248), GPR_U64(ctx, 2));
    // 0x407178: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x407178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40717c: 0x3e00008  jr          $ra
    ctx->pc = 0x40717Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40717Cu;
        // 0x407180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40717Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x407184u;
    // 0x407184: 0x0  nop
    ctx->pc = 0x407184u;
    // NOP
    ctx->pc = 0x407188u;
}
