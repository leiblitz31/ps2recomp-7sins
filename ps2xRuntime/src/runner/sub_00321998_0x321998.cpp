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

// Function: sub_00321998
// Address: 0x321998 - 0x321a80
void sub_00321998_0x321998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321998_0x321998");
#endif

    switch (ctx->pc) {
        case 0x321a28u: goto label_321a28;
        case 0x321a58u: goto label_321a58;
        default: break;
    }

    ctx->pc = 0x321998u;

    // 0x321998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32199c: 0x8f82bce0  lw          $v0, -0x4320($gp)
    ctx->pc = 0x32199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950112)));
    // 0x3219a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3219a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3219a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3219a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3219a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3219a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3219acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3219b0: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x3219b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3219b4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3219b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3219b8: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3219B8u;
    {
        const bool branch_taken_0x3219b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3219BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219B8u;
        // 0x3219bc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3219b8) {
            ctx->pc = 0x321A60u;
            goto label_321a60;
        }
    }
    ctx->pc = 0x3219C0u;
    // 0x3219c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3219c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3219c4: 0x58400020  blezl       $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3219C4u;
    {
        const bool branch_taken_0x3219c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3219c4) {
            ctx->pc = 0x3219C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3219C4u;
            // 0x3219c8: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321A48u;
            goto label_321a48;
        }
    }
    ctx->pc = 0x3219CCu;
    // 0x3219cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3219ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219d0: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x3219d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3219d4: 0x51023  negu        $v0, $a1
    ctx->pc = 0x3219d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x3219d8: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x3219d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3219dc: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x3219DCu;
    {
        const bool branch_taken_0x3219dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3219E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219DCu;
        // 0x3219e0: 0x24e3000c  addiu       $v1, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3219dc) {
            ctx->pc = 0x321A20u;
            goto label_321a20;
        }
    }
    ctx->pc = 0x3219E4u;
    // 0x3219e4: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x3219e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3219e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3219E8u;
    {
        const bool branch_taken_0x3219e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3219ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219E8u;
        // 0x3219ec: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3219e8) {
            ctx->pc = 0x321A10u;
            goto label_321a10;
        }
    }
    ctx->pc = 0x3219F0u;
    // 0x3219f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3219F0u;
    {
        const bool branch_taken_0x3219f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3219f0) {
            ctx->pc = 0x3219F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3219F0u;
            // 0x3219f4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321A08u;
            goto label_321a08;
        }
    }
    ctx->pc = 0x3219F8u;
    // 0x3219f8: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x3219f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x3219fc: 0x24e3001c  addiu       $v1, $a3, 0x1C
    ctx->pc = 0x3219fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x321a00: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x321a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x321a04: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x321a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_321a08:
    // 0x321a08: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x321a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x321a0c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x321a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_321a10:
    // 0x321a10: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x321a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x321a14: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x321a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x321a18: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x321A18u;
    {
        const bool branch_taken_0x321a18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A18u;
        // 0x321a1c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a18) {
            ctx->pc = 0x321A44u;
            goto label_321a44;
        }
    }
    ctx->pc = 0x321A20u;
label_321a20:
    // 0x321a20: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x321a20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a24: 0x0  nop
    ctx->pc = 0x321a24u;
    // NOP
label_321a28:
    // 0x321a28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x321a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x321a2c: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x321a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x321a30: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x321a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x321a34: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x321a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x321a38: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x321a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x321a3c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x321A3Cu;
    {
        const bool branch_taken_0x321a3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x321A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A3Cu;
        // 0x321a40: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a3c) {
            ctx->pc = 0x321A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321a28;
        }
    }
    ctx->pc = 0x321A44u;
label_321a44:
    // 0x321a44: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x321a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_321a48:
    // 0x321a48: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321A48u;
    {
        const bool branch_taken_0x321a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x321a48) {
            ctx->pc = 0x321A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321A48u;
            // 0x321a4c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321A5Cu;
            goto label_321a5c;
        }
    }
    ctx->pc = 0x321A50u;
    // 0x321a50: 0xc0c8480  jal         func_321200
    ctx->pc = 0x321A50u;
    SET_GPR_U32(ctx, 31, 0x321A58u);
    ctx->pc = 0x321200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321200u, 0x321A50u, 0x321A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A58u;
label_321a58:
    // 0x321a58: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x321a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_321a5c:
    // 0x321a5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x321a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_321a60:
    // 0x321a60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x321a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a64: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x321a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x321a68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x321a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321a6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x321a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321a74: 0x3e00008  jr          $ra
    ctx->pc = 0x321A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A74u;
        // 0x321a78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321A7Cu;
    // 0x321a7c: 0x0  nop
    ctx->pc = 0x321a7cu;
    // NOP
    ctx->pc = 0x321a80u;
}
