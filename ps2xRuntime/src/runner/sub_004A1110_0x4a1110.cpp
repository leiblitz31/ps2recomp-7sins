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

// Function: sub_004A1110
// Address: 0x4a1110 - 0x4a1218
void sub_004A1110_0x4a1110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1110_0x4a1110");
#endif

    switch (ctx->pc) {
        case 0x4a1170u: goto label_4a1170;
        case 0x4a1180u: goto label_4a1180;
        case 0x4a1188u: goto label_4a1188;
        case 0x4a11a0u: goto label_4a11a0;
        case 0x4a11b0u: goto label_4a11b0;
        case 0x4a11ccu: goto label_4a11cc;
        case 0x4a11e4u: goto label_4a11e4;
        default: break;
    }

    ctx->pc = 0x4a1110u;

    // 0x4a1110: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a1110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4a1114: 0x2402080c  addiu       $v0, $zero, 0x80C
    ctx->pc = 0x4a1114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x4a1118: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a1118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4a111c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4a1120: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4a1120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1124: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a1124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4a1128: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a1128u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a112c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4a1130: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a1130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4a1134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a1134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a1138: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4a1138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4a113c: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x4A113Cu;
    {
        const bool branch_taken_0x4a113c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A113Cu;
        // 0x4a1140: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a113c) {
            ctx->pc = 0x4A11F4u;
            goto label_4a11f4;
        }
    }
    ctx->pc = 0x4A1144u;
    // 0x4a1144: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a1144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a1148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a1148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a114c: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x4A114Cu;
    {
        const bool branch_taken_0x4a114c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A114Cu;
        // 0x4a1150: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a114c) {
            ctx->pc = 0x4A11F8u;
            goto label_4a11f8;
        }
    }
    ctx->pc = 0x4A1154u;
    // 0x4a1154: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a1154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a1158: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4a1158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4a115c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A115Cu;
    {
        const bool branch_taken_0x4a115c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A115Cu;
        // 0x4a1160: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a115c) {
            ctx->pc = 0x4A1170u;
            goto label_4a1170;
        }
    }
    ctx->pc = 0x4A1164u;
    // 0x4a1164: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a1164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1168: 0xc12ac8e  jal         func_4AB238
    ctx->pc = 0x4A1168u;
    SET_GPR_U32(ctx, 31, 0x4A1170u);
    ctx->pc = 0x4A116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1168u;
    // 0x4a116c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB238u, 0x4A1168u, 0x4A1170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1170u;
label_4a1170:
    // 0x4a1170: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4a1170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1174: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a1174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1178: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x4A1178u;
    SET_GPR_U32(ctx, 31, 0x4A1180u);
    ctx->pc = 0x4A117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1178u;
    // 0x4a117c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x4A1178u, 0x4A1180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1180u;
label_4a1180:
    // 0x4a1180: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A1180u;
    {
        const bool branch_taken_0x4a1180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a1180) {
            ctx->pc = 0x4A1184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A1180u;
            // 0x4a1184: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A1190u;
            goto label_4a1190;
        }
    }
    ctx->pc = 0x4A1188u;
label_4a1188:
    // 0x4a1188: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4A1188u;
    {
        const bool branch_taken_0x4a1188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1188u;
        // 0x4a118c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1188) {
            ctx->pc = 0x4A11F8u;
            goto label_4a11f8;
        }
    }
    ctx->pc = 0x4A1190u;
label_4a1190:
    // 0x4a1190: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x4a1190u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a1194: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4A1194u;
    {
        const bool branch_taken_0x4a1194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1194u;
        // 0x4a1198: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1194) {
            ctx->pc = 0x4A11F4u;
            goto label_4a11f4;
        }
    }
    ctx->pc = 0x4A119Cu;
    // 0x4a119c: 0x0  nop
    ctx->pc = 0x4a119cu;
    // NOP
label_4a11a0:
    // 0x4a11a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4a11a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a11a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a11a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a11a8: 0xc12ab84  jal         func_4AAE10
    ctx->pc = 0x4A11A8u;
    SET_GPR_U32(ctx, 31, 0x4A11B0u);
    ctx->pc = 0x4A11ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A11A8u;
    // 0x4a11ac: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAE10u, 0x4A11A8u, 0x4A11B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A11B0u;
label_4a11b0:
    // 0x4a11b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a11b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a11b4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x4a11b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a11b8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x4a11b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a11bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a11bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a11c0: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x4a11c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4a11c4: 0xc129cd8  jal         func_4A7360
    ctx->pc = 0x4A11C4u;
    SET_GPR_U32(ctx, 31, 0x4A11CCu);
    ctx->pc = 0x4A11C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A11C4u;
    // 0x4a11c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7360u, 0x4A11C4u, 0x4A11CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A11CCu;
label_4a11cc:
    // 0x4a11cc: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4A11CCu;
    {
        const bool branch_taken_0x4a11cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A11D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A11CCu;
        // 0x4a11d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a11cc) {
            ctx->pc = 0x4A1188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1188;
        }
    }
    ctx->pc = 0x4A11D4u;
    // 0x4a11d4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4a11d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a11d8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x4a11d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a11dc: 0xc12a1dc  jal         func_4A8770
    ctx->pc = 0x4A11DCu;
    SET_GPR_U32(ctx, 31, 0x4A11E4u);
    ctx->pc = 0x4A11E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A11DCu;
    // 0x4a11e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8770u, 0x4A11DCu, 0x4A11E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A11E4u;
label_4a11e4:
    // 0x4a11e4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4a11e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a11e8: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x4a11e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a11ec: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4A11ECu;
    {
        const bool branch_taken_0x4a11ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A11ECu;
        // 0x4a11f0: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a11ec) {
            ctx->pc = 0x4A11A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a11a0;
        }
    }
    ctx->pc = 0x4A11F4u;
label_4a11f4:
    // 0x4a11f4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4a11f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a11f8:
    // 0x4a11f8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4a11f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a11fc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4a11fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a1200: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a1200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a1204: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a1204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a1208: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4a1208u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a120c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a120cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a1210: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1210u;
        // 0x4a1214: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1218u;
}
