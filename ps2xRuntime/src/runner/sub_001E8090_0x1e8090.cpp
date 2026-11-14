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

// Function: sub_001E8090
// Address: 0x1e8090 - 0x1e81f0
void sub_001E8090_0x1e8090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8090_0x1e8090");
#endif

    switch (ctx->pc) {
        case 0x1e80c4u: goto label_1e80c4;
        case 0x1e80d8u: goto label_1e80d8;
        case 0x1e80fcu: goto label_1e80fc;
        case 0x1e8124u: goto label_1e8124;
        case 0x1e8148u: goto label_1e8148;
        case 0x1e8170u: goto label_1e8170;
        case 0x1e81a0u: goto label_1e81a0;
        case 0x1e81b0u: goto label_1e81b0;
        case 0x1e81d4u: goto label_1e81d4;
        default: break;
    }

    ctx->pc = 0x1e8090u;

    // 0x1e8090: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e8090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e8094: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e8094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e8098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e809c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e809cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e80a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e80a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e80a4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1e80a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1e80a8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1e80a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1e80ac: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1e80acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1e80b0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1e80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1e80b4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1e80b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1e80b8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e80b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e80bc: 0xc078538  jal         func_1E14E0
    ctx->pc = 0x1E80BCu;
    SET_GPR_U32(ctx, 31, 0x1E80C4u);
    ctx->pc = 0x1E14E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E14E0u, 0x1E80BCu, 0x1E80C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E80C4u;
label_1e80c4:
    // 0x1e80c4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1e80c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1e80c8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1e80c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1e80cc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1e80ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e80d0: 0xc041954  jal         func_106550
    ctx->pc = 0x1E80D0u;
    SET_GPR_U32(ctx, 31, 0x1E80D8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1E80D0u, 0x1E80D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E80D8u;
label_1e80d8:
    // 0x1e80d8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1e80d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1e80dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e80e0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1e80e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e80e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e80e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e80e8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e80e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e80ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e80ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e80f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e80f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e80f4: 0xc07a710  jal         func_1E9C40
    ctx->pc = 0x1E80F4u;
    SET_GPR_U32(ctx, 31, 0x1E80FCu);
    ctx->pc = 0x1E9C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C40u, 0x1E80F4u, 0x1E80FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E80FCu;
label_1e80fc:
    // 0x1e80fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e80fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8100: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1e8100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8104: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e8104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8108: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1e8108u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e810c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e810cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8110: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e8110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8114: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e8114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8118: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1e8118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e811c: 0xc07a13c  jal         func_1E84F0
    ctx->pc = 0x1E811Cu;
    SET_GPR_U32(ctx, 31, 0x1E8124u);
    ctx->pc = 0x1E84F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E84F0u, 0x1E811Cu, 0x1E8124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8124u;
label_1e8124:
    // 0x1e8124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8128: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1e8128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e812c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8130: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8130u;
    {
        const bool branch_taken_0x1e8130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8130) {
            ctx->pc = 0x1E8154u;
            goto label_1e8154;
        }
    }
    ctx->pc = 0x1E8138u;
    // 0x1e8138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e813c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1e813cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8140: 0xc07a0cc  jal         func_1E8330
    ctx->pc = 0x1E8140u;
    SET_GPR_U32(ctx, 31, 0x1E8148u);
    ctx->pc = 0x1E8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8330u, 0x1E8140u, 0x1E8148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8148u;
label_1e8148:
    // 0x1e8148: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1e8148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1e814c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E814Cu;
    {
        const bool branch_taken_0x1e814c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e814c) {
            ctx->pc = 0x1E8174u;
            goto label_1e8174;
        }
    }
    ctx->pc = 0x1E8154u;
label_1e8154:
    // 0x1e8154: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1e8154u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e815c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1e815cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e8160: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1e8160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8164: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1e8164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1e8168: 0xc07a0ac  jal         func_1E82B0
    ctx->pc = 0x1E8168u;
    SET_GPR_U32(ctx, 31, 0x1E8170u);
    ctx->pc = 0x1E82B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E82B0u, 0x1E8168u, 0x1E8170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8170u;
label_1e8170:
    // 0x1e8170: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e8174:
    // 0x1e8174: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1e8174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e8178: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E8178u;
    {
        const bool branch_taken_0x1e8178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8178) {
            ctx->pc = 0x1E81A4u;
            goto label_1e81a4;
        }
    }
    ctx->pc = 0x1E8180u;
    // 0x1e8180: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e8180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8184: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1e8184u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8188: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e8188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e818c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e818cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e8190: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8194: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e8194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e8198: 0xc07a13c  jal         func_1E84F0
    ctx->pc = 0x1E8198u;
    SET_GPR_U32(ctx, 31, 0x1E81A0u);
    ctx->pc = 0x1E84F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E84F0u, 0x1E8198u, 0x1E81A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81A0u;
label_1e81a0:
    // 0x1e81a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e81a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e81a4:
    // 0x1e81a4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e81a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e81a8: 0xc07a090  jal         func_1E8240
    ctx->pc = 0x1E81A8u;
    SET_GPR_U32(ctx, 31, 0x1E81B0u);
    ctx->pc = 0x1E8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8240u, 0x1E81A8u, 0x1E81B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81B0u;
label_1e81b0:
    // 0x1e81b0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e81b4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e81b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e81b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e81bc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1e81bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e81c0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e81c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e81c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e81c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e81c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81cc: 0xc07a07c  jal         func_1E81F0
    ctx->pc = 0x1E81CCu;
    SET_GPR_U32(ctx, 31, 0x1E81D4u);
    ctx->pc = 0x1E81F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E81F0u, 0x1E81CCu, 0x1E81D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81D4u;
label_1e81d4:
    // 0x1e81d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e81d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e81d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e81d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e81dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e81dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e81e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e81e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e81e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1e81e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e81e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E81E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E81E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E81F0u;
}
