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

// Function: sub_002468F0
// Address: 0x2468f0 - 0x246a80
void sub_002468F0_0x2468f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002468F0_0x2468f0");
#endif

    switch (ctx->pc) {
        case 0x246924u: goto label_246924;
        case 0x246938u: goto label_246938;
        case 0x24696cu: goto label_24696c;
        case 0x246978u: goto label_246978;
        case 0x246988u: goto label_246988;
        case 0x24699cu: goto label_24699c;
        case 0x2469b0u: goto label_2469b0;
        case 0x2469d0u: goto label_2469d0;
        case 0x2469f0u: goto label_2469f0;
        case 0x246a0cu: goto label_246a0c;
        case 0x246a24u: goto label_246a24;
        case 0x246a48u: goto label_246a48;
        default: break;
    }

    ctx->pc = 0x2468f0u;

    // 0x2468f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2468f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2468f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2468f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2468f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2468f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2468fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2468fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x246900: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x246900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x246904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x246904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x246908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x246908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24690c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x24690cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x246910: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x246910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x246914: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x246914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x246918: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x246918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24691c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24691Cu;
    SET_GPR_U32(ctx, 31, 0x246924u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24691Cu, 0x246924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246924u;
label_246924:
    // 0x246924: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x246924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246928: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x246928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x24692c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24692cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246930: 0xc090f80  jal         func_243E00
    ctx->pc = 0x246930u;
    SET_GPR_U32(ctx, 31, 0x246938u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x246930u, 0x246938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246938u;
label_246938:
    // 0x246938: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x246938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x24693c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x24693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x246940: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x246940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x246944: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x246944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246948: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x246948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24694c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x24694cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x246950: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x246950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x246954: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x246954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x246958: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x246958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24695c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x246960: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x246960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x246964: 0xc042290  jal         func_108A40
    ctx->pc = 0x246964u;
    SET_GPR_U32(ctx, 31, 0x24696Cu);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x246964u, 0x24696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24696Cu;
label_24696c:
    // 0x24696c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24696cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246970: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x246970u;
    {
        const bool branch_taken_0x246970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246970) {
            ctx->pc = 0x246A38u;
            goto label_246a38;
        }
    }
    ctx->pc = 0x246978u;
label_246978:
    // 0x246978: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x246978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24697c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x24697cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x246980: 0xc085538  jal         func_2154E0
    ctx->pc = 0x246980u;
    SET_GPR_U32(ctx, 31, 0x246988u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x246980u, 0x246988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246988u;
label_246988:
    // 0x246988: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x246988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24698c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24698cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246990: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x246990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x246994: 0xc085538  jal         func_2154E0
    ctx->pc = 0x246994u;
    SET_GPR_U32(ctx, 31, 0x24699Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x246994u, 0x24699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24699Cu;
label_24699c:
    // 0x24699c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24699cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2469a0: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x2469a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2469a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2469a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2469a8: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2469A8u;
    SET_GPR_U32(ctx, 31, 0x2469B0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2469A8u, 0x2469B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469B0u;
label_2469b0:
    // 0x2469b0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2469b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2469b4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2469b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2469b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2469b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2469bc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2469bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2469c0: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2469c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2469c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2469c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2469c8: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2469C8u;
    SET_GPR_U32(ctx, 31, 0x2469D0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2469C8u, 0x2469D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469D0u;
label_2469d0:
    // 0x2469d0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2469d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2469d4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2469d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2469d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2469d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2469dc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2469dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2469e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2469e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2469e4: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x2469e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2469e8: 0xc0935fc  jal         func_24D7F0
    ctx->pc = 0x2469E8u;
    SET_GPR_U32(ctx, 31, 0x2469F0u);
    ctx->pc = 0x24D7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D7F0u, 0x2469E8u, 0x2469F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469F0u;
label_2469f0:
    // 0x2469f0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2469F0u;
    {
        const bool branch_taken_0x2469f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2469f0) {
            ctx->pc = 0x246A34u;
            goto label_246a34;
        }
    }
    ctx->pc = 0x2469F8u;
    // 0x2469f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2469f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2469fc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2469fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x246a00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x246a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246a04: 0xc092cd4  jal         func_24B350
    ctx->pc = 0x246A04u;
    SET_GPR_U32(ctx, 31, 0x246A0Cu);
    ctx->pc = 0x24B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B350u, 0x246A04u, 0x246A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A0Cu;
label_246a0c:
    // 0x246a0c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x246A0Cu;
    {
        const bool branch_taken_0x246a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246a0c) {
            ctx->pc = 0x246A50u;
            goto label_246a50;
        }
    }
    ctx->pc = 0x246A14u;
    // 0x246a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x246a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246a1c: 0xc09102c  jal         func_2440B0
    ctx->pc = 0x246A1Cu;
    SET_GPR_U32(ctx, 31, 0x246A24u);
    ctx->pc = 0x2440B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2440B0u, 0x246A1Cu, 0x246A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A24u;
label_246a24:
    // 0x246a24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246a28: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x246a28u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246a2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x246A2Cu;
    {
        const bool branch_taken_0x246a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246a2c) {
            ctx->pc = 0x246A50u;
            goto label_246a50;
        }
    }
    ctx->pc = 0x246A34u;
label_246a34:
    // 0x246a34: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x246a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_246a38:
    // 0x246a38: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x246a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x246a3c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x246a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x246a40: 0xc042288  jal         func_108A20
    ctx->pc = 0x246A40u;
    SET_GPR_U32(ctx, 31, 0x246A48u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x246A40u, 0x246A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A48u;
label_246a48:
    // 0x246a48: 0x1602ffcb  bne         $s0, $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x246A48u;
    {
        const bool branch_taken_0x246a48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x246a48) {
            ctx->pc = 0x246978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246978;
        }
    }
    ctx->pc = 0x246A50u;
label_246a50:
    // 0x246a50: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x246a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246a54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x246a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x246a58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x246a58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246a5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x246a5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246a60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x246a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246a64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x246a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x246a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246a6c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x246a6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x246a70: 0x3e00008  jr          $ra
    ctx->pc = 0x246A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246A78u;
    // 0x246a78: 0x0  nop
    ctx->pc = 0x246a78u;
    // NOP
    // 0x246a7c: 0x0  nop
    ctx->pc = 0x246a7cu;
    // NOP
    ctx->pc = 0x246a80u;
}
