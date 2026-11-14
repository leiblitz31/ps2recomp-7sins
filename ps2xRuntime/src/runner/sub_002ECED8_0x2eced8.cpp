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

// Function: sub_002ECED8
// Address: 0x2eced8 - 0x2ed038
void sub_002ECED8_0x2eced8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECED8_0x2eced8");
#endif

    switch (ctx->pc) {
        case 0x2eced8u: goto label_2eced8;
        case 0x2ecedcu: goto label_2ecedc;
        case 0x2ecee0u: goto label_2ecee0;
        case 0x2ecee4u: goto label_2ecee4;
        case 0x2ecee8u: goto label_2ecee8;
        case 0x2eceecu: goto label_2eceec;
        case 0x2ecef0u: goto label_2ecef0;
        case 0x2ecef4u: goto label_2ecef4;
        case 0x2ecef8u: goto label_2ecef8;
        case 0x2ecefcu: goto label_2ecefc;
        case 0x2ecf00u: goto label_2ecf00;
        case 0x2ecf04u: goto label_2ecf04;
        case 0x2ecf08u: goto label_2ecf08;
        case 0x2ecf0cu: goto label_2ecf0c;
        case 0x2ecf10u: goto label_2ecf10;
        case 0x2ecf14u: goto label_2ecf14;
        case 0x2ecf18u: goto label_2ecf18;
        case 0x2ecf1cu: goto label_2ecf1c;
        case 0x2ecf20u: goto label_2ecf20;
        case 0x2ecf24u: goto label_2ecf24;
        case 0x2ecf28u: goto label_2ecf28;
        case 0x2ecf2cu: goto label_2ecf2c;
        case 0x2ecf30u: goto label_2ecf30;
        case 0x2ecf34u: goto label_2ecf34;
        case 0x2ecf38u: goto label_2ecf38;
        case 0x2ecf3cu: goto label_2ecf3c;
        case 0x2ecf40u: goto label_2ecf40;
        case 0x2ecf44u: goto label_2ecf44;
        case 0x2ecf48u: goto label_2ecf48;
        case 0x2ecf4cu: goto label_2ecf4c;
        case 0x2ecf50u: goto label_2ecf50;
        case 0x2ecf54u: goto label_2ecf54;
        case 0x2ecf58u: goto label_2ecf58;
        case 0x2ecf5cu: goto label_2ecf5c;
        case 0x2ecf60u: goto label_2ecf60;
        case 0x2ecf64u: goto label_2ecf64;
        case 0x2ecf68u: goto label_2ecf68;
        case 0x2ecf6cu: goto label_2ecf6c;
        case 0x2ecf70u: goto label_2ecf70;
        case 0x2ecf74u: goto label_2ecf74;
        case 0x2ecf78u: goto label_2ecf78;
        case 0x2ecf7cu: goto label_2ecf7c;
        case 0x2ecf80u: goto label_2ecf80;
        case 0x2ecf84u: goto label_2ecf84;
        case 0x2ecf88u: goto label_2ecf88;
        case 0x2ecf8cu: goto label_2ecf8c;
        case 0x2ecf90u: goto label_2ecf90;
        case 0x2ecf94u: goto label_2ecf94;
        case 0x2ecf98u: goto label_2ecf98;
        case 0x2ecf9cu: goto label_2ecf9c;
        case 0x2ecfa0u: goto label_2ecfa0;
        case 0x2ecfa4u: goto label_2ecfa4;
        case 0x2ecfa8u: goto label_2ecfa8;
        case 0x2ecfacu: goto label_2ecfac;
        case 0x2ecfb0u: goto label_2ecfb0;
        case 0x2ecfb4u: goto label_2ecfb4;
        case 0x2ecfb8u: goto label_2ecfb8;
        case 0x2ecfbcu: goto label_2ecfbc;
        case 0x2ecfc0u: goto label_2ecfc0;
        case 0x2ecfc4u: goto label_2ecfc4;
        case 0x2ecfc8u: goto label_2ecfc8;
        case 0x2ecfccu: goto label_2ecfcc;
        case 0x2ecfd0u: goto label_2ecfd0;
        case 0x2ecfd4u: goto label_2ecfd4;
        case 0x2ecfd8u: goto label_2ecfd8;
        case 0x2ecfdcu: goto label_2ecfdc;
        case 0x2ecfe0u: goto label_2ecfe0;
        case 0x2ecfe4u: goto label_2ecfe4;
        case 0x2ecfe8u: goto label_2ecfe8;
        case 0x2ecfecu: goto label_2ecfec;
        case 0x2ecff0u: goto label_2ecff0;
        case 0x2ecff4u: goto label_2ecff4;
        case 0x2ecff8u: goto label_2ecff8;
        case 0x2ecffcu: goto label_2ecffc;
        case 0x2ed000u: goto label_2ed000;
        case 0x2ed004u: goto label_2ed004;
        case 0x2ed008u: goto label_2ed008;
        case 0x2ed00cu: goto label_2ed00c;
        case 0x2ed010u: goto label_2ed010;
        case 0x2ed014u: goto label_2ed014;
        case 0x2ed018u: goto label_2ed018;
        case 0x2ed01cu: goto label_2ed01c;
        case 0x2ed020u: goto label_2ed020;
        case 0x2ed024u: goto label_2ed024;
        case 0x2ed028u: goto label_2ed028;
        case 0x2ed02cu: goto label_2ed02c;
        case 0x2ed030u: goto label_2ed030;
        case 0x2ed034u: goto label_2ed034;
        default: break;
    }

    ctx->pc = 0x2eced8u;

label_2eced8:
    // 0x2eced8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eced8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ecedc:
    // 0x2ecedc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ecedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2ecee0:
    // 0x2ecee0: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x2ecee0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_2ecee4:
    // 0x2ecee4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ecee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2ecee8:
    // 0x2ecee8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ecee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eceec:
    // 0x2eceec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2eceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2ecef0:
    // 0x2ecef0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ecef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ecef4:
    // 0x2ecef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ecef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ecef8:
    // 0x2ecef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ecef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2ecefc:
    // 0x2ecefc: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_2ecf00:
    if (ctx->pc == 0x2ECF00u) {
        ctx->pc = 0x2ECF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEFCu;
        // 0x2ecf00: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF04u;
        goto label_2ecf04;
    }
    ctx->pc = 0x2ECEFCu;
    {
        const bool branch_taken_0x2ecefc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEFCu;
        // 0x2ecf00: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecefc) {
            ctx->pc = 0x2ECF48u;
            goto label_2ecf48;
        }
    }
    ctx->pc = 0x2ECF04u;
label_2ecf04:
    // 0x2ecf04: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2ecf04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ecf08:
    // 0x2ecf08: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2ecf08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2ecf0c:
    // 0x2ecf0c: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_2ecf10:
    if (ctx->pc == 0x2ECF10u) {
        ctx->pc = 0x2ECF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF0Cu;
        // 0x2ecf10: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF14u;
        goto label_2ecf14;
    }
    ctx->pc = 0x2ECF0Cu;
    {
        const bool branch_taken_0x2ecf0c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2ECF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF0Cu;
        // 0x2ecf10: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf0c) {
            ctx->pc = 0x2ECF3Cu;
            goto label_2ecf3c;
        }
    }
    ctx->pc = 0x2ECF14u;
label_2ecf14:
    // 0x2ecf14: 0x0  nop
    ctx->pc = 0x2ecf14u;
    // NOP
label_2ecf18:
    // 0x2ecf18: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x2ecf18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2ecf1c:
    // 0x2ecf1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2ecf20:
    if (ctx->pc == 0x2ECF20u) {
        ctx->pc = 0x2ECF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF1Cu;
        // 0x2ecf20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF24u;
        goto label_2ecf24;
    }
    ctx->pc = 0x2ECF1Cu;
    {
        const bool branch_taken_0x2ecf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecf1c) {
            ctx->pc = 0x2ECF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECF1Cu;
            // 0x2ecf20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECF34u;
            goto label_2ecf34;
        }
    }
    ctx->pc = 0x2ECF24u;
label_2ecf24:
    // 0x2ecf24: 0x280f809  jalr        $s4
label_2ecf28:
    if (ctx->pc == 0x2ECF28u) {
        ctx->pc = 0x2ECF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF24u;
        // 0x2ecf28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF2Cu;
        goto label_2ecf2c;
    }
    ctx->pc = 0x2ECF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2ECF2Cu);
        ctx->pc = 0x2ECF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF24u;
        // 0x2ecf28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECF24u, 0x2ECF2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ECF2Cu;
label_2ecf2c:
    // 0x2ecf2c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x2ecf2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2ecf30:
    // 0x2ecf30: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2ecf30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2ecf34:
    // 0x2ecf34: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_2ecf38:
    if (ctx->pc == 0x2ECF38u) {
        ctx->pc = 0x2ECF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF34u;
        // 0x2ecf38: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF3Cu;
        goto label_2ecf3c;
    }
    ctx->pc = 0x2ECF34u;
    {
        const bool branch_taken_0x2ecf34 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2ECF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF34u;
        // 0x2ecf38: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf34) {
            ctx->pc = 0x2ECF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ecf18;
        }
    }
    ctx->pc = 0x2ECF3Cu;
label_2ecf3c:
    // 0x2ecf3c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x2ecf3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ecf40:
    // 0x2ecf40: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_2ecf44:
    if (ctx->pc == 0x2ECF44u) {
        ctx->pc = 0x2ECF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF40u;
        // 0x2ecf44: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF48u;
        goto label_2ecf48;
    }
    ctx->pc = 0x2ECF40u;
    {
        const bool branch_taken_0x2ecf40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecf40) {
            ctx->pc = 0x2ECF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECF40u;
            // 0x2ecf44: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ecf08;
        }
    }
    ctx->pc = 0x2ECF48u;
label_2ecf48:
    // 0x2ecf48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2ecf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ecf4c:
    // 0x2ecf4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ecf4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ecf50:
    // 0x2ecf50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ecf50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ecf54:
    // 0x2ecf54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ecf54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ecf58:
    // 0x2ecf58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ecf58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2ecf5c:
    // 0x2ecf5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ecf5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ecf60:
    // 0x2ecf60: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ecf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2ecf64:
    // 0x2ecf64: 0x3e00008  jr          $ra
label_2ecf68:
    if (ctx->pc == 0x2ECF68u) {
        ctx->pc = 0x2ECF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF64u;
        // 0x2ecf68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF6Cu;
        goto label_2ecf6c;
    }
    ctx->pc = 0x2ECF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF64u;
        // 0x2ecf68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECF6Cu;
label_2ecf6c:
    // 0x2ecf6c: 0x0  nop
    ctx->pc = 0x2ecf6cu;
    // NOP
label_2ecf70:
    // 0x2ecf70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ecf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ecf74:
    // 0x2ecf74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ecf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ecf78:
    // 0x2ecf78: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ecf78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ecf7c:
    // 0x2ecf7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ecf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2ecf80:
    // 0x2ecf80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ecf80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ecf84:
    // 0x2ecf84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ecf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2ecf88:
    // 0x2ecf88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ecf88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ecf8c:
    // 0x2ecf8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ecf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2ecf90:
    // 0x2ecf90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ecf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ecf94:
    // 0x2ecf94: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2ecf98:
    if (ctx->pc == 0x2ECF98u) {
        ctx->pc = 0x2ECF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF94u;
        // 0x2ecf98: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF9Cu;
        goto label_2ecf9c;
    }
    ctx->pc = 0x2ECF94u;
    {
        const bool branch_taken_0x2ecf94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF94u;
        // 0x2ecf98: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf94) {
            ctx->pc = 0x2ECFD8u;
            goto label_2ecfd8;
        }
    }
    ctx->pc = 0x2ECF9Cu;
label_2ecf9c:
    // 0x2ecf9c: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x2ecf9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_2ecfa0:
    // 0x2ecfa0: 0xc0bc574  jal         func_2F15D0
label_2ecfa4:
    if (ctx->pc == 0x2ECFA4u) {
        ctx->pc = 0x2ECFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFA0u;
        // 0x2ecfa4: 0x26659130  addiu       $a1, $s3, -0x6ED0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFA8u;
        goto label_2ecfa8;
    }
    ctx->pc = 0x2ECFA0u;
    SET_GPR_U32(ctx, 31, 0x2ECFA8u);
    ctx->pc = 0x2ECFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECFA0u;
    // 0x2ecfa4: 0x26659130  addiu       $a1, $s3, -0x6ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2ECFA0u, 0x2ECFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECFA8u;
label_2ecfa8:
    // 0x2ecfa8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2ecfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2ecfac:
    // 0x2ecfac: 0x24a59120  addiu       $a1, $a1, -0x6EE0
    ctx->pc = 0x2ecfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938912));
label_2ecfb0:
    // 0x2ecfb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ecfb4:
    if (ctx->pc == 0x2ECFB4u) {
        ctx->pc = 0x2ECFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFB0u;
        // 0x2ecfb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFB8u;
        goto label_2ecfb8;
    }
    ctx->pc = 0x2ECFB0u;
    {
        const bool branch_taken_0x2ecfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFB0u;
        // 0x2ecfb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecfb0) {
            ctx->pc = 0x2ECFC8u;
            goto label_2ecfc8;
        }
    }
    ctx->pc = 0x2ECFB8u;
label_2ecfb8:
    // 0x2ecfb8: 0xc0bc574  jal         func_2F15D0
label_2ecfbc:
    if (ctx->pc == 0x2ECFBCu) {
        ctx->pc = 0x2ECFC0u;
        goto label_2ecfc0;
    }
    ctx->pc = 0x2ECFB8u;
    SET_GPR_U32(ctx, 31, 0x2ECFC0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2ECFB8u, 0x2ECFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECFC0u;
label_2ecfc0:
    // 0x2ecfc0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2ecfc4:
    if (ctx->pc == 0x2ECFC4u) {
        ctx->pc = 0x2ECFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFC0u;
        // 0x2ecfc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFC8u;
        goto label_2ecfc8;
    }
    ctx->pc = 0x2ECFC0u;
    {
        const bool branch_taken_0x2ecfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFC0u;
        // 0x2ecfc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecfc0) {
            ctx->pc = 0x2ECFE0u;
            goto label_2ecfe0;
        }
    }
    ctx->pc = 0x2ECFC8u;
label_2ecfc8:
    // 0x2ecfc8: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x2ecfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
label_2ecfcc:
    // 0x2ecfcc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ecfd0:
    if (ctx->pc == 0x2ECFD0u) {
        ctx->pc = 0x2ECFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFCCu;
        // 0x2ecfd0: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFD4u;
        goto label_2ecfd4;
    }
    ctx->pc = 0x2ECFCCu;
    {
        const bool branch_taken_0x2ecfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFCCu;
        // 0x2ecfd0: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecfcc) {
            ctx->pc = 0x2ECFDCu;
            goto label_2ecfdc;
        }
    }
    ctx->pc = 0x2ECFD4u;
label_2ecfd4:
    // 0x2ecfd4: 0x0  nop
    ctx->pc = 0x2ecfd4u;
    // NOP
label_2ecfd8:
    // 0x2ecfd8: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x2ecfd8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_2ecfdc:
    // 0x2ecfdc: 0x26629130  addiu       $v0, $s3, -0x6ED0
    ctx->pc = 0x2ecfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938928));
label_2ecfe0:
    // 0x2ecfe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ecfe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ecfe4:
    // 0x2ecfe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ecfe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ecfe8:
    // 0x2ecfe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ecfe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ecfec:
    // 0x2ecfec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ecfecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2ecff0:
    // 0x2ecff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ecff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ecff4:
    // 0x2ecff4: 0x3e00008  jr          $ra
label_2ecff8:
    if (ctx->pc == 0x2ECFF8u) {
        ctx->pc = 0x2ECFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFF4u;
        // 0x2ecff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFFCu;
        goto label_2ecffc;
    }
    ctx->pc = 0x2ECFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFF4u;
        // 0x2ecff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECFFCu;
label_2ecffc:
    // 0x2ecffc: 0x0  nop
    ctx->pc = 0x2ecffcu;
    // NOP
label_2ed000:
    // 0x2ed000: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ed000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2ed004:
    // 0x2ed004: 0x3e00008  jr          $ra
label_2ed008:
    if (ctx->pc == 0x2ED008u) {
        ctx->pc = 0x2ED008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED004u;
        // 0x2ed008: 0x244290f0  addiu       $v0, $v0, -0x6F10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED00Cu;
        goto label_2ed00c;
    }
    ctx->pc = 0x2ED004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED004u;
        // 0x2ed008: 0x244290f0  addiu       $v0, $v0, -0x6F10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938864));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED00Cu;
label_2ed00c:
    // 0x2ed00c: 0x0  nop
    ctx->pc = 0x2ed00cu;
    // NOP
label_2ed010:
    // 0x2ed010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ed014:
    // 0x2ed014: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2ed014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2ed018:
    // 0x2ed018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ed01c:
    // 0x2ed01c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ed01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ed020:
    // 0x2ed020: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ed020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ed024:
    // 0x2ed024: 0x8c44ea90  lw          $a0, -0x1570($v0)
    ctx->pc = 0x2ed024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961808)));
label_2ed028:
    // 0x2ed028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ed02c:
    // 0x2ed02c: 0x80bb3dc  j           func_2ECF70
label_2ed030:
    if (ctx->pc == 0x2ED030u) {
        ctx->pc = 0x2ED030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED02Cu;
        // 0x2ed030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED034u;
        goto label_2ed034;
    }
    ctx->pc = 0x2ED02Cu;
    ctx->pc = 0x2ED030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED02Cu;
    // 0x2ed030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECF70u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_2ecf70;
    ctx->pc = 0x2ED034u;
label_2ed034:
    // 0x2ed034: 0x0  nop
    ctx->pc = 0x2ed034u;
    // NOP
    ctx->pc = 0x2ed038u;
}
