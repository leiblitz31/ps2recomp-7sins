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

// Function: sub_0032AA78
// Address: 0x32aa78 - 0x32aaa8
void sub_0032AA78_0x32aa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AA78_0x32aa78");
#endif

    switch (ctx->pc) {
        case 0x32aa90u: goto label_32aa90;
        default: break;
    }

    ctx->pc = 0x32aa78u;

    // 0x32aa78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32aa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32aa7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32aa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32aa80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32aa80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32aa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32aa88: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x32AA88u;
    SET_GPR_U32(ctx, 31, 0x32AA90u);
    ctx->pc = 0x32AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA88u;
    // 0x32aa8c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x32AA88u, 0x32AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA90u;
label_32aa90:
    // 0x32aa90: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x32aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x32aa94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32aa94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32aa98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32aa9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32aa9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32aaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x32AAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAA0u;
        // 0x32aaa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AAA8u;
}
