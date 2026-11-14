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

// Function: sub_00326AC0
// Address: 0x326ac0 - 0x326b20
void sub_00326AC0_0x326ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326AC0_0x326ac0");
#endif

    switch (ctx->pc) {
        case 0x326ae4u: goto label_326ae4;
        case 0x326b04u: goto label_326b04;
        default: break;
    }

    ctx->pc = 0x326ac0u;

    // 0x326ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x326ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x326ac4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x326ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x326ac8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x326ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326acc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x326accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x326ad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x326ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326ad4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x326ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x326ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x326adc: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x326ADCu;
    SET_GPR_U32(ctx, 31, 0x326AE4u);
    ctx->pc = 0x326AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326ADCu;
    // 0x326ae0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x326ADCu, 0x326AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326AE4u;
label_326ae4:
    // 0x326ae4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x326AE4u;
    {
        const bool branch_taken_0x326ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AE4u;
        // 0x326ae8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ae4) {
            ctx->pc = 0x326AF4u;
            goto label_326af4;
        }
    }
    ctx->pc = 0x326AECu;
    // 0x326aec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x326AECu;
    {
        const bool branch_taken_0x326aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AECu;
        // 0x326af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326aec) {
            ctx->pc = 0x326B08u;
            goto label_326b08;
        }
    }
    ctx->pc = 0x326AF4u;
label_326af4:
    // 0x326af4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x326AF4u;
    {
        const bool branch_taken_0x326af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AF4u;
        // 0x326af8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326af4) {
            ctx->pc = 0x326B08u;
            goto label_326b08;
        }
    }
    ctx->pc = 0x326AFCu;
    // 0x326afc: 0xc0c973e  jal         func_325CF8
    ctx->pc = 0x326AFCu;
    SET_GPR_U32(ctx, 31, 0x326B04u);
    ctx->pc = 0x326B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326AFCu;
    // 0x326b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325CF8u, 0x326AFCu, 0x326B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326B04u;
label_326b04:
    // 0x326b04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x326b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_326b08:
    // 0x326b08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x326b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326b0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x326b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x326b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326b14: 0x3e00008  jr          $ra
    ctx->pc = 0x326B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B14u;
        // 0x326b18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326B1Cu;
    // 0x326b1c: 0x0  nop
    ctx->pc = 0x326b1cu;
    // NOP
    ctx->pc = 0x326b20u;
}
