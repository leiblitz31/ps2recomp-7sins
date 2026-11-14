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

// Function: sub_004AAD18
// Address: 0x4aad18 - 0x4aadd8
void sub_004AAD18_0x4aad18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AAD18_0x4aad18");
#endif

    switch (ctx->pc) {
        case 0x4aad38u: goto label_4aad38;
        case 0x4aad7cu: goto label_4aad7c;
        case 0x4aada0u: goto label_4aada0;
        case 0x4aadc8u: goto label_4aadc8;
        default: break;
    }

    ctx->pc = 0x4aad18u;

    // 0x4aad18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aad18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aad1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4aad1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4aad20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aad20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aad24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aad24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aad28: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x4aad28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4aad2c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x4aad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4aad30: 0x50a20009  beql        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AAD30u;
    {
        const bool branch_taken_0x4aad30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x4aad30) {
            ctx->pc = 0x4AAD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AAD30u;
            // 0x4aad34: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AAD58u;
            goto label_4aad58;
        }
    }
    ctx->pc = 0x4AAD38u;
label_4aad38:
    // 0x4aad38: 0x54f00003  bnel        $a3, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AAD38u;
    {
        const bool branch_taken_0x4aad38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 16));
        if (branch_taken_0x4aad38) {
            ctx->pc = 0x4AAD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AAD38u;
            // 0x4aad3c: 0x8ce70004  lw          $a3, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AAD48u;
            goto label_4aad48;
        }
    }
    ctx->pc = 0x4AAD40u;
    // 0x4aad40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4AAD40u;
    {
        const bool branch_taken_0x4aad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAD40u;
        // 0x4aad44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aad40) {
            ctx->pc = 0x4AAD80u;
            goto label_4aad80;
        }
    }
    ctx->pc = 0x4AAD48u;
label_4aad48:
    // 0x4aad48: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x4aad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4aad4c: 0x14a2fffa  bne         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4AAD4Cu;
    {
        const bool branch_taken_0x4aad4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x4aad4c) {
            ctx->pc = 0x4AAD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aad38;
        }
    }
    ctx->pc = 0x4AAD54u;
    // 0x4aad54: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4aad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4aad58:
    // 0x4aad58: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4aad58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4aad5c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4aad5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4aad60: 0x248488f8  addiu       $a0, $a0, -0x7708
    ctx->pc = 0x4aad60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936824));
    // 0x4aad64: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4aad64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aad68: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4aad68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x4aad6c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4aad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4aad70: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4aad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4aad74: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4AAD74u;
    SET_GPR_U32(ctx, 31, 0x4AAD7Cu);
    ctx->pc = 0x4AAD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAD74u;
    // 0x4aad78: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4AAD74u, 0x4AAD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAD7Cu;
label_4aad7c:
    // 0x4aad7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4aad7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4aad80:
    // 0x4aad80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4aad80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aad84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aad84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aad88: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAD88u;
        // 0x4aad8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAD90u;
    // 0x4aad90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4aad94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aad94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aad98: 0xc12ab94  jal         func_4AAE50
    ctx->pc = 0x4AAD98u;
    SET_GPR_U32(ctx, 31, 0x4AADA0u);
    ctx->pc = 0x4AAE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAE50u, 0x4AAD98u, 0x4AADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AADA0u;
label_4aada0:
    // 0x4aada0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4aada0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4aada4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4aada4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4aada8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4aada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4aadac: 0x248488f8  addiu       $a0, $a0, -0x7708
    ctx->pc = 0x4aadacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936824));
    // 0x4aadb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4aadb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aadb4: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x4aadb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x4aadb8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x4aadb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4aadbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4aadbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4aadc0: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4AADC0u;
    SET_GPR_U32(ctx, 31, 0x4AADC8u);
    ctx->pc = 0x4AADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AADC0u;
    // 0x4aadc4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4AADC0u, 0x4AADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AADC8u;
label_4aadc8:
    // 0x4aadc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aadc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aadcc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AADCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AADCCu;
        // 0x4aadd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AADCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AADD4u;
    // 0x4aadd4: 0x0  nop
    ctx->pc = 0x4aadd4u;
    // NOP
    ctx->pc = 0x4aadd8u;
}
