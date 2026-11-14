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

// Function: sub_0026F090
// Address: 0x26f090 - 0x26f280
void sub_0026F090_0x26f090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F090_0x26f090");
#endif

    switch (ctx->pc) {
        case 0x26f0d4u: goto label_26f0d4;
        case 0x26f0e4u: goto label_26f0e4;
        case 0x26f0f0u: goto label_26f0f0;
        case 0x26f100u: goto label_26f100;
        case 0x26f114u: goto label_26f114;
        case 0x26f124u: goto label_26f124;
        case 0x26f134u: goto label_26f134;
        case 0x26f144u: goto label_26f144;
        case 0x26f158u: goto label_26f158;
        case 0x26f164u: goto label_26f164;
        case 0x26f17cu: goto label_26f17c;
        case 0x26f18cu: goto label_26f18c;
        case 0x26f1a8u: goto label_26f1a8;
        case 0x26f1b8u: goto label_26f1b8;
        case 0x26f1c8u: goto label_26f1c8;
        case 0x26f1dcu: goto label_26f1dc;
        case 0x26f1e8u: goto label_26f1e8;
        case 0x26f200u: goto label_26f200;
        case 0x26f210u: goto label_26f210;
        case 0x26f240u: goto label_26f240;
        default: break;
    }

    ctx->pc = 0x26f090u;

    // 0x26f090: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x26f090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x26f094: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26f094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26f098: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x26f098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26f09c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26f09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x26f0a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26f0a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26f0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26f0a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26f0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26f0ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26f0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26f0b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26f0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26f0b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26f0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26f0b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f0bc: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x26f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x26f0c0: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x26f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x26f0c4: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x26f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x26f0c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26f0cc: 0xc0480a4  jal         func_120290
    ctx->pc = 0x26F0CCu;
    SET_GPR_U32(ctx, 31, 0x26F0D4u);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x26F0CCu, 0x26F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F0D4u;
label_26f0d4:
    // 0x26f0d4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x26f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26f0d8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x26f0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26f0dc: 0xc09adac  jal         func_26B6B0
    ctx->pc = 0x26F0DCu;
    SET_GPR_U32(ctx, 31, 0x26F0E4u);
    ctx->pc = 0x26B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B6B0u, 0x26F0DCu, 0x26F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F0E4u;
label_26f0e4:
    // 0x26f0e4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26f0e8: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x26F0E8u;
    SET_GPR_U32(ctx, 31, 0x26F0F0u);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x26F0E8u, 0x26F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F0F0u;
label_26f0f0:
    // 0x26f0f0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26f0f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26f0f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0f8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x26F0F8u;
    {
        const bool branch_taken_0x26f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f0f8) {
            ctx->pc = 0x26F224u;
            goto label_26f224;
        }
    }
    ctx->pc = 0x26F100u;
label_26f100:
    // 0x26f100: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26f100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f104: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26f104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26f108: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26f108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f10c: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x26F10Cu;
    SET_GPR_U32(ctx, 31, 0x26F114u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x26F10Cu, 0x26F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F114u;
label_26f114:
    // 0x26f114: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x26f114u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f118: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26f118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f11c: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x26F11Cu;
    SET_GPR_U32(ctx, 31, 0x26F124u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x26F11Cu, 0x26F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F124u;
label_26f124:
    // 0x26f124: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26f124u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f128: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26f128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f12c: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x26F12Cu;
    SET_GPR_U32(ctx, 31, 0x26F134u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x26F12Cu, 0x26F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F134u;
label_26f134:
    // 0x26f134: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26f134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f138: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26f138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f13c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26F13Cu;
    {
        const bool branch_taken_0x26f13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f13c) {
            ctx->pc = 0x26F190u;
            goto label_26f190;
        }
    }
    ctx->pc = 0x26F144u;
label_26f144:
    // 0x26f144: 0x8fbe00c0  lw          $fp, 0xC0($sp)
    ctx->pc = 0x26f144u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26f148: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26f148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f14c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26f14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f150: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x26F150u;
    SET_GPR_U32(ctx, 31, 0x26F158u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x26F150u, 0x26F158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F158u;
label_26f158:
    // 0x26f158: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26f158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f15c: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x26F15Cu;
    SET_GPR_U32(ctx, 31, 0x26F164u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x26F15Cu, 0x26F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F164u;
label_26f164:
    // 0x26f164: 0x17c20009  bne         $fp, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F164u;
    {
        const bool branch_taken_0x26f164 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f164) {
            ctx->pc = 0x26F18Cu;
            goto label_26f18c;
        }
    }
    ctx->pc = 0x26F16Cu;
    // 0x26f16c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26f16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f170: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26f170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f174: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x26F174u;
    SET_GPR_U32(ctx, 31, 0x26F17Cu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x26F174u, 0x26F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F17Cu;
label_26f17c:
    // 0x26f17c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x26f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26f180: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26f180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f184: 0xc099c4c  jal         func_267130
    ctx->pc = 0x26F184u;
    SET_GPR_U32(ctx, 31, 0x26F18Cu);
    ctx->pc = 0x267130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267130u, 0x26F184u, 0x26F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F18Cu;
label_26f18c:
    // 0x26f18c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26f18cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26f190:
    // 0x26f190: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x26f190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x26f194: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x26F194u;
    {
        const bool branch_taken_0x26f194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f194) {
            ctx->pc = 0x26F144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f144;
        }
    }
    ctx->pc = 0x26F19Cu;
    // 0x26f19c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26f19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f1a0: 0xc041a68  jal         func_1069A0
    ctx->pc = 0x26F1A0u;
    SET_GPR_U32(ctx, 31, 0x26F1A8u);
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x26F1A0u, 0x26F1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F1A8u;
label_26f1a8:
    // 0x26f1a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26f1a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f1ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26f1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f1b0: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x26F1B0u;
    SET_GPR_U32(ctx, 31, 0x26F1B8u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x26F1B0u, 0x26F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F1B8u;
label_26f1b8:
    // 0x26f1b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26f1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f1bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26f1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f1c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26F1C0u;
    {
        const bool branch_taken_0x26f1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f1c0) {
            ctx->pc = 0x26F214u;
            goto label_26f214;
        }
    }
    ctx->pc = 0x26F1C8u;
label_26f1c8:
    // 0x26f1c8: 0x8fbe00c0  lw          $fp, 0xC0($sp)
    ctx->pc = 0x26f1c8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26f1cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26f1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f1d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26f1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f1d4: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x26F1D4u;
    SET_GPR_U32(ctx, 31, 0x26F1DCu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x26F1D4u, 0x26F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F1DCu;
label_26f1dc:
    // 0x26f1dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f1e0: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x26F1E0u;
    SET_GPR_U32(ctx, 31, 0x26F1E8u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x26F1E0u, 0x26F1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F1E8u;
label_26f1e8:
    // 0x26f1e8: 0x17c20009  bne         $fp, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F1E8u;
    {
        const bool branch_taken_0x26f1e8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f1e8) {
            ctx->pc = 0x26F210u;
            goto label_26f210;
        }
    }
    ctx->pc = 0x26F1F0u;
    // 0x26f1f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26f1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f1f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26f1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f1f8: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x26F1F8u;
    SET_GPR_U32(ctx, 31, 0x26F200u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x26F1F8u, 0x26F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F200u;
label_26f200:
    // 0x26f200: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x26f200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26f204: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26f204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f208: 0xc099c4c  jal         func_267130
    ctx->pc = 0x26F208u;
    SET_GPR_U32(ctx, 31, 0x26F210u);
    ctx->pc = 0x267130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267130u, 0x26F208u, 0x26F210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F210u;
label_26f210:
    // 0x26f210: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26f210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26f214:
    // 0x26f214: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x26f214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x26f218: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x26F218u;
    {
        const bool branch_taken_0x26f218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f218) {
            ctx->pc = 0x26F1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f1c8;
        }
    }
    ctx->pc = 0x26F220u;
    // 0x26f220: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26f220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_26f224:
    // 0x26f224: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x26f224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x26f228: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x26F228u;
    {
        const bool branch_taken_0x26f228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f228) {
            ctx->pc = 0x26F100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f100;
        }
    }
    ctx->pc = 0x26F230u;
    // 0x26f230: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26f230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26f234: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26f234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f238: 0xc048004  jal         func_120010
    ctx->pc = 0x26F238u;
    SET_GPR_U32(ctx, 31, 0x26F240u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x26F238u, 0x26F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F240u;
label_26f240:
    // 0x26f240: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26f240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26f244: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26f244u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26f248: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26f248u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26f24c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26f24cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f250: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26f250u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f254: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26f254u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f258: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26f258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f25c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26f25cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26f260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f268: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x26f268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26f26c: 0x3e00008  jr          $ra
    ctx->pc = 0x26F26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F274u;
    // 0x26f274: 0x0  nop
    ctx->pc = 0x26f274u;
    // NOP
    // 0x26f278: 0x0  nop
    ctx->pc = 0x26f278u;
    // NOP
    // 0x26f27c: 0x0  nop
    ctx->pc = 0x26f27cu;
    // NOP
    ctx->pc = 0x26f280u;
}
