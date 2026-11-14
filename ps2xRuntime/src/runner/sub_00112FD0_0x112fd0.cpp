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

// Function: sub_00112FD0
// Address: 0x112fd0 - 0x113030
void sub_00112FD0_0x112fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112FD0_0x112fd0");
#endif

    switch (ctx->pc) {
        case 0x112ff4u: goto label_112ff4;
        case 0x113010u: goto label_113010;
        default: break;
    }

    ctx->pc = 0x112fd0u;

    // 0x112fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x112fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x112fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x112fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x112fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x112fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x112fdc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x112fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x112fe0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x112fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x112fe4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x112fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x112fe8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x112fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112fec: 0xc0400e0  jal         func_100380
    ctx->pc = 0x112FECu;
    SET_GPR_U32(ctx, 31, 0x112FF4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x112FECu, 0x112FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FF4u;
label_112ff4:
    // 0x112ff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ff8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x112FF8u;
    {
        const bool branch_taken_0x112ff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x112ff8) {
            ctx->pc = 0x113014u;
            goto label_113014;
        }
    }
    ctx->pc = 0x113000u;
    // 0x113000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113004: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x113004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113008: 0xc044c0c  jal         func_113030
    ctx->pc = 0x113008u;
    SET_GPR_U32(ctx, 31, 0x113010u);
    ctx->pc = 0x113030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113030u, 0x113008u, 0x113010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113010u;
label_113010:
    // 0x113010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_113014:
    // 0x113014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x113014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x113018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11301c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x11301cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x113020: 0x3e00008  jr          $ra
    ctx->pc = 0x113020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113028u;
    // 0x113028: 0x0  nop
    ctx->pc = 0x113028u;
    // NOP
    // 0x11302c: 0x0  nop
    ctx->pc = 0x11302cu;
    // NOP
    ctx->pc = 0x113030u;
}
