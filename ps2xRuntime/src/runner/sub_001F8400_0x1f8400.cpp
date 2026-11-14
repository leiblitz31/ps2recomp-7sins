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

// Function: sub_001F8400
// Address: 0x1f8400 - 0x1f85b0
void sub_001F8400_0x1f8400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8400_0x1f8400");
#endif

    switch (ctx->pc) {
        case 0x1f8508u: goto label_1f8508;
        case 0x1f8530u: goto label_1f8530;
        case 0x1f853cu: goto label_1f853c;
        case 0x1f8564u: goto label_1f8564;
        case 0x1f8570u: goto label_1f8570;
        case 0x1f8598u: goto label_1f8598;
        default: break;
    }

    ctx->pc = 0x1f8400u;

    // 0x1f8400: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f8400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f8404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f8408: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1f8408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1f840c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1f840cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1f8410: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x1f8410u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f8414: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1f8414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1f8418: 0x93a30050  lbu         $v1, 0x50($sp)
    ctx->pc = 0x1f8418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f841c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F841Cu;
    {
        const bool branch_taken_0x1f841c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f841c) {
            ctx->pc = 0x1F84D8u;
            goto label_1f84d8;
        }
    }
    ctx->pc = 0x1F8424u;
    // 0x1f8424: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8428: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f8428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f842c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f842cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8430: 0xc46002f0  lwc1        $f0, 0x2F0($v1)
    ctx->pc = 0x1f8430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8434: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8438: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f843c: 0xe46002ec  swc1        $f0, 0x2EC($v1)
    ctx->pc = 0x1f843cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 748), bits); }
    // 0x1f8440: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f8440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8444: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8448: 0xa06402d8  sb          $a0, 0x2D8($v1)
    ctx->pc = 0x1f8448u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 728), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f844c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1f844cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f8450: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f8450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8454: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F8454u;
    {
        const bool branch_taken_0x1f8454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f8454) {
            ctx->pc = 0x1F84C4u;
            goto label_1f84c4;
        }
    }
    ctx->pc = 0x1F845Cu;
    // 0x1f845c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8460: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F8460u;
    {
        const bool branch_taken_0x1f8460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f8460) {
            ctx->pc = 0x1F84B0u;
            goto label_1f84b0;
        }
    }
    ctx->pc = 0x1F8468u;
    // 0x1f8468: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f846c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F846Cu;
    {
        const bool branch_taken_0x1f846c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f846c) {
            ctx->pc = 0x1F849Cu;
            goto label_1f849c;
        }
    }
    ctx->pc = 0x1F8474u;
    // 0x1f8474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8478: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8478u;
    {
        const bool branch_taken_0x1f8478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f8478) {
            ctx->pc = 0x1F8488u;
            goto label_1f8488;
        }
    }
    ctx->pc = 0x1F8480u;
    // 0x1f8480: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1F8480u;
    {
        const bool branch_taken_0x1f8480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8480) {
            ctx->pc = 0x1F8598u;
            goto label_1f8598;
        }
    }
    ctx->pc = 0x1F8488u;
label_1f8488:
    // 0x1f8488: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f8488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f848c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f848cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8490: 0xac6402dc  sw          $a0, 0x2DC($v1)
    ctx->pc = 0x1f8490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 732), GPR_U32(ctx, 4));
    // 0x1f8494: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1F8494u;
    {
        const bool branch_taken_0x1f8494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8494) {
            ctx->pc = 0x1F8598u;
            goto label_1f8598;
        }
    }
    ctx->pc = 0x1F849Cu;
label_1f849c:
    // 0x1f849c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f849cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f84a0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f84a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f84a4: 0xac6402e0  sw          $a0, 0x2E0($v1)
    ctx->pc = 0x1f84a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 736), GPR_U32(ctx, 4));
    // 0x1f84a8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1F84A8u;
    {
        const bool branch_taken_0x1f84a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f84a8) {
            ctx->pc = 0x1F8598u;
            goto label_1f8598;
        }
    }
    ctx->pc = 0x1F84B0u;
label_1f84b0:
    // 0x1f84b0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f84b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f84b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f84b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f84b8: 0xac6402e4  sw          $a0, 0x2E4($v1)
    ctx->pc = 0x1f84b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 740), GPR_U32(ctx, 4));
    // 0x1f84bc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1F84BCu;
    {
        const bool branch_taken_0x1f84bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f84bc) {
            ctx->pc = 0x1F8598u;
            goto label_1f8598;
        }
    }
    ctx->pc = 0x1F84C4u;
label_1f84c4:
    // 0x1f84c4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f84c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f84c8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f84c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f84cc: 0xac6402e8  sw          $a0, 0x2E8($v1)
    ctx->pc = 0x1f84ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 744), GPR_U32(ctx, 4));
    // 0x1f84d0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1F84D0u;
    {
        const bool branch_taken_0x1f84d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f84d0) {
            ctx->pc = 0x1F8598u;
            goto label_1f8598;
        }
    }
    ctx->pc = 0x1F84D8u;
label_1f84d8:
    // 0x1f84d8: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x1f84d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1f84dc: 0xdf829900  ld          $v0, -0x6700($gp)
    ctx->pc = 0x1f84dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940928)));
    // 0x1f84e0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1f84e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1f84e4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1f84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f84e8: 0xdf829908  ld          $v0, -0x66F8($gp)
    ctx->pc = 0x1f84e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940936)));
    // 0x1f84ec: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1f84ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1f84f0: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x1f84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1f84f4: 0xdf829910  ld          $v0, -0x66F0($gp)
    ctx->pc = 0x1f84f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940944)));
    // 0x1f84f8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1f84f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1f84fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f84fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8500: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8500u;
    SET_GPR_U32(ctx, 31, 0x1F8508u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8500u, 0x1F8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8508u;
label_1f8508:
    // 0x1f8508: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1f8508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f850c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f850cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f8510: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8514: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8518: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1f8518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f851c: 0xc78d8288  lwc1        $f13, -0x7D78($gp)
    ctx->pc = 0x1f851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f8520: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f8520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8524: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f8524u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8528: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1F8528u;
    SET_GPR_U32(ctx, 31, 0x1F8530u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1F8528u, 0x1F8530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8530u;
label_1f8530:
    // 0x1f8530: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8534: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8534u;
    SET_GPR_U32(ctx, 31, 0x1F853Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8534u, 0x1F853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F853Cu;
label_1f853c:
    // 0x1f853c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1f853cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f8540: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8544: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8548: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x1f8548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1f854c: 0xc78c8288  lwc1        $f12, -0x7D78($gp)
    ctx->pc = 0x1f854cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f8550: 0xc78d8288  lwc1        $f13, -0x7D78($gp)
    ctx->pc = 0x1f8550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f8554: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f8554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8558: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f8558u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f855c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1F855Cu;
    SET_GPR_U32(ctx, 31, 0x1F8564u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1F855Cu, 0x1F8564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8564u;
label_1f8564:
    // 0x1f8564: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8568: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8568u;
    SET_GPR_U32(ctx, 31, 0x1F8570u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8568u, 0x1F8570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8570u;
label_1f8570:
    // 0x1f8570: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1f8570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f8574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8578: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f857c: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x1f857cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1f8580: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x1f8580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f8584: 0xc78d8288  lwc1        $f13, -0x7D78($gp)
    ctx->pc = 0x1f8584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f8588: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f8588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f858c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f858cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8590: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1F8590u;
    SET_GPR_U32(ctx, 31, 0x1F8598u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1F8590u, 0x1F8598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8598u;
label_1f8598:
    // 0x1f8598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f859c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1f859cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f85a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F85A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F85A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F85A8u;
    // 0x1f85a8: 0x0  nop
    ctx->pc = 0x1f85a8u;
    // NOP
    // 0x1f85ac: 0x0  nop
    ctx->pc = 0x1f85acu;
    // NOP
    ctx->pc = 0x1f85b0u;
}
