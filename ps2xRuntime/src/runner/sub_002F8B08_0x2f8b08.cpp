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

// Function: sub_002F8B08
// Address: 0x2f8b08 - 0x2f8b90
void sub_002F8B08_0x2f8b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8B08_0x2f8b08");
#endif

    switch (ctx->pc) {
        case 0x2f8b48u: goto label_2f8b48;
        case 0x2f8b58u: goto label_2f8b58;
        case 0x2f8b60u: goto label_2f8b60;
        default: break;
    }

    ctx->pc = 0x2f8b08u;

    // 0x2f8b08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f8b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f8b0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f8b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f8b10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f8b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f8b14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f8b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f8b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f8b1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f8b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f8b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f8b24: 0x3c100100  lui         $s0, 0x100
    ctx->pc = 0x2f8b24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)256 << 16));
    // 0x2f8b28: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f8b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f8b2c: 0xc6800b  movn        $s0, $a2, $a2
    ctx->pc = 0x2f8b2cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x2f8b30: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2f8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2f8b34: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x2f8b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2f8b38: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F8B38u;
    {
        const bool branch_taken_0x2f8b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B38u;
        // 0x2f8b3c: 0x3c130060  lui         $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b38) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F8B40u;
    // 0x2f8b40: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2f8b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2f8b44: 0x0  nop
    ctx->pc = 0x2f8b44u;
    // NOP
label_2f8b48:
    // 0x2f8b48: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8B48u;
    {
        const bool branch_taken_0x2f8b48 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2f8b48) {
            ctx->pc = 0x2F8B60u;
            goto label_2f8b60;
        }
    }
    ctx->pc = 0x2F8B50u;
    // 0x2f8b50: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F8B50u;
    SET_GPR_U32(ctx, 31, 0x2F8B58u);
    ctx->pc = 0x2F8B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8B50u;
    // 0x2f8b54: 0x26649ef0  addiu       $a0, $s3, -0x6110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F8B50u, 0x2F8B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8B58u;
label_2f8b58:
    // 0x2f8b58: 0xc0be48c  jal         func_2F9230
    ctx->pc = 0x2F8B58u;
    SET_GPR_U32(ctx, 31, 0x2F8B60u);
    ctx->pc = 0x2F8B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8B58u;
    // 0x2f8b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9230u, 0x2F8B58u, 0x2F8B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8B60u;
label_2f8b60:
    // 0x2f8b60: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2f8b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2f8b64: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x2f8b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2f8b68: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F8B68u;
    {
        const bool branch_taken_0x2f8b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B68u;
        // 0x2f8b6c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b68) {
            ctx->pc = 0x2F8B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8b48;
        }
    }
    ctx->pc = 0x2F8B70u;
label_2f8b70:
    // 0x2f8b70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f8b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f8b74: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f8b74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8b78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f8b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8b7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f8b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f8b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8b84: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B84u;
        // 0x2f8b88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8B8Cu;
    // 0x2f8b8c: 0x0  nop
    ctx->pc = 0x2f8b8cu;
    // NOP
    ctx->pc = 0x2f8b90u;
}
