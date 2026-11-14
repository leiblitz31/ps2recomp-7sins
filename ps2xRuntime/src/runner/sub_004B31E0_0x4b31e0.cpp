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

// Function: sub_004B31E0
// Address: 0x4b31e0 - 0x4b3500
void sub_004B31E0_0x4b31e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B31E0_0x4b31e0");
#endif

    switch (ctx->pc) {
        case 0x4b3208u: goto label_4b3208;
        case 0x4b322cu: goto label_4b322c;
        case 0x4b3240u: goto label_4b3240;
        case 0x4b3260u: goto label_4b3260;
        case 0x4b3270u: goto label_4b3270;
        case 0x4b3280u: goto label_4b3280;
        case 0x4b3298u: goto label_4b3298;
        default: break;
    }

    ctx->pc = 0x4b31e0u;

    // 0x4b31e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b31e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b31e4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b31e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b31e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b31e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b31ec: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4b31ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4b31f0: 0x2450ed60  addiu       $s0, $v0, -0x12A0
    ctx->pc = 0x4b31f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
    // 0x4b31f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b31f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b31f8: 0x24a52d60  addiu       $a1, $a1, 0x2D60
    ctx->pc = 0x4b31f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11616));
    // 0x4b31fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b31fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3200: 0xc126852  jal         func_49A148
    ctx->pc = 0x4B3200u;
    SET_GPR_U32(ctx, 31, 0x4B3208u);
    ctx->pc = 0x4B3204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3200u;
    // 0x4b3204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A148u, 0x4B3200u, 0x4B3208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3208u;
label_4b3208:
    // 0x4b3208: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x4b3208u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x4b320c: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x4b320cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x4b3210: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b3210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b3214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3218: 0x24e7edc0  addiu       $a3, $a3, -0x1240
    ctx->pc = 0x4b3218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962624));
    // 0x4b321c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4b321cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4b3220: 0x2788c268  addiu       $t0, $gp, -0x3D98
    ctx->pc = 0x4b3220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951528));
    // 0x4b3224: 0xc12679e  jal         func_499E78
    ctx->pc = 0x4B3224u;
    SET_GPR_U32(ctx, 31, 0x4B322Cu);
    ctx->pc = 0x4B3228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3224u;
    // 0x4b3228: 0x3529080d  ori         $t1, $t1, 0x80D (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2061);
    ctx->in_delay_slot = false;
    ctx->pc = 0x499E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499E78u, 0x4B3224u, 0x4B322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B322Cu;
label_4b322c:
    // 0x4b322c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b322cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3230: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B3230u;
    {
        const bool branch_taken_0x4b3230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3230u;
        // 0x4b3234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3230) {
            ctx->pc = 0x4B329Cu;
            goto label_4b329c;
        }
    }
    ctx->pc = 0x4B3238u;
    // 0x4b3238: 0xc12c966  jal         func_4B2598
    ctx->pc = 0x4B3238u;
    SET_GPR_U32(ctx, 31, 0x4B3240u);
    ctx->pc = 0x4B323Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3238u;
    // 0x4b323c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2598u, 0x4B3238u, 0x4B3240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3240u;
label_4b3240:
    // 0x4b3240: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4b3240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4b3244: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4b3244u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x4b3248: 0x24a577f8  addiu       $a1, $a1, 0x77F8
    ctx->pc = 0x4b3248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30712));
    // 0x4b324c: 0x24e77930  addiu       $a3, $a3, 0x7930
    ctx->pc = 0x4b324cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31024));
    // 0x4b3250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b3250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3254: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x4b3254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4b3258: 0xc12668c  jal         func_499A30
    ctx->pc = 0x4B3258u;
    SET_GPR_U32(ctx, 31, 0x4B3260u);
    ctx->pc = 0x4B325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3258u;
    // 0x4b325c: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499A30u, 0x4B3258u, 0x4B3260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3260u;
label_4b3260:
    // 0x4b3260: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B3260u;
    {
        const bool branch_taken_0x4b3260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3260) {
            ctx->pc = 0x4B3290u;
            goto label_4b3290;
        }
    }
    ctx->pc = 0x4B3268u;
    // 0x4b3268: 0xc12ce8a  jal         func_4B3A28
    ctx->pc = 0x4B3268u;
    SET_GPR_U32(ctx, 31, 0x4B3270u);
    ctx->pc = 0x4B3A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3A28u, 0x4B3268u, 0x4B3270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3270u;
label_4b3270:
    // 0x4b3270: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B3270u;
    {
        const bool branch_taken_0x4b3270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3270u;
        // 0x4b3274: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3270) {
            ctx->pc = 0x4B3290u;
            goto label_4b3290;
        }
    }
    ctx->pc = 0x4B3278u;
    // 0x4b3278: 0xc126804  jal         func_49A010
    ctx->pc = 0x4B3278u;
    SET_GPR_U32(ctx, 31, 0x4B3280u);
    ctx->pc = 0x4B327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3278u;
    // 0x4b327c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A010u, 0x4B3278u, 0x4B3280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3280u;
label_4b3280:
    // 0x4b3280: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b3280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b3284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3288: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3288u;
    {
        const bool branch_taken_0x4b3288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3288u;
        // 0x4b328c: 0xaf83b910  sw          $v1, -0x46F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3288) {
            ctx->pc = 0x4B329Cu;
            goto label_4b329c;
        }
    }
    ctx->pc = 0x4B3290u;
label_4b3290:
    // 0x4b3290: 0xc126614  jal         func_499850
    ctx->pc = 0x4B3290u;
    SET_GPR_U32(ctx, 31, 0x4B3298u);
    ctx->pc = 0x4B3294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3290u;
    // 0x4b3294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499850u, 0x4B3290u, 0x4B3298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3298u;
label_4b3298:
    // 0x4b3298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b3298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b329c:
    // 0x4b329c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b329cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b32a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b32a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b32a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B32A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B32A4u;
        // 0x4b32a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B32A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B32ACu;
    // 0x4b32ac: 0x0  nop
    ctx->pc = 0x4b32acu;
    // NOP
    // 0x4b32b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b32b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b32b4: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x4b32b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x4b32b8: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x4b32b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x4b32bc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b32bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b32c0: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x4b32c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x4b32c4: 0x94820058  lhu         $v0, 0x58($a0)
    ctx->pc = 0x4b32c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4b32c8: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x4b32c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x4b32cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B32CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B32CCu;
        // 0x4b32d0: 0xa4820058  sh          $v0, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B32CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B32D4u;
    // 0x4b32d4: 0x0  nop
    ctx->pc = 0x4b32d4u;
    // NOP
    // 0x4b32d8: 0x94820058  lhu         $v0, 0x58($a0)
    ctx->pc = 0x4b32d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4b32dc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x4b32dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x4b32e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B32E0u;
    {
        const bool branch_taken_0x4b32e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B32E0u;
        // 0x4b32e4: 0x8c830030  lw          $v1, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b32e0) {
            ctx->pc = 0x4B32F0u;
            goto label_4b32f0;
        }
    }
    ctx->pc = 0x4B32E8u;
    // 0x4b32e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B32E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B32E8u;
        // 0x4b32ec: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B32E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B32F0u;
label_4b32f0:
    // 0x4b32f0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4b32f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4b32f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4b32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4b32f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B32F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B32FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B32F8u;
        // 0x4b32fc: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B32F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3300u;
    // 0x4b3300: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4b3300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4b3304: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4b3304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4b3308: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4b3308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4b330c: 0xb082006b  sdl         $v0, 0x6B($a0)
    ctx->pc = 0x4b330cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3310: 0xb4820064  sdr         $v0, 0x64($a0)
    ctx->pc = 0x4b3310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3314: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x4b3314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
    // 0x4b3318: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3320u;
    // 0x4b3320: 0x6882006b  ldl         $v0, 0x6B($a0)
    ctx->pc = 0x4b3320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4b3324: 0x6c820064  ldr         $v0, 0x64($a0)
    ctx->pc = 0x4b3324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4b3328: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x4b3328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x4b332c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4b332cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3330: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4b3330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3334: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4b3334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4b3338: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3340u;
    // 0x4b3340: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4b3340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4b3344: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4b3344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4b3348: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4b3348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4b334c: 0xb0820077  sdl         $v0, 0x77($a0)
    ctx->pc = 0x4b334cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3350: 0xb4820070  sdr         $v0, 0x70($a0)
    ctx->pc = 0x4b3350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3354: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x4b3354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
    // 0x4b3358: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3360u;
    // 0x4b3360: 0x68820077  ldl         $v0, 0x77($a0)
    ctx->pc = 0x4b3360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4b3364: 0x6c820070  ldr         $v0, 0x70($a0)
    ctx->pc = 0x4b3364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4b3368: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x4b3368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x4b336c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4b336cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3370: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4b3370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3374: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4b3374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4b3378: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3380u;
    // 0x4b3380: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3380u;
        // 0x4b3384: 0xe48c0098  swc1        $f12, 0x98($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3388u;
    // 0x4b3388: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3388u;
        // 0x4b338c: 0xc4800098  lwc1        $f0, 0x98($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3390u;
    // 0x4b3390: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3390u;
        // 0x4b3394: 0xe48c009c  swc1        $f12, 0x9C($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3398u;
    // 0x4b3398: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3398u;
        // 0x4b339c: 0xc480009c  lwc1        $f0, 0x9C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B33A0u;
    // 0x4b33a0: 0x94820058  lhu         $v0, 0x58($a0)
    ctx->pc = 0x4b33a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4b33a4: 0xe48c007c  swc1        $f12, 0x7C($a0)
    ctx->pc = 0x4b33a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x4b33a8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4b33a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4b33ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4B33ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B33ACu;
        // 0x4b33b0: 0xa4820058  sh          $v0, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B33ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B33B4u;
    // 0x4b33b4: 0x0  nop
    ctx->pc = 0x4b33b4u;
    // NOP
    // 0x4b33b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B33B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B33BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B33B8u;
        // 0x4b33bc: 0xc480007c  lwc1        $f0, 0x7C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B33B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B33C0u;
    // 0x4b33c0: 0x94820058  lhu         $v0, 0x58($a0)
    ctx->pc = 0x4b33c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4b33c4: 0xe48c0084  swc1        $f12, 0x84($a0)
    ctx->pc = 0x4b33c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x4b33c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4b33c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4b33cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B33CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B33CCu;
        // 0x4b33d0: 0xa4820058  sh          $v0, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B33CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B33D4u;
    // 0x4b33d4: 0x0  nop
    ctx->pc = 0x4b33d4u;
    // NOP
    // 0x4b33d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B33D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B33D8u;
        // 0x4b33dc: 0xc4800084  lwc1        $f0, 0x84($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B33D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B33E0u;
    // 0x4b33e0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B33E0u;
    {
        const bool branch_taken_0x4b33e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B33E0u;
        // 0x4b33e4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b33e0) {
            ctx->pc = 0x4B3404u;
            goto label_4b3404;
        }
    }
    ctx->pc = 0x4B33E8u;
    // 0x4b33e8: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x4b33e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x4b33ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b33f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b33f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4b33f4: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x4b33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x4b33f8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x4b33f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x4b33fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B33FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B33FCu;
        // 0x4b3400: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B33FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3404u;
label_4b3404:
    // 0x4b3404: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x4b3404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x4b3408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b3408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b340c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B340Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B340Cu;
        // 0x4b3410: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B340Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3414u;
    // 0x4b3414: 0x0  nop
    ctx->pc = 0x4b3414u;
    // NOP
    // 0x4b3418: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x4b3418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x4b341c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b3420: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4b3420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b3424: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3424u;
    {
        const bool branch_taken_0x4b3424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B3428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3424u;
        // 0x4b3428: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3424) {
            ctx->pc = 0x4B3438u;
            goto label_4b3438;
        }
    }
    ctx->pc = 0x4B342Cu;
    // 0x4b342c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b3430: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B3430u;
    {
        const bool branch_taken_0x4b3430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b3430) {
            ctx->pc = 0x4B343Cu;
            goto label_4b343c;
        }
    }
    ctx->pc = 0x4B3438u;
label_4b3438:
    // 0x4b3438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b3438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b343c:
    // 0x4b343c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B343Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B343Cu;
        // 0x4b3440: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B343Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3444u;
    // 0x4b3444: 0x0  nop
    ctx->pc = 0x4b3444u;
    // NOP
    // 0x4b3448: 0x94820058  lhu         $v0, 0x58($a0)
    ctx->pc = 0x4b3448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4b344c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x4b344cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x4b3450: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x4b3450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x4b3454: 0xa4820058  sh          $v0, 0x58($a0)
    ctx->pc = 0x4b3454u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b3458: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3458u;
        // 0x4b345c: 0xac650018  sw          $a1, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3460u;
    // 0x4b3460: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x4b3460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x4b3464: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3464u;
        // 0x4b3468: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B346Cu;
    // 0x4b346c: 0x0  nop
    ctx->pc = 0x4b346cu;
    // NOP
    // 0x4b3470: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B3470u;
    {
        const bool branch_taken_0x4b3470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3470) {
            ctx->pc = 0x4B3474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3470u;
            // 0x4b3474: 0x8c840030  lw          $a0, 0x30($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B348Cu;
            goto label_4b348c;
        }
    }
    ctx->pc = 0x4B3478u;
    // 0x4b3478: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x4b3478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x4b347c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x4b347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x4b3480: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4b3480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4b3484: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3484u;
        // 0x4b3488: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B348Cu;
label_4b348c:
    // 0x4b348c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b348cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3490: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x4b3490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x4b3494: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x4b3494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4b3498: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b3498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b349c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B349Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B349Cu;
        // 0x4b34a0: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B349Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B34A4u;
    // 0x4b34a4: 0x0  nop
    ctx->pc = 0x4b34a4u;
    // NOP
    // 0x4b34a8: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x4b34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x4b34ac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x4b34acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x4b34b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B34B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B34B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34B0u;
        // 0x4b34b4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B34B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B34B8u;
    // 0x4b34b8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x4b34b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x4b34bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B34BCu;
    {
        const bool branch_taken_0x4b34bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34BCu;
        // 0x4b34c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b34bc) {
            ctx->pc = 0x4B34CCu;
            goto label_4b34cc;
        }
    }
    ctx->pc = 0x4B34C4u;
    // 0x4b34c4: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x4b34c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x4b34c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4b34c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4b34cc:
    // 0x4b34cc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B34CCu;
    {
        const bool branch_taken_0x4b34cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b34cc) {
            ctx->pc = 0x4B34D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B34CCu;
            // 0x4b34d0: 0x94820058  lhu         $v0, 0x58($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B34E8u;
            goto label_4b34e8;
        }
    }
    ctx->pc = 0x4B34D4u;
    // 0x4b34d4: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x4b34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x4b34d8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4b34d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4b34dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b34dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b34e0: 0xac8200a0  sw          $v0, 0xA0($a0)
    ctx->pc = 0x4b34e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
    // 0x4b34e4: 0x94820058  lhu         $v0, 0x58($a0)
    ctx->pc = 0x4b34e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
label_4b34e8:
    // 0x4b34e8: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x4b34e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x4b34ec: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x4b34ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x4b34f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B34F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34F0u;
        // 0x4b34f4: 0xa4820058  sh          $v0, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B34F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B34F8u;
    // 0x4b34f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B34F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34F8u;
        // 0x4b34fc: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B34F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3500u;
}
