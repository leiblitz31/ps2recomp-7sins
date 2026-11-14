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

// Function: sub_002FBA38
// Address: 0x2fba38 - 0x2fbb58
void sub_002FBA38_0x2fba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBA38_0x2fba38");
#endif

    ctx->pc = 0x2fba38u;

    // 0x2fba38: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2fba38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fba3c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x2fba3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fba40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FBA40u;
    {
        const bool branch_taken_0x2fba40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fba40) {
            ctx->pc = 0x2FBA58u;
            goto label_2fba58;
        }
    }
    ctx->pc = 0x2FBA48u;
    // 0x2fba48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2fba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fba4c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2fba4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fba50: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBA50u;
    {
        const bool branch_taken_0x2fba50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fba50) {
            ctx->pc = 0x2FBA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBA50u;
            // 0x2fba54: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBA60u;
            goto label_2fba60;
        }
    }
    ctx->pc = 0x2FBA58u;
label_2fba58:
    // 0x2fba58: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA58u;
        // 0x2fba5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBA60u;
label_2fba60:
    // 0x2fba60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FBA60u;
    {
        const bool branch_taken_0x2fba60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA60u;
        // 0x2fba64: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba60) {
            ctx->pc = 0x2FBA80u;
            goto label_2fba80;
        }
    }
    ctx->pc = 0x2FBA68u;
    // 0x2fba68: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FBA68u;
    {
        const bool branch_taken_0x2fba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fba68) {
            ctx->pc = 0x2FBA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBA68u;
            // 0x2fba6c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBAD4u;
            goto label_2fbad4;
        }
    }
    ctx->pc = 0x2FBA70u;
    // 0x2fba70: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2fba70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fba74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fba78: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA78u;
        // 0x2fba7c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBA80u;
label_2fba80:
    // 0x2fba80: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FBA80u;
    {
        const bool branch_taken_0x2fba80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fba80) {
            ctx->pc = 0x2FBA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBA80u;
            // 0x2fba84: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBAA0u;
            goto label_2fbaa0;
        }
    }
    ctx->pc = 0x2FBA88u;
    // 0x2fba88: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2fba88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fba8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fba90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fba94: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA94u;
        // 0x2fba98: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBA9Cu;
    // 0x2fba9c: 0x0  nop
    ctx->pc = 0x2fba9cu;
    // NOP
label_2fbaa0:
    // 0x2fbaa0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FBAA0u;
    {
        const bool branch_taken_0x2fbaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbaa0) {
            ctx->pc = 0x2FBAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBAA0u;
            // 0x2fbaa4: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBAC8u;
            goto label_2fbac8;
        }
    }
    ctx->pc = 0x2FBAA8u;
    // 0x2fbaa8: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x2fbaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2fbaac: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2FBAACu;
    {
        const bool branch_taken_0x2fbaac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBAACu;
        // 0x2fbab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbaac) {
            ctx->pc = 0x2FBB50u;
            goto label_2fbb50;
        }
    }
    ctx->pc = 0x2FBAB4u;
    // 0x2fbab4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2fbab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fbab8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fbab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fbabc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fbabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fbac0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBAC0u;
        // 0x2fbac4: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBAC8u;
label_2fbac8:
    // 0x2fbac8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FBAC8u;
    {
        const bool branch_taken_0x2fbac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbac8) {
            ctx->pc = 0x2FBACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBAC8u;
            // 0x2fbacc: 0x8c870004  lw          $a3, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBAE8u;
            goto label_2fbae8;
        }
    }
    ctx->pc = 0x2FBAD0u;
    // 0x2fbad0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2fbad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2fbad4:
    // 0x2fbad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fbad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fbad8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fbad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fbadc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBADCu;
        // 0x2fbae0: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBAE4u;
    // 0x2fbae4: 0x0  nop
    ctx->pc = 0x2fbae4u;
    // NOP
label_2fbae8:
    // 0x2fbae8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2fbae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fbaec: 0x14e2000f  bne         $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FBAECu;
    {
        const bool branch_taken_0x2fbaec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FBAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBAECu;
        // 0x2fbaf0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbaec) {
            ctx->pc = 0x2FBB2Cu;
            goto label_2fbb2c;
        }
    }
    ctx->pc = 0x2FBAF4u;
    // 0x2fbaf4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2fbaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fbaf8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2fbaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2fbafc: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2fbafcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2fbb00: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2FBB00u;
    {
        const bool branch_taken_0x2fbb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbb00) {
            ctx->pc = 0x2FBB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBB00u;
            // 0x2fbb04: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBB2Cu;
            goto label_2fbb2c;
        }
    }
    ctx->pc = 0x2FBB08u;
    // 0x2fbb08: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2fbb08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fbb0c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FBB0Cu;
    {
        const bool branch_taken_0x2fbb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB0Cu;
        // 0x2fbb10: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb0c) {
            ctx->pc = 0x2FBB44u;
            goto label_2fbb44;
        }
    }
    ctx->pc = 0x2FBB14u;
    // 0x2fbb14: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x2fbb14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fbb18: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x2fbb18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2fbb1c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2fbb1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2fbb20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FBB20u;
    {
        const bool branch_taken_0x2fbb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbb20) {
            ctx->pc = 0x2FBB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBB20u;
            // 0x2fbb24: 0x64102b  sltu        $v0, $v1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBB38u;
            goto label_2fbb38;
        }
    }
    ctx->pc = 0x2FBB28u;
    // 0x2fbb28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fbb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fbb2c:
    // 0x2fbb2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fbb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fbb30: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB30u;
        // 0x2fbb34: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBB38u;
label_2fbb38:
    // 0x2fbb38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FBB38u;
    {
        const bool branch_taken_0x2fbb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbb38) {
            ctx->pc = 0x2FBB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBB38u;
            // 0x2fbb3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBB50u;
            goto label_2fbb50;
        }
    }
    ctx->pc = 0x2FBB40u;
    // 0x2fbb40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fbb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fbb44:
    // 0x2fbb44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fbb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fbb48: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB48u;
        // 0x2fbb4c: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBB50u;
label_2fbb50:
    // 0x2fbb50: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBB58u;
}
