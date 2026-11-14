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

// Function: sub_00325208
// Address: 0x325208 - 0x325318
void sub_00325208_0x325208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325208_0x325208");
#endif

    switch (ctx->pc) {
        case 0x325250u: goto label_325250;
        case 0x3252a0u: goto label_3252a0;
        case 0x3252dcu: goto label_3252dc;
        default: break;
    }

    ctx->pc = 0x325208u;

    // 0x325208: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x325208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32520c: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x32520cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x325210: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x325210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x325214: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x325214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x325218: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x325218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32521c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x32521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x325220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325224: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x325224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x325228: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x325228u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32522c: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x32522Cu;
    {
        const bool branch_taken_0x32522c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x325230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32522Cu;
        // 0x325230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32522c) {
            ctx->pc = 0x3252FCu;
            goto label_3252fc;
        }
    }
    ctx->pc = 0x325234u;
    // 0x325234: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x325234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x325238: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x325238u;
    {
        const bool branch_taken_0x325238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325238u;
        // 0x32523c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325238) {
            ctx->pc = 0x325248u;
            goto label_325248;
        }
    }
    ctx->pc = 0x325240u;
    // 0x325240: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x325240u;
    {
        const bool branch_taken_0x325240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325240u;
        // 0x325244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325240) {
            ctx->pc = 0x3252FCu;
            goto label_3252fc;
        }
    }
    ctx->pc = 0x325248u;
label_325248:
    // 0x325248: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x325248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32524c: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x32524cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_325250:
    // 0x325250: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x325250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325254: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x325254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x325258: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x325258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x32525c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x32525cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x325260: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x325260u;
    {
        const bool branch_taken_0x325260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325260u;
        // 0x325264: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325260) {
            ctx->pc = 0x3252E4u;
            goto label_3252e4;
        }
    }
    ctx->pc = 0x325268u;
    // 0x325268: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x325268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x32526c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32526cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x325270: 0x2442b770  addiu       $v0, $v0, -0x4890
    ctx->pc = 0x325270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948720));
    // 0x325274: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x325274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x325278: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x325278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32527c: 0x800008  jr          $a0
    ctx->pc = 0x32527Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x325284u: goto label_325284;
            case 0x3252B0u: goto label_3252b0;
            case 0x3252C0u: goto label_3252c0;
            case 0x3252E4u: goto label_3252e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32527Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x325284u;
label_325284:
    // 0x325284: 0x2458821  addu        $s1, $s2, $a1
    ctx->pc = 0x325284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x325288: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x325288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x32528c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32528cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x325290: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x325290u;
    {
        const bool branch_taken_0x325290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x325294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325290u;
        // 0x325294: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325290) {
            ctx->pc = 0x3252A4u;
            goto label_3252a4;
        }
    }
    ctx->pc = 0x325298u;
    // 0x325298: 0xc10598e  jal         func_416638
    ctx->pc = 0x325298u;
    SET_GPR_U32(ctx, 31, 0x3252A0u);
    ctx->pc = 0x416638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416638u, 0x325298u, 0x3252A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3252A0u;
label_3252a0:
    // 0x3252a0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3252a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3252a4:
    // 0x3252a4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3252a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3252a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3252A8u;
    {
        const bool branch_taken_0x3252a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3252ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252A8u;
        // 0x3252ac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252a8) {
            ctx->pc = 0x3252CCu;
            goto label_3252cc;
        }
    }
    ctx->pc = 0x3252B0u;
label_3252b0:
    // 0x3252b0: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x3252b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3252b4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3252b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3252b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3252B8u;
    {
        const bool branch_taken_0x3252b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3252BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252B8u;
        // 0x3252bc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252b8) {
            ctx->pc = 0x3252CCu;
            goto label_3252cc;
        }
    }
    ctx->pc = 0x3252C0u;
label_3252c0:
    // 0x3252c0: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x3252c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3252c4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3252c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3252c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3252c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3252cc:
    // 0x3252cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3252CCu;
    {
        const bool branch_taken_0x3252cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3252D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252CCu;
        // 0x3252d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252cc) {
            ctx->pc = 0x3252E0u;
            goto label_3252e0;
        }
    }
    ctx->pc = 0x3252D4u;
    // 0x3252d4: 0xc10598e  jal         func_416638
    ctx->pc = 0x3252D4u;
    SET_GPR_U32(ctx, 31, 0x3252DCu);
    ctx->pc = 0x416638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416638u, 0x3252D4u, 0x3252DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3252DCu;
label_3252dc:
    // 0x3252dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3252dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3252e0:
    // 0x3252e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3252e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3252e4:
    // 0x3252e4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x3252e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3252e8: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x3252e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3252ec: 0x2e630002  sltiu       $v1, $s3, 0x2
    ctx->pc = 0x3252ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3252f0: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3252F0u;
    {
        const bool branch_taken_0x3252f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3252F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252F0u;
        // 0x3252f4: 0x131980  sll         $v1, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252f0) {
            ctx->pc = 0x325250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325250;
        }
    }
    ctx->pc = 0x3252F8u;
    // 0x3252f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3252f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3252fc:
    // 0x3252fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3252fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x325300: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x325300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x325304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325308: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x325308u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32530c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32530cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325310: 0x3e00008  jr          $ra
    ctx->pc = 0x325310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325310u;
        // 0x325314: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325318u;
}
