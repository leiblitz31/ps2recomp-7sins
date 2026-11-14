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

// Function: sub_002FBBA8
// Address: 0x2fbba8 - 0x2fbc60
void sub_002FBBA8_0x2fbba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBBA8_0x2fbba8");
#endif

    switch (ctx->pc) {
        case 0x2fbc28u: goto label_2fbc28;
        case 0x2fbc54u: goto label_2fbc54;
        default: break;
    }

    ctx->pc = 0x2fbba8u;

    // 0x2fbba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fbbac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fbbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fbbb0: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2fbbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2fbbb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fbbb8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2fbbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2fbbbc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FBBBCu;
    {
        const bool branch_taken_0x2fbbbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBBCu;
        // 0x2fbbc0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbbc) {
            ctx->pc = 0x2FBBD0u;
            goto label_2fbbd0;
        }
    }
    ctx->pc = 0x2FBBC4u;
    // 0x2fbbc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fbbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fbbc8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2FBBC8u;
    {
        const bool branch_taken_0x2fbbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBC8u;
        // 0x2fbbcc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbc8) {
            ctx->pc = 0x2FBC4Cu;
            goto label_2fbc4c;
        }
    }
    ctx->pc = 0x2FBBD0u;
label_2fbbd0:
    // 0x2fbbd0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2fbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2fbbd4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2FBBD4u;
    {
        const bool branch_taken_0x2fbbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBD4u;
        // 0x2fbbd8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbd4) {
            ctx->pc = 0x2FBC00u;
            goto label_2fbc00;
        }
    }
    ctx->pc = 0x2FBBDCu;
    // 0x2fbbdc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2fbbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2fbbe0: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x2fbbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x2fbbe4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2fbbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2fbbe8: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FBBE8u;
    {
        const bool branch_taken_0x2fbbe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBE8u;
        // 0x2fbbec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbe8) {
            ctx->pc = 0x2FBC58u;
            goto label_2fbc58;
        }
    }
    ctx->pc = 0x2FBBF0u;
    // 0x2fbbf0: 0x41023  negu        $v0, $a0
    ctx->pc = 0x2fbbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2fbbf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBBF4u;
    {
        const bool branch_taken_0x2fbbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBF4u;
        // 0x2fbbf8: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbf4) {
            ctx->pc = 0x2FBC04u;
            goto label_2fbc04;
        }
    }
    ctx->pc = 0x2FBBFCu;
    // 0x2fbbfc: 0x0  nop
    ctx->pc = 0x2fbbfcu;
    // NOP
label_2fbc00:
    // 0x2fbc00: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x2fbc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_2fbc04:
    // 0x2fbc04: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2fbc04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbc08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fbc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fbc0c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2fbc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2fbc10: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2fbc10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2fbc14: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FBC14u;
    {
        const bool branch_taken_0x2fbc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC14u;
        // 0x2fbc18: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc14) {
            ctx->pc = 0x2FBC4Cu;
            goto label_2fbc4c;
        }
    }
    ctx->pc = 0x2FBC1Cu;
    // 0x2fbc1c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2fbc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fbc20: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x2fbc20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x2fbc24: 0x0  nop
    ctx->pc = 0x2fbc24u;
    // NOP
label_2fbc28:
    // 0x2fbc28: 0x41878  dsll        $v1, $a0, 1
    ctx->pc = 0x2fbc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 1);
    // 0x2fbc2c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2fbc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2fbc30: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x2fbc30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2fbc34: 0x0  nop
    ctx->pc = 0x2fbc34u;
    // NOP
    // 0x2fbc38: 0x0  nop
    ctx->pc = 0x2fbc38u;
    // NOP
    // 0x2fbc3c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FBC3Cu;
    {
        const bool branch_taken_0x2fbc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC3Cu;
        // 0x2fbc40: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc3c) {
            ctx->pc = 0x2FBC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbc28;
        }
    }
    ctx->pc = 0x2FBC44u;
    // 0x2fbc44: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x2fbc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x2fbc48: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x2fbc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_2fbc4c:
    // 0x2fbc4c: 0xc0bec6e  jal         func_2FB1B8
    ctx->pc = 0x2FBC4Cu;
    SET_GPR_U32(ctx, 31, 0x2FBC54u);
    ctx->pc = 0x2FBC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC4Cu;
    // 0x2fbc50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB1B8u, 0x2FBC4Cu, 0x2FBC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC54u;
label_2fbc54:
    // 0x2fbc54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbc58:
    // 0x2fbc58: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC58u;
        // 0x2fbc5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBC60u;
}
