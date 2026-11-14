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

// Function: sub_004B43C0
// Address: 0x4b43c0 - 0x4b4408
void sub_004B43C0_0x4b43c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B43C0_0x4b43c0");
#endif

    switch (ctx->pc) {
        case 0x4b43d4u: goto label_4b43d4;
        case 0x4b43f0u: goto label_4b43f0;
        default: break;
    }

    ctx->pc = 0x4b43c0u;

    // 0x4b43c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b43c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b43c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b43c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b43c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b43c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b43cc: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x4B43CCu;
    SET_GPR_U32(ctx, 31, 0x4B43D4u);
    ctx->pc = 0x4B43D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B43CCu;
    // 0x4b43d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x4B43CCu, 0x4B43D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B43D4u;
label_4b43d4:
    // 0x4b43d4: 0x9383b914  lbu         $v1, -0x46EC($gp)
    ctx->pc = 0x4b43d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949140)));
    // 0x4b43d8: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x4b43d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x4b43dc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4b43dcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4b43e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b43e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b43e4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x4b43e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4b43e8: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x4B43E8u;
    SET_GPR_U32(ctx, 31, 0x4B43F0u);
    ctx->pc = 0x4B43ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B43E8u;
    // 0x4b43ec: 0xa383b914  sb          $v1, -0x46EC($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949140), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4B43E8u, 0x4B43F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B43F0u;
label_4b43f0:
    // 0x4b43f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b43f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b43f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b43f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b43f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b43f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b43fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B43FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B43FCu;
        // 0x4b4400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B43FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4404u;
    // 0x4b4404: 0x0  nop
    ctx->pc = 0x4b4404u;
    // NOP
    ctx->pc = 0x4b4408u;
}
