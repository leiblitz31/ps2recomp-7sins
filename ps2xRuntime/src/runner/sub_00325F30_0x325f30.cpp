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

// Function: sub_00325F30
// Address: 0x325f30 - 0x326018
void sub_00325F30_0x325f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325F30_0x325f30");
#endif

    switch (ctx->pc) {
        case 0x325f48u: goto label_325f48;
        case 0x325fa0u: goto label_325fa0;
        case 0x325fe8u: goto label_325fe8;
        default: break;
    }

    ctx->pc = 0x325f30u;

    // 0x325f30: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x325f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x325f34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x325f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325f38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x325f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f3c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x325f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x325f40: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x325f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325f44: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x325f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_325f48:
    // 0x325f48: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x325f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x325f4c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x325f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x325f50: 0x54670003  bnel        $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x325F50u;
    {
        const bool branch_taken_0x325f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x325f50) {
            ctx->pc = 0x325F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325F50u;
            // 0x325f54: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325F60u;
            goto label_325f60;
        }
    }
    ctx->pc = 0x325F58u;
    // 0x325f58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x325F58u;
    {
        const bool branch_taken_0x325f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F58u;
        // 0x325f5c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f58) {
            ctx->pc = 0x325F74u;
            goto label_325f74;
        }
    }
    ctx->pc = 0x325F60u;
label_325f60:
    // 0x325f60: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x325f60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325f64: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x325f64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x325f68: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x325F68u;
    {
        const bool branch_taken_0x325f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F68u;
        // 0x325f6c: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f68) {
            ctx->pc = 0x325F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325f48;
        }
    }
    ctx->pc = 0x325F70u;
    // 0x325f70: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x325f70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325f74:
    // 0x325f74: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x325f74u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x325f78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x325f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x325F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F7Cu;
        // 0x325f80: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325F84u;
    // 0x325f84: 0x0  nop
    ctx->pc = 0x325f84u;
    // NOP
    // 0x325f88: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x325f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x325f8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x325f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x325f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f94: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x325f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x325f98: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x325f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x325f9c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x325f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_325fa0:
    // 0x325fa0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x325fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x325fa4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x325fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x325fa8: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x325FA8u;
    {
        const bool branch_taken_0x325fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x325fa8) {
            ctx->pc = 0x325FC8u;
            goto label_325fc8;
        }
    }
    ctx->pc = 0x325FB0u;
    // 0x325fb0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x325fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x325fb4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x325fb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325fb8: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x325fb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x325fbc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x325FBCu;
    {
        const bool branch_taken_0x325fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325fbc) {
            ctx->pc = 0x325FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325FBCu;
            // 0x325fc0: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325fa0;
        }
    }
    ctx->pc = 0x325FC4u;
    // 0x325fc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x325fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325fc8:
    // 0x325fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x325FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FC8u;
        // 0x325fcc: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325FD0u;
    // 0x325fd0: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x325fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x325fd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x325fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x325fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325fdc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x325fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x325fe0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x325fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x325fe4: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x325fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_325fe8:
    // 0x325fe8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x325fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x325fec: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x325fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x325ff0: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x325FF0u;
    {
        const bool branch_taken_0x325ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x325ff0) {
            ctx->pc = 0x326010u;
            goto label_326010;
        }
    }
    ctx->pc = 0x325FF8u;
    // 0x325ff8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x325ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x325ffc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x325ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326000: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x326000u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x326004: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x326004u;
    {
        const bool branch_taken_0x326004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x326004) {
            ctx->pc = 0x326008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326004u;
            // 0x326008: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325fe8;
        }
    }
    ctx->pc = 0x32600Cu;
    // 0x32600c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32600cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326010:
    // 0x326010: 0x3e00008  jr          $ra
    ctx->pc = 0x326010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326010u;
        // 0x326014: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326018u;
}
