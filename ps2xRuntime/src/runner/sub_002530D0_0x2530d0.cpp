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

// Function: sub_002530D0
// Address: 0x2530d0 - 0x2531e0
void sub_002530D0_0x2530d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002530D0_0x2530d0");
#endif

    switch (ctx->pc) {
        case 0x253104u: goto label_253104;
        case 0x253118u: goto label_253118;
        case 0x25313cu: goto label_25313c;
        case 0x253158u: goto label_253158;
        case 0x253170u: goto label_253170;
        case 0x253198u: goto label_253198;
        case 0x2531a8u: goto label_2531a8;
        case 0x2531c4u: goto label_2531c4;
        default: break;
    }

    ctx->pc = 0x2530d0u;

    // 0x2530d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2530d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2530d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2530d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2530d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2530d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2530dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2530dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2530e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2530e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2530e4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2530e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2530e8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2530e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2530ec: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2530ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2530f0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2530f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2530f4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2530f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2530f8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2530f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2530fc: 0xc09246c  jal         func_2491B0
    ctx->pc = 0x2530FCu;
    SET_GPR_U32(ctx, 31, 0x253104u);
    ctx->pc = 0x2491B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491B0u, 0x2530FCu, 0x253104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253104u;
label_253104:
    // 0x253104: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x253104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x253108: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x253108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x25310c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25310cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x253110: 0xc041954  jal         func_106550
    ctx->pc = 0x253110u;
    SET_GPR_U32(ctx, 31, 0x253118u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x253110u, 0x253118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253118u;
label_253118:
    // 0x253118: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x253118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x25311c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25311cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253120: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x253120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253124: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x253124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253128: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x253128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25312c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25312cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x253130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253134: 0xc094d4c  jal         func_253530
    ctx->pc = 0x253134u;
    SET_GPR_U32(ctx, 31, 0x25313Cu);
    ctx->pc = 0x253530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253530u, 0x253134u, 0x25313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25313Cu;
label_25313c:
    // 0x25313c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25313cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253140: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x253140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253144: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x253144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253148: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x253148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25314c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25314cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253150: 0xc041934  jal         func_1064D0
    ctx->pc = 0x253150u;
    SET_GPR_U32(ctx, 31, 0x253158u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x253150u, 0x253158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253158u;
label_253158:
    // 0x253158: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25315c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25315cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253160: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x253160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x253164: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x253164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x253168: 0xc094cac  jal         func_2532B0
    ctx->pc = 0x253168u;
    SET_GPR_U32(ctx, 31, 0x253170u);
    ctx->pc = 0x2532B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2532B0u, 0x253168u, 0x253170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253170u;
label_253170:
    // 0x253170: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253174: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x253174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x253178: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x253178u;
    {
        const bool branch_taken_0x253178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253178) {
            ctx->pc = 0x25319Cu;
            goto label_25319c;
        }
    }
    ctx->pc = 0x253180u;
    // 0x253180: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x253180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253184: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x253184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x253188: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x253188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25318c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25318cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253190: 0xc041934  jal         func_1064D0
    ctx->pc = 0x253190u;
    SET_GPR_U32(ctx, 31, 0x253198u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x253190u, 0x253198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253198u;
label_253198:
    // 0x253198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25319c:
    // 0x25319c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2531a0: 0xc094c8c  jal         func_253230
    ctx->pc = 0x2531A0u;
    SET_GPR_U32(ctx, 31, 0x2531A8u);
    ctx->pc = 0x253230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253230u, 0x2531A0u, 0x2531A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2531A8u;
label_2531a8:
    // 0x2531a8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2531a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2531ac: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2531acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2531b0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2531b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2531b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2531b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2531b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2531b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2531bc: 0xc094c78  jal         func_2531E0
    ctx->pc = 0x2531BCu;
    SET_GPR_U32(ctx, 31, 0x2531C4u);
    ctx->pc = 0x2531E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2531E0u, 0x2531BCu, 0x2531C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2531C4u;
label_2531c4:
    // 0x2531c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2531c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2531c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2531c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2531cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2531ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2531d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2531d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2531d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2531d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2531d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2531D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2531D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2531E0u;
}
