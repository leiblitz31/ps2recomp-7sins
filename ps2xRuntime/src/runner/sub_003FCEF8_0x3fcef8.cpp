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

// Function: sub_003FCEF8
// Address: 0x3fcef8 - 0x3fcf28
void sub_003FCEF8_0x3fcef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCEF8_0x3fcef8");
#endif

    ctx->pc = 0x3fcef8u;

    // 0x3fcef8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3fcef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcefc: 0x90a20207  lbu         $v0, 0x207($a1)
    ctx->pc = 0x3fcefcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 519)));
    // 0x3fcf00: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FCF00u;
    {
        const bool branch_taken_0x3fcf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fcf00) {
            ctx->pc = 0x3FCF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCF00u;
            // 0x3fcf04: 0xdca30108  ld          $v1, 0x108($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCF10u;
            goto label_3fcf10;
        }
    }
    ctx->pc = 0x3FCF08u;
    // 0x3fcf08: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF08u;
        // 0x3fcf0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCF10u;
label_3fcf10:
    // 0x3fcf10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3fcf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3fcf14: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3fcf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3fcf18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3fcf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3fcf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FCF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF1Cu;
        // 0x3fcf20: 0xfca30108  sd          $v1, 0x108($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 264), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCF24u;
    // 0x3fcf24: 0x0  nop
    ctx->pc = 0x3fcf24u;
    // NOP
    ctx->pc = 0x3fcf28u;
}
