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

// Function: sub_001F89B0
// Address: 0x1f89b0 - 0x1f8bf0
void sub_001F89B0_0x1f89b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F89B0_0x1f89b0");
#endif

    switch (ctx->pc) {
        case 0x1f89e8u: goto label_1f89e8;
        case 0x1f8a14u: goto label_1f8a14;
        case 0x1f8a20u: goto label_1f8a20;
        case 0x1f8a4cu: goto label_1f8a4c;
        case 0x1f8a58u: goto label_1f8a58;
        case 0x1f8a84u: goto label_1f8a84;
        case 0x1f8a9cu: goto label_1f8a9c;
        case 0x1f8ab4u: goto label_1f8ab4;
        case 0x1f8ad0u: goto label_1f8ad0;
        case 0x1f8af8u: goto label_1f8af8;
        case 0x1f8b04u: goto label_1f8b04;
        case 0x1f8b1cu: goto label_1f8b1c;
        case 0x1f8b28u: goto label_1f8b28;
        case 0x1f8b40u: goto label_1f8b40;
        case 0x1f8b4cu: goto label_1f8b4c;
        case 0x1f8b64u: goto label_1f8b64;
        case 0x1f8b70u: goto label_1f8b70;
        case 0x1f8b7cu: goto label_1f8b7c;
        case 0x1f8b94u: goto label_1f8b94;
        case 0x1f8ba8u: goto label_1f8ba8;
        default: break;
    }

    ctx->pc = 0x1f89b0u;

    // 0x1f89b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f89b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f89b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f89b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f89b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f89b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f89bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f89bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f89c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1f89c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1f89c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f89c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f89c8: 0xa0400280  sb          $zero, 0x280($v0)
    ctx->pc = 0x1f89c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 640), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f89cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f89d0: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f89d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f89d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f89d8: 0xe4400284  swc1        $f0, 0x284($v0)
    ctx->pc = 0x1f89d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 644), bits); }
    // 0x1f89dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f89dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f89e0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F89E0u;
    SET_GPR_U32(ctx, 31, 0x1F89E8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F89E0u, 0x1F89E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F89E8u;
label_1f89e8:
    // 0x1f89e8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f89e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f89ec: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1f89ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1f89f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f89f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f89f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f89f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f89f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f89f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f89fc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1f89fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f8a00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f8a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8a0c: 0xc08c544  jal         func_231510
    ctx->pc = 0x1F8A0Cu;
    SET_GPR_U32(ctx, 31, 0x1F8A14u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1F8A0Cu, 0x1F8A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A14u;
label_1f8a14:
    // 0x1f8a14: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8a18: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8A18u;
    SET_GPR_U32(ctx, 31, 0x1F8A20u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8A18u, 0x1F8A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A20u;
label_1f8a20:
    // 0x1f8a20: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8a24: 0x8c650134  lw          $a1, 0x134($v1)
    ctx->pc = 0x1f8a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1f8a28: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f8a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8a2c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f8a2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f8a30: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f8a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8a34: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1f8a34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f8a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f8a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8a44: 0xc08c544  jal         func_231510
    ctx->pc = 0x1F8A44u;
    SET_GPR_U32(ctx, 31, 0x1F8A4Cu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1F8A44u, 0x1F8A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A4Cu;
label_1f8a4c:
    // 0x1f8a4c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8a50: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8A50u;
    SET_GPR_U32(ctx, 31, 0x1F8A58u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8A50u, 0x1F8A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A58u;
label_1f8a58:
    // 0x1f8a58: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8a5c: 0x8c65017c  lw          $a1, 0x17C($v1)
    ctx->pc = 0x1f8a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
    // 0x1f8a60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f8a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8a64: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f8a64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f8a68: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f8a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8a6c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1f8a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f8a70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f8a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8a7c: 0xc08c544  jal         func_231510
    ctx->pc = 0x1F8A7Cu;
    SET_GPR_U32(ctx, 31, 0x1F8A84u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1F8A7Cu, 0x1F8A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A84u;
label_1f8a84:
    // 0x1f8a84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8a88: 0x8c51022c  lw          $s1, 0x22C($v0)
    ctx->pc = 0x1f8a88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
    // 0x1f8a8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8a90: 0x244401f0  addiu       $a0, $v0, 0x1F0
    ctx->pc = 0x1f8a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x1f8a94: 0xc05611c  jal         func_158470
    ctx->pc = 0x1F8A94u;
    SET_GPR_U32(ctx, 31, 0x1F8A9Cu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1F8A94u, 0x1F8A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A9Cu;
label_1f8a9c:
    // 0x1f8a9c: 0x222082b  sltu        $at, $s1, $v0
    ctx->pc = 0x1f8a9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f8aa0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F8AA0u;
    {
        const bool branch_taken_0x1f8aa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8aa0) {
            ctx->pc = 0x1F8AF8u;
            goto label_1f8af8;
        }
    }
    ctx->pc = 0x1F8AA8u;
    // 0x1f8aa8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8aac: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8AACu;
    SET_GPR_U32(ctx, 31, 0x1F8AB4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8AACu, 0x1F8AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8AB4u;
label_1f8ab4:
    // 0x1f8ab4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f8ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ab8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8abc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8ac0: 0x246401f0  addiu       $a0, $v1, 0x1F0
    ctx->pc = 0x1f8ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 496));
    // 0x1f8ac4: 0x8c45022c  lw          $a1, 0x22C($v0)
    ctx->pc = 0x1f8ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
    // 0x1f8ac8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F8AC8u;
    SET_GPR_U32(ctx, 31, 0x1F8AD0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F8AC8u, 0x1F8AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8AD0u;
label_1f8ad0:
    // 0x1f8ad0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f8ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8ad4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8ad8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f8ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f8adc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8ae0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f8ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f8ae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8aec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f8aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8af0: 0xc08c544  jal         func_231510
    ctx->pc = 0x1F8AF0u;
    SET_GPR_U32(ctx, 31, 0x1F8AF8u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1F8AF0u, 0x1F8AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8AF8u;
label_1f8af8:
    // 0x1f8af8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8afc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8AFCu;
    SET_GPR_U32(ctx, 31, 0x1F8B04u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8AFCu, 0x1F8B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B04u;
label_1f8b04:
    // 0x1f8b04: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8b08: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1f8b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1f8b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b14: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8B14u;
    SET_GPR_U32(ctx, 31, 0x1F8B1Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8B14u, 0x1F8B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B1Cu;
label_1f8b1c:
    // 0x1f8b1c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8b20: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8B20u;
    SET_GPR_U32(ctx, 31, 0x1F8B28u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8B20u, 0x1F8B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B28u;
label_1f8b28:
    // 0x1f8b28: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8b2c: 0x8c650134  lw          $a1, 0x134($v1)
    ctx->pc = 0x1f8b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1f8b30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b38: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8B38u;
    SET_GPR_U32(ctx, 31, 0x1F8B40u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8B38u, 0x1F8B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B40u;
label_1f8b40:
    // 0x1f8b40: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8b44: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8B44u;
    SET_GPR_U32(ctx, 31, 0x1F8B4Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8B44u, 0x1F8B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B4Cu;
label_1f8b4c:
    // 0x1f8b4c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8b50: 0x8c65017c  lw          $a1, 0x17C($v1)
    ctx->pc = 0x1f8b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
    // 0x1f8b54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b5c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8B5Cu;
    SET_GPR_U32(ctx, 31, 0x1F8B64u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8B5Cu, 0x1F8B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B64u;
label_1f8b64:
    // 0x1f8b64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f8b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F8B68u;
    {
        const bool branch_taken_0x1f8b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8b68) {
            ctx->pc = 0x1F8BACu;
            goto label_1f8bac;
        }
    }
    ctx->pc = 0x1F8B70u;
label_1f8b70:
    // 0x1f8b70: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8b74: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8B74u;
    SET_GPR_U32(ctx, 31, 0x1F8B7Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8B74u, 0x1F8B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B7Cu;
label_1f8b7c:
    // 0x1f8b7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f8b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8b84: 0x244401f0  addiu       $a0, $v0, 0x1F0
    ctx->pc = 0x1f8b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x1f8b88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b8c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F8B8Cu;
    SET_GPR_U32(ctx, 31, 0x1F8B94u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F8B8Cu, 0x1F8B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B94u;
label_1f8b94:
    // 0x1f8b94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f8b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ba0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8BA0u;
    SET_GPR_U32(ctx, 31, 0x1F8BA8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8BA0u, 0x1F8BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8BA8u;
label_1f8ba8:
    // 0x1f8ba8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f8ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f8bac:
    // 0x1f8bac: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8bb0: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1f8bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1f8bb4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1f8bb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f8bb8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F8BB8u;
    {
        const bool branch_taken_0x1f8bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8bb8) {
            ctx->pc = 0x1F8B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8b70;
        }
    }
    ctx->pc = 0x1F8BC0u;
    // 0x1f8bc0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f8bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f8bc4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8bc8: 0xac64022c  sw          $a0, 0x22C($v1)
    ctx->pc = 0x1f8bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 556), GPR_U32(ctx, 4));
    // 0x1f8bcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f8bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f8bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f8bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8bd8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f8bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f8bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8BE4u;
    // 0x1f8be4: 0x0  nop
    ctx->pc = 0x1f8be4u;
    // NOP
    // 0x1f8be8: 0x0  nop
    ctx->pc = 0x1f8be8u;
    // NOP
    // 0x1f8bec: 0x0  nop
    ctx->pc = 0x1f8becu;
    // NOP
    ctx->pc = 0x1f8bf0u;
}
