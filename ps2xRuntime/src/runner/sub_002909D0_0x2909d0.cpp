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

// Function: sub_002909D0
// Address: 0x2909d0 - 0x290ae0
void sub_002909D0_0x2909d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002909D0_0x2909d0");
#endif

    switch (ctx->pc) {
        case 0x290a10u: goto label_290a10;
        case 0x290a20u: goto label_290a20;
        case 0x290a34u: goto label_290a34;
        case 0x290a48u: goto label_290a48;
        case 0x290a54u: goto label_290a54;
        case 0x290a7cu: goto label_290a7c;
        case 0x290a88u: goto label_290a88;
        case 0x290a9cu: goto label_290a9c;
        case 0x290abcu: goto label_290abc;
        default: break;
    }

    ctx->pc = 0x2909d0u;

    // 0x2909d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2909d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2909d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2909d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2909d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2909d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2909dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2909dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2909e0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2909e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2909e4: 0xa7a50040  sh          $a1, 0x40($sp)
    ctx->pc = 0x2909e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 5));
    // 0x2909e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2909e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2909ec: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2909ECu;
    {
        const bool branch_taken_0x2909ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2909ec) {
            ctx->pc = 0x290ABCu;
            goto label_290abc;
        }
    }
    ctx->pc = 0x2909F4u;
    // 0x2909f4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2909f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2909f8: 0x24635ff0  addiu       $v1, $v1, 0x5FF0
    ctx->pc = 0x2909f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24560));
    // 0x2909fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2909fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290a00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x290a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x290a04: 0x8f84bc1c  lw          $a0, -0x43E4($gp)
    ctx->pc = 0x290a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949916)));
    // 0x290a08: 0xc09f678  jal         func_27D9E0
    ctx->pc = 0x290A08u;
    SET_GPR_U32(ctx, 31, 0x290A10u);
    ctx->pc = 0x27D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D9E0u, 0x290A08u, 0x290A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A10u;
label_290a10:
    // 0x290a10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x290a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a14: 0x8f84bc1c  lw          $a0, -0x43E4($gp)
    ctx->pc = 0x290a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949916)));
    // 0x290a18: 0xc09f668  jal         func_27D9A0
    ctx->pc = 0x290A18u;
    SET_GPR_U32(ctx, 31, 0x290A20u);
    ctx->pc = 0x27D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D9A0u, 0x290A18u, 0x290A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A20u;
label_290a20:
    // 0x290a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x290a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a28: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x290a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x290a2c: 0xc0a461c  jal         func_291870
    ctx->pc = 0x290A2Cu;
    SET_GPR_U32(ctx, 31, 0x290A34u);
    ctx->pc = 0x291870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291870u, 0x290A2Cu, 0x290A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A34u;
label_290a34:
    // 0x290a34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a38: 0x8f84bc1c  lw          $a0, -0x43E4($gp)
    ctx->pc = 0x290a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949916)));
    // 0x290a3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x290a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a40: 0xc0a42e8  jal         func_290BA0
    ctx->pc = 0x290A40u;
    SET_GPR_U32(ctx, 31, 0x290A48u);
    ctx->pc = 0x290BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290BA0u, 0x290A40u, 0x290A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A48u;
label_290a48:
    // 0x290a48: 0x8f84bc1c  lw          $a0, -0x43E4($gp)
    ctx->pc = 0x290a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949916)));
    // 0x290a4c: 0xc0a42dc  jal         func_290B70
    ctx->pc = 0x290A4Cu;
    SET_GPR_U32(ctx, 31, 0x290A54u);
    ctx->pc = 0x290B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290B70u, 0x290A4Cu, 0x290A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A54u;
label_290a54:
    // 0x290a54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x290a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x290a58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290a5c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x290A5Cu;
    {
        const bool branch_taken_0x290a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x290a5c) {
            ctx->pc = 0x290A8Cu;
            goto label_290a8c;
        }
    }
    ctx->pc = 0x290A64u;
    // 0x290a64: 0x8f82bc1c  lw          $v0, -0x43E4($gp)
    ctx->pc = 0x290a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949916)));
    // 0x290a68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x290A68u;
    {
        const bool branch_taken_0x290a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290a68) {
            ctx->pc = 0x290A8Cu;
            goto label_290a8c;
        }
    }
    ctx->pc = 0x290A70u;
    // 0x290a70: 0x8f84bc1c  lw          $a0, -0x43E4($gp)
    ctx->pc = 0x290a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949916)));
    // 0x290a74: 0xc0a42b8  jal         func_290AE0
    ctx->pc = 0x290A74u;
    SET_GPR_U32(ctx, 31, 0x290A7Cu);
    ctx->pc = 0x290AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290AE0u, 0x290A74u, 0x290A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A7Cu;
label_290a7c:
    // 0x290a7c: 0x8f84bc1c  lw          $a0, -0x43E4($gp)
    ctx->pc = 0x290a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949916)));
    // 0x290a80: 0xc119c5c  jal         func_467170
    ctx->pc = 0x290A80u;
    SET_GPR_U32(ctx, 31, 0x290A88u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x290A80u, 0x290A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A88u;
label_290a88:
    // 0x290a88: 0xaf80bc1c  sw          $zero, -0x43E4($gp)
    ctx->pc = 0x290a88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949916), GPR_U32(ctx, 0));
label_290a8c:
    // 0x290a8c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x290a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a94: 0xc091188  jal         func_244620
    ctx->pc = 0x290A94u;
    SET_GPR_U32(ctx, 31, 0x290A9Cu);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x290A94u, 0x290A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A9Cu;
label_290a9c:
    // 0x290a9c: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x290a9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290aa0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x290aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x290aa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x290aa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x290aa8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290AA8u;
    {
        const bool branch_taken_0x290aa8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x290aa8) {
            ctx->pc = 0x290ABCu;
            goto label_290abc;
        }
    }
    ctx->pc = 0x290AB0u;
    // 0x290ab0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x290ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290ab4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x290AB4u;
    SET_GPR_U32(ctx, 31, 0x290ABCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x290AB4u, 0x290ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290ABCu;
label_290abc:
    // 0x290abc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x290abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290ac0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x290ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290ac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290acc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x290accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x290ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x290AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290AD8u;
    // 0x290ad8: 0x0  nop
    ctx->pc = 0x290ad8u;
    // NOP
    // 0x290adc: 0x0  nop
    ctx->pc = 0x290adcu;
    // NOP
    ctx->pc = 0x290ae0u;
}
