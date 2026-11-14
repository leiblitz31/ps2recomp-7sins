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

// Function: sub_003C30C0
// Address: 0x3c30c0 - 0x3c3158
void sub_003C30C0_0x3c30c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C30C0_0x3c30c0");
#endif

    switch (ctx->pc) {
        case 0x3c30c0u: goto label_3c30c0;
        case 0x3c30c4u: goto label_3c30c4;
        case 0x3c30c8u: goto label_3c30c8;
        case 0x3c30ccu: goto label_3c30cc;
        case 0x3c30d0u: goto label_3c30d0;
        case 0x3c30d4u: goto label_3c30d4;
        case 0x3c30d8u: goto label_3c30d8;
        case 0x3c30dcu: goto label_3c30dc;
        case 0x3c30e0u: goto label_3c30e0;
        case 0x3c30e4u: goto label_3c30e4;
        case 0x3c30e8u: goto label_3c30e8;
        case 0x3c30ecu: goto label_3c30ec;
        case 0x3c30f0u: goto label_3c30f0;
        case 0x3c30f4u: goto label_3c30f4;
        case 0x3c30f8u: goto label_3c30f8;
        case 0x3c30fcu: goto label_3c30fc;
        case 0x3c3100u: goto label_3c3100;
        case 0x3c3104u: goto label_3c3104;
        case 0x3c3108u: goto label_3c3108;
        case 0x3c310cu: goto label_3c310c;
        case 0x3c3110u: goto label_3c3110;
        case 0x3c3114u: goto label_3c3114;
        case 0x3c3118u: goto label_3c3118;
        case 0x3c311cu: goto label_3c311c;
        case 0x3c3120u: goto label_3c3120;
        case 0x3c3124u: goto label_3c3124;
        case 0x3c3128u: goto label_3c3128;
        case 0x3c312cu: goto label_3c312c;
        case 0x3c3130u: goto label_3c3130;
        case 0x3c3134u: goto label_3c3134;
        case 0x3c3138u: goto label_3c3138;
        case 0x3c313cu: goto label_3c313c;
        case 0x3c3140u: goto label_3c3140;
        case 0x3c3144u: goto label_3c3144;
        case 0x3c3148u: goto label_3c3148;
        case 0x3c314cu: goto label_3c314c;
        case 0x3c3150u: goto label_3c3150;
        case 0x3c3154u: goto label_3c3154;
        default: break;
    }

    ctx->pc = 0x3c30c0u;

label_3c30c0:
    // 0x3c30c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c30c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c30c4:
    // 0x3c30c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c30c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c30c8:
    // 0x3c30c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c30c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3c30cc:
    // 0x3c30cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c30ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c30d0:
    // 0x3c30d0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3c30d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3c30d4:
    // 0x3c30d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c30d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c30d8:
    // 0x3c30d8: 0x8c50dff0  lw          $s0, -0x2010($v0)
    ctx->pc = 0x3c30d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959088)));
label_3c30dc:
    // 0x3c30dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c30dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c30e0:
    // 0x3c30e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c30e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c30e4:
    // 0x3c30e4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_3c30e8:
    if (ctx->pc == 0x3C30E8u) {
        ctx->pc = 0x3C30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30E4u;
        // 0x3c30e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C30ECu;
        goto label_3c30ec;
    }
    ctx->pc = 0x3C30E4u;
    {
        const bool branch_taken_0x3c30e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30E4u;
        // 0x3c30e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c30e4) {
            ctx->pc = 0x3C311Cu;
            goto label_3c311c;
        }
    }
    ctx->pc = 0x3C30ECu;
label_3c30ec:
    // 0x3c30ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c30ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c30f0:
    // 0x3c30f0: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x3c30f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3c30f4:
    // 0x3c30f4: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x3c30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_3c30f8:
    // 0x3c30f8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3c30f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3c30fc:
    // 0x3c30fc: 0x40f809  jalr        $v0
label_3c3100:
    if (ctx->pc == 0x3C3100u) {
        ctx->pc = 0x3C3100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30FCu;
        // 0x3c3100: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3104u;
        goto label_3c3104;
    }
    ctx->pc = 0x3C30FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3104u);
        ctx->pc = 0x3C3100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30FCu;
        // 0x3c3100: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C30FCu, 0x3C3104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3104u;
label_3c3104:
    // 0x3c3104: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3c3108:
    if (ctx->pc == 0x3C3108u) {
        ctx->pc = 0x3C3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3104u;
        // 0x3c3108: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C310Cu;
        goto label_3c310c;
    }
    ctx->pc = 0x3C3104u;
    {
        const bool branch_taken_0x3c3104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3104) {
            ctx->pc = 0x3C3108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3104u;
            // 0x3c3108: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3114u;
            goto label_3c3114;
        }
    }
    ctx->pc = 0x3C310Cu;
label_3c310c:
    // 0x3c310c: 0x1000000a  b           . + 4 + (0xA << 2)
label_3c3110:
    if (ctx->pc == 0x3C3110u) {
        ctx->pc = 0x3C3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C310Cu;
        // 0x3c3110: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3114u;
        goto label_3c3114;
    }
    ctx->pc = 0x3C310Cu;
    {
        const bool branch_taken_0x3c310c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C310Cu;
        // 0x3c3110: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c310c) {
            ctx->pc = 0x3C3138u;
            goto label_3c3138;
        }
    }
    ctx->pc = 0x3C3114u;
label_3c3114:
    // 0x3c3114: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_3c3118:
    if (ctx->pc == 0x3C3118u) {
        ctx->pc = 0x3C3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3114u;
        // 0x3c3118: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C311Cu;
        goto label_3c311c;
    }
    ctx->pc = 0x3C3114u;
    {
        const bool branch_taken_0x3c3114 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3114) {
            ctx->pc = 0x3C3118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3114u;
            // 0x3c3118: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C30F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c30f8;
        }
    }
    ctx->pc = 0x3C311Cu;
label_3c311c:
    // 0x3c311c: 0x2662dff0  addiu       $v0, $s3, -0x2010
    ctx->pc = 0x3c311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959088));
label_3c3120:
    // 0x3c3120: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3c3120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3c3124:
    // 0x3c3124: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3c3128:
    if (ctx->pc == 0x3C3128u) {
        ctx->pc = 0x3C3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3124u;
        // 0x3c3128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C312Cu;
        goto label_3c312c;
    }
    ctx->pc = 0x3C3124u;
    {
        const bool branch_taken_0x3c3124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3124) {
            ctx->pc = 0x3C3128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3124u;
            // 0x3c3128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3138u;
            goto label_3c3138;
        }
    }
    ctx->pc = 0x3C312Cu;
label_3c312c:
    // 0x3c312c: 0x40f809  jalr        $v0
label_3c3130:
    if (ctx->pc == 0x3C3130u) {
        ctx->pc = 0x3C3130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C312Cu;
        // 0x3c3130: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3134u;
        goto label_3c3134;
    }
    ctx->pc = 0x3C312Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3134u);
        ctx->pc = 0x3C3130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C312Cu;
        // 0x3c3130: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C312Cu, 0x3C3134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3134u;
label_3c3134:
    // 0x3c3134: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c3134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3138:
    // 0x3c3138: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c3138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c313c:
    // 0x3c313c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c313cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c3140:
    // 0x3c3140: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c3140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c3144:
    // 0x3c3144: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3c3144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c3148:
    // 0x3c3148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c3148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c314c:
    // 0x3c314c: 0x3e00008  jr          $ra
label_3c3150:
    if (ctx->pc == 0x3C3150u) {
        ctx->pc = 0x3C3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C314Cu;
        // 0x3c3150: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3154u;
        goto label_3c3154;
    }
    ctx->pc = 0x3C314Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C314Cu;
        // 0x3c3150: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C314Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3154u;
label_3c3154:
    // 0x3c3154: 0x0  nop
    ctx->pc = 0x3c3154u;
    // NOP
    ctx->pc = 0x3c3158u;
}
