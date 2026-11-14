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

// Function: sub_00341200
// Address: 0x341200 - 0x341300
void sub_00341200_0x341200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341200_0x341200");
#endif

    switch (ctx->pc) {
        case 0x341228u: goto label_341228;
        case 0x3412a8u: goto label_3412a8;
        default: break;
    }

    ctx->pc = 0x341200u;

    // 0x341200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x341204: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x341204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x341208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34120c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34120cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341210: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x341210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341214: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x341214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x341218: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x341218u;
    {
        const bool branch_taken_0x341218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341218u;
        // 0x34121c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341218) {
            ctx->pc = 0x341228u;
            goto label_341228;
        }
    }
    ctx->pc = 0x341220u;
    // 0x341220: 0xc0d1054  jal         func_344150
    ctx->pc = 0x341220u;
    SET_GPR_U32(ctx, 31, 0x341228u);
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x341220u, 0x341228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341228u;
label_341228:
    // 0x341228: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x341228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x34122c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34122cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341230: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x341230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x341234: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x341234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x341238: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x341238u;
    {
        const bool branch_taken_0x341238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341238u;
        // 0x34123c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341238) {
            ctx->pc = 0x3412D4u;
            goto label_3412d4;
        }
    }
    ctx->pc = 0x341240u;
    // 0x341240: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x341240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x341244: 0x58400024  blezl       $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x341244u;
    {
        const bool branch_taken_0x341244 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x341244) {
            ctx->pc = 0x341248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341244u;
            // 0x341248: 0xae27000c  sw          $a3, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3412D8u;
            goto label_3412d8;
        }
    }
    ctx->pc = 0x34124Cu;
    // 0x34124c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x34124cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x341250: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x341250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341254: 0x41023  negu        $v0, $a0
    ctx->pc = 0x341254u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x341258: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x341258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x34125c: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x34125Cu;
    {
        const bool branch_taken_0x34125c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x341260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34125Cu;
        // 0x341260: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34125c) {
            ctx->pc = 0x3412A8u;
            goto label_3412a8;
        }
    }
    ctx->pc = 0x341264u;
    // 0x341264: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x341264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x341268: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x341268u;
    {
        const bool branch_taken_0x341268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341268u;
        // 0x34126c: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x341268) {
            ctx->pc = 0x341294u;
            goto label_341294;
        }
    }
    ctx->pc = 0x341270u;
    // 0x341270: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x341270u;
    {
        const bool branch_taken_0x341270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341270) {
            ctx->pc = 0x341274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341270u;
            // 0x341274: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341288u;
            goto label_341288;
        }
    }
    ctx->pc = 0x341278u;
    // 0x341278: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x341278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34127c: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x34127cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x341280: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x341280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x341284: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x341284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_341288:
    // 0x341288: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x341288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x34128c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x34128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x341290: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x341290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_341294:
    // 0x341294: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x341294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341298: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x341298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x34129c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x34129cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3412a0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3412A0u;
    {
        const bool branch_taken_0x3412a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3412A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3412A0u;
        // 0x3412a4: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3412a0) {
            ctx->pc = 0x3412D4u;
            goto label_3412d4;
        }
    }
    ctx->pc = 0x3412A8u;
label_3412a8:
    // 0x3412a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3412a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3412ac: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3412acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x3412b0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3412b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3412b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3412b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3412b8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3412b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3412bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3412bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3412c0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3412c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3412c4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3412c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3412c8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3412c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3412cc: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3412CCu;
    {
        const bool branch_taken_0x3412cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3412D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3412CCu;
        // 0x3412d0: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3412cc) {
            ctx->pc = 0x3412A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3412a8;
        }
    }
    ctx->pc = 0x3412D4u;
label_3412d4:
    // 0x3412d4: 0xae27000c  sw          $a3, 0xC($s1)
    ctx->pc = 0x3412d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 7));
label_3412d8:
    // 0x3412d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3412d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3412dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3412dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3412e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3412e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3412e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3412e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3412e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3412E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3412ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3412E8u;
        // 0x3412ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3412E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3412F0u;
    // 0x3412f0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3412f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3412f4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x3412f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3412f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3412F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3412FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3412F8u;
        // 0x3412fc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3412F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341300u;
}
