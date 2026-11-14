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

// Function: sub_00385CB0
// Address: 0x385cb0 - 0x385d08
void sub_00385CB0_0x385cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385CB0_0x385cb0");
#endif

    switch (ctx->pc) {
        case 0x385cd8u: goto label_385cd8;
        case 0x385cecu: goto label_385cec;
        default: break;
    }

    ctx->pc = 0x385cb0u;

    // 0x385cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x385cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x385cb4: 0x8f82a96c  lw          $v0, -0x5694($gp)
    ctx->pc = 0x385cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945132)));
    // 0x385cb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x385cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x385cbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x385cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385cc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x385cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x385cc4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x385cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x385cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385ccc: 0xaf82a96c  sw          $v0, -0x5694($gp)
    ctx->pc = 0x385cccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945132), GPR_U32(ctx, 2));
    // 0x385cd0: 0xc0f0510  jal         func_3C1440
    ctx->pc = 0x385CD0u;
    SET_GPR_U32(ctx, 31, 0x385CD8u);
    ctx->pc = 0x385CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385CD0u;
    // 0x385cd4: 0x2484ad08  addiu       $a0, $a0, -0x52F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1440u, 0x385CD0u, 0x385CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385CD8u;
label_385cd8:
    // 0x385cd8: 0x8f84bd04  lw          $a0, -0x42FC($gp)
    ctx->pc = 0x385cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950148)));
    // 0x385cdc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x385CDCu;
    {
        const bool branch_taken_0x385cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x385CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CDCu;
        // 0x385ce0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385cdc) {
            ctx->pc = 0x385CF4u;
            goto label_385cf4;
        }
    }
    ctx->pc = 0x385CE4u;
    // 0x385ce4: 0xc104284  jal         func_410A10
    ctx->pc = 0x385CE4u;
    SET_GPR_U32(ctx, 31, 0x385CECu);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x385CE4u, 0x385CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385CECu;
label_385cec:
    // 0x385cec: 0xaf80bd04  sw          $zero, -0x42FC($gp)
    ctx->pc = 0x385cecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950148), GPR_U32(ctx, 0));
    // 0x385cf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x385cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385cf4:
    // 0x385cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385cf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x385cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x385CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CFCu;
        // 0x385d00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385D04u;
    // 0x385d04: 0x0  nop
    ctx->pc = 0x385d04u;
    // NOP
    ctx->pc = 0x385d08u;
}
