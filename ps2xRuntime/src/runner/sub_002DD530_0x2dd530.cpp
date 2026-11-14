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

// Function: sub_002DD530
// Address: 0x2dd530 - 0x2dd8a0
void sub_002DD530_0x2dd530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD530_0x2dd530");
#endif

    switch (ctx->pc) {
        case 0x2dd578u: goto label_2dd578;
        case 0x2dd588u: goto label_2dd588;
        case 0x2dd598u: goto label_2dd598;
        case 0x2dd5b4u: goto label_2dd5b4;
        case 0x2dd604u: goto label_2dd604;
        case 0x2dd60cu: goto label_2dd60c;
        case 0x2dd61cu: goto label_2dd61c;
        case 0x2dd638u: goto label_2dd638;
        case 0x2dd648u: goto label_2dd648;
        case 0x2dd660u: goto label_2dd660;
        case 0x2dd66cu: goto label_2dd66c;
        case 0x2dd678u: goto label_2dd678;
        case 0x2dd690u: goto label_2dd690;
        case 0x2dd69cu: goto label_2dd69c;
        case 0x2dd6a8u: goto label_2dd6a8;
        case 0x2dd6c0u: goto label_2dd6c0;
        case 0x2dd6d4u: goto label_2dd6d4;
        case 0x2dd704u: goto label_2dd704;
        case 0x2dd714u: goto label_2dd714;
        case 0x2dd728u: goto label_2dd728;
        case 0x2dd75cu: goto label_2dd75c;
        default: break;
    }

    ctx->pc = 0x2dd530u;

    // 0x2dd530: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2dd530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2dd534: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2dd534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2dd538: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2dd538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2dd53c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2dd53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2dd540: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2dd540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2dd544: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dd544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2dd548: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dd548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dd54c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dd54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dd550: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dd554: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dd55c: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x2dd55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x2dd560: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x2dd560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x2dd564: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2dd564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2dd568: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2dd568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2dd56c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2dd56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2dd570: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DD570u;
    SET_GPR_U32(ctx, 31, 0x2DD578u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DD570u, 0x2DD578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD578u;
label_2dd578:
    // 0x2dd578: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2dd578u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd57c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2dd57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd580: 0xc091aa8  jal         func_246AA0
    ctx->pc = 0x2DD580u;
    SET_GPR_U32(ctx, 31, 0x2DD588u);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x2DD580u, 0x2DD588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD588u;
label_2dd588:
    // 0x2dd588: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dd588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd58c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd590: 0xc040e70  jal         func_1039C0
    ctx->pc = 0x2DD590u;
    SET_GPR_U32(ctx, 31, 0x2DD598u);
    ctx->pc = 0x1039C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039C0u, 0x2DD590u, 0x2DD598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD598u;
label_2dd598:
    // 0x2dd598: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DD598u;
    {
        const bool branch_taken_0x2dd598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd598) {
            ctx->pc = 0x2DD5F8u;
            goto label_2dd5f8;
        }
    }
    ctx->pc = 0x2DD5A0u;
    // 0x2dd5a0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2dd5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2dd5a4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2dd5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dd5a8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DD5A8u;
    {
        const bool branch_taken_0x2dd5a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd5a8) {
            ctx->pc = 0x2DD5D0u;
            goto label_2dd5d0;
        }
    }
    ctx->pc = 0x2DD5B0u;
    // 0x2dd5b0: 0xa01821  addu        $v1, $a1, $zero
    ctx->pc = 0x2dd5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 0)));
label_2dd5b4:
    // 0x2dd5b4: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x2dd5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd5b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2dd5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dd5bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2dd5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2dd5c0: 0x0  nop
    ctx->pc = 0x2dd5c0u;
    // NOP
    // 0x2dd5c4: 0x0  nop
    ctx->pc = 0x2dd5c4u;
    // NOP
    // 0x2dd5c8: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DD5C8u;
    {
        const bool branch_taken_0x2dd5c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd5c8) {
            ctx->pc = 0x2DD5B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd5b4;
        }
    }
    ctx->pc = 0x2DD5D0u;
label_2dd5d0:
    // 0x2dd5d0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2dd5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2dd5d4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2dd5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2dd5d8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2dd5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd5dc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2dd5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd5e0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2dd5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd5e4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2dd5e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2dd5e8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2dd5e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2dd5ec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2dd5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2dd5f0: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2DD5F0u;
    {
        const bool branch_taken_0x2dd5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd5f0) {
            ctx->pc = 0x2DD864u;
            goto label_2dd864;
        }
    }
    ctx->pc = 0x2DD5F8u;
label_2dd5f8:
    // 0x2dd5f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2dd5f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2dd5fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd600: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dd600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd604:
    // 0x2dd604: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2DD604u;
    SET_GPR_U32(ctx, 31, 0x2DD60Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2DD604u, 0x2DD60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD60Cu;
label_2dd60c:
    // 0x2dd60c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2dd60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2dd610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd614: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x2DD614u;
    SET_GPR_U32(ctx, 31, 0x2DD61Cu);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x2DD614u, 0x2DD61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD61Cu;
label_2dd61c:
    // 0x2dd61c: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x2dd61cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dd620: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2dd620u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2dd624: 0x9810  mfhi        $s3
    ctx->pc = 0x2dd624u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x2dd628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd62c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2dd62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd630: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2DD630u;
    SET_GPR_U32(ctx, 31, 0x2DD638u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2DD630u, 0x2DD638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD638u;
label_2dd638:
    // 0x2dd638: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2dd638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd63c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2dd63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2dd640: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DD640u;
    SET_GPR_U32(ctx, 31, 0x2DD648u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DD640u, 0x2DD648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD648u;
label_2dd648:
    // 0x2dd648: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dd648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd64c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2dd64cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2dd650: 0x2e810065  sltiu       $at, $s4, 0x65
    ctx->pc = 0x2dd650u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x2dd654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd658: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x2DD658u;
    SET_GPR_U32(ctx, 31, 0x2DD660u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x2DD658u, 0x2DD660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD660u;
label_2dd660:
    // 0x2dd660: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dd660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd664: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x2DD664u;
    SET_GPR_U32(ctx, 31, 0x2DD66Cu);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x2DD664u, 0x2DD66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD66Cu;
label_2dd66c:
    // 0x2dd66c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2dd66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2dd670: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2DD670u;
    SET_GPR_U32(ctx, 31, 0x2DD678u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2DD670u, 0x2DD678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD678u;
label_2dd678:
    // 0x2dd678: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2dd678u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dd67c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2dd67cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2dd680: 0xb010  mfhi        $s6
    ctx->pc = 0x2dd680u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x2dd684: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd688: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x2DD688u;
    SET_GPR_U32(ctx, 31, 0x2DD690u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x2DD688u, 0x2DD690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD690u;
label_2dd690:
    // 0x2dd690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dd690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd694: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x2DD694u;
    SET_GPR_U32(ctx, 31, 0x2DD69Cu);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x2DD694u, 0x2DD69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD69Cu;
label_2dd69c:
    // 0x2dd69c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2dd69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2dd6a0: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2DD6A0u;
    SET_GPR_U32(ctx, 31, 0x2DD6A8u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2DD6A0u, 0x2DD6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6A8u;
label_2dd6a8:
    // 0x2dd6a8: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2dd6a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dd6ac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2dd6acu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2dd6b0: 0xa810  mfhi        $s5
    ctx->pc = 0x2dd6b0u;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x2dd6b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6b8: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x2DD6B8u;
    SET_GPR_U32(ctx, 31, 0x2DD6C0u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x2DD6B8u, 0x2DD6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6C0u;
label_2dd6c0:
    // 0x2dd6c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dd6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2dd6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6c8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2dd6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6cc: 0xc092158  jal         func_248560
    ctx->pc = 0x2DD6CCu;
    SET_GPR_U32(ctx, 31, 0x2DD6D4u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x2DD6CCu, 0x2DD6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6D4u;
label_2dd6d4:
    // 0x2dd6d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2dd6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2dd6dc: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x2dd6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x2dd6e0: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2DD6E0u;
    {
        const bool branch_taken_0x2dd6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd6e0) {
            ctx->pc = 0x2DD604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd604;
        }
    }
    ctx->pc = 0x2DD6E8u;
    // 0x2dd6e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dd6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dd6ec: 0x1040ffc5  beqz        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2DD6ECu;
    {
        const bool branch_taken_0x2dd6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd6ec) {
            ctx->pc = 0x2DD604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd604;
        }
    }
    ctx->pc = 0x2DD6F4u;
    // 0x2dd6f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2dd6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6fc: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2DD6FCu;
    SET_GPR_U32(ctx, 31, 0x2DD704u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2DD6FCu, 0x2DD704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD704u;
label_2dd704:
    // 0x2dd704: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2dd704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd708: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2dd708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2dd70c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DD70Cu;
    SET_GPR_U32(ctx, 31, 0x2DD714u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DD70Cu, 0x2DD714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD714u;
label_2dd714:
    // 0x2dd714: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2dd714u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd718: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2dd718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dd71c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2dd71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd720: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2DD720u;
    SET_GPR_U32(ctx, 31, 0x2DD728u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2DD720u, 0x2DD728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD728u;
label_2dd728:
    // 0x2dd728: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2dd728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dd72c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2dd72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2dd730: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2dd730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd734: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2dd734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd738: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2dd738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd73c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2dd73cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2dd740: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2dd740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2dd744: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2dd744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2dd748: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2dd748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dd74c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2dd74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dd750: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DD750u;
    {
        const bool branch_taken_0x2dd750 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd750) {
            ctx->pc = 0x2DD778u;
            goto label_2dd778;
        }
    }
    ctx->pc = 0x2DD758u;
    // 0x2dd758: 0xa01821  addu        $v1, $a1, $zero
    ctx->pc = 0x2dd758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 0)));
label_2dd75c:
    // 0x2dd75c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x2dd75cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd760: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2dd760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dd764: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2dd764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2dd768: 0x0  nop
    ctx->pc = 0x2dd768u;
    // NOP
    // 0x2dd76c: 0x0  nop
    ctx->pc = 0x2dd76cu;
    // NOP
    // 0x2dd770: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DD770u;
    {
        const bool branch_taken_0x2dd770 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd770) {
            ctx->pc = 0x2DD75Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd75c;
        }
    }
    ctx->pc = 0x2DD778u;
label_2dd778:
    // 0x2dd778: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2dd778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2dd77c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dd77cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd780: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD780u;
    {
        const bool branch_taken_0x2dd780 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x2dd780) {
            ctx->pc = 0x2DD79Cu;
            goto label_2dd79c;
        }
    }
    ctx->pc = 0x2DD788u;
    // 0x2dd788: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2dd788u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd78c: 0x0  nop
    ctx->pc = 0x2dd78cu;
    // NOP
    // 0x2dd790: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dd790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dd794: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DD794u;
    {
        const bool branch_taken_0x2dd794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd794) {
            ctx->pc = 0x2DD7B8u;
            goto label_2dd7b8;
        }
    }
    ctx->pc = 0x2DD79Cu;
label_2dd79c:
    // 0x2dd79c: 0x162042  srl         $a0, $s6, 1
    ctx->pc = 0x2dd79cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
    // 0x2dd7a0: 0x32c30001  andi        $v1, $s6, 0x1
    ctx->pc = 0x2dd7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x2dd7a4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2dd7a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2dd7a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2dd7a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd7ac: 0x0  nop
    ctx->pc = 0x2dd7acu;
    // NOP
    // 0x2dd7b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dd7b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dd7b4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2dd7b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2dd7b8:
    // 0x2dd7b8: 0x460008c0  add.s       $f3, $f1, $f0
    ctx->pc = 0x2dd7b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dd7bc: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2dd7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2dd7c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2dd7c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dd7c4: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x2dd7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd7c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd7c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd7cc: 0x0  nop
    ctx->pc = 0x2dd7ccu;
    // NOP
    // 0x2dd7d0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2dd7d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2dd7d4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2dd7d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2dd7d8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2dd7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2dd7dc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2dd7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2dd7e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dd7e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd7e4: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD7E4u;
    {
        const bool branch_taken_0x2dd7e4 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x2dd7e4) {
            ctx->pc = 0x2DD800u;
            goto label_2dd800;
        }
    }
    ctx->pc = 0x2DD7ECu;
    // 0x2dd7ec: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2dd7ecu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd7f0: 0x0  nop
    ctx->pc = 0x2dd7f0u;
    // NOP
    // 0x2dd7f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dd7f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dd7f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DD7F8u;
    {
        const bool branch_taken_0x2dd7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd7f8) {
            ctx->pc = 0x2DD81Cu;
            goto label_2dd81c;
        }
    }
    ctx->pc = 0x2DD800u;
label_2dd800:
    // 0x2dd800: 0x152042  srl         $a0, $s5, 1
    ctx->pc = 0x2dd800u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x2dd804: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x2dd804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2dd808: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2dd808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2dd80c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2dd80cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd810: 0x0  nop
    ctx->pc = 0x2dd810u;
    // NOP
    // 0x2dd814: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dd814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dd818: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2dd818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2dd81c:
    // 0x2dd81c: 0x460008c0  add.s       $f3, $f1, $f0
    ctx->pc = 0x2dd81cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dd820: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2dd820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2dd824: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2dd824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dd828: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2dd828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd82c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd82cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd830: 0x0  nop
    ctx->pc = 0x2dd830u;
    // NOP
    // 0x2dd834: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2dd834u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2dd838: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2dd838u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2dd83c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2dd83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2dd840: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x2dd840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2dd844: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2dd844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dd848: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2dd848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2dd84c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2dd84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd850: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2dd850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd854: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2dd854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd858: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2dd858u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2dd85c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2dd85cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2dd860: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2dd860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2dd864:
    // 0x2dd864: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2dd864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dd868: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2dd868u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dd86c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2dd86cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dd870: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dd870u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dd874: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dd874u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd878: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dd878u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd87c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dd87cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd880: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd88c: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x2dd88cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2dd890: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD898u;
    // 0x2dd898: 0x0  nop
    ctx->pc = 0x2dd898u;
    // NOP
    // 0x2dd89c: 0x0  nop
    ctx->pc = 0x2dd89cu;
    // NOP
    ctx->pc = 0x2dd8a0u;
}
