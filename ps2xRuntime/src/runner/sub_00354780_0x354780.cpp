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

// Function: sub_00354780
// Address: 0x354780 - 0x354928
void sub_00354780_0x354780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354780_0x354780");
#endif

    switch (ctx->pc) {
        case 0x3547c8u: goto label_3547c8;
        case 0x3547dcu: goto label_3547dc;
        case 0x3548c0u: goto label_3548c0;
        default: break;
    }

    ctx->pc = 0x354780u;

    // 0x354780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x354780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x354784: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x354784u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x354788: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x354788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x35478c: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x35478cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x354790: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x354790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x354794: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x354794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x354798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x354798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35479c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35479cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3547a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3547a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3547a4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3547a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3547a8: 0x8c93004c  lw          $s3, 0x4C($a0)
    ctx->pc = 0x3547a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3547ac: 0xde7000c8  ld          $s0, 0xC8($s3)
    ctx->pc = 0x3547acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x3547b0: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3547B0u;
    {
        const bool branch_taken_0x3547b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3547B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3547B0u;
        // 0x3547b4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3547b0) {
            ctx->pc = 0x354820u;
            goto label_354820;
        }
    }
    ctx->pc = 0x3547B8u;
    // 0x3547b8: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x3547b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3547bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3547bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3547c0: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x3547C0u;
    SET_GPR_U32(ctx, 31, 0x3547C8u);
    ctx->pc = 0x3547C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3547C0u;
    // 0x3547c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x3547C0u, 0x3547C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3547C8u;
label_3547c8:
    // 0x3547c8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3547C8u;
    {
        const bool branch_taken_0x3547c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3547CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3547C8u;
        // 0x3547cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3547c8) {
            ctx->pc = 0x35482Cu;
            goto label_35482c;
        }
    }
    ctx->pc = 0x3547D0u;
    // 0x3547d0: 0x92260050  lbu         $a2, 0x50($s1)
    ctx->pc = 0x3547d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3547d4: 0xc110f54  jal         func_443D50
    ctx->pc = 0x3547D4u;
    SET_GPR_U32(ctx, 31, 0x3547DCu);
    ctx->pc = 0x3547D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3547D4u;
    // 0x3547d8: 0x266500d0  addiu       $a1, $s3, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x3547D4u, 0x3547DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3547DCu;
label_3547dc:
    // 0x3547dc: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x3547dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
    // 0x3547e0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3547e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3547e4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3547e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3547e8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3547E8u;
    {
        const bool branch_taken_0x3547e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3547ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3547E8u;
        // 0x3547ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3547e8) {
            ctx->pc = 0x3547FCu;
            goto label_3547fc;
        }
    }
    ctx->pc = 0x3547F0u;
    // 0x3547f0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3547f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3547f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3547F4u;
    {
        const bool branch_taken_0x3547f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3547F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3547F4u;
        // 0x3547f8: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3547f4) {
            ctx->pc = 0x354800u;
            goto label_354800;
        }
    }
    ctx->pc = 0x3547FCu;
label_3547fc:
    // 0x3547fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3547fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_354800:
    // 0x354800: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x354800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x354804: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x354804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x354808: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x354808u;
    {
        const bool branch_taken_0x354808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354808) {
            ctx->pc = 0x35480Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354808u;
            // 0x35480c: 0xfe7000c8  sd          $s0, 0xC8($s3) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 19), 200), GPR_U64(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354830u;
            goto label_354830;
        }
    }
    ctx->pc = 0x354810u;
    // 0x354810: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x354810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x354814: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x354814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x354818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x354818u;
    {
        const bool branch_taken_0x354818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354818u;
        // 0x35481c: 0xaf82bec0  sw          $v0, -0x4140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354818) {
            ctx->pc = 0x35482Cu;
            goto label_35482c;
        }
    }
    ctx->pc = 0x354820u;
label_354820:
    // 0x354820: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x354820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x354824: 0xfe6000d0  sd          $zero, 0xD0($s3)
    ctx->pc = 0x354824u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 208), GPR_U64(ctx, 0));
    // 0x354828: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x354828u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_35482c:
    // 0x35482c: 0xfe7000c8  sd          $s0, 0xC8($s3)
    ctx->pc = 0x35482cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 200), GPR_U64(ctx, 16));
label_354830:
    // 0x354830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354834: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x354834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x354838: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x354838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35483c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35483cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354840: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x354840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354848: 0x3e00008  jr          $ra
    ctx->pc = 0x354848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354848u;
        // 0x35484c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354850u;
    // 0x354850: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x354850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x354854: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x354854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x354858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35485c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x35485cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x354860: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x354860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x354864: 0x24670050  addiu       $a3, $v1, 0x50
    ctx->pc = 0x354864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x354868: 0x8ce6004c  lw          $a2, 0x4C($a3)
    ctx->pc = 0x354868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x35486c: 0x8cc200d8  lw          $v0, 0xD8($a2)
    ctx->pc = 0x35486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x354870: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x354870u;
    {
        const bool branch_taken_0x354870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354870) {
            ctx->pc = 0x354874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354870u;
            // 0x354874: 0x8ce50058  lw          $a1, 0x58($a3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3548A8u;
            goto label_3548a8;
        }
    }
    ctx->pc = 0x354878u;
    // 0x354878: 0x8cc5012c  lw          $a1, 0x12C($a2)
    ctx->pc = 0x354878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 300)));
    // 0x35487c: 0x8cc20128  lw          $v0, 0x128($a2)
    ctx->pc = 0x35487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
    // 0x354880: 0x8cc40124  lw          $a0, 0x124($a2)
    ctx->pc = 0x354880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 292)));
    // 0x354884: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x354884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x354888: 0x8cc30130  lw          $v1, 0x130($a2)
    ctx->pc = 0x354888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x35488c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x35488cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x354890: 0x8cc50134  lw          $a1, 0x134($a2)
    ctx->pc = 0x354890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 308)));
    // 0x354894: 0x8cc200e8  lw          $v0, 0xE8($a2)
    ctx->pc = 0x354894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 232)));
    // 0x354898: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x354898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35489c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3548a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3548A0u;
    {
        const bool branch_taken_0x3548a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3548A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3548A0u;
        // 0x3548a4: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3548a0) {
            ctx->pc = 0x3548CCu;
            goto label_3548cc;
        }
    }
    ctx->pc = 0x3548A8u;
label_3548a8:
    // 0x3548a8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3548a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3548ac: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3548acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3548b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3548B0u;
    {
        const bool branch_taken_0x3548b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3548b0) {
            ctx->pc = 0x3548B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3548B0u;
            // 0x3548b4: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3548C8u;
            goto label_3548c8;
        }
    }
    ctx->pc = 0x3548B8u;
    // 0x3548b8: 0xc0d463c  jal         func_3518F0
    ctx->pc = 0x3548B8u;
    SET_GPR_U32(ctx, 31, 0x3548C0u);
    ctx->pc = 0x3548BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3548B8u;
    // 0x3548bc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3518F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3518F0u, 0x3548B8u, 0x3548C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3548C0u;
label_3548c0:
    // 0x3548c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3548C0u;
    {
        const bool branch_taken_0x3548c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3548C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3548C0u;
        // 0x3548c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3548c0) {
            ctx->pc = 0x3548D4u;
            goto label_3548d4;
        }
    }
    ctx->pc = 0x3548C8u;
label_3548c8:
    // 0x3548c8: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x3548c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_3548cc:
    // 0x3548cc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3548ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3548d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3548d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3548d4:
    // 0x3548d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3548D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3548D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3548D4u;
        // 0x3548d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3548D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3548DCu;
    // 0x3548dc: 0x0  nop
    ctx->pc = 0x3548dcu;
    // NOP
    // 0x3548e0: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x3548e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x3548e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3548e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3548e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3548e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3548ec: 0x8c66009c  lw          $a2, 0x9C($v1)
    ctx->pc = 0x3548ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x3548f0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3548f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x3548f4: 0x8cc200d8  lw          $v0, 0xD8($a2)
    ctx->pc = 0x3548f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x3548f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3548F8u;
    {
        const bool branch_taken_0x3548f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3548FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3548F8u;
        // 0x3548fc: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3548f8) {
            ctx->pc = 0x354920u;
            goto label_354920;
        }
    }
    ctx->pc = 0x354900u;
    // 0x354900: 0x8cc400fc  lw          $a0, 0xFC($a2)
    ctx->pc = 0x354900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 252)));
    // 0x354904: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x354904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x354908: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x354908u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x35490c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35490Cu;
    {
        const bool branch_taken_0x35490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35490c) {
            ctx->pc = 0x354910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35490Cu;
            // 0x354910: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x354914u;
            goto label_354914;
        }
    }
    ctx->pc = 0x354914u;
label_354914:
    // 0x354914: 0x1812  mflo        $v1
    ctx->pc = 0x354914u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x354918: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x354918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35491c: 0xacc30124  sw          $v1, 0x124($a2)
    ctx->pc = 0x35491cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 292), GPR_U32(ctx, 3));
label_354920:
    // 0x354920: 0x3e00008  jr          $ra
    ctx->pc = 0x354920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354928u;
}
