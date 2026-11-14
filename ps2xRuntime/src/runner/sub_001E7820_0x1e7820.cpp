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

// Function: sub_001E7820
// Address: 0x1e7820 - 0x1e7980
void sub_001E7820_0x1e7820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7820_0x1e7820");
#endif

    switch (ctx->pc) {
        case 0x1e7854u: goto label_1e7854;
        case 0x1e7868u: goto label_1e7868;
        case 0x1e788cu: goto label_1e788c;
        case 0x1e78b4u: goto label_1e78b4;
        case 0x1e78d8u: goto label_1e78d8;
        case 0x1e7900u: goto label_1e7900;
        case 0x1e7930u: goto label_1e7930;
        case 0x1e7940u: goto label_1e7940;
        case 0x1e7964u: goto label_1e7964;
        default: break;
    }

    ctx->pc = 0x1e7820u;

    // 0x1e7820: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e7820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e7824: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e7824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e7828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e782c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7830: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7834: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1e7834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1e7838: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1e7838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1e783c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1e783cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1e7840: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1e7840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1e7844: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1e7844u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1e7848: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e7848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e784c: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E784Cu;
    SET_GPR_U32(ctx, 31, 0x1E7854u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E784Cu, 0x1E7854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7854u;
label_1e7854:
    // 0x1e7854: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1e7854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1e7858: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1e7858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1e785c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1e785cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e7860: 0xc041954  jal         func_106550
    ctx->pc = 0x1E7860u;
    SET_GPR_U32(ctx, 31, 0x1E7868u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1E7860u, 0x1E7868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7868u;
label_1e7868:
    // 0x1e7868: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1e7868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1e786c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7870: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1e7870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7874: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e7874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7878: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e7878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e787c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e787cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e7880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7884: 0xc07a73c  jal         func_1E9CF0
    ctx->pc = 0x1E7884u;
    SET_GPR_U32(ctx, 31, 0x1E788Cu);
    ctx->pc = 0x1E9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9CF0u, 0x1E7884u, 0x1E788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E788Cu;
label_1e788c:
    // 0x1e788c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e788cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7890: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1e7890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7894: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e7894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7898: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1e7898u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e789c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e789cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e78a0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e78a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e78a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e78a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78a8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1e78a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e78ac: 0xc079f20  jal         func_1E7C80
    ctx->pc = 0x1E78ACu;
    SET_GPR_U32(ctx, 31, 0x1E78B4u);
    ctx->pc = 0x1E7C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7C80u, 0x1E78ACu, 0x1E78B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E78B4u;
label_1e78b4:
    // 0x1e78b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e78b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78b8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1e78b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e78bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e78c0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E78C0u;
    {
        const bool branch_taken_0x1e78c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e78c0) {
            ctx->pc = 0x1E78E4u;
            goto label_1e78e4;
        }
    }
    ctx->pc = 0x1E78C8u;
    // 0x1e78c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e78c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78cc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1e78ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e78d0: 0xc079eb0  jal         func_1E7AC0
    ctx->pc = 0x1E78D0u;
    SET_GPR_U32(ctx, 31, 0x1E78D8u);
    ctx->pc = 0x1E7AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7AC0u, 0x1E78D0u, 0x1E78D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E78D8u;
label_1e78d8:
    // 0x1e78d8: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x1e78d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1e78dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E78DCu;
    {
        const bool branch_taken_0x1e78dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e78dc) {
            ctx->pc = 0x1E7904u;
            goto label_1e7904;
        }
    }
    ctx->pc = 0x1E78E4u;
label_1e78e4:
    // 0x1e78e4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1e78e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e78e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e78e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78ec: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1e78ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e78f0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1e78f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e78f4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1e78f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1e78f8: 0xc079e90  jal         func_1E7A40
    ctx->pc = 0x1E78F8u;
    SET_GPR_U32(ctx, 31, 0x1E7900u);
    ctx->pc = 0x1E7A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7A40u, 0x1E78F8u, 0x1E7900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7900u;
label_1e7900:
    // 0x1e7900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e7900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e7904:
    // 0x1e7904: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1e7904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e7908: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E7908u;
    {
        const bool branch_taken_0x1e7908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7908) {
            ctx->pc = 0x1E7934u;
            goto label_1e7934;
        }
    }
    ctx->pc = 0x1E7910u;
    // 0x1e7910: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e7910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7914: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1e7914u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7918: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e7918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e791c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e791cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e7920: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7924: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e7924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e7928: 0xc079f20  jal         func_1E7C80
    ctx->pc = 0x1E7928u;
    SET_GPR_U32(ctx, 31, 0x1E7930u);
    ctx->pc = 0x1E7C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7C80u, 0x1E7928u, 0x1E7930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7930u;
label_1e7930:
    // 0x1e7930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e7930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e7934:
    // 0x1e7934: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e7934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7938: 0xc079e74  jal         func_1E79D0
    ctx->pc = 0x1E7938u;
    SET_GPR_U32(ctx, 31, 0x1E7940u);
    ctx->pc = 0x1E79D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E79D0u, 0x1E7938u, 0x1E7940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7940u;
label_1e7940:
    // 0x1e7940: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1e7940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1e7944: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e7944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e7948: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e7948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e794c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1e794cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e7950: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e7950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e7954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7958: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e795c: 0xc079e60  jal         func_1E7980
    ctx->pc = 0x1E795Cu;
    SET_GPR_U32(ctx, 31, 0x1E7964u);
    ctx->pc = 0x1E7980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7980u, 0x1E795Cu, 0x1E7964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7964u;
label_1e7964:
    // 0x1e7964: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e7964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7968: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e7968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e796c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e796cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7974: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1e7974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e7978: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7980u;
}
