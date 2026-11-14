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

// Function: sub_00326D38
// Address: 0x326d38 - 0x326f10
void sub_00326D38_0x326d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326D38_0x326d38");
#endif

    switch (ctx->pc) {
        case 0x326d64u: goto label_326d64;
        default: break;
    }

    ctx->pc = 0x326d38u;

    // 0x326d38: 0x3e00008  jr          $ra
    ctx->pc = 0x326D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D38u;
        // 0x326d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326D40u;
    // 0x326d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326d44: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x326d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x326d48: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x326d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x326d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326d50: 0x24422300  addiu       $v0, $v0, 0x2300
    ctx->pc = 0x326d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8960));
    // 0x326d54: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x326d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x326d58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x326d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326d5c: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x326D5Cu;
    SET_GPR_U32(ctx, 31, 0x326D64u);
    ctx->pc = 0x326D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326D5Cu;
    // 0x326d60: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x326D5Cu, 0x326D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326D64u;
label_326d64:
    // 0x326d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326d68: 0x3e00008  jr          $ra
    ctx->pc = 0x326D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D68u;
        // 0x326d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326D70u;
    // 0x326d70: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x326d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x326d74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x326d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x326d78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x326d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326d7c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x326d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x326d80: 0x8c880080  lw          $t0, 0x80($a0)
    ctx->pc = 0x326d80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x326d84: 0x15030004  bne         $t0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x326D84u;
    {
        const bool branch_taken_0x326d84 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x326D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D84u;
        // 0x326d88: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d84) {
            ctx->pc = 0x326D98u;
            goto label_326d98;
        }
    }
    ctx->pc = 0x326D8Cu;
    // 0x326d8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x326d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326d90: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x326D90u;
    {
        const bool branch_taken_0x326d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x326D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D90u;
        // 0x326d94: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d90) {
            ctx->pc = 0x326DA0u;
            goto label_326da0;
        }
    }
    ctx->pc = 0x326D98u;
label_326d98:
    // 0x326d98: 0x15020002  bne         $t0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x326D98u;
    {
        const bool branch_taken_0x326d98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x326D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D98u;
        // 0x326d9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d98) {
            ctx->pc = 0x326DA4u;
            goto label_326da4;
        }
    }
    ctx->pc = 0x326DA0u;
label_326da0:
    // 0x326da0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x326da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326da4:
    // 0x326da4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x326da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326da8: 0x10c2001a  beq         $a2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x326DA8u;
    {
        const bool branch_taken_0x326da8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x326DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DA8u;
        // 0x326dac: 0x2cc20003  sltiu       $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326da8) {
            ctx->pc = 0x326E14u;
            goto label_326e14;
        }
    }
    ctx->pc = 0x326DB0u;
    // 0x326db0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x326DB0u;
    {
        const bool branch_taken_0x326db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DB0u;
        // 0x326db4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326db0) {
            ctx->pc = 0x326DC8u;
            goto label_326dc8;
        }
    }
    ctx->pc = 0x326DB8u;
    // 0x326db8: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x326DB8u;
    {
        const bool branch_taken_0x326db8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x326DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DB8u;
        // 0x326dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326db8) {
            ctx->pc = 0x326DDCu;
            goto label_326ddc;
        }
    }
    ctx->pc = 0x326DC0u;
    // 0x326dc0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x326DC0u;
    {
        const bool branch_taken_0x326dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326dc0) {
            ctx->pc = 0x326E44u;
            goto label_326e44;
        }
    }
    ctx->pc = 0x326DC8u;
label_326dc8:
    // 0x326dc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x326dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x326dcc: 0x10c20017  beq         $a2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x326DCCu;
    {
        const bool branch_taken_0x326dcc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x326DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DCCu;
        // 0x326dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326dcc) {
            ctx->pc = 0x326E2Cu;
            goto label_326e2c;
        }
    }
    ctx->pc = 0x326DD4u;
    // 0x326dd4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x326DD4u;
    {
        const bool branch_taken_0x326dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326dd4) {
            ctx->pc = 0x326E44u;
            goto label_326e44;
        }
    }
    ctx->pc = 0x326DDCu;
label_326ddc:
    // 0x326ddc: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x326ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x326de0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x326de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x326de4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x326de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x326de8: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x326de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x326dec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x326decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x326df0: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x326df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x326df4: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x326df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
    // 0x326df8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x326df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x326dfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x326dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x326e00: 0x14a4000f  bne         $a1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x326E00u;
    {
        const bool branch_taken_0x326e00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x326E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E00u;
        // 0x326e04: 0xfcc30028  sd          $v1, 0x28($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e00) {
            ctx->pc = 0x326E40u;
            goto label_326e40;
        }
    }
    ctx->pc = 0x326E08u;
    // 0x326e08: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x326e08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x326e0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x326E0Cu;
    {
        const bool branch_taken_0x326e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E0Cu;
        // 0x326e10: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e0c) {
            ctx->pc = 0x326E40u;
            goto label_326e40;
        }
    }
    ctx->pc = 0x326E14u;
label_326e14:
    // 0x326e14: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x326e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x326e18: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x326e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x326e1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x326e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x326e20: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x326e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x326e24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x326E24u;
    {
        const bool branch_taken_0x326e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E24u;
        // 0x326e28: 0xfc620030  sd          $v0, 0x30($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e24) {
            ctx->pc = 0x326E40u;
            goto label_326e40;
        }
    }
    ctx->pc = 0x326E2Cu;
label_326e2c:
    // 0x326e2c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x326e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x326e30: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x326e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x326e34: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x326e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x326e38: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x326e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x326e3c: 0xfc620038  sd          $v0, 0x38($v1)
    ctx->pc = 0x326e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 2));
label_326e40:
    // 0x326e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326e44:
    // 0x326e44: 0x3e00008  jr          $ra
    ctx->pc = 0x326E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326E4Cu;
    // 0x326e4c: 0x0  nop
    ctx->pc = 0x326e4cu;
    // NOP
    // 0x326e50: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x326e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x326e54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x326e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x326e58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x326e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326e5c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x326e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x326e60: 0x8c880080  lw          $t0, 0x80($a0)
    ctx->pc = 0x326e60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x326e64: 0x15030004  bne         $t0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x326E64u;
    {
        const bool branch_taken_0x326e64 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x326E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E64u;
        // 0x326e68: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e64) {
            ctx->pc = 0x326E78u;
            goto label_326e78;
        }
    }
    ctx->pc = 0x326E6Cu;
    // 0x326e6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x326e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326e70: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x326E70u;
    {
        const bool branch_taken_0x326e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x326E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E70u;
        // 0x326e74: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e70) {
            ctx->pc = 0x326E80u;
            goto label_326e80;
        }
    }
    ctx->pc = 0x326E78u;
label_326e78:
    // 0x326e78: 0x15020002  bne         $t0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x326E78u;
    {
        const bool branch_taken_0x326e78 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x326E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E78u;
        // 0x326e7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e78) {
            ctx->pc = 0x326E84u;
            goto label_326e84;
        }
    }
    ctx->pc = 0x326E80u;
label_326e80:
    // 0x326e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x326e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326e84:
    // 0x326e84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x326e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326e88: 0x10c20015  beq         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x326E88u;
    {
        const bool branch_taken_0x326e88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x326E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E88u;
        // 0x326e8c: 0x2cc20003  sltiu       $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e88) {
            ctx->pc = 0x326EE0u;
            goto label_326ee0;
        }
    }
    ctx->pc = 0x326E90u;
    // 0x326e90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x326E90u;
    {
        const bool branch_taken_0x326e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E90u;
        // 0x326e94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e90) {
            ctx->pc = 0x326EA8u;
            goto label_326ea8;
        }
    }
    ctx->pc = 0x326E98u;
    // 0x326e98: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x326E98u;
    {
        const bool branch_taken_0x326e98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x326E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E98u;
        // 0x326e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e98) {
            ctx->pc = 0x326EBCu;
            goto label_326ebc;
        }
    }
    ctx->pc = 0x326EA0u;
    // 0x326ea0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x326EA0u;
    {
        const bool branch_taken_0x326ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326ea0) {
            ctx->pc = 0x326F08u;
            goto label_326f08;
        }
    }
    ctx->pc = 0x326EA8u;
label_326ea8:
    // 0x326ea8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x326ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x326eac: 0x10c20011  beq         $a2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x326EACu;
    {
        const bool branch_taken_0x326eac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x326EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EACu;
        // 0x326eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326eac) {
            ctx->pc = 0x326EF4u;
            goto label_326ef4;
        }
    }
    ctx->pc = 0x326EB4u;
    // 0x326eb4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x326EB4u;
    {
        const bool branch_taken_0x326eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326eb4) {
            ctx->pc = 0x326F08u;
            goto label_326f08;
        }
    }
    ctx->pc = 0x326EBCu;
label_326ebc:
    // 0x326ebc: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x326ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x326ec0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x326ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326ec4: 0xdc430028  ld          $v1, 0x28($v0)
    ctx->pc = 0x326ec4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x326ec8: 0x3223a  dsrl        $a0, $v1, 8
    ctx->pc = 0x326ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 8);
    // 0x326ecc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x326eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x326ed0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x326ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x326ed4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x326ed4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x326ed8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x326ED8u;
    {
        const bool branch_taken_0x326ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326ED8u;
        // 0x326edc: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ed8) {
            ctx->pc = 0x326F04u;
            goto label_326f04;
        }
    }
    ctx->pc = 0x326EE0u;
label_326ee0:
    // 0x326ee0: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x326ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x326ee4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x326ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326ee8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x326ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x326eec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x326EECu;
    {
        const bool branch_taken_0x326eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EECu;
        // 0x326ef0: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326eec) {
            ctx->pc = 0x326F04u;
            goto label_326f04;
        }
    }
    ctx->pc = 0x326EF4u;
label_326ef4:
    // 0x326ef4: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x326ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x326ef8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x326ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326efc: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x326efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x326f00: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x326f00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_326f04:
    // 0x326f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326f08:
    // 0x326f08: 0x3e00008  jr          $ra
    ctx->pc = 0x326F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326F10u;
}
