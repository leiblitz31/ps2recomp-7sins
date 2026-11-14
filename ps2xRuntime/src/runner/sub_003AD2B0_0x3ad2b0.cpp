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

// Function: sub_003AD2B0
// Address: 0x3ad2b0 - 0x3ad508
void sub_003AD2B0_0x3ad2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD2B0_0x3ad2b0");
#endif

    switch (ctx->pc) {
        case 0x3ad2e8u: goto label_3ad2e8;
        case 0x3ad370u: goto label_3ad370;
        case 0x3ad3f0u: goto label_3ad3f0;
        case 0x3ad450u: goto label_3ad450;
        default: break;
    }

    ctx->pc = 0x3ad2b0u;

    // 0x3ad2b0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3ad2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3ad2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2B4u;
        // 0x3ad2b8: 0x8c62d3a0  lw          $v0, -0x2C60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955936)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD2BCu;
    // 0x3ad2bc: 0x0  nop
    ctx->pc = 0x3ad2bcu;
    // NOP
    // 0x3ad2c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ad2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad2c4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3ad2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3ad2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2C8u;
        // 0x3ad2cc: 0xac62d3a0  sw          $v0, -0x2C60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294955936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD2D0u;
    // 0x3ad2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2D0u;
        // 0x3ad2d4: 0x8c820130  lw          $v0, 0x130($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD2D8u;
    // 0x3ad2d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ad2d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad2dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ad2dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad2e0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3ad2e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad2e4: 0x24870024  addiu       $a3, $a0, 0x24
    ctx->pc = 0x3ad2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_3ad2e8:
    // 0x3ad2e8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x3ad2e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ad2ec: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AD2ECu;
    {
        const bool branch_taken_0x3ad2ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3ad2ec) {
            ctx->pc = 0x3AD2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD2ECu;
            // 0x3ad2f0: 0x84e20002  lh          $v0, 0x2($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD304u;
            goto label_3ad304;
        }
    }
    ctx->pc = 0x3AD2F4u;
    // 0x3ad2f4: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x3ad2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x3ad2f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ad2f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ad2fc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3ad2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3ad300: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x3ad300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_3ad304:
    // 0x3ad304: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD304u;
    {
        const bool branch_taken_0x3ad304 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AD308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD304u;
        // 0x3ad308: 0x25060001  addiu       $a2, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad304) {
            ctx->pc = 0x3AD318u;
            goto label_3ad318;
        }
    }
    ctx->pc = 0x3AD30Cu;
    // 0x3ad30c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3ad30cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x3ad310: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ad310u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ad314: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3ad314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3ad318:
    // 0x3ad318: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x3ad318u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3ad31c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD31Cu;
    {
        const bool branch_taken_0x3ad31c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD31Cu;
        // 0x3ad320: 0x25060002  addiu       $a2, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad31c) {
            ctx->pc = 0x3AD330u;
            goto label_3ad330;
        }
    }
    ctx->pc = 0x3AD324u;
    // 0x3ad324: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3ad324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x3ad328: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ad328u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ad32c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3ad32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3ad330:
    // 0x3ad330: 0x84e20006  lh          $v0, 0x6($a3)
    ctx->pc = 0x3ad330u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x3ad334: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD334u;
    {
        const bool branch_taken_0x3ad334 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD334u;
        // 0x3ad338: 0x25060003  addiu       $a2, $t0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad334) {
            ctx->pc = 0x3AD348u;
            goto label_3ad348;
        }
    }
    ctx->pc = 0x3AD33Cu;
    // 0x3ad33c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3ad33cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x3ad340: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ad340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ad344: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3ad344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3ad348:
    // 0x3ad348: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3ad348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3ad34c: 0x2d020080  sltiu       $v0, $t0, 0x80
    ctx->pc = 0x3ad34cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x3ad350: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3AD350u;
    {
        const bool branch_taken_0x3ad350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD350u;
        // 0x3ad354: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad350) {
            ctx->pc = 0x3AD2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad2e8;
        }
    }
    ctx->pc = 0x3AD358u;
    // 0x3ad358: 0x8c820128  lw          $v0, 0x128($a0)
    ctx->pc = 0x3ad358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x3ad35c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3AD35Cu;
    {
        const bool branch_taken_0x3ad35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD35Cu;
        // 0x3ad360: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad35c) {
            ctx->pc = 0x3AD3A4u;
            goto label_3ad3a4;
        }
    }
    ctx->pc = 0x3AD364u;
    // 0x3ad364: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x3ad364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3ad368: 0x8c83012c  lw          $v1, 0x12C($a0)
    ctx->pc = 0x3ad368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x3ad36c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3ad36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3ad370:
    // 0x3ad370: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x3ad370u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ad374: 0x4420007  bltzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AD374u;
    {
        const bool branch_taken_0x3ad374 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3ad374) {
            ctx->pc = 0x3AD378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD374u;
            // 0x3ad378: 0x8c820128  lw          $v0, 0x128($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD394u;
            goto label_3ad394;
        }
    }
    ctx->pc = 0x3AD37Cu;
    // 0x3ad37c: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x3ad37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x3ad380: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ad380u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ad384: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3ad384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3ad388: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3ad388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3ad38c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3ad38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3ad390: 0x8c820128  lw          $v0, 0x128($a0)
    ctx->pc = 0x3ad390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
label_3ad394:
    // 0x3ad394: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3ad394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3ad398: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x3ad398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3ad39c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3AD39Cu;
    {
        const bool branch_taken_0x3ad39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD39Cu;
        // 0x3ad3a0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad39c) {
            ctx->pc = 0x3AD370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad370;
        }
    }
    ctx->pc = 0x3AD3A4u;
label_3ad3a4:
    // 0x3ad3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3A4u;
        // 0x3ad3a8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD3ACu;
    // 0x3ad3ac: 0x0  nop
    ctx->pc = 0x3ad3acu;
    // NOP
    // 0x3ad3b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ad3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3ad3b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ad3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3ad3b8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ad3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3ad3bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ad3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad3c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ad3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ad3c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ad3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad3c8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3ad3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3ad3cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ad3ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad3d0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3ad3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3ad3d4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3ad3d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad3d8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3ad3d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3ad3dc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3ad3dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad3e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ad3e4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3ad3e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3ad3e8: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3AD3E8u;
    SET_GPR_U32(ctx, 31, 0x3AD3F0u);
    ctx->pc = 0x3AD3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD3E8u;
    // 0x3ad3ec: 0x8e040134  lw          $a0, 0x134($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AD3E8u, 0x3AD3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD3F0u;
label_3ad3f0:
    // 0x3ad3f0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3ad3f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad3f4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3ad3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3ad3f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3ad3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3ad3fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD3FCu;
    {
        const bool branch_taken_0x3ad3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3FCu;
        // 0x3ad400: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad3fc) {
            ctx->pc = 0x3AD410u;
            goto label_3ad410;
        }
    }
    ctx->pc = 0x3AD404u;
    // 0x3ad404: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x3ad404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3ad408: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD408u;
    {
        const bool branch_taken_0x3ad408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD408u;
        // 0x3ad40c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad408) {
            ctx->pc = 0x3AD41Cu;
            goto label_3ad41c;
        }
    }
    ctx->pc = 0x3AD410u;
label_3ad410:
    // 0x3ad410: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3ad410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ad414: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ad414u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ad418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad41c:
    // 0x3ad41c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ad41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad420: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x3ad420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3ad424: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ad424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ad428: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ad428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ad42c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x3ad42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x3ad430: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ad430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ad434: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ad434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ad438: 0x58600028  blezl       $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3AD438u;
    {
        const bool branch_taken_0x3ad438 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3ad438) {
            ctx->pc = 0x3AD43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD438u;
            // 0x3ad43c: 0xe6740000  swc1        $f20, 0x0($s3) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD4DCu;
            goto label_3ad4dc;
        }
    }
    ctx->pc = 0x3AD440u;
    // 0x3ad440: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3ad440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad444: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x3ad444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x3ad448: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x3ad448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x3ad44c: 0x0  nop
    ctx->pc = 0x3ad44cu;
    // NOP
label_3ad450:
    // 0x3ad450: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3AD450u;
    {
        const bool branch_taken_0x3ad450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD450u;
        // 0x3ad454: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad450) {
            ctx->pc = 0x3AD48Cu;
            goto label_3ad48c;
        }
    }
    ctx->pc = 0x3AD458u;
    // 0x3ad458: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x3ad458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3ad45c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x3ad45cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ad460: 0x482000c  bltzl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3AD460u;
    {
        const bool branch_taken_0x3ad460 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3ad460) {
            ctx->pc = 0x3AD464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD460u;
            // 0x3ad464: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD494u;
            goto label_3ad494;
        }
    }
    ctx->pc = 0x3AD468u;
    // 0x3ad468: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x3ad468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x3ad46c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3ad46cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ad470: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD470u;
    {
        const bool branch_taken_0x3ad470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD470u;
        // 0x3ad474: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad470) {
            ctx->pc = 0x3AD484u;
            goto label_3ad484;
        }
    }
    ctx->pc = 0x3AD478u;
    // 0x3ad478: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x3ad478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x3ad47c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD47Cu;
    {
        const bool branch_taken_0x3ad47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD47Cu;
        // 0x3ad480: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad47c) {
            ctx->pc = 0x3AD490u;
            goto label_3ad490;
        }
    }
    ctx->pc = 0x3AD484u;
label_3ad484:
    // 0x3ad484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD484u;
    {
        const bool branch_taken_0x3ad484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD484u;
        // 0x3ad488: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad484) {
            ctx->pc = 0x3AD494u;
            goto label_3ad494;
        }
    }
    ctx->pc = 0x3AD48Cu;
label_3ad48c:
    // 0x3ad48c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3ad48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3ad490:
    // 0x3ad490: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3ad490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3ad494:
    // 0x3ad494: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3ad494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3ad498: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AD498u;
    {
        const bool branch_taken_0x3ad498 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3AD49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD498u;
        // 0x3ad49c: 0xa82821  addu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad498) {
            ctx->pc = 0x3AD4BCu;
            goto label_3ad4bc;
        }
    }
    ctx->pc = 0x3AD4A0u;
    // 0x3ad4a0: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x3ad4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3ad4a4: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3ad4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ad4a8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x3ad4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3ad4ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ad4acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3ad4b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3ad4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ad4b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ad4b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ad4b8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x3ad4b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3ad4bc:
    // 0x3ad4bc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ad4bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ad4c0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ad4c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ad4c4: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x3ad4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x3ad4c8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ad4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ad4cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ad4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ad4d0: 0x1c60ffdf  bgtz        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3AD4D0u;
    {
        const bool branch_taken_0x3ad4d0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x3AD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4D0u;
        // 0x3ad4d4: 0x28620080  slti        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad4d0) {
            ctx->pc = 0x3AD450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad450;
        }
    }
    ctx->pc = 0x3AD4D8u;
    // 0x3ad4d8: 0xe6740000  swc1        $f20, 0x0($s3)
    ctx->pc = 0x3ad4d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_3ad4dc:
    // 0x3ad4dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ad4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad4e0: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x3ad4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
    // 0x3ad4e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ad4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ad4e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ad4e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ad4ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ad4ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ad4f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3ad4f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ad4f4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3ad4f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ad4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad4fc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3ad4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ad500: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD500u;
        // 0x3ad504: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD508u;
}
