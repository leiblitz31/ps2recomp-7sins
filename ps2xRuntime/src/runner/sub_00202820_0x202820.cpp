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

// Function: sub_00202820
// Address: 0x202820 - 0x202d60
void sub_00202820_0x202820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202820_0x202820");
#endif

    switch (ctx->pc) {
        case 0x20284cu: goto label_20284c;
        case 0x202858u: goto label_202858;
        case 0x202870u: goto label_202870;
        case 0x202880u: goto label_202880;
        case 0x2028c8u: goto label_2028c8;
        case 0x2028e0u: goto label_2028e0;
        case 0x202904u: goto label_202904;
        case 0x202910u: goto label_202910;
        case 0x202928u: goto label_202928;
        case 0x202954u: goto label_202954;
        case 0x202960u: goto label_202960;
        case 0x20296cu: goto label_20296c;
        case 0x202984u: goto label_202984;
        case 0x202994u: goto label_202994;
        case 0x2029a4u: goto label_2029a4;
        case 0x2029bcu: goto label_2029bc;
        case 0x2029e0u: goto label_2029e0;
        case 0x2029ecu: goto label_2029ec;
        case 0x202a04u: goto label_202a04;
        case 0x202a30u: goto label_202a30;
        case 0x202a64u: goto label_202a64;
        case 0x202a84u: goto label_202a84;
        case 0x202ae8u: goto label_202ae8;
        case 0x202b00u: goto label_202b00;
        case 0x202b10u: goto label_202b10;
        case 0x202b20u: goto label_202b20;
        case 0x202b30u: goto label_202b30;
        case 0x202b58u: goto label_202b58;
        case 0x202b64u: goto label_202b64;
        case 0x202b74u: goto label_202b74;
        case 0x202b84u: goto label_202b84;
        case 0x202b94u: goto label_202b94;
        case 0x202bbcu: goto label_202bbc;
        case 0x202bc8u: goto label_202bc8;
        case 0x202bd8u: goto label_202bd8;
        case 0x202be8u: goto label_202be8;
        case 0x202bf8u: goto label_202bf8;
        case 0x202c20u: goto label_202c20;
        case 0x202c70u: goto label_202c70;
        case 0x202cb0u: goto label_202cb0;
        case 0x202cf0u: goto label_202cf0;
        case 0x202d20u: goto label_202d20;
        case 0x202d50u: goto label_202d50;
        default: break;
    }

    ctx->pc = 0x202820u;

    // 0x202820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x202820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x202824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x202824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x202828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20282c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20282cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x202830: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x202830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x202834: 0xc78081bc  lwc1        $f0, -0x7E44($gp)
    ctx->pc = 0x202834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202838: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x202838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20283c: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x20283cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x202840: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x202840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202844: 0xc05db34  jal         func_176CD0
    ctx->pc = 0x202844u;
    SET_GPR_U32(ctx, 31, 0x20284Cu);
    ctx->pc = 0x176CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176CD0u, 0x202844u, 0x20284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20284Cu;
label_20284c:
    // 0x20284c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x20284cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202850: 0xc06479c  jal         func_191E70
    ctx->pc = 0x202850u;
    SET_GPR_U32(ctx, 31, 0x202858u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x202850u, 0x202858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202858u;
label_202858:
    // 0x202858: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20285c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x20285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202860: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x202860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x202864: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x202864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x202868: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x202868u;
    SET_GPR_U32(ctx, 31, 0x202870u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x202868u, 0x202870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202870u;
label_202870:
    // 0x202870: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x202870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202878: 0xc08c49c  jal         func_231270
    ctx->pc = 0x202878u;
    SET_GPR_U32(ctx, 31, 0x202880u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x202878u, 0x202880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202880u;
label_202880:
    // 0x202880: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x202880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x202884: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x202888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20288c: 0x0  nop
    ctx->pc = 0x20288cu;
    // NOP
    // 0x202890: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x202890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x202894: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x202898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20289c: 0x0  nop
    ctx->pc = 0x20289cu;
    // NOP
    // 0x2028a0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2028a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2028a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2028a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2028a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2028a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2028ac: 0x0  nop
    ctx->pc = 0x2028acu;
    // NOP
    // 0x2028b0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2028b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2028b4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2028b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2028b8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2028b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2028bc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2028bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2028c0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x2028C0u;
    SET_GPR_U32(ctx, 31, 0x2028C8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2028C0u, 0x2028C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2028C8u;
label_2028c8:
    // 0x2028c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2028c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2028ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2028d0: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x2028d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x2028d4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2028d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2028d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2028D8u;
    SET_GPR_U32(ctx, 31, 0x2028E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2028D8u, 0x2028E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2028E0u;
label_2028e0:
    // 0x2028e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2028e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2028e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2028e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2028e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2028e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2028ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2028ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028f0: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x2028f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2028f4: 0xc78e8280  lwc1        $f14, -0x7D80($gp)
    ctx->pc = 0x2028f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2028f8: 0xc7af004c  lwc1        $f15, 0x4C($sp)
    ctx->pc = 0x2028f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2028fc: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x2028FCu;
    SET_GPR_U32(ctx, 31, 0x202904u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x2028FCu, 0x202904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202904u;
label_202904:
    // 0x202904: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x202904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202908: 0xc06479c  jal         func_191E70
    ctx->pc = 0x202908u;
    SET_GPR_U32(ctx, 31, 0x202910u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x202908u, 0x202910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202910u;
label_202910:
    // 0x202910: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202914: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x202914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202918: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x202918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x20291c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x20291cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x202920: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x202920u;
    SET_GPR_U32(ctx, 31, 0x202928u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x202920u, 0x202928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202928u;
label_202928:
    // 0x202928: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x202928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20292c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20292cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x202930: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x202934: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x202934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x202938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20293c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x20293cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x202940: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x202940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x202944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202948: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x202948u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20294c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x20294Cu;
    SET_GPR_U32(ctx, 31, 0x202954u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x20294Cu, 0x202954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202954u;
label_202954:
    // 0x202954: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x202954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202958: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x202958u;
    {
        const bool branch_taken_0x202958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202958) {
            ctx->pc = 0x202A34u;
            goto label_202a34;
        }
    }
    ctx->pc = 0x202960u;
label_202960:
    // 0x202960: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x202960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202964: 0xc06479c  jal         func_191E70
    ctx->pc = 0x202964u;
    SET_GPR_U32(ctx, 31, 0x20296Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x202964u, 0x20296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20296Cu;
label_20296c:
    // 0x20296c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20296cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202970: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x202970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202974: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x202974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x202978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20297c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x20297Cu;
    SET_GPR_U32(ctx, 31, 0x202984u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20297Cu, 0x202984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202984u;
label_202984:
    // 0x202984: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x202984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20298c: 0xc08c49c  jal         func_231270
    ctx->pc = 0x20298Cu;
    SET_GPR_U32(ctx, 31, 0x202994u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x20298Cu, 0x202994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202994u;
label_202994:
    // 0x202994: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x202994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x202998: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x202998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20299c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x20299Cu;
    SET_GPR_U32(ctx, 31, 0x2029A4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x20299Cu, 0x2029A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2029A4u;
label_2029a4:
    // 0x2029a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2029a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2029a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2029ac: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x2029acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x2029b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2029b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029b4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2029B4u;
    SET_GPR_U32(ctx, 31, 0x2029BCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2029B4u, 0x2029BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2029BCu;
label_2029bc:
    // 0x2029bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2029bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2029c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2029c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2029c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2029c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2029c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2029c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029cc: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x2029ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2029d0: 0xc78e8280  lwc1        $f14, -0x7D80($gp)
    ctx->pc = 0x2029d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2029d4: 0xc7af004c  lwc1        $f15, 0x4C($sp)
    ctx->pc = 0x2029d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2029d8: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x2029D8u;
    SET_GPR_U32(ctx, 31, 0x2029E0u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x2029D8u, 0x2029E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2029E0u;
label_2029e0:
    // 0x2029e0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2029e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2029e4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x2029E4u;
    SET_GPR_U32(ctx, 31, 0x2029ECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2029E4u, 0x2029ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2029ECu;
label_2029ec:
    // 0x2029ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2029ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2029f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2029f4: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x2029f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x2029f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2029f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029fc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2029FCu;
    SET_GPR_U32(ctx, 31, 0x202A04u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2029FCu, 0x202A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A04u;
label_202a04:
    // 0x202a04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x202a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202a08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x202a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x202a0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x202a10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x202a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x202a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a18: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x202a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x202a1c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x202a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202a20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x202a20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x202a24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a28: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x202A28u;
    SET_GPR_U32(ctx, 31, 0x202A30u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x202A28u, 0x202A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A30u;
label_202a30:
    // 0x202a30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x202a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_202a34:
    // 0x202a34: 0x2e010006  sltiu       $at, $s0, 0x6
    ctx->pc = 0x202a34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x202a38: 0x1420ffc9  bnez        $at, . + 4 + (-0x37 << 2)
    ctx->pc = 0x202A38u;
    {
        const bool branch_taken_0x202a38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x202a38) {
            ctx->pc = 0x202960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202960;
        }
    }
    ctx->pc = 0x202A40u;
    // 0x202a40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x202a44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x202a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x202a48: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x202a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x202a4c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x202a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x202a50: 0x24a58db8  addiu       $a1, $a1, -0x7248
    ctx->pc = 0x202a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938040));
    // 0x202a54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x202a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a58: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x202a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202a5c: 0xc08f558  jal         func_23D560
    ctx->pc = 0x202A5Cu;
    SET_GPR_U32(ctx, 31, 0x202A64u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x202A5Cu, 0x202A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A64u;
label_202a64:
    // 0x202a64: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x202a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202a68: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x202a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x202a6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x202a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202a70: 0xc4600160  lwc1        $f0, 0x160($v1)
    ctx->pc = 0x202a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202a74: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x202a74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x202a78: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x202a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202a7c: 0xc064d10  jal         func_193440
    ctx->pc = 0x202A7Cu;
    SET_GPR_U32(ctx, 31, 0x202A84u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x202A7Cu, 0x202A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A84u;
label_202a84:
    // 0x202a84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x202a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202a88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202a8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202a90: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x202a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x202a94: 0x3e00008  jr          $ra
    ctx->pc = 0x202A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202A9Cu;
    // 0x202a9c: 0x0  nop
    ctx->pc = 0x202a9cu;
    // NOP
    // 0x202aa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x202aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x202aa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x202aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x202aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x202aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x202aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x202ab0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x202ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x202ab4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x202ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202ab8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x202ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202abc: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x202ABCu;
    {
        const bool branch_taken_0x202abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x202abc) {
            ctx->pc = 0x202C20u;
            goto label_202c20;
        }
    }
    ctx->pc = 0x202AC4u;
    // 0x202ac4: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x202ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x202ac8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x202ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202acc: 0x10030054  beq         $zero, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x202ACCu;
    {
        const bool branch_taken_0x202acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x202acc) {
            ctx->pc = 0x202C20u;
            goto label_202c20;
        }
    }
    ctx->pc = 0x202AD4u;
    // 0x202ad4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x202ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x202ad8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x202ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202adc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x202adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x202ae0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x202AE0u;
    SET_GPR_U32(ctx, 31, 0x202AE8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x202AE0u, 0x202AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202AE8u;
label_202ae8:
    // 0x202ae8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x202ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202aec: 0x1010004c  beq         $zero, $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x202AECu;
    {
        const bool branch_taken_0x202aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x202aec) {
            ctx->pc = 0x202C20u;
            goto label_202c20;
        }
    }
    ctx->pc = 0x202AF4u;
    // 0x202af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202af8: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x202AF8u;
    SET_GPR_U32(ctx, 31, 0x202B00u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x202AF8u, 0x202B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202B00u;
label_202b00:
    // 0x202b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b08: 0xc040a90  jal         func_102A40
    ctx->pc = 0x202B08u;
    SET_GPR_U32(ctx, 31, 0x202B10u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x202B08u, 0x202B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202B10u;
label_202b10:
    // 0x202b10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b18: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x202B18u;
    SET_GPR_U32(ctx, 31, 0x202B20u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x202B18u, 0x202B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202B20u;
label_202b20:
    // 0x202b20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b28: 0xc040a90  jal         func_102A40
    ctx->pc = 0x202B28u;
    SET_GPR_U32(ctx, 31, 0x202B30u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x202B28u, 0x202B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202B30u;
label_202b30:
    // 0x202b30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x202b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202b34: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x202b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x202b38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x202b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202b3c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x202b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202b40: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x202b40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x202b44: 0x0  nop
    ctx->pc = 0x202b44u;
    // NOP
    // 0x202b48: 0x0  nop
    ctx->pc = 0x202b48u;
    // NOP
    // 0x202b4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x202b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202b50: 0xc094de0  jal         func_253780
    ctx->pc = 0x202B50u;
    SET_GPR_U32(ctx, 31, 0x202B58u);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x202B50u, 0x202B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202B58u;
label_202b58:
    // 0x202b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b5c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x202B5Cu;
    SET_GPR_U32(ctx, 31, 0x202B64u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x202B5Cu, 0x202B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202B64u;
label_202b64:
    // 0x202b64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x202b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202b6c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x202B6Cu;
    SET_GPR_U32(ctx, 31, 0x202B74u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x202B6Cu, 0x202B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202B74u;
label_202b74:
    // 0x202b74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b7c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x202B7Cu;
    SET_GPR_U32(ctx, 31, 0x202B84u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x202B7Cu, 0x202B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202B84u;
label_202b84:
    // 0x202b84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x202b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202b8c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x202B8Cu;
    SET_GPR_U32(ctx, 31, 0x202B94u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x202B8Cu, 0x202B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202B94u;
label_202b94:
    // 0x202b94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x202b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202b98: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x202b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x202b9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x202b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202ba0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x202ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202ba4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x202ba4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x202ba8: 0x0  nop
    ctx->pc = 0x202ba8u;
    // NOP
    // 0x202bac: 0x0  nop
    ctx->pc = 0x202bacu;
    // NOP
    // 0x202bb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x202bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202bb4: 0xc094de0  jal         func_253780
    ctx->pc = 0x202BB4u;
    SET_GPR_U32(ctx, 31, 0x202BBCu);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x202BB4u, 0x202BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BBCu;
label_202bbc:
    // 0x202bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bc0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x202BC0u;
    SET_GPR_U32(ctx, 31, 0x202BC8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x202BC0u, 0x202BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BC8u;
label_202bc8:
    // 0x202bc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bcc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x202bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x202bd0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x202BD0u;
    SET_GPR_U32(ctx, 31, 0x202BD8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x202BD0u, 0x202BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BD8u;
label_202bd8:
    // 0x202bd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202be0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x202BE0u;
    SET_GPR_U32(ctx, 31, 0x202BE8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x202BE0u, 0x202BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BE8u;
label_202be8:
    // 0x202be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x202becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x202bf0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x202BF0u;
    SET_GPR_U32(ctx, 31, 0x202BF8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x202BF0u, 0x202BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BF8u;
label_202bf8:
    // 0x202bf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x202bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202bfc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x202bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x202c00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x202c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202c04: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x202c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202c08: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x202c08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x202c0c: 0x0  nop
    ctx->pc = 0x202c0cu;
    // NOP
    // 0x202c10: 0x0  nop
    ctx->pc = 0x202c10u;
    // NOP
    // 0x202c14: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x202c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202c18: 0xc094de0  jal         func_253780
    ctx->pc = 0x202C18u;
    SET_GPR_U32(ctx, 31, 0x202C20u);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x202C18u, 0x202C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C20u;
label_202c20:
    // 0x202c20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x202c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202c2c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x202c2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x202c30: 0x3e00008  jr          $ra
    ctx->pc = 0x202C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202C38u;
    // 0x202c38: 0x0  nop
    ctx->pc = 0x202c38u;
    // NOP
    // 0x202c3c: 0x0  nop
    ctx->pc = 0x202c3cu;
    // NOP
    // 0x202c40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x202c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x202c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202c48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x202c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x202c4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x202c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x202c50: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x202c50u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x202c54: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x202c54u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x202c58: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x202c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202c5c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x202c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202c60: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x202c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x202c64: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x202c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x202c68: 0xc064e90  jal         func_193A40
    ctx->pc = 0x202C68u;
    SET_GPR_U32(ctx, 31, 0x202C70u);
    ctx->pc = 0x193A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A40u, 0x202C68u, 0x202C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C70u;
label_202c70:
    // 0x202c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202c74: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x202c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x202c78: 0x3e00008  jr          $ra
    ctx->pc = 0x202C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202C80u;
    // 0x202c80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x202c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x202c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202c88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x202c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x202c8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x202c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x202c90: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x202c90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x202c94: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x202c94u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x202c98: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x202c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202c9c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x202c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202ca0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x202ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x202ca4: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x202ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x202ca8: 0xc064f2c  jal         func_193CB0
    ctx->pc = 0x202CA8u;
    SET_GPR_U32(ctx, 31, 0x202CB0u);
    ctx->pc = 0x193CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CB0u, 0x202CA8u, 0x202CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202CB0u;
label_202cb0:
    // 0x202cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202cb4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x202cb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x202cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x202CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202CC0u;
    // 0x202cc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x202cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x202cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202cc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x202cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x202ccc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x202cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x202cd0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x202cd0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x202cd4: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x202cd4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x202cd8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x202cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202cdc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x202cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202ce0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x202ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x202ce4: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x202ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x202ce8: 0xc064ff8  jal         func_193FE0
    ctx->pc = 0x202CE8u;
    SET_GPR_U32(ctx, 31, 0x202CF0u);
    ctx->pc = 0x193FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FE0u, 0x202CE8u, 0x202CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202CF0u;
label_202cf0:
    // 0x202cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202cf4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x202cf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x202cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x202CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202D00u;
    // 0x202d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202d08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x202d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x202d0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x202d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x202d10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x202d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202d14: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x202d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202d18: 0xc0650f0  jal         func_1943C0
    ctx->pc = 0x202D18u;
    SET_GPR_U32(ctx, 31, 0x202D20u);
    ctx->pc = 0x1943C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943C0u, 0x202D18u, 0x202D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202D20u;
label_202d20:
    // 0x202d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202d24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x202d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202d28: 0x3e00008  jr          $ra
    ctx->pc = 0x202D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202D30u;
    // 0x202d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x202d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x202d3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x202d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x202d40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x202d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202d44: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x202d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202d48: 0xc0650f4  jal         func_1943D0
    ctx->pc = 0x202D48u;
    SET_GPR_U32(ctx, 31, 0x202D50u);
    ctx->pc = 0x1943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943D0u, 0x202D48u, 0x202D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202D50u;
label_202d50:
    // 0x202d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202d54: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x202d54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202d58: 0x3e00008  jr          $ra
    ctx->pc = 0x202D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202D60u;
}
