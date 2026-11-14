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

// Function: sub_003C31F8
// Address: 0x3c31f8 - 0x3c32a0
void sub_003C31F8_0x3c31f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C31F8_0x3c31f8");
#endif

    switch (ctx->pc) {
        case 0x3c31f8u: goto label_3c31f8;
        case 0x3c31fcu: goto label_3c31fc;
        case 0x3c3200u: goto label_3c3200;
        case 0x3c3204u: goto label_3c3204;
        case 0x3c3208u: goto label_3c3208;
        case 0x3c320cu: goto label_3c320c;
        case 0x3c3210u: goto label_3c3210;
        case 0x3c3214u: goto label_3c3214;
        case 0x3c3218u: goto label_3c3218;
        case 0x3c321cu: goto label_3c321c;
        case 0x3c3220u: goto label_3c3220;
        case 0x3c3224u: goto label_3c3224;
        case 0x3c3228u: goto label_3c3228;
        case 0x3c322cu: goto label_3c322c;
        case 0x3c3230u: goto label_3c3230;
        case 0x3c3234u: goto label_3c3234;
        case 0x3c3238u: goto label_3c3238;
        case 0x3c323cu: goto label_3c323c;
        case 0x3c3240u: goto label_3c3240;
        case 0x3c3244u: goto label_3c3244;
        case 0x3c3248u: goto label_3c3248;
        case 0x3c324cu: goto label_3c324c;
        case 0x3c3250u: goto label_3c3250;
        case 0x3c3254u: goto label_3c3254;
        case 0x3c3258u: goto label_3c3258;
        case 0x3c325cu: goto label_3c325c;
        case 0x3c3260u: goto label_3c3260;
        case 0x3c3264u: goto label_3c3264;
        case 0x3c3268u: goto label_3c3268;
        case 0x3c326cu: goto label_3c326c;
        case 0x3c3270u: goto label_3c3270;
        case 0x3c3274u: goto label_3c3274;
        case 0x3c3278u: goto label_3c3278;
        case 0x3c327cu: goto label_3c327c;
        case 0x3c3280u: goto label_3c3280;
        case 0x3c3284u: goto label_3c3284;
        case 0x3c3288u: goto label_3c3288;
        case 0x3c328cu: goto label_3c328c;
        case 0x3c3290u: goto label_3c3290;
        case 0x3c3294u: goto label_3c3294;
        case 0x3c3298u: goto label_3c3298;
        case 0x3c329cu: goto label_3c329c;
        default: break;
    }

    ctx->pc = 0x3c31f8u;

label_3c31f8:
    // 0x3c31f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c31f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c31fc:
    // 0x3c31fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c3200:
    // 0x3c3200: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c3200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3c3204:
    // 0x3c3204: 0x8c50dff0  lw          $s0, -0x2010($v0)
    ctx->pc = 0x3c3204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959088)));
label_3c3208:
    // 0x3c3208: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c3208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c320c:
    // 0x3c320c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c320cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3c3210:
    // 0x3c3210: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_3c3214:
    if (ctx->pc == 0x3C3214u) {
        ctx->pc = 0x3C3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3210u;
        // 0x3c3214: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3218u;
        goto label_3c3218;
    }
    ctx->pc = 0x3C3210u;
    {
        const bool branch_taken_0x3c3210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3210u;
        // 0x3c3214: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3210) {
            ctx->pc = 0x3C3284u;
            goto label_3c3284;
        }
    }
    ctx->pc = 0x3C3218u;
label_3c3218:
    // 0x3c3218: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3c3218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c321c:
    // 0x3c321c: 0x0  nop
    ctx->pc = 0x3c321cu;
    // NOP
label_3c3220:
    // 0x3c3220: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_3c3224:
    if (ctx->pc == 0x3C3224u) {
        ctx->pc = 0x3C3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3220u;
        // 0x3c3224: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3228u;
        goto label_3c3228;
    }
    ctx->pc = 0x3C3220u;
    {
        const bool branch_taken_0x3c3220 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3C3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3220u;
        // 0x3c3224: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3220) {
            ctx->pc = 0x3C3278u;
            goto label_3c3278;
        }
    }
    ctx->pc = 0x3C3228u;
label_3c3228:
    // 0x3c3228: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3c3228u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c322c:
    // 0x3c322c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3c322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c3230:
    // 0x3c3230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3234:
    // 0x3c3234: 0x40f809  jalr        $v0
label_3c3238:
    if (ctx->pc == 0x3C3238u) {
        ctx->pc = 0x3C3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3234u;
        // 0x3c3238: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C323Cu;
        goto label_3c323c;
    }
    ctx->pc = 0x3C3234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C323Cu);
        ctx->pc = 0x3C3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3234u;
        // 0x3c3238: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3234u, 0x3C323Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C323Cu;
label_3c323c:
    // 0x3c323c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c323cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c3240:
    // 0x3c3240: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_3c3244:
    if (ctx->pc == 0x3C3244u) {
        ctx->pc = 0x3C3244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3240u;
        // 0x3c3244: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3248u;
        goto label_3c3248;
    }
    ctx->pc = 0x3C3240u;
    {
        const bool branch_taken_0x3c3240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3240) {
            ctx->pc = 0x3C3244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3240u;
            // 0x3c3244: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3268u;
            goto label_3c3268;
        }
    }
    ctx->pc = 0x3C3248u;
label_3c3248:
    // 0x3c3248: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3c3248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_3c324c:
    // 0x3c324c: 0x50520006  beql        $v0, $s2, . + 4 + (0x6 << 2)
label_3c3250:
    if (ctx->pc == 0x3C3250u) {
        ctx->pc = 0x3C3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C324Cu;
        // 0x3c3250: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3254u;
        goto label_3c3254;
    }
    ctx->pc = 0x3C324Cu;
    {
        const bool branch_taken_0x3c324c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x3c324c) {
            ctx->pc = 0x3C3250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C324Cu;
            // 0x3c3250: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3268u;
            goto label_3c3268;
        }
    }
    ctx->pc = 0x3C3254u;
label_3c3254:
    // 0x3c3254: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3c3254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3c3258:
    // 0x3c3258: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x3c3258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_3c325c:
    // 0x3c325c: 0x40f809  jalr        $v0
label_3c3260:
    if (ctx->pc == 0x3C3260u) {
        ctx->pc = 0x3C3260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C325Cu;
        // 0x3c3260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3264u;
        goto label_3c3264;
    }
    ctx->pc = 0x3C325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3264u);
        ctx->pc = 0x3C3260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C325Cu;
        // 0x3c3260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C325Cu, 0x3C3264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3264u;
label_3c3264:
    // 0x3c3264: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3c3264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c3268:
    // 0x3c3268: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c3268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3c326c:
    // 0x3c326c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3c326cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c3270:
    // 0x3c3270: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_3c3274:
    if (ctx->pc == 0x3C3274u) {
        ctx->pc = 0x3C3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3270u;
        // 0x3c3274: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3278u;
        goto label_3c3278;
    }
    ctx->pc = 0x3C3270u;
    {
        const bool branch_taken_0x3c3270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3270) {
            ctx->pc = 0x3C3274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3270u;
            // 0x3c3274: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3230;
        }
    }
    ctx->pc = 0x3C3278u;
label_3c3278:
    // 0x3c3278: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x3c3278u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c327c:
    // 0x3c327c: 0x5600ffe8  bnel        $s0, $zero, . + 4 + (-0x18 << 2)
label_3c3280:
    if (ctx->pc == 0x3C3280u) {
        ctx->pc = 0x3C3280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C327Cu;
        // 0x3c3280: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3284u;
        goto label_3c3284;
    }
    ctx->pc = 0x3C327Cu;
    {
        const bool branch_taken_0x3c327c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c327c) {
            ctx->pc = 0x3C3280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C327Cu;
            // 0x3c3280: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3220;
        }
    }
    ctx->pc = 0x3C3284u;
label_3c3284:
    // 0x3c3284: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c3284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c3288:
    // 0x3c3288: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c3288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c328c:
    // 0x3c328c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c328cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c3290:
    // 0x3c3290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c3290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c3294:
    // 0x3c3294: 0x3e00008  jr          $ra
label_3c3298:
    if (ctx->pc == 0x3C3298u) {
        ctx->pc = 0x3C3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3294u;
        // 0x3c3298: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C329Cu;
        goto label_3c329c;
    }
    ctx->pc = 0x3C3294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3294u;
        // 0x3c3298: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C329Cu;
label_3c329c:
    // 0x3c329c: 0x0  nop
    ctx->pc = 0x3c329cu;
    // NOP
    ctx->pc = 0x3c32a0u;
}
