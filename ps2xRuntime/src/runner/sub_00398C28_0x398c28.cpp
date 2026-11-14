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

// Function: sub_00398C28
// Address: 0x398c28 - 0x398d20
void sub_00398C28_0x398c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398C28_0x398c28");
#endif

    switch (ctx->pc) {
        case 0x398c3cu: goto label_398c3c;
        case 0x398c5cu: goto label_398c5c;
        case 0x398c78u: goto label_398c78;
        case 0x398c9cu: goto label_398c9c;
        case 0x398cbcu: goto label_398cbc;
        case 0x398cd8u: goto label_398cd8;
        default: break;
    }

    ctx->pc = 0x398c28u;

    // 0x398c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398c34: 0xc0e4c28  jal         func_3930A0
    ctx->pc = 0x398C34u;
    SET_GPR_U32(ctx, 31, 0x398C3Cu);
    ctx->pc = 0x398C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C34u;
    // 0x398c38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3930A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3930A0u, 0x398C34u, 0x398C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C3Cu;
label_398c3c:
    // 0x398c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398c40: 0x3e00008  jr          $ra
    ctx->pc = 0x398C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C40u;
        // 0x398c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398C48u;
    // 0x398c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398c4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398c54: 0xc0e4c28  jal         func_3930A0
    ctx->pc = 0x398C54u;
    SET_GPR_U32(ctx, 31, 0x398C5Cu);
    ctx->pc = 0x398C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C54u;
    // 0x398c58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3930A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3930A0u, 0x398C54u, 0x398C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C5Cu;
label_398c5c:
    // 0x398c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398c60: 0x3e00008  jr          $ra
    ctx->pc = 0x398C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C60u;
        // 0x398c64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398C68u;
    // 0x398c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398c6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398c70: 0xc0e566e  jal         func_3959B8
    ctx->pc = 0x398C70u;
    SET_GPR_U32(ctx, 31, 0x398C78u);
    ctx->pc = 0x398C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C70u;
    // 0x398c74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3959B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3959B8u, 0x398C70u, 0x398C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C78u;
label_398c78:
    // 0x398c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x398C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C7Cu;
        // 0x398c80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398C84u;
    // 0x398c84: 0x0  nop
    ctx->pc = 0x398c84u;
    // NOP
    // 0x398c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398c94: 0xc0e4c28  jal         func_3930A0
    ctx->pc = 0x398C94u;
    SET_GPR_U32(ctx, 31, 0x398C9Cu);
    ctx->pc = 0x398C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C94u;
    // 0x398c98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3930A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3930A0u, 0x398C94u, 0x398C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C9Cu;
label_398c9c:
    // 0x398c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x398CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CA0u;
        // 0x398ca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398CA8u;
    // 0x398ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398cac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398cb4: 0xc0e4c28  jal         func_3930A0
    ctx->pc = 0x398CB4u;
    SET_GPR_U32(ctx, 31, 0x398CBCu);
    ctx->pc = 0x398CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398CB4u;
    // 0x398cb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3930A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3930A0u, 0x398CB4u, 0x398CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398CBCu;
label_398cbc:
    // 0x398cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x398CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CC0u;
        // 0x398cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398CC8u;
    // 0x398cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398cd0: 0xc0e566e  jal         func_3959B8
    ctx->pc = 0x398CD0u;
    SET_GPR_U32(ctx, 31, 0x398CD8u);
    ctx->pc = 0x398CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398CD0u;
    // 0x398cd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3959B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3959B8u, 0x398CD0u, 0x398CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398CD8u;
label_398cd8:
    // 0x398cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x398CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CDCu;
        // 0x398ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398CE4u;
    // 0x398ce4: 0x0  nop
    ctx->pc = 0x398ce4u;
    // NOP
    // 0x398ce8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x398CE8u;
    {
        const bool branch_taken_0x398ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x398CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CE8u;
        // 0x398cec: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398ce8) {
            ctx->pc = 0x398D04u;
            goto label_398d04;
        }
    }
    ctx->pc = 0x398CF0u;
    // 0x398cf0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x398cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x398cf4: 0x2442ae28  addiu       $v0, $v0, -0x51D8
    ctx->pc = 0x398cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946344));
    // 0x398cf8: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x398cf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5DAE3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAE3Cu, _value); } while (0);
    // 0x398cfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x398CFCu;
    {
        const bool branch_taken_0x398cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CFCu;
        // 0x398d00: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398cfc) {
            ctx->pc = 0x398D18u;
            goto label_398d18;
        }
    }
    ctx->pc = 0x398D04u;
label_398d04:
    // 0x398d04: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x398d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x398d08: 0x2463ae28  addiu       $v1, $v1, -0x51D8
    ctx->pc = 0x398d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946344));
    // 0x398d0c: 0x24428c28  addiu       $v0, $v0, -0x73D8
    ctx->pc = 0x398d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937640));
    // 0x398d10: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x398d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x398d14: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x398d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_398d18:
    // 0x398d18: 0x3e00008  jr          $ra
    ctx->pc = 0x398D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D18u;
        // 0x398d1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398D20u;
}
