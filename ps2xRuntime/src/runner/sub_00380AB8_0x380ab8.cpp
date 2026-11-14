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

// Function: sub_00380AB8
// Address: 0x380ab8 - 0x380b48
void sub_00380AB8_0x380ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380AB8_0x380ab8");
#endif

    switch (ctx->pc) {
        case 0x380ae0u: goto label_380ae0;
        case 0x380b00u: goto label_380b00;
        case 0x380b14u: goto label_380b14;
        default: break;
    }

    ctx->pc = 0x380ab8u;

    // 0x380ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x380ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x380abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x380abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x380ac0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x380ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x380ac4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x380ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380acc: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x380accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x380ad0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x380AD0u;
    {
        const bool branch_taken_0x380ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380ad0) {
            ctx->pc = 0x380AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380AD0u;
            // 0x380ad4: 0x8e230100  lw          $v1, 0x100($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380AE4u;
            goto label_380ae4;
        }
    }
    ctx->pc = 0x380AD8u;
    // 0x380ad8: 0xc106698  jal         func_419A60
    ctx->pc = 0x380AD8u;
    SET_GPR_U32(ctx, 31, 0x380AE0u);
    ctx->pc = 0x380ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380AD8u;
    // 0x380adc: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419A60u, 0x380AD8u, 0x380AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380AE0u;
label_380ae0:
    // 0x380ae0: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x380ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_380ae4:
    // 0x380ae4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x380ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x380ae8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x380AE8u;
    {
        const bool branch_taken_0x380ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380AE8u;
        // 0x380aec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380ae8) {
            ctx->pc = 0x380B34u;
            goto label_380b34;
        }
    }
    ctx->pc = 0x380AF0u;
    // 0x380af0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x380af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x380af4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x380AF4u;
    {
        const bool branch_taken_0x380af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380AF4u;
        // 0x380af8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380af4) {
            ctx->pc = 0x380B30u;
            goto label_380b30;
        }
    }
    ctx->pc = 0x380AFCu;
    // 0x380afc: 0x0  nop
    ctx->pc = 0x380afcu;
    // NOP
label_380b00:
    // 0x380b00: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x380b00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x380b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x380b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380b08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x380b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380b0c: 0xc0e0250  jal         func_380940
    ctx->pc = 0x380B0Cu;
    SET_GPR_U32(ctx, 31, 0x380B14u);
    ctx->pc = 0x380B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B0Cu;
    // 0x380b10: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x380940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380940u, 0x380B0Cu, 0x380B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B14u;
label_380b14:
    // 0x380b14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x380b14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x380b18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x380b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380b1c: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x380b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x380b20: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x380b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x380b24: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x380b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x380b28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x380B28u;
    {
        const bool branch_taken_0x380b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x380b28) {
            ctx->pc = 0x380B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380b00;
        }
    }
    ctx->pc = 0x380B30u;
label_380b30:
    // 0x380b30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x380b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_380b34:
    // 0x380b34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x380b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380b38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x380b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380b40: 0x3e00008  jr          $ra
    ctx->pc = 0x380B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380B40u;
        // 0x380b44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380B48u;
}
