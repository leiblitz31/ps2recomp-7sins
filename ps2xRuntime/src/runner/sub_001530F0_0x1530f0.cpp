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

// Function: sub_001530F0
// Address: 0x1530f0 - 0x153300
void sub_001530F0_0x1530f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001530F0_0x1530f0");
#endif

    switch (ctx->pc) {
        case 0x15312cu: goto label_15312c;
        case 0x153140u: goto label_153140;
        case 0x153154u: goto label_153154;
        case 0x153164u: goto label_153164;
        case 0x15317cu: goto label_15317c;
        case 0x153194u: goto label_153194;
        case 0x1531acu: goto label_1531ac;
        case 0x1531ccu: goto label_1531cc;
        case 0x1531e4u: goto label_1531e4;
        case 0x1531f4u: goto label_1531f4;
        case 0x15321cu: goto label_15321c;
        case 0x153230u: goto label_153230;
        case 0x153244u: goto label_153244;
        case 0x153250u: goto label_153250;
        case 0x153264u: goto label_153264;
        case 0x15327cu: goto label_15327c;
        case 0x1532a4u: goto label_1532a4;
        case 0x1532b8u: goto label_1532b8;
        case 0x1532d4u: goto label_1532d4;
        default: break;
    }

    ctx->pc = 0x1530f0u;

    // 0x1530f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1530f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1530f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1530f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1530f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1530f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1530fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1530fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x153100: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15310c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x15310cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x153110: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x153110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x153114: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x153114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x153118: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x153118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15311c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x15311cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153120: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x153120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x153124: 0xc0527a4  jal         func_149E90
    ctx->pc = 0x153124u;
    SET_GPR_U32(ctx, 31, 0x15312Cu);
    ctx->pc = 0x149E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E90u, 0x153124u, 0x15312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15312Cu;
label_15312c:
    // 0x15312c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x15312cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153134: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x153134u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x153138: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x153138u;
    {
        const bool branch_taken_0x153138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153138) {
            ctx->pc = 0x1531B4u;
            goto label_1531b4;
        }
    }
    ctx->pc = 0x153140u;
label_153140:
    // 0x153140: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x153140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153144: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x153144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x153148: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x153148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15314c: 0xc054200  jal         func_150800
    ctx->pc = 0x15314Cu;
    SET_GPR_U32(ctx, 31, 0x153154u);
    ctx->pc = 0x150800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150800u, 0x15314Cu, 0x153154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153154u;
label_153154:
    // 0x153154: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x153154u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15315c: 0xc0541f0  jal         func_1507C0
    ctx->pc = 0x15315Cu;
    SET_GPR_U32(ctx, 31, 0x153164u);
    ctx->pc = 0x1507C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507C0u, 0x15315Cu, 0x153164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153164u;
label_153164:
    // 0x153164: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x153164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x153168: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x153168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x15316c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15316cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153170: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x153170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153174: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x153174u;
    SET_GPR_U32(ctx, 31, 0x15317Cu);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x153174u, 0x15317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15317Cu;
label_15317c:
    // 0x15317c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x15317cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x153180: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x153180u;
    {
        const bool branch_taken_0x153180 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x153180) {
            ctx->pc = 0x1531A0u;
            goto label_1531a0;
        }
    }
    ctx->pc = 0x153188u;
    // 0x153188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15318c: 0xc0541e8  jal         func_1507A0
    ctx->pc = 0x15318Cu;
    SET_GPR_U32(ctx, 31, 0x153194u);
    ctx->pc = 0x1507A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507A0u, 0x15318Cu, 0x153194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153194u;
label_153194:
    // 0x153194: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x153194u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153198: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x153198u;
    {
        const bool branch_taken_0x153198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153198) {
            ctx->pc = 0x1531B0u;
            goto label_1531b0;
        }
    }
    ctx->pc = 0x1531A0u;
label_1531a0:
    // 0x1531a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1531a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531a4: 0xc0541e0  jal         func_150780
    ctx->pc = 0x1531A4u;
    SET_GPR_U32(ctx, 31, 0x1531ACu);
    ctx->pc = 0x150780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150780u, 0x1531A4u, 0x1531ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1531ACu;
label_1531ac:
    // 0x1531ac: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1531acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1531b0:
    // 0x1531b0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1531b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1531b4:
    // 0x1531b4: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1531B4u;
    {
        const bool branch_taken_0x1531b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1531b4) {
            ctx->pc = 0x153140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153140;
        }
    }
    ctx->pc = 0x1531BCu;
    // 0x1531bc: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1531bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1531c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1531c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531c4: 0xc052a3c  jal         func_14A8F0
    ctx->pc = 0x1531C4u;
    SET_GPR_U32(ctx, 31, 0x1531CCu);
    ctx->pc = 0x14A8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A8F0u, 0x1531C4u, 0x1531CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1531CCu;
label_1531cc:
    // 0x1531cc: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1531CCu;
    {
        const bool branch_taken_0x1531cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1531cc) {
            ctx->pc = 0x153244u;
            goto label_153244;
        }
    }
    ctx->pc = 0x1531D4u;
    // 0x1531d4: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1531d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1531d8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1531d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1531dc: 0xc052a8c  jal         func_14AA30
    ctx->pc = 0x1531DCu;
    SET_GPR_U32(ctx, 31, 0x1531E4u);
    ctx->pc = 0x14AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA30u, 0x1531DCu, 0x1531E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1531E4u;
label_1531e4:
    // 0x1531e4: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1531e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1531e8: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x1531e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1531ec: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x1531ECu;
    SET_GPR_U32(ctx, 31, 0x1531F4u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x1531ECu, 0x1531F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1531F4u;
label_1531f4:
    // 0x1531f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1531F4u;
    {
        const bool branch_taken_0x1531f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1531f4) {
            ctx->pc = 0x153238u;
            goto label_153238;
        }
    }
    ctx->pc = 0x1531FCu;
    // 0x1531fc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1531fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x153200: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x153200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x153204: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x153204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153208: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x153208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15320c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x15320cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x153210: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x153210u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153214: 0xc054cd4  jal         func_153350
    ctx->pc = 0x153214u;
    SET_GPR_U32(ctx, 31, 0x15321Cu);
    ctx->pc = 0x153350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153350u, 0x153214u, 0x15321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15321Cu;
label_15321c:
    // 0x15321c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15321cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x153220: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x153220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x153224: 0x27868d08  addiu       $a2, $gp, -0x72F8
    ctx->pc = 0x153224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937864));
    // 0x153228: 0xc054cc0  jal         func_153300
    ctx->pc = 0x153228u;
    SET_GPR_U32(ctx, 31, 0x153230u);
    ctx->pc = 0x153300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153300u, 0x153228u, 0x153230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153230u;
label_153230:
    // 0x153230: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x153230u;
    {
        const bool branch_taken_0x153230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153230) {
            ctx->pc = 0x1532D4u;
            goto label_1532d4;
        }
    }
    ctx->pc = 0x153238u;
label_153238:
    // 0x153238: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x153238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15323c: 0xc054aa8  jal         func_152AA0
    ctx->pc = 0x15323Cu;
    SET_GPR_U32(ctx, 31, 0x153244u);
    ctx->pc = 0x152AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152AA0u, 0x15323Cu, 0x153244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153244u;
label_153244:
    // 0x153244: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x153244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x153248: 0xc054ac0  jal         func_152B00
    ctx->pc = 0x153248u;
    SET_GPR_U32(ctx, 31, 0x153250u);
    ctx->pc = 0x152B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B00u, 0x153248u, 0x153250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153250u;
label_153250:
    // 0x153250: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x153250u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153254: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x153254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x153258: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x153258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15325c: 0xc054200  jal         func_150800
    ctx->pc = 0x15325Cu;
    SET_GPR_U32(ctx, 31, 0x153264u);
    ctx->pc = 0x150800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150800u, 0x15325Cu, 0x153264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153264u;
label_153264:
    // 0x153264: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x153264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x153268: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x153268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x15326c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15326cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153270: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x153270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153274: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x153274u;
    SET_GPR_U32(ctx, 31, 0x15327Cu);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x153274u, 0x15327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15327Cu;
label_15327c:
    // 0x15327c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15327Cu;
    {
        const bool branch_taken_0x15327c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15327c) {
            ctx->pc = 0x1532C0u;
            goto label_1532c0;
        }
    }
    ctx->pc = 0x153284u;
    // 0x153284: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x153284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x153288: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x153288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15328c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15328cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153290: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x153290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153294: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x153294u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x153298: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x153298u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15329c: 0xc054cd4  jal         func_153350
    ctx->pc = 0x15329Cu;
    SET_GPR_U32(ctx, 31, 0x1532A4u);
    ctx->pc = 0x153350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153350u, 0x15329Cu, 0x1532A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1532A4u;
label_1532a4:
    // 0x1532a4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1532a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1532a8: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x1532a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1532ac: 0x27868d0c  addiu       $a2, $gp, -0x72F4
    ctx->pc = 0x1532acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937868));
    // 0x1532b0: 0xc054cc0  jal         func_153300
    ctx->pc = 0x1532B0u;
    SET_GPR_U32(ctx, 31, 0x1532B8u);
    ctx->pc = 0x153300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153300u, 0x1532B0u, 0x1532B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1532B8u;
label_1532b8:
    // 0x1532b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1532B8u;
    {
        const bool branch_taken_0x1532b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1532b8) {
            ctx->pc = 0x1532D4u;
            goto label_1532d4;
        }
    }
    ctx->pc = 0x1532C0u;
label_1532c0:
    // 0x1532c0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1532c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1532c4: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x1532c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1532c8: 0x27868d10  addiu       $a2, $gp, -0x72F0
    ctx->pc = 0x1532c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937872));
    // 0x1532cc: 0xc054cc0  jal         func_153300
    ctx->pc = 0x1532CCu;
    SET_GPR_U32(ctx, 31, 0x1532D4u);
    ctx->pc = 0x153300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153300u, 0x1532CCu, 0x1532D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1532D4u;
label_1532d4:
    // 0x1532d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1532d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1532d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1532d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1532dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1532dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1532e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1532e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1532e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1532e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1532e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1532e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1532ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1532ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1532f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1532F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1532F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1532F8u;
    // 0x1532f8: 0x0  nop
    ctx->pc = 0x1532f8u;
    // NOP
    // 0x1532fc: 0x0  nop
    ctx->pc = 0x1532fcu;
    // NOP
    ctx->pc = 0x153300u;
}
