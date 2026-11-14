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

// Function: sub_002F3080
// Address: 0x2f3080 - 0x2f33a0
void sub_002F3080_0x2f3080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3080_0x2f3080");
#endif

    switch (ctx->pc) {
        case 0x2f30a0u: goto label_2f30a0;
        case 0x2f30b8u: goto label_2f30b8;
        case 0x2f30d0u: goto label_2f30d0;
        case 0x2f3118u: goto label_2f3118;
        case 0x2f3128u: goto label_2f3128;
        case 0x2f3168u: goto label_2f3168;
        case 0x2f31b0u: goto label_2f31b0;
        case 0x2f3274u: goto label_2f3274;
        case 0x2f3288u: goto label_2f3288;
        case 0x2f3298u: goto label_2f3298;
        case 0x2f32d8u: goto label_2f32d8;
        default: break;
    }

    ctx->pc = 0x2f3080u;

    // 0x2f3080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f3080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f3084: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f3084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f3088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f3088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f308c: 0x8c46ea90  lw          $a2, -0x1570($v0)
    ctx->pc = 0x2f308cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2f3090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f3090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3094: 0x24c6005c  addiu       $a2, $a2, 0x5C
    ctx->pc = 0x2f3094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
    // 0x2f3098: 0x80bcc28  j           func_2F30A0
    ctx->pc = 0x2F3098u;
    ctx->pc = 0x2F309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3098u;
    // 0x2f309c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F30A0u;
    goto label_2f30a0;
    ctx->pc = 0x2F30A0u;
label_2f30a0:
    // 0x2f30a0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F30A0u;
    {
        const bool branch_taken_0x2f30a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30A0u;
        // 0x2f30a4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30a0) {
            ctx->pc = 0x2F30B8u;
            goto label_2f30b8;
        }
    }
    ctx->pc = 0x2F30A8u;
    // 0x2f30a8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2f30a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f30ac: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F30ACu;
    {
        const bool branch_taken_0x2f30ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F30B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30ACu;
        // 0x2f30b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30ac) {
            ctx->pc = 0x2F3160u;
            goto label_2f3160;
        }
    }
    ctx->pc = 0x2F30B4u;
    // 0x2f30b4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2f30b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f30b8:
    // 0x2f30b8: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x2f30b8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f30bc: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x2f30bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f30c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2f30c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2f30c4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F30C4u;
    {
        const bool branch_taken_0x2f30c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30C4u;
        // 0x2f30c8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30c4) {
            ctx->pc = 0x2F30FCu;
            goto label_2f30fc;
        }
    }
    ctx->pc = 0x2F30CCu;
    // 0x2f30cc: 0x0  nop
    ctx->pc = 0x2f30ccu;
    // NOP
label_2f30d0:
    // 0x2f30d0: 0x0  nop
    ctx->pc = 0x2f30d0u;
    // NOP
    // 0x2f30d4: 0x0  nop
    ctx->pc = 0x2f30d4u;
    // NOP
    // 0x2f30d8: 0x5103fff7  beql        $t0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F30D8u;
    {
        const bool branch_taken_0x2f30d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f30d8) {
            ctx->pc = 0x2F30DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F30D8u;
            // 0x2f30dc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F30B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f30b8;
        }
    }
    ctx->pc = 0x2F30E0u;
    // 0x2f30e0: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x2f30e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f30e4: 0x0  nop
    ctx->pc = 0x2f30e4u;
    // NOP
    // 0x2f30e8: 0x0  nop
    ctx->pc = 0x2f30e8u;
    // NOP
    // 0x2f30ec: 0x0  nop
    ctx->pc = 0x2f30ecu;
    // NOP
    // 0x2f30f0: 0x0  nop
    ctx->pc = 0x2f30f0u;
    // NOP
    // 0x2f30f4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F30F4u;
    {
        const bool branch_taken_0x2f30f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F30F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30F4u;
        // 0x2f30f8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30f4) {
            ctx->pc = 0x2F30D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f30d0;
        }
    }
    ctx->pc = 0x2F30FCu;
label_2f30fc:
    // 0x2f30fc: 0x55000004  bnel        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F30FCu;
    {
        const bool branch_taken_0x2f30fc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f30fc) {
            ctx->pc = 0x2F3100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F30FCu;
            // 0x2f3100: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3110u;
            goto label_2f3110;
        }
    }
    ctx->pc = 0x2F3104u;
    // 0x2f3104: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2f3104u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2f3108: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3108u;
        // 0x2f310c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3110u;
label_2f3110:
    // 0x2f3110: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x2f3110u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f3114: 0x0  nop
    ctx->pc = 0x2f3114u;
    // NOP
label_2f3118:
    // 0x2f3118: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f3118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f311c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2f311cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3120: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x2f3120u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f3124: 0x0  nop
    ctx->pc = 0x2f3124u;
    // NOP
label_2f3128:
    // 0x2f3128: 0x14680007  bne         $v1, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3128u;
    {
        const bool branch_taken_0x2f3128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x2F312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3128u;
        // 0x2f312c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3128) {
            ctx->pc = 0x2F3148u;
            goto label_2f3148;
        }
    }
    ctx->pc = 0x2F3130u;
    // 0x2f3130: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3130u;
    {
        const bool branch_taken_0x2f3130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3130) {
            ctx->pc = 0x2F3134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3130u;
            // 0x2f3134: 0xa080ffff  sb          $zero, -0x1($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F313Cu;
            goto label_2f313c;
        }
    }
    ctx->pc = 0x2F3138u;
    // 0x2f3138: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f3138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f313c:
    // 0x2f313c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F313Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F313Cu;
        // 0x2f3140: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F313Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3144u;
    // 0x2f3144: 0x0  nop
    ctx->pc = 0x2f3144u;
    // NOP
label_2f3148:
    // 0x2f3148: 0x0  nop
    ctx->pc = 0x2f3148u;
    // NOP
    // 0x2f314c: 0x0  nop
    ctx->pc = 0x2f314cu;
    // NOP
    // 0x2f3150: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F3150u;
    {
        const bool branch_taken_0x2f3150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3150) {
            ctx->pc = 0x2F3154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3150u;
            // 0x2f3154: 0x80e30000  lb          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3128;
        }
    }
    ctx->pc = 0x2F3158u;
    // 0x2f3158: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x2F3158u;
    {
        const bool branch_taken_0x2f3158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3158u;
        // 0x2f315c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3158) {
            ctx->pc = 0x2F3118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3118;
        }
    }
    ctx->pc = 0x2F3160u;
label_2f3160:
    // 0x2f3160: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3168u;
label_2f3168:
    // 0x2f3168: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f3168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f316c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2f316cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2f3170: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2f3170u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3174: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f3174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f3178: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2f3178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2f317c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2f317cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2f3180: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2f3180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2f3184: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2f3184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2f3188: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2f3188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2f318c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f318cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f3190: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x2f3190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3194: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2f3194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2f3198: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2f3198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f319c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2f319cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2f31a0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2f31a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31a4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2f31a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2f31a8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2f31a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31ac: 0x0  nop
    ctx->pc = 0x2f31acu;
    // NOP
label_2f31b0:
    // 0x2f31b0: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2f31b0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f31b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f31b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f31b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f31bc: 0x90428f81  lbu         $v0, -0x707F($v0)
    ctx->pc = 0x2f31bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294938497)));
    // 0x2f31c0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2f31c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2f31c4: 0x0  nop
    ctx->pc = 0x2f31c4u;
    // NOP
    // 0x2f31c8: 0x0  nop
    ctx->pc = 0x2f31c8u;
    // NOP
    // 0x2f31cc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F31CCu;
    {
        const bool branch_taken_0x2f31cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31CCu;
        // 0x2f31d0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31cc) {
            ctx->pc = 0x2F31B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f31b0;
        }
    }
    ctx->pc = 0x2F31D4u;
    // 0x2f31d4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2f31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2f31d8: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F31D8u;
    {
        const bool branch_taken_0x2f31d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F31DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31D8u;
        // 0x2f31dc: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31d8) {
            ctx->pc = 0x2F31F0u;
            goto label_2f31f0;
        }
    }
    ctx->pc = 0x2F31E0u;
    // 0x2f31e0: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2f31e0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f31e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f31e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f31e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F31E8u;
    {
        const bool branch_taken_0x2f31e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31E8u;
        // 0x2f31ec: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31e8) {
            ctx->pc = 0x2F3200u;
            goto label_2f3200;
        }
    }
    ctx->pc = 0x2F31F0u;
label_2f31f0:
    // 0x2f31f0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F31F0u;
    {
        const bool branch_taken_0x2f31f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f31f0) {
            ctx->pc = 0x2F3200u;
            goto label_2f3200;
        }
    }
    ctx->pc = 0x2F31F8u;
    // 0x2f31f8: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2f31f8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f31fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f31fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f3200:
    // 0x2f3200: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3200u;
    {
        const bool branch_taken_0x2f3200 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3200u;
        // 0x2f3204: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3200) {
            ctx->pc = 0x2F3210u;
            goto label_2f3210;
        }
    }
    ctx->pc = 0x2F3208u;
    // 0x2f3208: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F3208u;
    {
        const bool branch_taken_0x2f3208 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3208) {
            ctx->pc = 0x2F323Cu;
            goto label_2f323c;
        }
    }
    ctx->pc = 0x2F3210u;
label_2f3210:
    // 0x2f3210: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2f3210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f3214: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3214u;
    {
        const bool branch_taken_0x2f3214 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3214u;
        // 0x2f3218: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3214) {
            ctx->pc = 0x2F323Cu;
            goto label_2f323c;
        }
    }
    ctx->pc = 0x2F321Cu;
    // 0x2f321c: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2f321cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f3220: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3220u;
    {
        const bool branch_taken_0x2f3220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3220u;
        // 0x2f3224: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3220) {
            ctx->pc = 0x2F3230u;
            goto label_2f3230;
        }
    }
    ctx->pc = 0x2F3228u;
    // 0x2f3228: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3228u;
    {
        const bool branch_taken_0x2f3228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3228) {
            ctx->pc = 0x2F323Cu;
            goto label_2f323c;
        }
    }
    ctx->pc = 0x2F3230u;
label_2f3230:
    // 0x2f3230: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x2f3230u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2f3234: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2f3234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x2f3238: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x2f3238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f323c:
    // 0x2f323c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F323Cu;
    {
        const bool branch_taken_0x2f323c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F323Cu;
        // 0x2f3240: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f323c) {
            ctx->pc = 0x2F3250u;
            goto label_2f3250;
        }
    }
    ctx->pc = 0x2F3244u;
    // 0x2f3244: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x2f3244u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f3248: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x2f3248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x2f324c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x2f324cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_2f3250:
    // 0x2f3250: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f3250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f3254: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x2f3254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x2f3258: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x2f3258u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2f325c: 0x14a43c  dsll32      $s4, $s4, 16
    ctx->pc = 0x2f325cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 16));
    // 0x2f3260: 0x57a00a  movz        $s4, $v0, $s7
    ctx->pc = 0x2f3260u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x2f3264: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2f3264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3268: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f3268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f326c: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x2F326Cu;
    SET_GPR_U32(ctx, 31, 0x2F3274u);
    ctx->pc = 0x2F3270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F326Cu;
    // 0x2f3270: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x2F326Cu, 0x2F3274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3274u;
label_2f3274:
    // 0x2f3274: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f3274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3278: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x2f3278u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f327c: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x2f327cu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x2f3280: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x2F3280u;
    SET_GPR_U32(ctx, 31, 0x2F3288u);
    ctx->pc = 0x2F3284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3280u;
    // 0x2f3284: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x2F3280u, 0x2F3288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3288u;
label_2f3288:
    // 0x2f3288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f3288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f328c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f328cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3290: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2F3290u;
    {
        const bool branch_taken_0x2f3290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3290u;
        // 0x2f3294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3290) {
            ctx->pc = 0x2F32E8u;
            goto label_2f32e8;
        }
    }
    ctx->pc = 0x2F3298u;
label_2f3298:
    // 0x2f3298: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2f3298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2f329c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F329Cu;
    {
        const bool branch_taken_0x2f329c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f329c) {
            ctx->pc = 0x2F3328u;
            goto label_2f3328;
        }
    }
    ctx->pc = 0x2F32A4u;
    // 0x2f32a4: 0x4c00008  bltz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F32A4u;
    {
        const bool branch_taken_0x2f32a4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2F32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32A4u;
        // 0x2f32a8: 0x285102b  sltu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32a4) {
            ctx->pc = 0x2F32C8u;
            goto label_2f32c8;
        }
    }
    ctx->pc = 0x2F32ACu;
    // 0x2f32ac: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2F32ACu;
    {
        const bool branch_taken_0x2f32ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f32ac) {
            ctx->pc = 0x2F32B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F32ACu;
            // 0x2f32b0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F32E0u;
            goto label_2f32e0;
        }
    }
    ctx->pc = 0x2F32B4u;
    // 0x2f32b4: 0x14b40006  bne         $a1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F32B4u;
    {
        const bool branch_taken_0x2f32b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        ctx->pc = 0x2F32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32B4u;
        // 0x2f32b8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32b4) {
            ctx->pc = 0x2F32D0u;
            goto label_2f32d0;
        }
    }
    ctx->pc = 0x2F32BCu;
    // 0x2f32bc: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x2f32bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f32c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F32C0u;
    {
        const bool branch_taken_0x2f32c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f32c0) {
            ctx->pc = 0x2F32D0u;
            goto label_2f32d0;
        }
    }
    ctx->pc = 0x2F32C8u;
label_2f32c8:
    // 0x2f32c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F32C8u;
    {
        const bool branch_taken_0x2f32c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32C8u;
        // 0x2f32cc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32c8) {
            ctx->pc = 0x2F32E0u;
            goto label_2f32e0;
        }
    }
    ctx->pc = 0x2F32D0u;
label_2f32d0:
    // 0x2f32d0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x2F32D0u;
    SET_GPR_U32(ctx, 31, 0x2F32D8u);
    ctx->pc = 0x2F32D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F32D0u;
    // 0x2f32d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x2F32D0u, 0x2F32D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F32D8u;
label_2f32d8:
    // 0x2f32d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f32d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f32dc: 0x222282d  daddu       $a1, $s1, $v0
    ctx->pc = 0x2f32dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_2f32e0:
    // 0x2f32e0: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2f32e0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f32e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f32e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f32e8:
    // 0x2f32e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f32e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f32ec: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2f32ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2f32f0: 0x90848f81  lbu         $a0, -0x707F($a0)
    ctx->pc = 0x2f32f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294938497)));
    // 0x2f32f4: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2f32f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2f32f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F32F8u;
    {
        const bool branch_taken_0x2f32f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32F8u;
        // 0x2f32fc: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32f8) {
            ctx->pc = 0x2F3308u;
            goto label_2f3308;
        }
    }
    ctx->pc = 0x2F3300u;
    // 0x2f3300: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x2F3300u;
    {
        const bool branch_taken_0x2f3300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3300u;
        // 0x2f3304: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3300) {
            ctx->pc = 0x2F3298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3298;
        }
    }
    ctx->pc = 0x2F3308u;
label_2f3308:
    // 0x2f3308: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3308u;
    {
        const bool branch_taken_0x2f3308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3308u;
        // 0x2f330c: 0x2622ffc9  addiu       $v0, $s1, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3308) {
            ctx->pc = 0x2F3328u;
            goto label_2f3328;
        }
    }
    ctx->pc = 0x2F3310u;
    // 0x2f3310: 0x2623ffa9  addiu       $v1, $s1, -0x57
    ctx->pc = 0x2f3310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
    // 0x2f3314: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2f3314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2f3318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f3318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f331c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x2F331Cu;
    {
        const bool branch_taken_0x2f331c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F331Cu;
        // 0x2f3320: 0x64880a  movz        $s1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f331c) {
            ctx->pc = 0x2F3298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3298;
        }
    }
    ctx->pc = 0x2F3324u;
    // 0x2f3324: 0x0  nop
    ctx->pc = 0x2f3324u;
    // NOP
label_2f3328:
    // 0x2f3328: 0x4c1000b  bgez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2F3328u;
    {
        const bool branch_taken_0x2f3328 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2F332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3328u;
        // 0x2f332c: 0x5102f  dsubu       $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3328) {
            ctx->pc = 0x2F3358u;
            goto label_2f3358;
        }
    }
    ctx->pc = 0x2F3330u;
    // 0x2f3330: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f3330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f3334: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x2f3334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x2f3338: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2f3338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2f333c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2f333cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2f3340: 0x77280a  movz        $a1, $v1, $s7
    ctx->pc = 0x2f3340u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2f3344: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2f3344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3348: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2f3348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2f334c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F334Cu;
    {
        const bool branch_taken_0x2f334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F334Cu;
        // 0x2f3350: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f334c) {
            ctx->pc = 0x2F335Cu;
            goto label_2f335c;
        }
    }
    ctx->pc = 0x2F3354u;
    // 0x2f3354: 0x0  nop
    ctx->pc = 0x2f3354u;
    // NOP
label_2f3358:
    // 0x2f3358: 0x57280b  movn        $a1, $v0, $s7
    ctx->pc = 0x2f3358u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2f335c:
    // 0x2f335c: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F335Cu;
    {
        const bool branch_taken_0x2f335c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F335Cu;
        // 0x2f3360: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f335c) {
            ctx->pc = 0x2F336Cu;
            goto label_2f336c;
        }
    }
    ctx->pc = 0x2F3364u;
    // 0x2f3364: 0x46a80b  movn        $s5, $v0, $a2
    ctx->pc = 0x2f3364u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x2f3368: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x2f3368u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
label_2f336c:
    // 0x2f336c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f336cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3370: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f3370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3374: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2f3374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f3378: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f3378u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f337c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2f337cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f3380: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2f3380u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3384: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2f3384u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f3388: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2f3388u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f338c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2f338cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f3390: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2f3390u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f3394: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2f3394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f3398: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3398u;
        // 0x2f339c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F33A0u;
}
