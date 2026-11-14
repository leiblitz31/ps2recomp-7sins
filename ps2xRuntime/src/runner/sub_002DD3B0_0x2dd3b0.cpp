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

// Function: sub_002DD3B0
// Address: 0x2dd3b0 - 0x2dd530
void sub_002DD3B0_0x2dd3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD3B0_0x2dd3b0");
#endif

    switch (ctx->pc) {
        case 0x2dd3f0u: goto label_2dd3f0;
        case 0x2dd400u: goto label_2dd400;
        case 0x2dd410u: goto label_2dd410;
        case 0x2dd424u: goto label_2dd424;
        case 0x2dd434u: goto label_2dd434;
        case 0x2dd444u: goto label_2dd444;
        case 0x2dd458u: goto label_2dd458;
        case 0x2dd468u: goto label_2dd468;
        case 0x2dd47cu: goto label_2dd47c;
        case 0x2dd4d4u: goto label_2dd4d4;
        default: break;
    }

    ctx->pc = 0x2dd3b0u;

    // 0x2dd3b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2dd3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2dd3b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2dd3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2dd3b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2dd3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2dd3bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dd3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2dd3c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dd3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dd3c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dd3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dd3c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dd3cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd3d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dd3d4: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2dd3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x2dd3d8: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x2dd3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x2dd3dc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2dd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dd3e0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2dd3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2dd3e4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2dd3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2dd3e8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DD3E8u;
    SET_GPR_U32(ctx, 31, 0x2DD3F0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DD3E8u, 0x2DD3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD3F0u;
label_2dd3f0:
    // 0x2dd3f0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2dd3f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd3f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2dd3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd3f8: 0xc091aa8  jal         func_246AA0
    ctx->pc = 0x2DD3F8u;
    SET_GPR_U32(ctx, 31, 0x2DD400u);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x2DD3F8u, 0x2DD400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD400u;
label_2dd400:
    // 0x2dd400: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dd400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd404: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd408: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x2DD408u;
    SET_GPR_U32(ctx, 31, 0x2DD410u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x2DD408u, 0x2DD410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD410u;
label_2dd410:
    // 0x2dd410: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2dd410u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd414: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2dd414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd418: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dd418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd41c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2DD41Cu;
    {
        const bool branch_taken_0x2dd41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd41c) {
            ctx->pc = 0x2DD4E4u;
            goto label_2dd4e4;
        }
    }
    ctx->pc = 0x2DD424u;
label_2dd424:
    // 0x2dd424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd42c: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2DD42Cu;
    SET_GPR_U32(ctx, 31, 0x2DD434u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2DD42Cu, 0x2DD434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD434u;
label_2dd434:
    // 0x2dd434: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2dd434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd438: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2dd438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2dd43c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DD43Cu;
    SET_GPR_U32(ctx, 31, 0x2DD444u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DD43Cu, 0x2DD444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD444u;
label_2dd444:
    // 0x2dd444: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2dd444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd44c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd450: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2DD450u;
    SET_GPR_U32(ctx, 31, 0x2DD458u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2DD450u, 0x2DD458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD458u;
label_2dd458:
    // 0x2dd458: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2dd458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd45c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2dd45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2dd460: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DD460u;
    SET_GPR_U32(ctx, 31, 0x2DD468u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DD460u, 0x2DD468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD468u;
label_2dd468:
    // 0x2dd468: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2dd468u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd46c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x2dd46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2dd470: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2dd470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd474: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2DD474u;
    SET_GPR_U32(ctx, 31, 0x2DD47Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2DD474u, 0x2DD47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD47Cu;
label_2dd47c:
    // 0x2dd47c: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x2dd47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2dd480: 0x27a20098  addiu       $v0, $sp, 0x98
    ctx->pc = 0x2dd480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2dd484: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2dd484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd488: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2dd488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd48c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2dd48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd490: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2dd490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2dd494: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2dd494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2dd498: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2dd498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2dd49c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2dd49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dd4a0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2dd4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd4a4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2dd4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd4a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2dd4a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dd4ac: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2dd4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2dd4b0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2dd4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dd4b4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2dd4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd4b8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2dd4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd4bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2dd4bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dd4c0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2dd4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2dd4c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dd4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd4c8: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x2dd4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2dd4cc: 0xc0935fc  jal         func_24D7F0
    ctx->pc = 0x2DD4CCu;
    SET_GPR_U32(ctx, 31, 0x2DD4D4u);
    ctx->pc = 0x24D7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D7F0u, 0x2DD4CCu, 0x2DD4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4D4u;
label_2dd4d4:
    // 0x2dd4d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD4D4u;
    {
        const bool branch_taken_0x2dd4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd4d4) {
            ctx->pc = 0x2DD4E0u;
            goto label_2dd4e0;
        }
    }
    ctx->pc = 0x2DD4DCu;
    // 0x2dd4dc: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2dd4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dd4e0:
    // 0x2dd4e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2dd4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2dd4e4:
    // 0x2dd4e4: 0x215082b  sltu        $at, $s0, $s5
    ctx->pc = 0x2dd4e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2dd4e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD4E8u;
    {
        const bool branch_taken_0x2dd4e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd4e8) {
            ctx->pc = 0x2DD4F8u;
            goto label_2dd4f8;
        }
    }
    ctx->pc = 0x2DD4F0u;
    // 0x2dd4f0: 0x1220ffcc  beqz        $s1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2DD4F0u;
    {
        const bool branch_taken_0x2dd4f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd4f0) {
            ctx->pc = 0x2DD424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd424;
        }
    }
    ctx->pc = 0x2DD4F8u;
label_2dd4f8:
    // 0x2dd4f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dd4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd4fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2dd4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dd500: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dd500u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dd504: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dd504u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd508: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dd508u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd50c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dd50cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd510: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd514: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd51c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2dd51cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dd520: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD528u;
    // 0x2dd528: 0x0  nop
    ctx->pc = 0x2dd528u;
    // NOP
    // 0x2dd52c: 0x0  nop
    ctx->pc = 0x2dd52cu;
    // NOP
    ctx->pc = 0x2dd530u;
}
