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

// Function: sub_001CD760
// Address: 0x1cd760 - 0x1cdd20
void sub_001CD760_0x1cd760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD760_0x1cd760");
#endif

    switch (ctx->pc) {
        case 0x1cd7acu: goto label_1cd7ac;
        case 0x1cd7c4u: goto label_1cd7c4;
        case 0x1cd7dcu: goto label_1cd7dc;
        case 0x1cd7f4u: goto label_1cd7f4;
        case 0x1cd80cu: goto label_1cd80c;
        case 0x1cd838u: goto label_1cd838;
        case 0x1cd894u: goto label_1cd894;
        case 0x1cd8bcu: goto label_1cd8bc;
        case 0x1cd97cu: goto label_1cd97c;
        case 0x1cd98cu: goto label_1cd98c;
        case 0x1cd99cu: goto label_1cd99c;
        case 0x1cda20u: goto label_1cda20;
        case 0x1cda54u: goto label_1cda54;
        case 0x1cda80u: goto label_1cda80;
        case 0x1cdaa4u: goto label_1cdaa4;
        case 0x1cdad8u: goto label_1cdad8;
        case 0x1cdaf8u: goto label_1cdaf8;
        case 0x1cdb6cu: goto label_1cdb6c;
        case 0x1cdc30u: goto label_1cdc30;
        case 0x1cdc68u: goto label_1cdc68;
        case 0x1cdc8cu: goto label_1cdc8c;
        case 0x1cdca4u: goto label_1cdca4;
        case 0x1cdcdcu: goto label_1cdcdc;
        default: break;
    }

    ctx->pc = 0x1cd760u;

    // 0x1cd760: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1cd760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1cd764: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cd764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cd768: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cd768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cd76c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cd76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cd770: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1cd770u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cd774: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1cd774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x1cd778: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x1cd778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x1cd77c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cd77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1cd780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd784: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cd784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd788: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cd78c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd78cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd790: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cd790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd794: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cd794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1cd798: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cd798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd79c: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x1cd79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x1cd7a0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1cd7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cd7a4: 0xc073748  jal         func_1CDD20
    ctx->pc = 0x1CD7A4u;
    SET_GPR_U32(ctx, 31, 0x1CD7ACu);
    ctx->pc = 0x1CDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDD20u, 0x1CD7A4u, 0x1CD7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7ACu;
label_1cd7ac:
    // 0x1cd7ac: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1cd7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd7b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cd7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd7b4: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1cd7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1cd7b8: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x1cd7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1cd7bc: 0xc06dda0  jal         func_1B7680
    ctx->pc = 0x1CD7BCu;
    SET_GPR_U32(ctx, 31, 0x1CD7C4u);
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x1CD7BCu, 0x1CD7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7C4u;
label_1cd7c4:
    // 0x1cd7c4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1cd7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd7c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cd7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd7cc: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x1cd7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1cd7d0: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x1cd7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1cd7d4: 0xc05f298  jal         func_17CA60
    ctx->pc = 0x1CD7D4u;
    SET_GPR_U32(ctx, 31, 0x1CD7DCu);
    ctx->pc = 0x17CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA60u, 0x1CD7D4u, 0x1CD7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7DCu;
label_1cd7dc:
    // 0x1cd7dc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1cd7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd7e0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cd7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd7e4: 0x24640024  addiu       $a0, $v1, 0x24
    ctx->pc = 0x1cd7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x1cd7e8: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x1cd7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1cd7ec: 0xc06dda0  jal         func_1B7680
    ctx->pc = 0x1CD7ECu;
    SET_GPR_U32(ctx, 31, 0x1CD7F4u);
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x1CD7ECu, 0x1CD7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7F4u;
label_1cd7f4:
    // 0x1cd7f4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1cd7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd7f8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cd7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd7fc: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x1cd7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1cd800: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x1cd800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1cd804: 0xc05f298  jal         func_17CA60
    ctx->pc = 0x1CD804u;
    SET_GPR_U32(ctx, 31, 0x1CD80Cu);
    ctx->pc = 0x17CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA60u, 0x1CD804u, 0x1CD80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD80Cu;
label_1cd80c:
    // 0x1cd80c: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x1cd80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1cd810: 0xdf8296c0  ld          $v0, -0x6940($gp)
    ctx->pc = 0x1cd810u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940352)));
    // 0x1cd814: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1cd814u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1cd818: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1cd818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cd81c: 0xdf8296c8  ld          $v0, -0x6938($gp)
    ctx->pc = 0x1cd81cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940360)));
    // 0x1cd820: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1cd820u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1cd824: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1cd824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1cd828: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cd828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cd82c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD82Cu;
    {
        const bool branch_taken_0x1cd82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd82c) {
            ctx->pc = 0x1CD854u;
            goto label_1cd854;
        }
    }
    ctx->pc = 0x1CD834u;
    // 0x1cd834: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1cd834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1cd838:
    // 0x1cd838: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1cd838u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd83c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cd83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cd840: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cd840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cd844: 0x0  nop
    ctx->pc = 0x1cd844u;
    // NOP
    // 0x1cd848: 0x0  nop
    ctx->pc = 0x1cd848u;
    // NOP
    // 0x1cd84c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CD84Cu;
    {
        const bool branch_taken_0x1cd84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd84c) {
            ctx->pc = 0x1CD838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd838;
        }
    }
    ctx->pc = 0x1CD854u;
label_1cd854:
    // 0x1cd854: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cd854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd858: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cd858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd85c: 0xc780bb4c  lwc1        $f0, -0x44B4($gp)
    ctx->pc = 0x1cd85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd860: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cd860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cd864: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1cd864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1cd868: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cd868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd86c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1cd86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd870: 0xc78096bc  lwc1        $f0, -0x6944($gp)
    ctx->pc = 0x1cd870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd874: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cd874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cd878: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1cd878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1cd87c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1cd87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1cd880: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1cd880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cd884: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cd884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cd888: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD888u;
    {
        const bool branch_taken_0x1cd888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd888) {
            ctx->pc = 0x1CD8B0u;
            goto label_1cd8b0;
        }
    }
    ctx->pc = 0x1CD890u;
    // 0x1cd890: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1cd890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1cd894:
    // 0x1cd894: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1cd894u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd898: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cd898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cd89c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cd8a0: 0x0  nop
    ctx->pc = 0x1cd8a0u;
    // NOP
    // 0x1cd8a4: 0x0  nop
    ctx->pc = 0x1cd8a4u;
    // NOP
    // 0x1cd8a8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CD8A8u;
    {
        const bool branch_taken_0x1cd8a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd8a8) {
            ctx->pc = 0x1CD894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd894;
        }
    }
    ctx->pc = 0x1CD8B0u;
label_1cd8b0:
    // 0x1cd8b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8b4: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x1CD8B4u;
    {
        const bool branch_taken_0x1cd8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd8b4) {
            ctx->pc = 0x1CDCACu;
            goto label_1cdcac;
        }
    }
    ctx->pc = 0x1CD8BCu;
label_1cd8bc:
    // 0x1cd8bc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cd8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd8c0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1cd8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1cd8c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cd8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cd8c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD8C8u;
    {
        const bool branch_taken_0x1cd8c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1cd8c8) {
            ctx->pc = 0x1CD8E4u;
            goto label_1cd8e4;
        }
    }
    ctx->pc = 0x1CD8D0u;
    // 0x1cd8d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd8d4: 0x0  nop
    ctx->pc = 0x1cd8d4u;
    // NOP
    // 0x1cd8d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1cd8d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cd8dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD8DCu;
    {
        const bool branch_taken_0x1cd8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd8dc) {
            ctx->pc = 0x1CD900u;
            goto label_1cd900;
        }
    }
    ctx->pc = 0x1CD8E4u;
label_1cd8e4:
    // 0x1cd8e4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1cd8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1cd8e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cd8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cd8ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1cd8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cd8f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd8f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd8f4: 0x0  nop
    ctx->pc = 0x1cd8f4u;
    // NOP
    // 0x1cd8f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1cd8f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cd8fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1cd8fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1cd900:
    // 0x1cd900: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD900u;
    {
        const bool branch_taken_0x1cd900 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1cd900) {
            ctx->pc = 0x1CD91Cu;
            goto label_1cd91c;
        }
    }
    ctx->pc = 0x1CD908u;
    // 0x1cd908: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1cd908u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd90c: 0x0  nop
    ctx->pc = 0x1cd90cu;
    // NOP
    // 0x1cd910: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cd910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cd914: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD914u;
    {
        const bool branch_taken_0x1cd914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd914) {
            ctx->pc = 0x1CD938u;
            goto label_1cd938;
        }
    }
    ctx->pc = 0x1CD91Cu;
label_1cd91c:
    // 0x1cd91c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1cd91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1cd920: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1cd920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1cd924: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1cd924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cd928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd92c: 0x0  nop
    ctx->pc = 0x1cd92cu;
    // NOP
    // 0x1cd930: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cd930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cd934: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1cd934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1cd938:
    // 0x1cd938: 0x0  nop
    ctx->pc = 0x1cd938u;
    // NOP
    // 0x1cd93c: 0x0  nop
    ctx->pc = 0x1cd93cu;
    // NOP
    // 0x1cd940: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1cd940u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1cd944: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd94c: 0x0  nop
    ctx->pc = 0x1cd94cu;
    // NOP
    // 0x1cd950: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1cd950u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cd954: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cd954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd958: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x1cd958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd95c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd95cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd960: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1cd960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1cd964: 0xc7b400ac  lwc1        $f20, 0xAC($sp)
    ctx->pc = 0x1cd964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cd968: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cd968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd96c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1cd96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1cd970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cd970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd974: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1CD974u;
    SET_GPR_U32(ctx, 31, 0x1CD97Cu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1CD974u, 0x1CD97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD97Cu;
label_1cd97c:
    // 0x1cd97c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1cd97cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cd980: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1cd980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd984: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1CD984u;
    SET_GPR_U32(ctx, 31, 0x1CD98Cu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1CD984u, 0x1CD98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD98Cu;
label_1cd98c:
    // 0x1cd98c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1cd98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1cd990: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1cd990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd994: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1CD994u;
    SET_GPR_U32(ctx, 31, 0x1CD99Cu);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1CD994u, 0x1CD99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD99Cu;
label_1cd99c:
    // 0x1cd99c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1cd99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1cd9a0: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x1cd9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cd9a4: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x1cd9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cd9a8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1cd9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd9ac: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1cd9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd9b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1cd9b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cd9b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd9b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd9b8: 0x0  nop
    ctx->pc = 0x1cd9b8u;
    // NOP
    // 0x1cd9bc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cd9bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cd9c0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1cd9c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1cd9c4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1cd9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1cd9c8: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x1cd9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cd9cc: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x1cd9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cd9d0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1cd9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd9d4: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1cd9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd9d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1cd9d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cd9dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd9dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd9e0: 0x0  nop
    ctx->pc = 0x1cd9e0u;
    // NOP
    // 0x1cd9e4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cd9e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cd9e8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1cd9e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1cd9ec: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1cd9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1cd9f0: 0xc78396bc  lwc1        $f3, -0x6944($gp)
    ctx->pc = 0x1cd9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cd9f4: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x1cd9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cd9f8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1cd9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd9fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd9fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cda00: 0x0  nop
    ctx->pc = 0x1cda00u;
    // NOP
    // 0x1cda04: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cda04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cda08: 0x46021d1c  madd.s      $f20, $f3, $f2
    ctx->pc = 0x1cda08u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1cda0c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cda10: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x1cda10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1cda14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cda14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda18: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1CDA18u;
    SET_GPR_U32(ctx, 31, 0x1CDA20u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1CDA18u, 0x1CDA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA20u;
label_1cda20:
    // 0x1cda20: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1cda20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cda24: 0xc78396bc  lwc1        $f3, -0x6944($gp)
    ctx->pc = 0x1cda24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cda28: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x1cda28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cda2c: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x1cda2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cda30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cda30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cda34: 0x0  nop
    ctx->pc = 0x1cda34u;
    // NOP
    // 0x1cda38: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cda38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cda3c: 0x46021d1c  madd.s      $f20, $f3, $f2
    ctx->pc = 0x1cda3cu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1cda40: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cda40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cda44: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x1cda44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1cda48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cda48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda4c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1CDA4Cu;
    SET_GPR_U32(ctx, 31, 0x1CDA54u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1CDA4Cu, 0x1CDA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA54u;
label_1cda54:
    // 0x1cda54: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1cda54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cda58: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1cda58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cda5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cda5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cda60: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1cda60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1cda64: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1cda64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cda68: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1cda68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1cda6c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cda6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cda70: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x1cda70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1cda74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cda74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda78: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1CDA78u;
    SET_GPR_U32(ctx, 31, 0x1CDA80u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1CDA78u, 0x1CDA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA80u;
label_1cda80:
    // 0x1cda80: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1cda80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cda84: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1cda84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cda88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cda88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cda8c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1cda8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1cda90: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cda90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cda94: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x1cda94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1cda98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cda98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda9c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1CDA9Cu;
    SET_GPR_U32(ctx, 31, 0x1CDAA4u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1CDA9Cu, 0x1CDAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAA4u;
label_1cdaa4:
    // 0x1cdaa4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cdaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdaa8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1cdaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdaac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cdaacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cdab0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1cdab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1cdab4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cdab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cdab8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cdab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdabc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1cdabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdac0: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x1cdac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1cdac4: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x1cdac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1cdac8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1cdac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cdacc: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x1cdaccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cdad0: 0xc073764  jal         func_1CDD90
    ctx->pc = 0x1CDAD0u;
    SET_GPR_U32(ctx, 31, 0x1CDAD8u);
    ctx->pc = 0x1CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDD90u, 0x1CDAD0u, 0x1CDAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAD8u;
label_1cdad8:
    // 0x1cdad8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CDAD8u;
    {
        const bool branch_taken_0x1cdad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdad8) {
            ctx->pc = 0x1CDAE4u;
            goto label_1cdae4;
        }
    }
    ctx->pc = 0x1CDAE0u;
    // 0x1cdae0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cdae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdae4:
    // 0x1cdae4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1cdae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1cdae8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cdae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cdaec: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CDAECu;
    {
        const bool branch_taken_0x1cdaec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdaec) {
            ctx->pc = 0x1CDB14u;
            goto label_1cdb14;
        }
    }
    ctx->pc = 0x1CDAF4u;
    // 0x1cdaf4: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1cdaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1cdaf8:
    // 0x1cdaf8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1cdaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdafc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cdafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cdb00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cdb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cdb04: 0x0  nop
    ctx->pc = 0x1cdb04u;
    // NOP
    // 0x1cdb08: 0x0  nop
    ctx->pc = 0x1cdb08u;
    // NOP
    // 0x1cdb0c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CDB0Cu;
    {
        const bool branch_taken_0x1cdb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdb0c) {
            ctx->pc = 0x1CDAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdaf8;
        }
    }
    ctx->pc = 0x1CDB14u;
label_1cdb14:
    // 0x1cdb14: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1cdb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cdb18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cdb1c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1cdb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1cdb20: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1cdb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cdb24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cdb28: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cdb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1cdb2c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1cdb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1cdb30: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x1cdb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cdb34: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1cdb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdb38: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1cdb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdb3c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1cdb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1cdb40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cdb44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cdb44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdb48: 0x0  nop
    ctx->pc = 0x1cdb48u;
    // NOP
    // 0x1cdb4c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cdb4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cdb50: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1cdb50u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1cdb54: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1cdb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1cdb58: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cdb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cdb5c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cdb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cdb60: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CDB60u;
    {
        const bool branch_taken_0x1cdb60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdb60) {
            ctx->pc = 0x1CDB88u;
            goto label_1cdb88;
        }
    }
    ctx->pc = 0x1CDB68u;
    // 0x1cdb68: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1cdb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1cdb6c:
    // 0x1cdb6c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1cdb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdb70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cdb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cdb74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cdb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cdb78: 0x0  nop
    ctx->pc = 0x1cdb78u;
    // NOP
    // 0x1cdb7c: 0x0  nop
    ctx->pc = 0x1cdb7cu;
    // NOP
    // 0x1cdb80: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CDB80u;
    {
        const bool branch_taken_0x1cdb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdb80) {
            ctx->pc = 0x1CDB6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdb6c;
        }
    }
    ctx->pc = 0x1CDB88u;
label_1cdb88:
    // 0x1cdb88: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x1cdb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cdb8c: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x1cdb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdb90: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1cdb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdb94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cdb94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdb98: 0x0  nop
    ctx->pc = 0x1cdb98u;
    // NOP
    // 0x1cdb9c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cdb9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cdba0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1cdba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1cdba4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1cdba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1cdba8: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x1cdba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cdbac: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x1cdbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdbb0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1cdbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdbb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cdbb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdbb8: 0x0  nop
    ctx->pc = 0x1cdbb8u;
    // NOP
    // 0x1cdbbc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cdbbcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cdbc0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1cdbc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1cdbc4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1cdbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1cdbc8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1cdbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1cdbcc: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x1cdbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cdbd0: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x1cdbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdbd4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1cdbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdbd8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cdbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdbdc: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1cdbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdbe0: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1cdbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdbe4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1cdbe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cdbe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cdbe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdbec: 0x0  nop
    ctx->pc = 0x1cdbecu;
    // NOP
    // 0x1cdbf0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cdbf0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cdbf4: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1cdbf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1cdbf8: 0x46000004  c1          0x4
    ctx->pc = 0x1cdbf8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cdbfc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1cdbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1cdc00: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x1cdc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cdc04: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x1cdc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdc08: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1cdc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdc0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cdc0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdc10: 0x0  nop
    ctx->pc = 0x1cdc10u;
    // NOP
    // 0x1cdc14: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cdc14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cdc18: 0x46021d1c  madd.s      $f20, $f3, $f2
    ctx->pc = 0x1cdc18u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1cdc1c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cdc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdc20: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1cdc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1cdc24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cdc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc28: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1CDC28u;
    SET_GPR_U32(ctx, 31, 0x1CDC30u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1CDC28u, 0x1CDC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC30u;
label_1cdc30:
    // 0x1cdc30: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1cdc30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cdc34: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x1cdc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cdc38: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1cdc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdc3c: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x1cdc3cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x1cdc40: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1cdc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdc44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cdc44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdc48: 0x0  nop
    ctx->pc = 0x1cdc48u;
    // NOP
    // 0x1cdc4c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cdc4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cdc50: 0x46021d1c  madd.s      $f20, $f3, $f2
    ctx->pc = 0x1cdc50u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1cdc54: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cdc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdc58: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1cdc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1cdc5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cdc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc60: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1CDC60u;
    SET_GPR_U32(ctx, 31, 0x1CDC68u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1CDC60u, 0x1CDC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC68u;
label_1cdc68:
    // 0x1cdc68: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1cdc68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cdc6c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1cdc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdc70: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1cdc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdc74: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1cdc74u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1cdc78: 0x0  nop
    ctx->pc = 0x1cdc78u;
    // NOP
    // 0x1cdc7c: 0x0  nop
    ctx->pc = 0x1cdc7cu;
    // NOP
    // 0x1cdc80: 0x0  nop
    ctx->pc = 0x1cdc80u;
    // NOP
    // 0x1cdc84: 0xc0c3816  jal         func_30E058
    ctx->pc = 0x1CDC84u;
    SET_GPR_U32(ctx, 31, 0x1CDC8Cu);
    ctx->pc = 0x30E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E058u, 0x1CDC84u, 0x1CDC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC8Cu;
label_1cdc8c:
    // 0x1cdc8c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1cdc8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1cdc90: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cdc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdc94: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x1cdc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1cdc98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cdc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc9c: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1CDC9Cu;
    SET_GPR_U32(ctx, 31, 0x1CDCA4u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1CDC9Cu, 0x1CDCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCA4u;
label_1cdca4:
    // 0x1cdca4: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1cdca4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cdca8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cdca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cdcac:
    // 0x1cdcac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cdcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdcb0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1cdcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1cdcb4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1cdcb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cdcb8: 0x1440ff00  bnez        $v0, . + 4 + (-0x100 << 2)
    ctx->pc = 0x1CDCB8u;
    {
        const bool branch_taken_0x1cdcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdcb8) {
            ctx->pc = 0x1CD8BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd8bc;
        }
    }
    ctx->pc = 0x1CDCC0u;
    // 0x1cdcc0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cdcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdcc4: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1cdcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1cdcc8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1cdcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdccc: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x1cdcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1cdcd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcd4: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1CDCD4u;
    SET_GPR_U32(ctx, 31, 0x1CDCDCu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1CDCD4u, 0x1CDCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCDCu;
label_1cdcdc:
    // 0x1cdcdc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cdcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdce0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cdce0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cdce4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1cdce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdce8: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x1cdce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x1cdcec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cdcecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdcf0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1cdcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdcf4: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x1cdcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1cdcf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cdcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cdcfc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cdcfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdd00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cdd00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdd04: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1cdd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cdd08: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1cdd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1cdd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD14u;
    // 0x1cdd14: 0x0  nop
    ctx->pc = 0x1cdd14u;
    // NOP
    // 0x1cdd18: 0x0  nop
    ctx->pc = 0x1cdd18u;
    // NOP
    // 0x1cdd1c: 0x0  nop
    ctx->pc = 0x1cdd1cu;
    // NOP
    ctx->pc = 0x1cdd20u;
}
