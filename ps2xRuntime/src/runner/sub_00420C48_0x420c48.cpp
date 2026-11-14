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

// Function: sub_00420C48
// Address: 0x420c48 - 0x420d38
void sub_00420C48_0x420c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420C48_0x420c48");
#endif

    switch (ctx->pc) {
        case 0x420c80u: goto label_420c80;
        case 0x420cc8u: goto label_420cc8;
        case 0x420cf0u: goto label_420cf0;
        case 0x420d18u: goto label_420d18;
        default: break;
    }

    ctx->pc = 0x420c48u;

    // 0x420c48: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x420c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420c4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x420c4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x420c50: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x420c50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420c54: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x420c54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420c58: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x420c58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420c5c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x420c5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420c60: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x420c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x420c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x420c68: 0x2484ca10  addiu       $a0, $a0, -0x35F0
    ctx->pc = 0x420c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
    // 0x420c6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x420c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420c70: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x420c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420c74: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x420c74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420c78: 0xc104b72  jal         func_412DC8
    ctx->pc = 0x420C78u;
    SET_GPR_U32(ctx, 31, 0x420C80u);
    ctx->pc = 0x420C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420C78u;
    // 0x420c7c: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x420C78u, 0x420C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420C80u;
label_420c80:
    // 0x420c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x420c84: 0x3e00008  jr          $ra
    ctx->pc = 0x420C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420C84u;
        // 0x420c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420C8Cu;
    // 0x420c8c: 0x0  nop
    ctx->pc = 0x420c8cu;
    // NOP
    // 0x420c90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x420c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420c94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x420c94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x420c98: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x420c98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420c9c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x420c9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420ca0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x420ca0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420ca4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x420ca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420ca8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x420ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x420cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x420cb0: 0x2484ca28  addiu       $a0, $a0, -0x35D8
    ctx->pc = 0x420cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953512));
    // 0x420cb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x420cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420cb8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x420cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420cbc: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x420cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420cc0: 0xc104b72  jal         func_412DC8
    ctx->pc = 0x420CC0u;
    SET_GPR_U32(ctx, 31, 0x420CC8u);
    ctx->pc = 0x420CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420CC0u;
    // 0x420cc4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x420CC0u, 0x420CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420CC8u;
label_420cc8:
    // 0x420cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x420ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x420CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420CCCu;
        // 0x420cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420CD4u;
    // 0x420cd4: 0x0  nop
    ctx->pc = 0x420cd4u;
    // NOP
    // 0x420cd8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x420cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420cdc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x420cdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x420ce0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x420ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x420ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x420ce8: 0xc104c74  jal         func_4131D0
    ctx->pc = 0x420CE8u;
    SET_GPR_U32(ctx, 31, 0x420CF0u);
    ctx->pc = 0x420CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420CE8u;
    // 0x420cec: 0x2484ca10  addiu       $a0, $a0, -0x35F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4131D0u, 0x420CE8u, 0x420CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420CF0u;
label_420cf0:
    // 0x420cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x420cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x420CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420CF4u;
        // 0x420cf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420CFCu;
    // 0x420cfc: 0x0  nop
    ctx->pc = 0x420cfcu;
    // NOP
    // 0x420d00: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x420d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420d04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x420d04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x420d08: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x420d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x420d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x420d10: 0xc104c74  jal         func_4131D0
    ctx->pc = 0x420D10u;
    SET_GPR_U32(ctx, 31, 0x420D18u);
    ctx->pc = 0x420D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420D10u;
    // 0x420d14: 0x2484ca28  addiu       $a0, $a0, -0x35D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4131D0u, 0x420D10u, 0x420D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420D18u;
label_420d18:
    // 0x420d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x420d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x420D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D1Cu;
        // 0x420d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420D24u;
    // 0x420d24: 0x0  nop
    ctx->pc = 0x420d24u;
    // NOP
    // 0x420d28: 0x3e00008  jr          $ra
    ctx->pc = 0x420D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D28u;
        // 0x420d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420D30u;
    // 0x420d30: 0x3e00008  jr          $ra
    ctx->pc = 0x420D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D30u;
        // 0x420d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420D38u;
}
