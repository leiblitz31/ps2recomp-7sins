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

// Function: sub_001F7850
// Address: 0x1f7850 - 0x1f7b50
void sub_001F7850_0x1f7850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7850_0x1f7850");
#endif

    switch (ctx->pc) {
        case 0x1f7884u: goto label_1f7884;
        case 0x1f78ccu: goto label_1f78cc;
        case 0x1f78d8u: goto label_1f78d8;
        case 0x1f7918u: goto label_1f7918;
        case 0x1f7924u: goto label_1f7924;
        case 0x1f793cu: goto label_1f793c;
        case 0x1f7974u: goto label_1f7974;
        case 0x1f7984u: goto label_1f7984;
        case 0x1f79a8u: goto label_1f79a8;
        case 0x1f79bcu: goto label_1f79bc;
        case 0x1f79c8u: goto label_1f79c8;
        case 0x1f79d8u: goto label_1f79d8;
        case 0x1f7a20u: goto label_1f7a20;
        case 0x1f7a30u: goto label_1f7a30;
        case 0x1f7a38u: goto label_1f7a38;
        case 0x1f7a48u: goto label_1f7a48;
        case 0x1f7a5cu: goto label_1f7a5c;
        case 0x1f7a78u: goto label_1f7a78;
        case 0x1f7aa4u: goto label_1f7aa4;
        case 0x1f7ab4u: goto label_1f7ab4;
        case 0x1f7ae8u: goto label_1f7ae8;
        case 0x1f7af8u: goto label_1f7af8;
        case 0x1f7b18u: goto label_1f7b18;
        case 0x1f7b28u: goto label_1f7b28;
        default: break;
    }

    ctx->pc = 0x1f7850u;

    // 0x1f7850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f7850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f7854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f7854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f7858: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f7858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f785c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f785cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f7860: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f7860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f7864: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1f7864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1f7868: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f7868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f786c: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x1f786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7870: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7870u;
    {
        const bool branch_taken_0x1f7870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7870) {
            ctx->pc = 0x1F7884u;
            goto label_1f7884;
        }
    }
    ctx->pc = 0x1F7878u;
    // 0x1f7878: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f7878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f787c: 0xc07dde4  jal         func_1F7790
    ctx->pc = 0x1F787Cu;
    SET_GPR_U32(ctx, 31, 0x1F7884u);
    ctx->pc = 0x1F7790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7790u, 0x1F787Cu, 0x1F7884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7884u;
label_1f7884:
    // 0x1f7884: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f7884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7888: 0x904200b4  lbu         $v0, 0xB4($v0)
    ctx->pc = 0x1f7888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1f788c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F788Cu;
    {
        const bool branch_taken_0x1f788c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f788c) {
            ctx->pc = 0x1F78E0u;
            goto label_1f78e0;
        }
    }
    ctx->pc = 0x1F7894u;
    // 0x1f7894: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f7894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7898: 0xa04000f8  sb          $zero, 0xF8($v0)
    ctx->pc = 0x1f7898u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 248), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f789c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f78a0: 0xa04000f9  sb          $zero, 0xF9($v0)
    ctx->pc = 0x1f78a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 249), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f78a4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f78a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f78a8: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f78a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f78ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f78acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f78b0: 0xc44000c4  lwc1        $f0, 0xC4($v0)
    ctx->pc = 0x1f78b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f78b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f78b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f78b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f78bc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f78bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f78c0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f78c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f78c4: 0xc07e234  jal         func_1F88D0
    ctx->pc = 0x1F78C4u;
    SET_GPR_U32(ctx, 31, 0x1F78CCu);
    ctx->pc = 0x1F88D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88D0u, 0x1F78C4u, 0x1F78CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F78CCu;
label_1f78cc:
    // 0x1f78cc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f78ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f78d0: 0xc07e16c  jal         func_1F85B0
    ctx->pc = 0x1F78D0u;
    SET_GPR_U32(ctx, 31, 0x1F78D8u);
    ctx->pc = 0x1F85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F85B0u, 0x1F78D0u, 0x1F78D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F78D8u;
label_1f78d8:
    // 0x1f78d8: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1F78D8u;
    {
        const bool branch_taken_0x1f78d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f78d8) {
            ctx->pc = 0x1F7B28u;
            goto label_1f7b28;
        }
    }
    ctx->pc = 0x1F78E0u;
label_1f78e0:
    // 0x1f78e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f78e4: 0xa04000f8  sb          $zero, 0xF8($v0)
    ctx->pc = 0x1f78e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 248), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f78e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f78ec: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f78ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f78f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f78f4: 0xc44000c8  lwc1        $f0, 0xC8($v0)
    ctx->pc = 0x1f78f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f78f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f78f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f78fc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f78fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7900: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f7900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f7904: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f7904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7908: 0xa04000f9  sb          $zero, 0xF9($v0)
    ctx->pc = 0x1f7908u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 249), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f790c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f790cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7910: 0xc07e254  jal         func_1F8950
    ctx->pc = 0x1F7910u;
    SET_GPR_U32(ctx, 31, 0x1F7918u);
    ctx->pc = 0x1F8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8950u, 0x1F7910u, 0x1F7918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7918u;
label_1f7918:
    // 0x1f7918: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f7918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f791c: 0xc07e244  jal         func_1F8910
    ctx->pc = 0x1F791Cu;
    SET_GPR_U32(ctx, 31, 0x1F7924u);
    ctx->pc = 0x1F8910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8910u, 0x1F791Cu, 0x1F7924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7924u;
label_1f7924:
    // 0x1f7924: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1f7924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7928: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f7928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f792c: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x1f792cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1f7930: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f7930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7934: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F7934u;
    SET_GPR_U32(ctx, 31, 0x1F793Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F7934u, 0x1F793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F793Cu;
label_1f793c:
    // 0x1f793c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f793cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7940: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7944: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F7944u;
    {
        const bool branch_taken_0x1f7944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f7944) {
            ctx->pc = 0x1F798Cu;
            goto label_1f798c;
        }
    }
    ctx->pc = 0x1F794Cu;
    // 0x1f794c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1f794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7950: 0x906300b4  lbu         $v1, 0xB4($v1)
    ctx->pc = 0x1f7950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1f7954: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x1F7954u;
    {
        const bool branch_taken_0x1f7954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7954) {
            ctx->pc = 0x1F7B28u;
            goto label_1f7b28;
        }
    }
    ctx->pc = 0x1F795Cu;
    // 0x1f795c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1f795cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7960: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f7960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7964: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x1f7964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1f7968: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f7968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f796c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F796Cu;
    SET_GPR_U32(ctx, 31, 0x1F7974u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F796Cu, 0x1F7974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7974u;
label_1f7974:
    // 0x1f7974: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f7974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7978: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f7978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f797c: 0xc07e46c  jal         func_1F91B0
    ctx->pc = 0x1F797Cu;
    SET_GPR_U32(ctx, 31, 0x1F7984u);
    ctx->pc = 0x1F91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F91B0u, 0x1F797Cu, 0x1F7984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7984u;
label_1f7984:
    // 0x1f7984: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1F7984u;
    {
        const bool branch_taken_0x1f7984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7984) {
            ctx->pc = 0x1F7B28u;
            goto label_1f7b28;
        }
    }
    ctx->pc = 0x1F798Cu;
label_1f798c:
    // 0x1f798c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1f798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7990: 0x906300f9  lbu         $v1, 0xF9($v1)
    ctx->pc = 0x1f7990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 249)));
    // 0x1f7994: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x1F7994u;
    {
        const bool branch_taken_0x1f7994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7994) {
            ctx->pc = 0x1F7B28u;
            goto label_1f7b28;
        }
    }
    ctx->pc = 0x1F799Cu;
    // 0x1f799c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f799cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f79a0: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1F79A0u;
    SET_GPR_U32(ctx, 31, 0x1F79A8u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1F79A0u, 0x1F79A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F79A8u;
label_1f79a8:
    // 0x1f79a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f79a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f79ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f79acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f79b0: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x1f79b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1f79b4: 0xc0647b8  jal         func_191EE0
    ctx->pc = 0x1F79B4u;
    SET_GPR_U32(ctx, 31, 0x1F79BCu);
    ctx->pc = 0x191EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EE0u, 0x1F79B4u, 0x1F79BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F79BCu;
label_1f79bc:
    // 0x1f79bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f79bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f79c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F79C0u;
    {
        const bool branch_taken_0x1f79c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f79c0) {
            ctx->pc = 0x1F79E0u;
            goto label_1f79e0;
        }
    }
    ctx->pc = 0x1F79C8u;
label_1f79c8:
    // 0x1f79c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f79c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f79cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f79ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f79d0: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F79D0u;
    SET_GPR_U32(ctx, 31, 0x1F79D8u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F79D0u, 0x1F79D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F79D8u;
label_1f79d8:
    // 0x1f79d8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1f79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1f79dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f79dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f79e0:
    // 0x1f79e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f79e4: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1f79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1f79e8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1f79e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f79ec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1F79ECu;
    {
        const bool branch_taken_0x1f79ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f79ec) {
            ctx->pc = 0x1F79C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f79c8;
        }
    }
    ctx->pc = 0x1F79F4u;
    // 0x1f79f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f79f8: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x1f79f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f79fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F79FCu;
    {
        const bool branch_taken_0x1f79fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f79fc) {
            ctx->pc = 0x1F7A30u;
            goto label_1f7a30;
        }
    }
    ctx->pc = 0x1F7A04u;
    // 0x1f7a04: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1f7a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7a08: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7a0c: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x1f7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7a10: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1f7a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7a14: 0x24640104  addiu       $a0, $v1, 0x104
    ctx->pc = 0x1f7a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x1f7a18: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F7A18u;
    SET_GPR_U32(ctx, 31, 0x1F7A20u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F7A18u, 0x1F7A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7A20u;
label_1f7a20:
    // 0x1f7a20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f7a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7a24: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1f7a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f7a28: 0xc07e0e0  jal         func_1F8380
    ctx->pc = 0x1F7A28u;
    SET_GPR_U32(ctx, 31, 0x1F7A30u);
    ctx->pc = 0x1F8380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8380u, 0x1F7A28u, 0x1F7A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7A30u;
label_1f7a30:
    // 0x1f7a30: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1F7A30u;
    SET_GPR_U32(ctx, 31, 0x1F7A38u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1F7A30u, 0x1F7A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7A38u;
label_1f7a38:
    // 0x1f7a38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f7a38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a3c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f7a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f7a40: 0xc044598  jal         func_111660
    ctx->pc = 0x1F7A40u;
    SET_GPR_U32(ctx, 31, 0x1F7A48u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x1F7A40u, 0x1F7A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7A48u;
label_1f7a48:
    // 0x1f7a48: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x1f7a48u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x1f7a4c: 0x2810  mfhi        $a1
    ctx->pc = 0x1f7a4cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1f7a50: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f7a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f7a54: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F7A54u;
    SET_GPR_U32(ctx, 31, 0x1F7A5Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F7A54u, 0x1F7A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7A5Cu;
label_1f7a5c:
    // 0x1f7a5c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1f7a5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7a60: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1f7a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7a64: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7a68: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x1f7a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1f7a6c: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f7a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7a70: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F7A70u;
    SET_GPR_U32(ctx, 31, 0x1F7A78u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F7A70u, 0x1F7A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7A78u;
label_1f7a78:
    // 0x1f7a78: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1f7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1f7a7c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7a80: 0x904200b4  lbu         $v0, 0xB4($v0)
    ctx->pc = 0x1f7a80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1f7a84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F7A84u;
    {
        const bool branch_taken_0x1f7a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7a84) {
            ctx->pc = 0x1F7AB4u;
            goto label_1f7ab4;
        }
    }
    ctx->pc = 0x1F7A8Cu;
    // 0x1f7a8c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1f7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7a90: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7a94: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x1f7a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1f7a98: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f7a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7a9c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F7A9Cu;
    SET_GPR_U32(ctx, 31, 0x1F7AA4u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F7A9Cu, 0x1F7AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7AA4u;
label_1f7aa4:
    // 0x1f7aa4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f7aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7aa8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f7aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7aac: 0xc07e46c  jal         func_1F91B0
    ctx->pc = 0x1F7AACu;
    SET_GPR_U32(ctx, 31, 0x1F7AB4u);
    ctx->pc = 0x1F91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F91B0u, 0x1F7AACu, 0x1F7AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7AB4u;
label_1f7ab4:
    // 0x1f7ab4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7ab8: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x1f7ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7abc: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1f7abcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f7ac0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F7AC0u;
    {
        const bool branch_taken_0x1f7ac0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7ac0) {
            ctx->pc = 0x1F7B18u;
            goto label_1f7b18;
        }
    }
    ctx->pc = 0x1F7AC8u;
    // 0x1f7ac8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f7ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7acc: 0x8c5100fc  lw          $s1, 0xFC($v0)
    ctx->pc = 0x1f7accu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7ad0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7ad4: 0x244402fc  addiu       $a0, $v0, 0x2FC
    ctx->pc = 0x1f7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 764));
    // 0x1f7ad8: 0x278598f0  addiu       $a1, $gp, -0x6710
    ctx->pc = 0x1f7ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940912));
    // 0x1f7adc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f7adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ae0: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1F7AE0u;
    SET_GPR_U32(ctx, 31, 0x1F7AE8u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1F7AE0u, 0x1F7AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7AE8u;
label_1f7ae8:
    // 0x1f7ae8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7aec: 0x244402fc  addiu       $a0, $v0, 0x2FC
    ctx->pc = 0x1f7aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 764));
    // 0x1f7af0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F7AF0u;
    SET_GPR_U32(ctx, 31, 0x1F7AF8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F7AF0u, 0x1F7AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7AF8u;
label_1f7af8:
    // 0x1f7af8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f7afc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f7afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f7b00: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1f7b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1f7b04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f7b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b0c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f7b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7b10: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1F7B10u;
    SET_GPR_U32(ctx, 31, 0x1F7B18u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1F7B10u, 0x1F7B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B18u;
label_1f7b18:
    // 0x1f7b18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f7b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f7b1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f7b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7b20: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1F7B20u;
    SET_GPR_U32(ctx, 31, 0x1F7B28u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1F7B20u, 0x1F7B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B28u;
label_1f7b28:
    // 0x1f7b28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f7b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7b2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f7b2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7b30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f7b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7b34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f7b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7b38: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1f7b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f7b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7B44u;
    // 0x1f7b44: 0x0  nop
    ctx->pc = 0x1f7b44u;
    // NOP
    // 0x1f7b48: 0x0  nop
    ctx->pc = 0x1f7b48u;
    // NOP
    // 0x1f7b4c: 0x0  nop
    ctx->pc = 0x1f7b4cu;
    // NOP
    ctx->pc = 0x1f7b50u;
}
