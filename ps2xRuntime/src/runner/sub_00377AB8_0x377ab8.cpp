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

// Function: sub_00377AB8
// Address: 0x377ab8 - 0x377b38
void sub_00377AB8_0x377ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377AB8_0x377ab8");
#endif

    switch (ctx->pc) {
        case 0x377ae4u: goto label_377ae4;
        case 0x377af4u: goto label_377af4;
        case 0x377b04u: goto label_377b04;
        case 0x377b1cu: goto label_377b1c;
        default: break;
    }

    ctx->pc = 0x377ab8u;

    // 0x377ab8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x377ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x377abc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x377ac0: 0x8c43c438  lw          $v1, -0x3BC8($v0)
    ctx->pc = 0x377ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C438u));
    // 0x377ac4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x377ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x377ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377acc: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x377accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x377ad0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x377ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377ad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x377ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377adc: 0xc103440  jal         func_40D100
    ctx->pc = 0x377ADCu;
    SET_GPR_U32(ctx, 31, 0x377AE4u);
    ctx->pc = 0x377AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377ADCu;
    // 0x377ae0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x377ADCu, 0x377AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377AE4u;
label_377ae4:
    // 0x377ae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x377ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ae8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x377ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x377aec: 0xc103440  jal         func_40D100
    ctx->pc = 0x377AECu;
    SET_GPR_U32(ctx, 31, 0x377AF4u);
    ctx->pc = 0x377AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377AECu;
    // 0x377af0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x377AECu, 0x377AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377AF4u;
label_377af4:
    // 0x377af4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x377af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x377af8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x377af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377afc: 0xc103440  jal         func_40D100
    ctx->pc = 0x377AFCu;
    SET_GPR_U32(ctx, 31, 0x377B04u);
    ctx->pc = 0x377B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377AFCu;
    // 0x377b00: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x377AFCu, 0x377B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377B04u;
label_377b04:
    // 0x377b04: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x377b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x377b08: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x377B08u;
    {
        const bool branch_taken_0x377b08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x377B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B08u;
        // 0x377b0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377b08) {
            ctx->pc = 0x377B20u;
            goto label_377b20;
        }
    }
    ctx->pc = 0x377B10u;
    // 0x377b10: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x377b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x377b14: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x377B14u;
    SET_GPR_U32(ctx, 31, 0x377B1Cu);
    ctx->pc = 0x377B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377B14u;
    // 0x377b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x377B14u, 0x377B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377B1Cu;
label_377b1c:
    // 0x377b1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x377b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_377b20:
    // 0x377b20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x377b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377b24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x377B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B2Cu;
        // 0x377b30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377B34u;
    // 0x377b34: 0x0  nop
    ctx->pc = 0x377b34u;
    // NOP
    ctx->pc = 0x377b38u;
}
