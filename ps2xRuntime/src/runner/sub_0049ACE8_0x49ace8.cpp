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

// Function: sub_0049ACE8
// Address: 0x49ace8 - 0x49ad70
void sub_0049ACE8_0x49ace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049ACE8_0x49ace8");
#endif

    switch (ctx->pc) {
        case 0x49ad1cu: goto label_49ad1c;
        default: break;
    }

    ctx->pc = 0x49ace8u;

    // 0x49ace8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49ace8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49acec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49acecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x49acf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49acf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49acf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49acf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49acf8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x49acf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49acfc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49ad00: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x49ad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x49ad04: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x49AD04u;
    {
        const bool branch_taken_0x49ad04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AD04u;
        // 0x49ad08: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ad04) {
            ctx->pc = 0x49AD58u;
            goto label_49ad58;
        }
    }
    ctx->pc = 0x49AD0Cu;
    // 0x49ad0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49ad10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49ad10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ad14: 0xc12732e  jal         func_49CCB8
    ctx->pc = 0x49AD14u;
    SET_GPR_U32(ctx, 31, 0x49AD1Cu);
    ctx->pc = 0x49AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AD14u;
    // 0x49ad18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49CCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49CCB8u, 0x49AD14u, 0x49AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AD1Cu;
label_49ad1c:
    // 0x49ad1c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x49AD1Cu;
    {
        const bool branch_taken_0x49ad1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AD1Cu;
        // 0x49ad20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ad1c) {
            ctx->pc = 0x49AD5Cu;
            goto label_49ad5c;
        }
    }
    ctx->pc = 0x49AD24u;
    // 0x49ad24: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x49ad24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49ad28: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x49AD28u;
    {
        const bool branch_taken_0x49ad28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ad28) {
            ctx->pc = 0x49AD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49AD28u;
            // 0x49ad2c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49AD50u;
            goto label_49ad50;
        }
    }
    ctx->pc = 0x49AD30u;
    // 0x49ad30: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x49ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x49ad34: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x49ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x49ad38: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x49ad38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x49ad3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49AD3Cu;
    {
        const bool branch_taken_0x49ad3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AD3Cu;
        // 0x49ad40: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ad3c) {
            ctx->pc = 0x49AD4Cu;
            goto label_49ad4c;
        }
    }
    ctx->pc = 0x49AD44u;
    // 0x49ad44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49ad48: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x49ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_49ad4c:
    // 0x49ad4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x49ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_49ad50:
    // 0x49ad50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49ad54: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x49ad54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_49ad58:
    // 0x49ad58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49ad58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ad5c:
    // 0x49ad5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49ad5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49ad60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49ad60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ad64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ad64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ad68: 0x3e00008  jr          $ra
    ctx->pc = 0x49AD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AD68u;
        // 0x49ad6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49AD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49AD70u;
}
