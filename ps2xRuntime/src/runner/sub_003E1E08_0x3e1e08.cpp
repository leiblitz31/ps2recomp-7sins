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

// Function: sub_003E1E08
// Address: 0x3e1e08 - 0x3e1e88
void sub_003E1E08_0x3e1e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1E08_0x3e1e08");
#endif

    switch (ctx->pc) {
        case 0x3e1e08u: goto label_3e1e08;
        case 0x3e1e0cu: goto label_3e1e0c;
        case 0x3e1e10u: goto label_3e1e10;
        case 0x3e1e14u: goto label_3e1e14;
        case 0x3e1e18u: goto label_3e1e18;
        case 0x3e1e1cu: goto label_3e1e1c;
        case 0x3e1e20u: goto label_3e1e20;
        case 0x3e1e24u: goto label_3e1e24;
        case 0x3e1e28u: goto label_3e1e28;
        case 0x3e1e2cu: goto label_3e1e2c;
        case 0x3e1e30u: goto label_3e1e30;
        case 0x3e1e34u: goto label_3e1e34;
        case 0x3e1e38u: goto label_3e1e38;
        case 0x3e1e3cu: goto label_3e1e3c;
        case 0x3e1e40u: goto label_3e1e40;
        case 0x3e1e44u: goto label_3e1e44;
        case 0x3e1e48u: goto label_3e1e48;
        case 0x3e1e4cu: goto label_3e1e4c;
        case 0x3e1e50u: goto label_3e1e50;
        case 0x3e1e54u: goto label_3e1e54;
        case 0x3e1e58u: goto label_3e1e58;
        case 0x3e1e5cu: goto label_3e1e5c;
        case 0x3e1e60u: goto label_3e1e60;
        case 0x3e1e64u: goto label_3e1e64;
        case 0x3e1e68u: goto label_3e1e68;
        case 0x3e1e6cu: goto label_3e1e6c;
        case 0x3e1e70u: goto label_3e1e70;
        case 0x3e1e74u: goto label_3e1e74;
        case 0x3e1e78u: goto label_3e1e78;
        case 0x3e1e7cu: goto label_3e1e7c;
        case 0x3e1e80u: goto label_3e1e80;
        case 0x3e1e84u: goto label_3e1e84;
        default: break;
    }

    ctx->pc = 0x3e1e08u;

label_3e1e08:
    // 0x3e1e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e1e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e1e0c:
    // 0x3e1e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e1e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e1e10:
    // 0x3e1e10: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x3e1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_3e1e14:
    // 0x3e1e14: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3e1e14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e1e18:
    // 0x3e1e18: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_3e1e1c:
    if (ctx->pc == 0x3E1E1Cu) {
        ctx->pc = 0x3E1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E18u;
        // 0x3e1e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1E20u;
        goto label_3e1e20;
    }
    ctx->pc = 0x3E1E18u;
    {
        const bool branch_taken_0x3e1e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E18u;
        // 0x3e1e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1e18) {
            ctx->pc = 0x3E1E58u;
            goto label_3e1e58;
        }
    }
    ctx->pc = 0x3E1E20u;
label_3e1e20:
    // 0x3e1e20: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x3e1e20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3e1e24:
    // 0x3e1e24: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3e1e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3e1e28:
    // 0x3e1e28: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_3e1e2c:
    if (ctx->pc == 0x3E1E2Cu) {
        ctx->pc = 0x3E1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E28u;
        // 0x3e1e2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1E30u;
        goto label_3e1e30;
    }
    ctx->pc = 0x3E1E28u;
    {
        const bool branch_taken_0x3e1e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E28u;
        // 0x3e1e2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1e28) {
            ctx->pc = 0x3E1E58u;
            goto label_3e1e58;
        }
    }
    ctx->pc = 0x3E1E30u;
label_3e1e30:
    // 0x3e1e30: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x3e1e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3e1e34:
    // 0x3e1e34: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x3e1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3e1e38:
    // 0x3e1e38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e1e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e1e3c:
    // 0x3e1e3c: 0x0  nop
    ctx->pc = 0x3e1e3cu;
    // NOP
label_3e1e40:
    // 0x3e1e40: 0x28c2000f  slti        $v0, $a2, 0xF
    ctx->pc = 0x3e1e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)15) ? 1 : 0);
label_3e1e44:
    // 0x3e1e44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e1e48:
    if (ctx->pc == 0x3E1E48u) {
        ctx->pc = 0x3E1E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E44u;
        // 0x3e1e48: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1E4Cu;
        goto label_3e1e4c;
    }
    ctx->pc = 0x3E1E44u;
    {
        const bool branch_taken_0x3e1e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E44u;
        // 0x3e1e48: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1e44) {
            ctx->pc = 0x3E1E58u;
            goto label_3e1e58;
        }
    }
    ctx->pc = 0x3E1E4Cu;
label_3e1e4c:
    // 0x3e1e4c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3e1e4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e1e50:
    // 0x3e1e50: 0x5447fffb  bnel        $v0, $a3, . + 4 + (-0x5 << 2)
label_3e1e54:
    if (ctx->pc == 0x3E1E54u) {
        ctx->pc = 0x3E1E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E50u;
        // 0x3e1e54: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1E58u;
        goto label_3e1e58;
    }
    ctx->pc = 0x3E1E50u;
    {
        const bool branch_taken_0x3e1e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e1e50) {
            ctx->pc = 0x3E1E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1E50u;
            // 0x3e1e54: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1e40;
        }
    }
    ctx->pc = 0x3E1E58u;
label_3e1e58:
    // 0x3e1e58: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x3e1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_3e1e5c:
    // 0x3e1e5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3e1e60:
    if (ctx->pc == 0x3E1E60u) {
        ctx->pc = 0x3E1E64u;
        goto label_3e1e64;
    }
    ctx->pc = 0x3E1E5Cu;
    {
        const bool branch_taken_0x3e1e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1e5c) {
            ctx->pc = 0x3E1E74u;
            goto label_3e1e74;
        }
    }
    ctx->pc = 0x3E1E64u;
label_3e1e64:
    // 0x3e1e64: 0x40f809  jalr        $v0
label_3e1e68:
    if (ctx->pc == 0x3E1E68u) {
        ctx->pc = 0x3E1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E64u;
        // 0x3e1e68: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1E6Cu;
        goto label_3e1e6c;
    }
    ctx->pc = 0x3E1E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E1E6Cu);
        ctx->pc = 0x3E1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E64u;
        // 0x3e1e68: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1E64u, 0x3E1E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E1E6Cu;
label_3e1e6c:
    // 0x3e1e6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e1e70:
    if (ctx->pc == 0x3E1E70u) {
        ctx->pc = 0x3E1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E6Cu;
        // 0x3e1e70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1E74u;
        goto label_3e1e74;
    }
    ctx->pc = 0x3E1E6Cu;
    {
        const bool branch_taken_0x3e1e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E6Cu;
        // 0x3e1e70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1e6c) {
            ctx->pc = 0x3E1E80u;
            goto label_3e1e80;
        }
    }
    ctx->pc = 0x3E1E74u;
label_3e1e74:
    // 0x3e1e74: 0xc0f87a6  jal         func_3E1E98
label_3e1e78:
    if (ctx->pc == 0x3E1E78u) {
        ctx->pc = 0x3E1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E74u;
        // 0x3e1e78: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1E7Cu;
        goto label_3e1e7c;
    }
    ctx->pc = 0x3E1E74u;
    SET_GPR_U32(ctx, 31, 0x3E1E7Cu);
    ctx->pc = 0x3E1E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1E74u;
    // 0x3e1e78: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E98u, 0x3E1E74u, 0x3E1E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1E7Cu;
label_3e1e7c:
    // 0x3e1e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e1e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1e80:
    // 0x3e1e80: 0x3e00008  jr          $ra
label_3e1e84:
    if (ctx->pc == 0x3E1E84u) {
        ctx->pc = 0x3E1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E80u;
        // 0x3e1e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1E88u;
        goto label_fallthrough_0x3e1e80;
    }
    ctx->pc = 0x3E1E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E80u;
        // 0x3e1e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e1e80:
    ctx->pc = 0x3E1E88u;
}
