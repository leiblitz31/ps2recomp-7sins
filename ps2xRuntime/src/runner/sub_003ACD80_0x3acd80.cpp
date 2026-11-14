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

// Function: sub_003ACD80
// Address: 0x3acd80 - 0x3aced0
void sub_003ACD80_0x3acd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACD80_0x3acd80");
#endif

    switch (ctx->pc) {
        case 0x3acd80u: goto label_3acd80;
        case 0x3acd84u: goto label_3acd84;
        case 0x3acd88u: goto label_3acd88;
        case 0x3acd8cu: goto label_3acd8c;
        case 0x3acd90u: goto label_3acd90;
        case 0x3acd94u: goto label_3acd94;
        case 0x3acd98u: goto label_3acd98;
        case 0x3acd9cu: goto label_3acd9c;
        case 0x3acda0u: goto label_3acda0;
        case 0x3acda4u: goto label_3acda4;
        case 0x3acda8u: goto label_3acda8;
        case 0x3acdacu: goto label_3acdac;
        case 0x3acdb0u: goto label_3acdb0;
        case 0x3acdb4u: goto label_3acdb4;
        case 0x3acdb8u: goto label_3acdb8;
        case 0x3acdbcu: goto label_3acdbc;
        case 0x3acdc0u: goto label_3acdc0;
        case 0x3acdc4u: goto label_3acdc4;
        case 0x3acdc8u: goto label_3acdc8;
        case 0x3acdccu: goto label_3acdcc;
        case 0x3acdd0u: goto label_3acdd0;
        case 0x3acdd4u: goto label_3acdd4;
        case 0x3acdd8u: goto label_3acdd8;
        case 0x3acddcu: goto label_3acddc;
        case 0x3acde0u: goto label_3acde0;
        case 0x3acde4u: goto label_3acde4;
        case 0x3acde8u: goto label_3acde8;
        case 0x3acdecu: goto label_3acdec;
        case 0x3acdf0u: goto label_3acdf0;
        case 0x3acdf4u: goto label_3acdf4;
        case 0x3acdf8u: goto label_3acdf8;
        case 0x3acdfcu: goto label_3acdfc;
        case 0x3ace00u: goto label_3ace00;
        case 0x3ace04u: goto label_3ace04;
        case 0x3ace08u: goto label_3ace08;
        case 0x3ace0cu: goto label_3ace0c;
        case 0x3ace10u: goto label_3ace10;
        case 0x3ace14u: goto label_3ace14;
        case 0x3ace18u: goto label_3ace18;
        case 0x3ace1cu: goto label_3ace1c;
        case 0x3ace20u: goto label_3ace20;
        case 0x3ace24u: goto label_3ace24;
        case 0x3ace28u: goto label_3ace28;
        case 0x3ace2cu: goto label_3ace2c;
        case 0x3ace30u: goto label_3ace30;
        case 0x3ace34u: goto label_3ace34;
        case 0x3ace38u: goto label_3ace38;
        case 0x3ace3cu: goto label_3ace3c;
        case 0x3ace40u: goto label_3ace40;
        case 0x3ace44u: goto label_3ace44;
        case 0x3ace48u: goto label_3ace48;
        case 0x3ace4cu: goto label_3ace4c;
        case 0x3ace50u: goto label_3ace50;
        case 0x3ace54u: goto label_3ace54;
        case 0x3ace58u: goto label_3ace58;
        case 0x3ace5cu: goto label_3ace5c;
        case 0x3ace60u: goto label_3ace60;
        case 0x3ace64u: goto label_3ace64;
        case 0x3ace68u: goto label_3ace68;
        case 0x3ace6cu: goto label_3ace6c;
        case 0x3ace70u: goto label_3ace70;
        case 0x3ace74u: goto label_3ace74;
        case 0x3ace78u: goto label_3ace78;
        case 0x3ace7cu: goto label_3ace7c;
        case 0x3ace80u: goto label_3ace80;
        case 0x3ace84u: goto label_3ace84;
        case 0x3ace88u: goto label_3ace88;
        case 0x3ace8cu: goto label_3ace8c;
        case 0x3ace90u: goto label_3ace90;
        case 0x3ace94u: goto label_3ace94;
        case 0x3ace98u: goto label_3ace98;
        case 0x3ace9cu: goto label_3ace9c;
        case 0x3acea0u: goto label_3acea0;
        case 0x3acea4u: goto label_3acea4;
        case 0x3acea8u: goto label_3acea8;
        case 0x3aceacu: goto label_3aceac;
        case 0x3aceb0u: goto label_3aceb0;
        case 0x3aceb4u: goto label_3aceb4;
        case 0x3aceb8u: goto label_3aceb8;
        case 0x3acebcu: goto label_3acebc;
        case 0x3acec0u: goto label_3acec0;
        case 0x3acec4u: goto label_3acec4;
        case 0x3acec8u: goto label_3acec8;
        case 0x3aceccu: goto label_3acecc;
        default: break;
    }

    ctx->pc = 0x3acd80u;

label_3acd80:
    // 0x3acd80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3acd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3acd84:
    // 0x3acd84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3acd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3acd88:
    // 0x3acd88: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3acd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3acd8c:
    // 0x3acd8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3acd8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3acd90:
    // 0x3acd90: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3acd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3acd94:
    // 0x3acd94: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3acd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3acd98:
    // 0x3acd98: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3acd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3acd9c:
    // 0x3acd9c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3acd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_3acda0:
    // 0x3acda0: 0x12600041  beqz        $s3, . + 4 + (0x41 << 2)
label_3acda4:
    if (ctx->pc == 0x3ACDA4u) {
        ctx->pc = 0x3ACDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDA0u;
        // 0x3acda4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACDA8u;
        goto label_3acda8;
    }
    ctx->pc = 0x3ACDA0u;
    {
        const bool branch_taken_0x3acda0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDA0u;
        // 0x3acda4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acda0) {
            ctx->pc = 0x3ACEA8u;
            goto label_3acea8;
        }
    }
    ctx->pc = 0x3ACDA8u;
label_3acda8:
    // 0x3acda8: 0x8e640134  lw          $a0, 0x134($s3)
    ctx->pc = 0x3acda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
label_3acdac:
    // 0x3acdac: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x3acdacu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
label_3acdb0:
    // 0x3acdb0: 0x26720014  addiu       $s2, $s3, 0x14
    ctx->pc = 0x3acdb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_3acdb4:
    // 0x3acdb4: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_3acdb8:
    if (ctx->pc == 0x3ACDB8u) {
        ctx->pc = 0x3ACDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDB4u;
        // 0x3acdb8: 0x3c150062  lui         $s5, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACDBCu;
        goto label_3acdbc;
    }
    ctx->pc = 0x3ACDB4u;
    {
        const bool branch_taken_0x3acdb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDB4u;
        // 0x3acdb8: 0x3c150062  lui         $s5, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acdb4) {
            ctx->pc = 0x3ACE0Cu;
            goto label_3ace0c;
        }
    }
    ctx->pc = 0x3ACDBCu;
label_3acdbc:
    // 0x3acdbc: 0xc1036d2  jal         func_40DB48
label_3acdc0:
    if (ctx->pc == 0x3ACDC0u) {
        ctx->pc = 0x3ACDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDBCu;
        // 0x3acdc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACDC4u;
        goto label_3acdc4;
    }
    ctx->pc = 0x3ACDBCu;
    SET_GPR_U32(ctx, 31, 0x3ACDC4u);
    ctx->pc = 0x3ACDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACDBCu;
    // 0x3acdc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3ACDBCu, 0x3ACDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACDC4u;
label_3acdc4:
    // 0x3acdc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3acdc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3acdc8:
    // 0x3acdc8: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x3acdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_3acdcc:
    // 0x3acdcc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3acdd0:
    if (ctx->pc == 0x3ACDD0u) {
        ctx->pc = 0x3ACDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDCCu;
        // 0x3acdd0: 0x24700018  addiu       $s0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACDD4u;
        goto label_3acdd4;
    }
    ctx->pc = 0x3ACDCCu;
    {
        const bool branch_taken_0x3acdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDCCu;
        // 0x3acdd0: 0x24700018  addiu       $s0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acdcc) {
            ctx->pc = 0x3ACE04u;
            goto label_3ace04;
        }
    }
    ctx->pc = 0x3ACDD4u;
label_3acdd4:
    // 0x3acdd4: 0x0  nop
    ctx->pc = 0x3acdd4u;
    // NOP
label_3acdd8:
    // 0x3acdd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3acdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3acddc:
    // 0x3acddc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3acde0:
    if (ctx->pc == 0x3ACDE0u) {
        ctx->pc = 0x3ACDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDDCu;
        // 0x3acde0: 0x8e620130  lw          $v0, 0x130($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACDE4u;
        goto label_3acde4;
    }
    ctx->pc = 0x3ACDDCu;
    {
        const bool branch_taken_0x3acddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3acddc) {
            ctx->pc = 0x3ACDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACDDCu;
            // 0x3acde0: 0x8e620130  lw          $v0, 0x130($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACDF4u;
            goto label_3acdf4;
        }
    }
    ctx->pc = 0x3ACDE4u;
label_3acde4:
    // 0x3acde4: 0xc0ec620  jal         func_3B1880
label_3acde8:
    if (ctx->pc == 0x3ACDE8u) {
        ctx->pc = 0x3ACDECu;
        goto label_3acdec;
    }
    ctx->pc = 0x3ACDE4u;
    SET_GPR_U32(ctx, 31, 0x3ACDECu);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3ACDE4u, 0x3ACDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACDECu;
label_3acdec:
    // 0x3acdec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3acdecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3acdf0:
    // 0x3acdf0: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x3acdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_3acdf4:
    // 0x3acdf4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3acdf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3acdf8:
    // 0x3acdf8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3acdf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3acdfc:
    // 0x3acdfc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3ace00:
    if (ctx->pc == 0x3ACE00u) {
        ctx->pc = 0x3ACE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDFCu;
        // 0x3ace00: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACE04u;
        goto label_3ace04;
    }
    ctx->pc = 0x3ACDFCu;
    {
        const bool branch_taken_0x3acdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDFCu;
        // 0x3ace00: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acdfc) {
            ctx->pc = 0x3ACDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3acdd8;
        }
    }
    ctx->pc = 0x3ACE04u;
label_3ace04:
    // 0x3ace04: 0xc103684  jal         func_40DA10
label_3ace08:
    if (ctx->pc == 0x3ACE08u) {
        ctx->pc = 0x3ACE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE04u;
        // 0x3ace08: 0x8e640134  lw          $a0, 0x134($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACE0Cu;
        goto label_3ace0c;
    }
    ctx->pc = 0x3ACE04u;
    SET_GPR_U32(ctx, 31, 0x3ACE0Cu);
    ctx->pc = 0x3ACE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACE04u;
    // 0x3ace08: 0x8e640134  lw          $a0, 0x134($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3ACE04u, 0x3ACE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACE0Cu;
label_3ace0c:
    // 0x3ace0c: 0x8e64012c  lw          $a0, 0x12C($s3)
    ctx->pc = 0x3ace0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
label_3ace10:
    // 0x3ace10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3ace14:
    if (ctx->pc == 0x3ACE14u) {
        ctx->pc = 0x3ACE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE10u;
        // 0x3ace14: 0xae600134  sw          $zero, 0x134($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACE18u;
        goto label_3ace18;
    }
    ctx->pc = 0x3ACE10u;
    {
        const bool branch_taken_0x3ace10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE10u;
        // 0x3ace14: 0xae600134  sw          $zero, 0x134($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ace10) {
            ctx->pc = 0x3ACE28u;
            goto label_3ace28;
        }
    }
    ctx->pc = 0x3ACE18u;
label_3ace18:
    // 0x3ace18: 0x2683e880  addiu       $v1, $s4, -0x1780
    ctx->pc = 0x3ace18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_3ace1c:
    // 0x3ace1c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3ace1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3ace20:
    // 0x3ace20: 0x40f809  jalr        $v0
label_3ace24:
    if (ctx->pc == 0x3ACE24u) {
        ctx->pc = 0x3ACE28u;
        goto label_3ace28;
    }
    ctx->pc = 0x3ACE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACE28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACE20u, 0x3ACE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACE28u;
label_3ace28:
    // 0x3ace28: 0xae60012c  sw          $zero, 0x12C($s3)
    ctx->pc = 0x3ace28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 300), GPR_U32(ctx, 0));
label_3ace2c:
    // 0x3ace2c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3ace2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ace30:
    // 0x3ace30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ace30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ace34:
    // 0x3ace34: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3ace38:
    if (ctx->pc == 0x3ACE38u) {
        ctx->pc = 0x3ACE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE34u;
        // 0x3ace38: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACE3Cu;
        goto label_3ace3c;
    }
    ctx->pc = 0x3ACE34u;
    {
        const bool branch_taken_0x3ace34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ace34) {
            ctx->pc = 0x3ACE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACE34u;
            // 0x3ace38: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACE48u;
            goto label_3ace48;
        }
    }
    ctx->pc = 0x3ACE3Cu;
label_3ace3c:
    // 0x3ace3c: 0xc10822c  jal         func_4208B0
label_3ace40:
    if (ctx->pc == 0x3ACE40u) {
        ctx->pc = 0x3ACE44u;
        goto label_3ace44;
    }
    ctx->pc = 0x3ACE3Cu;
    SET_GPR_U32(ctx, 31, 0x3ACE44u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3ACE3Cu, 0x3ACE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACE44u;
label_3ace44:
    // 0x3ace44: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3ace44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3ace48:
    // 0x3ace48: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3ace48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3ace4c:
    // 0x3ace4c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3ace50:
    if (ctx->pc == 0x3ACE50u) {
        ctx->pc = 0x3ACE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE4Cu;
        // 0x3ace50: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACE54u;
        goto label_3ace54;
    }
    ctx->pc = 0x3ACE4Cu;
    {
        const bool branch_taken_0x3ace4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ace4c) {
            ctx->pc = 0x3ACE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACE4Cu;
            // 0x3ace50: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACE60u;
            goto label_3ace60;
        }
    }
    ctx->pc = 0x3ACE54u;
label_3ace54:
    // 0x3ace54: 0xc10822c  jal         func_4208B0
label_3ace58:
    if (ctx->pc == 0x3ACE58u) {
        ctx->pc = 0x3ACE5Cu;
        goto label_3ace5c;
    }
    ctx->pc = 0x3ACE54u;
    SET_GPR_U32(ctx, 31, 0x3ACE5Cu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3ACE54u, 0x3ACE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACE5Cu;
label_3ace5c:
    // 0x3ace5c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3ace5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3ace60:
    // 0x3ace60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3ace64:
    if (ctx->pc == 0x3ACE64u) {
        ctx->pc = 0x3ACE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE60u;
        // 0x3ace64: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACE68u;
        goto label_3ace68;
    }
    ctx->pc = 0x3ACE60u;
    {
        const bool branch_taken_0x3ace60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE60u;
        // 0x3ace64: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ace60) {
            ctx->pc = 0x3ACE70u;
            goto label_3ace70;
        }
    }
    ctx->pc = 0x3ACE68u;
label_3ace68:
    // 0x3ace68: 0xc10822c  jal         func_4208B0
label_3ace6c:
    if (ctx->pc == 0x3ACE6Cu) {
        ctx->pc = 0x3ACE70u;
        goto label_3ace70;
    }
    ctx->pc = 0x3ACE68u;
    SET_GPR_U32(ctx, 31, 0x3ACE70u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3ACE68u, 0x3ACE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACE70u;
label_3ace70:
    // 0x3ace70: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x3ace70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3ace74:
    // 0x3ace74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3ace78:
    if (ctx->pc == 0x3ACE78u) {
        ctx->pc = 0x3ACE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE74u;
        // 0x3ace78: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACE7Cu;
        goto label_3ace7c;
    }
    ctx->pc = 0x3ACE74u;
    {
        const bool branch_taken_0x3ace74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE74u;
        // 0x3ace78: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ace74) {
            ctx->pc = 0x3ACE84u;
            goto label_3ace84;
        }
    }
    ctx->pc = 0x3ACE7Cu;
label_3ace7c:
    // 0x3ace7c: 0xc10822c  jal         func_4208B0
label_3ace80:
    if (ctx->pc == 0x3ACE80u) {
        ctx->pc = 0x3ACE84u;
        goto label_3ace84;
    }
    ctx->pc = 0x3ACE7Cu;
    SET_GPR_U32(ctx, 31, 0x3ACE84u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3ACE7Cu, 0x3ACE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACE84u;
label_3ace84:
    // 0x3ace84: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x3ace84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_3ace88:
    // 0x3ace88: 0x2683e880  addiu       $v1, $s4, -0x1780
    ctx->pc = 0x3ace88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_3ace8c:
    // 0x3ace8c: 0x26a5ce80  addiu       $a1, $s5, -0x3180
    ctx->pc = 0x3ace8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954624));
label_3ace90:
    // 0x3ace90: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3ace90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3ace94:
    // 0x3ace94: 0x8ca40508  lw          $a0, 0x508($a1)
    ctx->pc = 0x3ace94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1288)));
label_3ace98:
    // 0x3ace98: 0x40f809  jalr        $v0
label_3ace9c:
    if (ctx->pc == 0x3ACE9Cu) {
        ctx->pc = 0x3ACE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE98u;
        // 0x3ace9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACEA0u;
        goto label_3acea0;
    }
    ctx->pc = 0x3ACE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACEA0u);
        ctx->pc = 0x3ACE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE98u;
        // 0x3ace9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACE98u, 0x3ACEA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACEA0u;
label_3acea0:
    // 0x3acea0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3acea4:
    if (ctx->pc == 0x3ACEA4u) {
        ctx->pc = 0x3ACEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEA0u;
        // 0x3acea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACEA8u;
        goto label_3acea8;
    }
    ctx->pc = 0x3ACEA0u;
    {
        const bool branch_taken_0x3acea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEA0u;
        // 0x3acea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acea0) {
            ctx->pc = 0x3ACEACu;
            goto label_3aceac;
        }
    }
    ctx->pc = 0x3ACEA8u;
label_3acea8:
    // 0x3acea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3acea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aceac:
    // 0x3aceac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3aceacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3aceb0:
    // 0x3aceb0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3aceb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3aceb4:
    // 0x3aceb4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3aceb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3aceb8:
    // 0x3aceb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3aceb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3acebc:
    // 0x3acebc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3acebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3acec0:
    // 0x3acec0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3acec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3acec4:
    // 0x3acec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3acec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3acec8:
    // 0x3acec8: 0x3e00008  jr          $ra
label_3acecc:
    if (ctx->pc == 0x3ACECCu) {
        ctx->pc = 0x3ACECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEC8u;
        // 0x3acecc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACED0u;
        goto label_fallthrough_0x3acec8;
    }
    ctx->pc = 0x3ACEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEC8u;
        // 0x3acecc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3acec8:
    ctx->pc = 0x3ACED0u;
}
