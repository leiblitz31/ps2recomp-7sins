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

// Function: sub_004AE610
// Address: 0x4ae610 - 0x4ae650
void sub_004AE610_0x4ae610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE610_0x4ae610");
#endif

    switch (ctx->pc) {
        case 0x4ae630u: goto label_4ae630;
        default: break;
    }

    ctx->pc = 0x4ae610u;

    // 0x4ae610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ae610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ae614: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ae614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ae618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae620: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x4ae620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x4ae624: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ae624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae628: 0xc0bfb28  jal         func_2FECA0
    ctx->pc = 0x4AE628u;
    SET_GPR_U32(ctx, 31, 0x4AE630u);
    ctx->pc = 0x4AE62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE628u;
    // 0x4ae62c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FECA0u, 0x4AE628u, 0x4AE630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE630u;
label_4ae630:
    // 0x4ae630: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4ae630u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4ae634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae638: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4ae638u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x4ae63c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ae63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae640: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ae640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae644: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE644u;
        // 0x4ae648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE64Cu;
    // 0x4ae64c: 0x0  nop
    ctx->pc = 0x4ae64cu;
    // NOP
    ctx->pc = 0x4ae650u;
}
