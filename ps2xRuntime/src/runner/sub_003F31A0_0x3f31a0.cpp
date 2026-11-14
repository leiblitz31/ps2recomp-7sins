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

// Function: sub_003F31A0
// Address: 0x3f31a0 - 0x3f3570
void sub_003F31A0_0x3f31a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F31A0_0x3f31a0");
#endif

    switch (ctx->pc) {
        case 0x3f31f0u: goto label_3f31f0;
        case 0x3f3218u: goto label_3f3218;
        case 0x3f3230u: goto label_3f3230;
        case 0x3f3248u: goto label_3f3248;
        case 0x3f3258u: goto label_3f3258;
        case 0x3f3264u: goto label_3f3264;
        case 0x3f327cu: goto label_3f327c;
        case 0x3f328cu: goto label_3f328c;
        case 0x3f3294u: goto label_3f3294;
        case 0x3f32d8u: goto label_3f32d8;
        case 0x3f330cu: goto label_3f330c;
        case 0x3f3320u: goto label_3f3320;
        case 0x3f3338u: goto label_3f3338;
        case 0x3f3348u: goto label_3f3348;
        case 0x3f338cu: goto label_3f338c;
        case 0x3f33a0u: goto label_3f33a0;
        case 0x3f33b8u: goto label_3f33b8;
        case 0x3f33c8u: goto label_3f33c8;
        case 0x3f33ecu: goto label_3f33ec;
        case 0x3f33fcu: goto label_3f33fc;
        case 0x3f3404u: goto label_3f3404;
        case 0x3f344cu: goto label_3f344c;
        case 0x3f3460u: goto label_3f3460;
        case 0x3f3474u: goto label_3f3474;
        case 0x3f3484u: goto label_3f3484;
        case 0x3f348cu: goto label_3f348c;
        case 0x3f34d4u: goto label_3f34d4;
        case 0x3f34e8u: goto label_3f34e8;
        case 0x3f354cu: goto label_3f354c;
        default: break;
    }

    ctx->pc = 0x3f31a0u;

    // 0x3f31a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f31a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3f31a4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3f31a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3f31a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3f31a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3f31ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3f31acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f31b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f31b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3f31b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f31b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f31b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3f31b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3f31bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3f31bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f31c0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3f31c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3f31c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f31c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f31c8: 0xde4300f8  ld          $v1, 0xF8($s2)
    ctx->pc = 0x3f31c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f31cc: 0xa3a00003  sb          $zero, 0x3($sp)
    ctx->pc = 0x3f31ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f31d0: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x3f31d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f31d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f31d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f31d8: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x3f31d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f31dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F31DCu;
    {
        const bool branch_taken_0x3f31dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F31E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F31DCu;
        // 0x3f31e0: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f31dc) {
            ctx->pc = 0x3F31F8u;
            goto label_3f31f8;
        }
    }
    ctx->pc = 0x3F31E4u;
    // 0x3f31e4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f31e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f31e8: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F31E8u;
    SET_GPR_U32(ctx, 31, 0x3F31F0u);
    ctx->pc = 0x3F31ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F31E8u;
    // 0x3f31ec: 0x24a5ed08  addiu       $a1, $a1, -0x12F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F31E8u, 0x3F31F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F31F0u;
label_3f31f0:
    // 0x3f31f0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x3F31F0u;
    {
        const bool branch_taken_0x3f31f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F31F0u;
        // 0x3f31f4: 0x9242020a  lbu         $v0, 0x20A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f31f0) {
            ctx->pc = 0x3F3360u;
            goto label_3f3360;
        }
    }
    ctx->pc = 0x3F31F8u;
label_3f31f8:
    // 0x3f31f8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f31f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f31fc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3F31FCu;
    {
        const bool branch_taken_0x3f31fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F31FCu;
        // 0x3f3200: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f31fc) {
            ctx->pc = 0x3F32C0u;
            goto label_3f32c0;
        }
    }
    ctx->pc = 0x3F3204u;
    // 0x3f3204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3208: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f3208u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f320c: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f320cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f3210: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F3210u;
    SET_GPR_U32(ctx, 31, 0x3F3218u);
    ctx->pc = 0x3F3214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3210u;
    // 0x3f3214: 0x24a5ed28  addiu       $a1, $a1, -0x12D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F3210u, 0x3F3218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3218u;
label_3f3218:
    // 0x3f3218: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f3218u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f321c: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f321cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f3220: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F3220u;
    {
        const bool branch_taken_0x3f3220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3220) {
            ctx->pc = 0x3F3264u;
            goto label_3f3264;
        }
    }
    ctx->pc = 0x3F3228u;
    // 0x3f3228: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f3228u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f322c: 0x0  nop
    ctx->pc = 0x3f322cu;
    // NOP
label_3f3230:
    // 0x3f3230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3234: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f3234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f3238: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f3238u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f323c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f323cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3240: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3240u;
    SET_GPR_U32(ctx, 31, 0x3F3248u);
    ctx->pc = 0x3F3244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3240u;
    // 0x3f3244: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3240u, 0x3F3248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3248u;
label_3f3248:
    // 0x3f3248: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f3248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f324c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f324cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3250: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3250u;
    SET_GPR_U32(ctx, 31, 0x3F3258u);
    ctx->pc = 0x3F3254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3250u;
    // 0x3f3254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3250u, 0x3F3258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3258u;
label_3f3258:
    // 0x3f3258: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f3258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f325c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F325Cu;
    {
        const bool branch_taken_0x3f325c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f325c) {
            ctx->pc = 0x3F3260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F325Cu;
            // 0x3f3260: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3230;
        }
    }
    ctx->pc = 0x3F3264u;
label_3f3264:
    // 0x3f3264: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F3264u;
    {
        const bool branch_taken_0x3f3264 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3264u;
        // 0x3f3268: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3264) {
            ctx->pc = 0x3F328Cu;
            goto label_3f328c;
        }
    }
    ctx->pc = 0x3F326Cu;
    // 0x3f326c: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f326cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f3270: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f3270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3274: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3274u;
    SET_GPR_U32(ctx, 31, 0x3F327Cu);
    ctx->pc = 0x3F3278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3274u;
    // 0x3f3278: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3274u, 0x3F327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F327Cu;
label_3f327c:
    // 0x3f327c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f327cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3280: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f3280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3284: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3284u;
    SET_GPR_U32(ctx, 31, 0x3F328Cu);
    ctx->pc = 0x3F3288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3284u;
    // 0x3f3288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3284u, 0x3F328Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F328Cu;
label_3f328c:
    // 0x3f328c: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F328Cu;
    SET_GPR_U32(ctx, 31, 0x3F3294u);
    ctx->pc = 0x3F3290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F328Cu;
    // 0x3f3290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F328Cu, 0x3F3294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3294u;
label_3f3294:
    // 0x3f3294: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x3F3294u;
    {
        const bool branch_taken_0x3f3294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3294u;
        // 0x3f3298: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3294) {
            ctx->pc = 0x3F3550u;
            goto label_3f3550;
        }
    }
    ctx->pc = 0x3F329Cu;
    // 0x3f329c: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f329cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f32a0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f32a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f32a4: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x3F32A4u;
    {
        const bool branch_taken_0x3f32a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F32A4u;
        // 0x3f32a8: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f32a4) {
            ctx->pc = 0x3F341Cu;
            goto label_3f341c;
        }
    }
    ctx->pc = 0x3F32ACu;
    // 0x3f32ac: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f32acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f32b0: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x3F32B0u;
    {
        const bool branch_taken_0x3f32b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F32B0u;
        // 0x3f32b4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f32b0) {
            ctx->pc = 0x3F3440u;
            goto label_3f3440;
        }
    }
    ctx->pc = 0x3F32B8u;
    // 0x3f32b8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x3F32B8u;
    {
        const bool branch_taken_0x3f32b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F32BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F32B8u;
        // 0x3f32bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f32b8) {
            ctx->pc = 0x3F3458u;
            goto label_3f3458;
        }
    }
    ctx->pc = 0x3F32C0u;
label_3f32c0:
    // 0x3f32c0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3f32c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3f32c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F32C4u;
    {
        const bool branch_taken_0x3f32c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F32C4u;
        // 0x3f32c8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f32c4) {
            ctx->pc = 0x3F32E0u;
            goto label_3f32e0;
        }
    }
    ctx->pc = 0x3F32CCu;
    // 0x3f32cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f32ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f32d0: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F32D0u;
    SET_GPR_U32(ctx, 31, 0x3F32D8u);
    ctx->pc = 0x3F32D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F32D0u;
    // 0x3f32d4: 0x24a5ed40  addiu       $a1, $a1, -0x12C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F32D0u, 0x3F32D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F32D8u;
label_3f32d8:
    // 0x3f32d8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3F32D8u;
    {
        const bool branch_taken_0x3f32d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F32D8u;
        // 0x3f32dc: 0x9242020a  lbu         $v0, 0x20A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f32d8) {
            ctx->pc = 0x3F3360u;
            goto label_3f3360;
        }
    }
    ctx->pc = 0x3F32E0u;
label_3f32e0:
    // 0x3f32e0: 0x5260001f  beql        $s3, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F32E0u;
    {
        const bool branch_taken_0x3f32e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f32e0) {
            ctx->pc = 0x3F32E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F32E0u;
            // 0x3f32e4: 0x9242020a  lbu         $v0, 0x20A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3360u;
            goto label_3f3360;
        }
    }
    ctx->pc = 0x3F32E8u;
    // 0x3f32e8: 0xde620010  ld          $v0, 0x10($s3)
    ctx->pc = 0x3f32e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3f32ec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3f32ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3f32f0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F32F0u;
    {
        const bool branch_taken_0x3f32f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F32F0u;
        // 0x3f32f4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f32f0) {
            ctx->pc = 0x3F335Cu;
            goto label_3f335c;
        }
    }
    ctx->pc = 0x3F32F8u;
    // 0x3f32f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f32f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f32fc: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f32fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f3300: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f3300u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f3304: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F3304u;
    SET_GPR_U32(ctx, 31, 0x3F330Cu);
    ctx->pc = 0x3F3308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3304u;
    // 0x3f3308: 0x24a5ed58  addiu       $a1, $a1, -0x12A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F3304u, 0x3F330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F330Cu;
label_3f330c:
    // 0x3f330c: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f330cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f3310: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f3310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f3314: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x3F3314u;
    {
        const bool branch_taken_0x3f3314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3314) {
            ctx->pc = 0x3F3264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3264;
        }
    }
    ctx->pc = 0x3F331Cu;
    // 0x3f331c: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f331cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f3320:
    // 0x3f3320: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3324: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f3324u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f3328: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f3328u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f332c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f332cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3330: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3330u;
    SET_GPR_U32(ctx, 31, 0x3F3338u);
    ctx->pc = 0x3F3334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3330u;
    // 0x3f3334: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3330u, 0x3F3338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3338u;
label_3f3338:
    // 0x3f3338: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f3338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f333c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f333cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3340: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3340u;
    SET_GPR_U32(ctx, 31, 0x3F3348u);
    ctx->pc = 0x3F3344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3340u;
    // 0x3f3344: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3340u, 0x3F3348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3348u;
label_3f3348:
    // 0x3f3348: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f3348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f334c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F334Cu;
    {
        const bool branch_taken_0x3f334c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f334c) {
            ctx->pc = 0x3F3350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F334Cu;
            // 0x3f3350: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3320;
        }
    }
    ctx->pc = 0x3F3354u;
    // 0x3f3354: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x3F3354u;
    {
        const bool branch_taken_0x3f3354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3354) {
            ctx->pc = 0x3F3264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3264;
        }
    }
    ctx->pc = 0x3F335Cu;
label_3f335c:
    // 0x3f335c: 0x9242020a  lbu         $v0, 0x20A($s2)
    ctx->pc = 0x3f335cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
label_3f3360:
    // 0x3f3360: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3f3360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f3364: 0x54500001  bnel        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F3364u;
    {
        const bool branch_taken_0x3f3364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3f3364) {
            ctx->pc = 0x3F3368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3364u;
            // 0x3f3368: 0x9250020e  lbu         $s0, 0x20E($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 526)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F336Cu;
            goto label_3f336c;
        }
    }
    ctx->pc = 0x3F336Cu;
label_3f336c:
    // 0x3f336c: 0x1230003e  beq         $s1, $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3F336Cu;
    {
        const bool branch_taken_0x3f336c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3F3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F336Cu;
        // 0x3f3370: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f336c) {
            ctx->pc = 0x3F3468u;
            goto label_3f3468;
        }
    }
    ctx->pc = 0x3F3374u;
    // 0x3f3374: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f3374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f3378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f337c: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f337cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f3380: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f3380u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f3384: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F3384u;
    SET_GPR_U32(ctx, 31, 0x3F338Cu);
    ctx->pc = 0x3F3388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3384u;
    // 0x3f3388: 0x24a5ed70  addiu       $a1, $a1, -0x1290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F3384u, 0x3F338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F338Cu;
label_3f338c:
    // 0x3f338c: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f338cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f3390: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f3390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f3394: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F3394u;
    {
        const bool branch_taken_0x3f3394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3394) {
            ctx->pc = 0x3F33D4u;
            goto label_3f33d4;
        }
    }
    ctx->pc = 0x3F339Cu;
    // 0x3f339c: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f339cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f33a0:
    // 0x3f33a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f33a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f33a4: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f33a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f33a8: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f33a8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f33ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f33acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f33b0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F33B0u;
    SET_GPR_U32(ctx, 31, 0x3F33B8u);
    ctx->pc = 0x3F33B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F33B0u;
    // 0x3f33b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F33B0u, 0x3F33B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F33B8u;
label_3f33b8:
    // 0x3f33b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f33b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f33bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f33bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f33c0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F33C0u;
    SET_GPR_U32(ctx, 31, 0x3F33C8u);
    ctx->pc = 0x3F33C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F33C0u;
    // 0x3f33c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F33C0u, 0x3F33C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F33C8u;
label_3f33c8:
    // 0x3f33c8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f33c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f33cc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F33CCu;
    {
        const bool branch_taken_0x3f33cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f33cc) {
            ctx->pc = 0x3F33D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F33CCu;
            // 0x3f33d0: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F33A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f33a0;
        }
    }
    ctx->pc = 0x3F33D4u;
label_3f33d4:
    // 0x3f33d4: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F33D4u;
    {
        const bool branch_taken_0x3f33d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F33D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F33D4u;
        // 0x3f33d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f33d4) {
            ctx->pc = 0x3F33FCu;
            goto label_3f33fc;
        }
    }
    ctx->pc = 0x3F33DCu;
    // 0x3f33dc: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f33dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f33e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f33e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f33e4: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F33E4u;
    SET_GPR_U32(ctx, 31, 0x3F33ECu);
    ctx->pc = 0x3F33E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F33E4u;
    // 0x3f33e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F33E4u, 0x3F33ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F33ECu;
label_3f33ec:
    // 0x3f33ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f33ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f33f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f33f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f33f4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F33F4u;
    SET_GPR_U32(ctx, 31, 0x3F33FCu);
    ctx->pc = 0x3F33F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F33F4u;
    // 0x3f33f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F33F4u, 0x3F33FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F33FCu;
label_3f33fc:
    // 0x3f33fc: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F33FCu;
    SET_GPR_U32(ctx, 31, 0x3F3404u);
    ctx->pc = 0x3F3400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F33FCu;
    // 0x3f3400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F33FCu, 0x3F3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3404u;
label_3f3404:
    // 0x3f3404: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x3F3404u;
    {
        const bool branch_taken_0x3f3404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3404u;
        // 0x3f3408: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3404) {
            ctx->pc = 0x3F3550u;
            goto label_3f3550;
        }
    }
    ctx->pc = 0x3F340Cu;
    // 0x3f340c: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f340cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f3410: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f3410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f3414: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F3414u;
    {
        const bool branch_taken_0x3f3414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3414u;
        // 0x3f3418: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3414) {
            ctx->pc = 0x3F3430u;
            goto label_3f3430;
        }
    }
    ctx->pc = 0x3F341Cu;
label_3f341c:
    // 0x3f341c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f341cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f3420: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F3420u;
    {
        const bool branch_taken_0x3f3420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3420u;
        // 0x3f3424: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3420) {
            ctx->pc = 0x3F343Cu;
            goto label_3f343c;
        }
    }
    ctx->pc = 0x3F3428u;
    // 0x3f3428: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F3428u;
    {
        const bool branch_taken_0x3f3428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3428u;
        // 0x3f342c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3428) {
            ctx->pc = 0x3F3458u;
            goto label_3f3458;
        }
    }
    ctx->pc = 0x3F3430u;
label_3f3430:
    // 0x3f3430: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f3430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f3434: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F3434u;
    {
        const bool branch_taken_0x3f3434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3434u;
        // 0x3f3438: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3434) {
            ctx->pc = 0x3F3454u;
            goto label_3f3454;
        }
    }
    ctx->pc = 0x3F343Cu;
label_3f343c:
    // 0x3f343c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f343cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f3440:
    // 0x3f3440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3444: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F3444u;
    SET_GPR_U32(ctx, 31, 0x3F344Cu);
    ctx->pc = 0x3F3448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3444u;
    // 0x3f3448: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F3444u, 0x3F344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F344Cu;
label_3f344c:
    // 0x3f344c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3F344Cu;
    {
        const bool branch_taken_0x3f344c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F344Cu;
        // 0x3f3450: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f344c) {
            ctx->pc = 0x3F3550u;
            goto label_3f3550;
        }
    }
    ctx->pc = 0x3F3454u;
label_3f3454:
    // 0x3f3454: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3458:
    // 0x3f3458: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F3458u;
    SET_GPR_U32(ctx, 31, 0x3F3460u);
    ctx->pc = 0x3F345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3458u;
    // 0x3f345c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F3458u, 0x3F3460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3460u;
label_3f3460:
    // 0x3f3460: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3F3460u;
    {
        const bool branch_taken_0x3f3460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3460u;
        // 0x3f3464: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3460) {
            ctx->pc = 0x3F3550u;
            goto label_3f3550;
        }
    }
    ctx->pc = 0x3F3468u;
label_3f3468:
    // 0x3f3468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f346c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F346Cu;
    SET_GPR_U32(ctx, 31, 0x3F3474u);
    ctx->pc = 0x3F3470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F346Cu;
    // 0x3f3470: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F346Cu, 0x3F3474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3474u;
label_3f3474:
    // 0x3f3474: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f3474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f347c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F347Cu;
    SET_GPR_U32(ctx, 31, 0x3F3484u);
    ctx->pc = 0x3F3480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F347Cu;
    // 0x3f3480: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F347Cu, 0x3F3484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3484u;
label_3f3484:
    // 0x3f3484: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F3484u;
    SET_GPR_U32(ctx, 31, 0x3F348Cu);
    ctx->pc = 0x3F3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3484u;
    // 0x3f3488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F3484u, 0x3F348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F348Cu;
label_3f348c:
    // 0x3f348c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F348Cu;
    {
        const bool branch_taken_0x3f348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F348Cu;
        // 0x3f3490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f348c) {
            ctx->pc = 0x3F34ECu;
            goto label_3f34ec;
        }
    }
    ctx->pc = 0x3F3494u;
    // 0x3f3494: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f3494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f3498: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f3498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f349c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F349Cu;
    {
        const bool branch_taken_0x3f349c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F349Cu;
        // 0x3f34a0: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f349c) {
            ctx->pc = 0x3F34B8u;
            goto label_3f34b8;
        }
    }
    ctx->pc = 0x3F34A4u;
    // 0x3f34a4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f34a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f34a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F34A8u;
    {
        const bool branch_taken_0x3f34a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34A8u;
        // 0x3f34ac: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f34a8) {
            ctx->pc = 0x3F34C4u;
            goto label_3f34c4;
        }
    }
    ctx->pc = 0x3F34B0u;
    // 0x3f34b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F34B0u;
    {
        const bool branch_taken_0x3f34b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F34B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34B0u;
        // 0x3f34b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f34b0) {
            ctx->pc = 0x3F34E0u;
            goto label_3f34e0;
        }
    }
    ctx->pc = 0x3F34B8u;
label_3f34b8:
    // 0x3f34b8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f34b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f34bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F34BCu;
    {
        const bool branch_taken_0x3f34bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34BCu;
        // 0x3f34c0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f34bc) {
            ctx->pc = 0x3F34DCu;
            goto label_3f34dc;
        }
    }
    ctx->pc = 0x3F34C4u;
label_3f34c4:
    // 0x3f34c4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f34c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f34c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f34c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f34cc: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F34CCu;
    SET_GPR_U32(ctx, 31, 0x3F34D4u);
    ctx->pc = 0x3F34D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F34CCu;
    // 0x3f34d0: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F34CCu, 0x3F34D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F34D4u;
label_3f34d4:
    // 0x3f34d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F34D4u;
    {
        const bool branch_taken_0x3f34d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34D4u;
        // 0x3f34d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f34d4) {
            ctx->pc = 0x3F34ECu;
            goto label_3f34ec;
        }
    }
    ctx->pc = 0x3F34DCu;
label_3f34dc:
    // 0x3f34dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f34dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f34e0:
    // 0x3f34e0: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F34E0u;
    SET_GPR_U32(ctx, 31, 0x3F34E8u);
    ctx->pc = 0x3F34E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F34E0u;
    // 0x3f34e4: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F34E0u, 0x3F34E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F34E8u;
label_3f34e8:
    // 0x3f34e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f34e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f34ec:
    // 0x3f34ec: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F34ECu;
    {
        const bool branch_taken_0x3f34ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34ECu;
        // 0x3f34f0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f34ec) {
            ctx->pc = 0x3F3550u;
            goto label_3f3550;
        }
    }
    ctx->pc = 0x3F34F4u;
    // 0x3f34f4: 0x9242020a  lbu         $v0, 0x20A($s2)
    ctx->pc = 0x3f34f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
    // 0x3f34f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3f34f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3f34fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F34FCu;
    {
        const bool branch_taken_0x3f34fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34FCu;
        // 0x3f3500: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f34fc) {
            ctx->pc = 0x3F3524u;
            goto label_3f3524;
        }
    }
    ctx->pc = 0x3F3504u;
    // 0x3f3504: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x3f3504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x3f3508: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x3f3508u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x3f350c: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x3f350cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x3f3510: 0xa242026c  sb          $v0, 0x26C($s2)
    ctx->pc = 0x3f3510u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 620), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f3514: 0xa243026d  sb          $v1, 0x26D($s2)
    ctx->pc = 0x3f3514u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 621), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f3518: 0xa244026e  sb          $a0, 0x26E($s2)
    ctx->pc = 0x3f3518u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 622), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f351c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F351Cu;
    {
        const bool branch_taken_0x3f351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F351Cu;
        // 0x3f3520: 0xa2450270  sb          $a1, 0x270($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 624), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f351c) {
            ctx->pc = 0x3F353Cu;
            goto label_3f353c;
        }
    }
    ctx->pc = 0x3F3524u;
label_3f3524:
    // 0x3f3524: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x3f3524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x3f3528: 0xa242026e  sb          $v0, 0x26E($s2)
    ctx->pc = 0x3f3528u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 622), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f352c: 0xa2430270  sb          $v1, 0x270($s2)
    ctx->pc = 0x3f352cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 624), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f3530: 0xa242026f  sb          $v0, 0x26F($s2)
    ctx->pc = 0x3f3530u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 623), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f3534: 0xa242026c  sb          $v0, 0x26C($s2)
    ctx->pc = 0x3f3534u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 620), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f3538: 0xa242026d  sb          $v0, 0x26D($s2)
    ctx->pc = 0x3f3538u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 621), (uint8_t)GPR_U32(ctx, 2));
label_3f353c:
    // 0x3f353c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3540: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f3540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3544: 0xc0feddc  jal         func_3FB770
    ctx->pc = 0x3F3544u;
    SET_GPR_U32(ctx, 31, 0x3F354Cu);
    ctx->pc = 0x3F3548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3544u;
    // 0x3f3548: 0x2486026c  addiu       $a2, $a0, 0x26C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 620));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FB770u, 0x3F3544u, 0x3F354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F354Cu;
label_3f354c:
    // 0x3f354c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3f354cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f3550:
    // 0x3f3550: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3f3550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f3554: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3f3554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f3558: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f3558u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f355c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3f355cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f3560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f3560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f3564: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3564u;
        // 0x3f3568: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F356Cu;
    // 0x3f356c: 0x0  nop
    ctx->pc = 0x3f356cu;
    // NOP
    ctx->pc = 0x3f3570u;
}
