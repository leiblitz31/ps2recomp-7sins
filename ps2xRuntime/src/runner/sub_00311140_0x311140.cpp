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

// Function: sub_00311140
// Address: 0x311140 - 0x311248
void sub_00311140_0x311140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311140_0x311140");
#endif

    switch (ctx->pc) {
        case 0x311170u: goto label_311170;
        case 0x3111f8u: goto label_3111f8;
        default: break;
    }

    ctx->pc = 0x311140u;

    // 0x311140: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x311140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311144: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x311144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x311148: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x311148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x31114c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x31114cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x311150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311154: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x311154u;
    {
        const bool branch_taken_0x311154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x311158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311154u;
        // 0x311158: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311154) {
            ctx->pc = 0x3111E4u;
            goto label_3111e4;
        }
    }
    ctx->pc = 0x31115Cu;
    // 0x31115c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x31115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x311160: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x311160u;
    {
        const bool branch_taken_0x311160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311160u;
        // 0x311164: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311160) {
            ctx->pc = 0x311238u;
            goto label_311238;
        }
    }
    ctx->pc = 0x311168u;
    // 0x311168: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x311168u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31116c: 0x0  nop
    ctx->pc = 0x31116cu;
    // NOP
label_311170:
    // 0x311170: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x311170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x311174: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x311174u;
    {
        const bool branch_taken_0x311174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311174) {
            ctx->pc = 0x311178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311174u;
            // 0x311178: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3111C0u;
            goto label_3111c0;
        }
    }
    ctx->pc = 0x31117Cu;
    // 0x31117c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x31117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x311180: 0x1222021  addu        $a0, $t1, $v0
    ctx->pc = 0x311180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x311184: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x311184u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x311188: 0x9482fffe  lhu         $v0, -0x2($a0)
    ctx->pc = 0x311188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967294)));
    // 0x31118c: 0x54a2000c  bnel        $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31118Cu;
    {
        const bool branch_taken_0x31118c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x31118c) {
            ctx->pc = 0x311190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31118Cu;
            // 0x311190: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3111C0u;
            goto label_3111c0;
        }
    }
    ctx->pc = 0x311194u;
    // 0x311194: 0x9483fffc  lhu         $v1, -0x4($a0)
    ctx->pc = 0x311194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x311198: 0x50a30009  beql        $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x311198u;
    {
        const bool branch_taken_0x311198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x311198) {
            ctx->pc = 0x31119Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311198u;
            // 0x31119c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3111C0u;
            goto label_3111c0;
        }
    }
    ctx->pc = 0x3111A0u;
    // 0x3111a0: 0x9482fffa  lhu         $v0, -0x6($a0)
    ctx->pc = 0x3111a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967290)));
    // 0x3111a4: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3111A4u;
    {
        const bool branch_taken_0x3111a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3111a4) {
            ctx->pc = 0x3111A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3111A4u;
            // 0x3111a8: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3111CCu;
            goto label_3111cc;
        }
    }
    ctx->pc = 0x3111ACu;
    // 0x3111ac: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x3111acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3111b0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x3111b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3111b4: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3111B4u;
    {
        const bool branch_taken_0x3111b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3111b4) {
            ctx->pc = 0x3111B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3111B4u;
            // 0x3111b8: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3111CCu;
            goto label_3111cc;
        }
    }
    ctx->pc = 0x3111BCu;
    // 0x3111bc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3111bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3111c0:
    // 0x3111c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3111c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3111c4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3111c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3111c8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3111c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3111cc:
    // 0x3111cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3111ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3111d0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x3111d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3111d4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3111D4u;
    {
        const bool branch_taken_0x3111d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3111D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111D4u;
        // 0x3111d8: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111d4) {
            ctx->pc = 0x311170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311170;
        }
    }
    ctx->pc = 0x3111DCu;
    // 0x3111dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3111DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3111E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111DCu;
        // 0x3111e0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3111DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3111E4u;
label_3111e4:
    // 0x3111e4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3111e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3111e8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3111E8u;
    {
        const bool branch_taken_0x3111e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3111ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111E8u;
        // 0x3111ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111e8) {
            ctx->pc = 0x311238u;
            goto label_311238;
        }
    }
    ctx->pc = 0x3111F0u;
    // 0x3111f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3111f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3111f4: 0x0  nop
    ctx->pc = 0x3111f4u;
    // NOP
label_3111f8:
    // 0x3111f8: 0x50e00008  beql        $a3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3111F8u;
    {
        const bool branch_taken_0x3111f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3111f8) {
            ctx->pc = 0x3111FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3111F8u;
            // 0x3111fc: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31121Cu;
            goto label_31121c;
        }
    }
    ctx->pc = 0x311200u;
    // 0x311200: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x311200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x311204: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x311204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x311208: 0x9444fffe  lhu         $a0, -0x2($v0)
    ctx->pc = 0x311208u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
    // 0x31120c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x31120cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x311210: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x311210u;
    {
        const bool branch_taken_0x311210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x311210) {
            ctx->pc = 0x311214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311210u;
            // 0x311214: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311228u;
            goto label_311228;
        }
    }
    ctx->pc = 0x311218u;
    // 0x311218: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x311218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_31121c:
    // 0x31121c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31121cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x311220: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x311220u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x311224: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x311224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_311228:
    // 0x311228: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x311228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31122c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x31122cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x311230: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x311230u;
    {
        const bool branch_taken_0x311230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311230u;
        // 0x311234: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311230) {
            ctx->pc = 0x3111F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3111f8;
        }
    }
    ctx->pc = 0x311238u;
label_311238:
    // 0x311238: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x311238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31123c: 0x3e00008  jr          $ra
    ctx->pc = 0x31123Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31123Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311244u;
    // 0x311244: 0x0  nop
    ctx->pc = 0x311244u;
    // NOP
    ctx->pc = 0x311248u;
}
