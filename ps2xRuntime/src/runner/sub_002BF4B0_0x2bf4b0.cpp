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

// Function: sub_002BF4B0
// Address: 0x2bf4b0 - 0x2bf740
void sub_002BF4B0_0x2bf4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF4B0_0x2bf4b0");
#endif

    switch (ctx->pc) {
        case 0x2bf504u: goto label_2bf504;
        case 0x2bf514u: goto label_2bf514;
        case 0x2bf524u: goto label_2bf524;
        case 0x2bf540u: goto label_2bf540;
        case 0x2bf550u: goto label_2bf550;
        case 0x2bf568u: goto label_2bf568;
        case 0x2bf578u: goto label_2bf578;
        case 0x2bf588u: goto label_2bf588;
        case 0x2bf598u: goto label_2bf598;
        case 0x2bf5a8u: goto label_2bf5a8;
        case 0x2bf5b8u: goto label_2bf5b8;
        case 0x2bf5c4u: goto label_2bf5c4;
        case 0x2bf5f4u: goto label_2bf5f4;
        case 0x2bf608u: goto label_2bf608;
        case 0x2bf618u: goto label_2bf618;
        case 0x2bf630u: goto label_2bf630;
        case 0x2bf640u: goto label_2bf640;
        case 0x2bf650u: goto label_2bf650;
        case 0x2bf660u: goto label_2bf660;
        case 0x2bf6a8u: goto label_2bf6a8;
        case 0x2bf6d0u: goto label_2bf6d0;
        case 0x2bf700u: goto label_2bf700;
        default: break;
    }

    ctx->pc = 0x2bf4b0u;

    // 0x2bf4b0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2bf4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2bf4b4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2bf4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2bf4b8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2bf4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2bf4bc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2bf4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2bf4c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2bf4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2bf4c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bf4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2bf4c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bf4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bf4cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bf4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bf4d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bf4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bf4d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bf4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bf4d8: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x2bf4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x2bf4dc: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x2bf4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x2bf4e0: 0xafa70110  sw          $a3, 0x110($sp)
    ctx->pc = 0x2bf4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 7));
    // 0x2bf4e4: 0xe7ac0120  swc1        $f12, 0x120($sp)
    ctx->pc = 0x2bf4e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2bf4e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bf4e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf4ec: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x2bf4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf4f0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2bf4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2bf4f4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2bf4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bf4f8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2bf4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bf4fc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BF4FCu;
    SET_GPR_U32(ctx, 31, 0x2BF504u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BF4FCu, 0x2BF504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF504u;
label_2bf504:
    // 0x2bf504: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bf504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf508: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x2bf508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2bf50c: 0xc090590  jal         func_241640
    ctx->pc = 0x2BF50Cu;
    SET_GPR_U32(ctx, 31, 0x2BF514u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2BF50Cu, 0x2BF514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF514u;
label_2bf514:
    // 0x2bf514: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2bf514u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf518: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2bf518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bf51c: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2BF51Cu;
    SET_GPR_U32(ctx, 31, 0x2BF524u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2BF51Cu, 0x2BF524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF524u;
label_2bf524:
    // 0x2bf524: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2bf524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bf528: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2BF528u;
    {
        const bool branch_taken_0x2bf528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bf528) {
            ctx->pc = 0x2BF558u;
            goto label_2bf558;
        }
    }
    ctx->pc = 0x2BF530u;
    // 0x2bf530: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x2bf530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2bf534: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bf534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf538: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2BF538u;
    SET_GPR_U32(ctx, 31, 0x2BF540u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2BF538u, 0x2BF540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF540u;
label_2bf540:
    // 0x2bf540: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2bf540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2bf544: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x2bf544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2bf548: 0xc041d58  jal         func_107560
    ctx->pc = 0x2BF548u;
    SET_GPR_U32(ctx, 31, 0x2BF550u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2BF548u, 0x2BF550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF550u;
label_2bf550:
    // 0x2bf550: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2BF550u;
    {
        const bool branch_taken_0x2bf550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf550) {
            ctx->pc = 0x2BF598u;
            goto label_2bf598;
        }
    }
    ctx->pc = 0x2BF558u;
label_2bf558:
    // 0x2bf558: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2bf558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bf55c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2bf55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bf560: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BF560u;
    SET_GPR_U32(ctx, 31, 0x2BF568u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BF560u, 0x2BF568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF568u;
label_2bf568:
    // 0x2bf568: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2bf568u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf56c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bf56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf570: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x2BF570u;
    SET_GPR_U32(ctx, 31, 0x2BF578u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2BF570u, 0x2BF578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF578u;
label_2bf578:
    // 0x2bf578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bf578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf57c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2bf57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bf580: 0xc121e84  jal         func_487A10
    ctx->pc = 0x2BF580u;
    SET_GPR_U32(ctx, 31, 0x2BF588u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x2BF580u, 0x2BF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF588u;
label_2bf588:
    // 0x2bf588: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2bf588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2bf58c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bf58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf590: 0xc041d58  jal         func_107560
    ctx->pc = 0x2BF590u;
    SET_GPR_U32(ctx, 31, 0x2BF598u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2BF590u, 0x2BF598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF598u;
label_2bf598:
    // 0x2bf598: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2bf598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf59c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2bf59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bf5a0: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2BF5A0u;
    SET_GPR_U32(ctx, 31, 0x2BF5A8u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2BF5A0u, 0x2BF5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5A8u;
label_2bf5a8:
    // 0x2bf5a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bf5a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf5ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bf5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf5b0: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2BF5B0u;
    SET_GPR_U32(ctx, 31, 0x2BF5B8u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2BF5B0u, 0x2BF5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5B8u;
label_2bf5b8:
    // 0x2bf5b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf5b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf5bc: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2BF5BCu;
    {
        const bool branch_taken_0x2bf5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf5bc) {
            ctx->pc = 0x2BF6F4u;
            goto label_2bf6f4;
        }
    }
    ctx->pc = 0x2BF5C4u;
label_2bf5c4:
    // 0x2bf5c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2bf5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf5c8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2bf5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bf5cc: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2BF5CCu;
    {
        const bool branch_taken_0x2bf5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bf5cc) {
            ctx->pc = 0x2BF6F0u;
            goto label_2bf6f0;
        }
    }
    ctx->pc = 0x2BF5D4u;
    // 0x2bf5d4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2bf5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bf5d8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2bf5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bf5dc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BF5DCu;
    {
        const bool branch_taken_0x2bf5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bf5dc) {
            ctx->pc = 0x2BF620u;
            goto label_2bf620;
        }
    }
    ctx->pc = 0x2BF5E4u;
    // 0x2bf5e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2bf5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf5e8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2bf5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bf5ec: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BF5ECu;
    SET_GPR_U32(ctx, 31, 0x2BF5F4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BF5ECu, 0x2BF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5F4u;
label_2bf5f4:
    // 0x2bf5f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2bf5f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf5f8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x2bf5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2bf5fc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bf5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf600: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2BF600u;
    SET_GPR_U32(ctx, 31, 0x2BF608u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2BF600u, 0x2BF608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF608u;
label_2bf608:
    // 0x2bf608: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2bf608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2bf60c: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x2bf60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2bf610: 0xc041d58  jal         func_107560
    ctx->pc = 0x2BF610u;
    SET_GPR_U32(ctx, 31, 0x2BF618u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2BF610u, 0x2BF618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF618u;
label_2bf618:
    // 0x2bf618: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2BF618u;
    {
        const bool branch_taken_0x2bf618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf618) {
            ctx->pc = 0x2BF660u;
            goto label_2bf660;
        }
    }
    ctx->pc = 0x2BF620u;
label_2bf620:
    // 0x2bf620: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2bf620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf624: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2bf624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bf628: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BF628u;
    SET_GPR_U32(ctx, 31, 0x2BF630u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BF628u, 0x2BF630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF630u;
label_2bf630:
    // 0x2bf630: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bf630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf634: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bf634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf638: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x2BF638u;
    SET_GPR_U32(ctx, 31, 0x2BF640u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2BF638u, 0x2BF640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF640u;
label_2bf640:
    // 0x2bf640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bf640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf644: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2bf644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bf648: 0xc121e84  jal         func_487A10
    ctx->pc = 0x2BF648u;
    SET_GPR_U32(ctx, 31, 0x2BF650u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x2BF648u, 0x2BF650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF650u;
label_2bf650:
    // 0x2bf650: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2bf650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2bf654: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bf654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf658: 0xc041d58  jal         func_107560
    ctx->pc = 0x2BF658u;
    SET_GPR_U32(ctx, 31, 0x2BF660u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2BF658u, 0x2BF660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF660u;
label_2bf660:
    // 0x2bf660: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2bf660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf664: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2bf664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf668: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bf668u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bf66c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2bf66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2bf670: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2bf670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf674: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2bf674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf678: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bf678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bf67c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2bf67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2bf680: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x2bf680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf684: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2bf684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf688: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bf688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bf68c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2bf68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2bf690: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bf690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf694: 0x0  nop
    ctx->pc = 0x2bf694u;
    // NOP
    // 0x2bf698: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2bf698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2bf69c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2bf69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2bf6a0: 0xc104d24  jal         func_413490
    ctx->pc = 0x2BF6A0u;
    SET_GPR_U32(ctx, 31, 0x2BF6A8u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2BF6A0u, 0x2BF6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF6A8u;
label_2bf6a8:
    // 0x2bf6a8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2bf6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2bf6ac: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2bf6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf6b0: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2bf6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf6b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf6b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf6b8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2BF6B8u;
    {
        const bool branch_taken_0x2bf6b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf6b8) {
            ctx->pc = 0x2BF6F0u;
            goto label_2bf6f0;
        }
    }
    ctx->pc = 0x2BF6C0u;
    // 0x2bf6c0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2bf6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bf6c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bf6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6c8: 0xc042128  jal         func_1084A0
    ctx->pc = 0x2BF6C8u;
    SET_GPR_U32(ctx, 31, 0x2BF6D0u);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x2BF6C8u, 0x2BF6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF6D0u;
label_2bf6d0:
    // 0x2bf6d0: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2bf6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf6d4: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x2bf6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf6d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf6d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf6dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF6DCu;
    {
        const bool branch_taken_0x2bf6dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf6dc) {
            ctx->pc = 0x2BF6F0u;
            goto label_2bf6f0;
        }
    }
    ctx->pc = 0x2BF6E4u;
    // 0x2bf6e4: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2bf6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf6e8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2bf6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2bf6ec: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2bf6ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bf6f0:
    // 0x2bf6f0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2bf6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2bf6f4:
    // 0x2bf6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bf6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6f8: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2BF6F8u;
    SET_GPR_U32(ctx, 31, 0x2BF700u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2BF6F8u, 0x2BF700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF700u;
label_2bf700:
    // 0x2bf700: 0x1602ffb0  bne         $s0, $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2BF700u;
    {
        const bool branch_taken_0x2bf700 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf700) {
            ctx->pc = 0x2BF5C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf5c4;
        }
    }
    ctx->pc = 0x2BF708u;
    // 0x2bf708: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2bf708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf70c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2bf70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bf710: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2bf710u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bf714: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2bf714u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bf718: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2bf718u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bf71c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bf71cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf720: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bf720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf724: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bf724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bf728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf72c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf730: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x2bf730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2bf734: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF73Cu;
    // 0x2bf73c: 0x0  nop
    ctx->pc = 0x2bf73cu;
    // NOP
    ctx->pc = 0x2bf740u;
}
