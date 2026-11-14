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

// Function: sub_00310EC8
// Address: 0x310ec8 - 0x310f88
void sub_00310EC8_0x310ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310EC8_0x310ec8");
#endif

    switch (ctx->pc) {
        case 0x310ef0u: goto label_310ef0;
        case 0x310f0cu: goto label_310f0c;
        case 0x310f30u: goto label_310f30;
        case 0x310f38u: goto label_310f38;
        case 0x310f50u: goto label_310f50;
        case 0x310f58u: goto label_310f58;
        default: break;
    }

    ctx->pc = 0x310ec8u;

label_310ec8:
    // 0x310ec8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x310ec8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310ecc: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x310eccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x310ed0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x310ED0u;
    {
        const bool branch_taken_0x310ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310ED0u;
        // 0x310ed4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ed0) {
            ctx->pc = 0x310EE4u;
            goto label_310ee4;
        }
    }
    ctx->pc = 0x310ED8u;
    // 0x310ed8: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x310ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x310edc: 0x80c437c  j           func_310DF0
    ctx->pc = 0x310EDCu;
    ctx->pc = 0x310EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310EDCu;
    // 0x310ee0: 0xa0620003  sb          $v0, 0x3($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310DF0u, 0x310EDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x310EE4u;
label_310ee4:
    // 0x310ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x310EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310EE4u;
        // 0x310ee8: 0xa0620003  sb          $v0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310EECu;
    // 0x310eec: 0x0  nop
    ctx->pc = 0x310eecu;
    // NOP
label_310ef0:
    // 0x310ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x310ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x310ef4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x310ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x310ef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x310ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x310efc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x310efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x310f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x310f04: 0xc0c431a  jal         func_310C68
    ctx->pc = 0x310F04u;
    SET_GPR_U32(ctx, 31, 0x310F0Cu);
    ctx->pc = 0x310F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F04u;
    // 0x310f08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C68u, 0x310F04u, 0x310F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F0Cu;
label_310f0c:
    // 0x310f0c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x310f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x310f10: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x310f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x310f14: 0x602000e  bltzl       $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x310F14u;
    {
        const bool branch_taken_0x310f14 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x310f14) {
            ctx->pc = 0x310F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310F14u;
            // 0x310f18: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310F50u;
            goto label_310f50;
        }
    }
    ctx->pc = 0x310F1Cu;
    // 0x310f1c: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x310f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x310f20: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x310F20u;
    {
        const bool branch_taken_0x310f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x310f20) {
            ctx->pc = 0x310F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310F20u;
            // 0x310f24: 0xa2300002  sb          $s0, 0x2($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310F64u;
            goto label_310f64;
        }
    }
    ctx->pc = 0x310F28u;
    // 0x310f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x310f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f2c: 0x0  nop
    ctx->pc = 0x310f2cu;
    // NOP
label_310f30:
    // 0x310f30: 0xc0c43a6  jal         func_310E98
    ctx->pc = 0x310F30u;
    SET_GPR_U32(ctx, 31, 0x310F38u);
    ctx->pc = 0x310F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F30u;
    // 0x310f34: 0x2610ffc4  addiu       $s0, $s0, -0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310E98u, 0x310F30u, 0x310F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F38u;
label_310f38:
    // 0x310f38: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x310f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x310f3c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x310F3Cu;
    {
        const bool branch_taken_0x310f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F3Cu;
        // 0x310f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f3c) {
            ctx->pc = 0x310F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310f30;
        }
    }
    ctx->pc = 0x310F44u;
    // 0x310f44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x310F44u;
    {
        const bool branch_taken_0x310f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F44u;
        // 0x310f48: 0xa2300002  sb          $s0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f44) {
            ctx->pc = 0x310F68u;
            goto label_310f68;
        }
    }
    ctx->pc = 0x310F4Cu;
    // 0x310f4c: 0x0  nop
    ctx->pc = 0x310f4cu;
    // NOP
label_310f50:
    // 0x310f50: 0xc0c43b2  jal         func_310EC8
    ctx->pc = 0x310F50u;
    SET_GPR_U32(ctx, 31, 0x310F58u);
    ctx->pc = 0x310F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F50u;
    // 0x310f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310EC8u;
    goto label_310ec8;
    ctx->pc = 0x310F58u;
label_310f58:
    // 0x310f58: 0x602fffd  bltzl       $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x310F58u;
    {
        const bool branch_taken_0x310f58 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x310f58) {
            ctx->pc = 0x310F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310F58u;
            // 0x310f5c: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310f50;
        }
    }
    ctx->pc = 0x310F60u;
    // 0x310f60: 0xa2300002  sb          $s0, 0x2($s1)
    ctx->pc = 0x310f60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
label_310f64:
    // 0x310f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x310f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_310f68:
    // 0x310f68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x310f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310f6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x310f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x310f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310f74: 0x80c4334  j           func_310CD0
    ctx->pc = 0x310F74u;
    ctx->pc = 0x310F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F74u;
    // 0x310f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310CD0u, 0x310F74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x310F7Cu;
    // 0x310f7c: 0x0  nop
    ctx->pc = 0x310f7cu;
    // NOP
    // 0x310f80: 0x80c43bc  j           func_310EF0
    ctx->pc = 0x310F80u;
    ctx->pc = 0x310F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F80u;
    // 0x310f84: 0x2405fde4  addiu       $a1, $zero, -0x21C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310EF0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_310ef0;
    ctx->pc = 0x310F88u;
}
