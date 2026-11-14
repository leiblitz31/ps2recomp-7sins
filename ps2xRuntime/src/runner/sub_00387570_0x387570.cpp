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

// Function: sub_00387570
// Address: 0x387570 - 0x3875d8
void sub_00387570_0x387570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387570_0x387570");
#endif

    switch (ctx->pc) {
        case 0x387598u: goto label_387598;
        case 0x3875b0u: goto label_3875b0;
        default: break;
    }

    ctx->pc = 0x387570u;

    // 0x387570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x387570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x387574: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x387574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x387578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x387578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38757c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38757cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x387584: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x387584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387588: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x387588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38758c: 0x8e25007c  lw          $a1, 0x7C($s1)
    ctx->pc = 0x38758cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x387590: 0xc103440  jal         func_40D100
    ctx->pc = 0x387590u;
    SET_GPR_U32(ctx, 31, 0x387598u);
    ctx->pc = 0x387594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387590u;
    // 0x387594: 0x24a5002c  addiu       $a1, $a1, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x387590u, 0x387598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387598u;
label_387598:
    // 0x387598: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x387598u;
    {
        const bool branch_taken_0x387598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387598u;
        // 0x38759c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387598) {
            ctx->pc = 0x3875BCu;
            goto label_3875bc;
        }
    }
    ctx->pc = 0x3875A0u;
    // 0x3875a0: 0x8e25007c  lw          $a1, 0x7C($s1)
    ctx->pc = 0x3875a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x3875a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3875a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3875a8: 0xc103440  jal         func_40D100
    ctx->pc = 0x3875A8u;
    SET_GPR_U32(ctx, 31, 0x3875B0u);
    ctx->pc = 0x3875ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3875A8u;
    // 0x3875ac: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3875A8u, 0x3875B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3875B0u;
label_3875b0:
    // 0x3875b0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3875b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3875b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3875B4u;
    {
        const bool branch_taken_0x3875b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3875B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3875B4u;
        // 0x3875b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3875b4) {
            ctx->pc = 0x3875C0u;
            goto label_3875c0;
        }
    }
    ctx->pc = 0x3875BCu;
label_3875bc:
    // 0x3875bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3875bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3875c0:
    // 0x3875c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3875c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3875c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3875c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3875c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3875c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3875cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3875CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3875D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3875CCu;
        // 0x3875d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3875CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3875D4u;
    // 0x3875d4: 0x0  nop
    ctx->pc = 0x3875d4u;
    // NOP
    ctx->pc = 0x3875d8u;
}
