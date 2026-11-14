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

// Function: sub_00278390
// Address: 0x278390 - 0x2784a0
void sub_00278390_0x278390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278390_0x278390");
#endif

    switch (ctx->pc) {
        case 0x2783c4u: goto label_2783c4;
        case 0x2783d8u: goto label_2783d8;
        case 0x2783fcu: goto label_2783fc;
        case 0x278418u: goto label_278418;
        case 0x278430u: goto label_278430;
        case 0x278458u: goto label_278458;
        case 0x278468u: goto label_278468;
        case 0x278484u: goto label_278484;
        default: break;
    }

    ctx->pc = 0x278390u;

    // 0x278390: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x278390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x278394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x278394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x278398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x278398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27839c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27839cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2783a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2783a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2783a4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2783a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2783a8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2783a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2783ac: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2783acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2783b0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2783b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2783b4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2783b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2783b8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2783b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2783bc: 0xc09e19c  jal         func_278670
    ctx->pc = 0x2783BCu;
    SET_GPR_U32(ctx, 31, 0x2783C4u);
    ctx->pc = 0x278670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278670u, 0x2783BCu, 0x2783C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2783C4u;
label_2783c4:
    // 0x2783c4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2783c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2783c8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2783c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2783cc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2783ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2783d0: 0xc041954  jal         func_106550
    ctx->pc = 0x2783D0u;
    SET_GPR_U32(ctx, 31, 0x2783D8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2783D0u, 0x2783D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2783D8u;
label_2783d8:
    // 0x2783d8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2783d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2783dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2783dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2783e0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2783e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2783e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2783e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2783e8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2783e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2783ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2783ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2783f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2783f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2783f4: 0xc0a0824  jal         func_282090
    ctx->pc = 0x2783F4u;
    SET_GPR_U32(ctx, 31, 0x2783FCu);
    ctx->pc = 0x282090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282090u, 0x2783F4u, 0x2783FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2783FCu;
label_2783fc:
    // 0x2783fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2783fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278400: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x278400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x278404: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x278404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278408: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x278408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27840c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27840cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278410: 0xc041934  jal         func_1064D0
    ctx->pc = 0x278410u;
    SET_GPR_U32(ctx, 31, 0x278418u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x278410u, 0x278418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278418u;
label_278418:
    // 0x278418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x278418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27841c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27841cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278420: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x278420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x278424: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x278424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x278428: 0xc09e180  jal         func_278600
    ctx->pc = 0x278428u;
    SET_GPR_U32(ctx, 31, 0x278430u);
    ctx->pc = 0x278600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278600u, 0x278428u, 0x278430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278430u;
label_278430:
    // 0x278430: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x278430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278434: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x278434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x278438: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x278438u;
    {
        const bool branch_taken_0x278438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278438) {
            ctx->pc = 0x27845Cu;
            goto label_27845c;
        }
    }
    ctx->pc = 0x278440u;
    // 0x278440: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x278440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x278444: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x278444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x278448: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x278448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27844c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27844cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278450: 0xc041934  jal         func_1064D0
    ctx->pc = 0x278450u;
    SET_GPR_U32(ctx, 31, 0x278458u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x278450u, 0x278458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278458u;
label_278458:
    // 0x278458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x278458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27845c:
    // 0x27845c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x27845cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x278460: 0xc09e13c  jal         func_2784F0
    ctx->pc = 0x278460u;
    SET_GPR_U32(ctx, 31, 0x278468u);
    ctx->pc = 0x2784F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2784F0u, 0x278460u, 0x278468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278468u;
label_278468:
    // 0x278468: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x278468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x27846c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x27846cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x278470: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x278470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x278474: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x278474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278478: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x278478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27847c: 0xc09e128  jal         func_2784A0
    ctx->pc = 0x27847Cu;
    SET_GPR_U32(ctx, 31, 0x278484u);
    ctx->pc = 0x2784A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2784A0u, 0x27847Cu, 0x278484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278484u;
label_278484:
    // 0x278484: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x278484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278488: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x278488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27848c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27848cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278494: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x278494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x278498: 0x3e00008  jr          $ra
    ctx->pc = 0x278498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2784A0u;
}
