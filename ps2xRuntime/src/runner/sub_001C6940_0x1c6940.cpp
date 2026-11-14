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

// Function: sub_001C6940
// Address: 0x1c6940 - 0x1c6aa0
void sub_001C6940_0x1c6940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6940_0x1c6940");
#endif

    switch (ctx->pc) {
        case 0x1c6974u: goto label_1c6974;
        case 0x1c6988u: goto label_1c6988;
        case 0x1c69acu: goto label_1c69ac;
        case 0x1c69d4u: goto label_1c69d4;
        case 0x1c69f8u: goto label_1c69f8;
        case 0x1c6a20u: goto label_1c6a20;
        case 0x1c6a50u: goto label_1c6a50;
        case 0x1c6a60u: goto label_1c6a60;
        case 0x1c6a7cu: goto label_1c6a7c;
        default: break;
    }

    ctx->pc = 0x1c6940u;

    // 0x1c6940: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c6940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c6944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c6944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c6948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c6948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c694c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c694cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6950: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c6950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6954: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1c6954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1c6958: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1c6958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1c695c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1c695cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1c6960: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1c6960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1c6964: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1c6964u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1c6968: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c6968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c696c: 0xc071b58  jal         func_1C6D60
    ctx->pc = 0x1C696Cu;
    SET_GPR_U32(ctx, 31, 0x1C6974u);
    ctx->pc = 0x1C6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6D60u, 0x1C696Cu, 0x1C6974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6974u;
label_1c6974:
    // 0x1c6974: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1c6974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1c6978: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c6978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c697c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1c697cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c6980: 0xc041954  jal         func_106550
    ctx->pc = 0x1C6980u;
    SET_GPR_U32(ctx, 31, 0x1C6988u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1C6980u, 0x1C6988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6988u;
label_1c6988:
    // 0x1c6988: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1c6988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c698c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c6990: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1c6990u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6994: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c6994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6998: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1c6998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c699c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c699cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c69a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69a4: 0xc07257c  jal         func_1C95F0
    ctx->pc = 0x1C69A4u;
    SET_GPR_U32(ctx, 31, 0x1C69ACu);
    ctx->pc = 0x1C95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C95F0u, 0x1C69A4u, 0x1C69ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69ACu;
label_1c69ac:
    // 0x1c69ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c69acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69b0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1c69b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c69b8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1c69b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c69bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c69bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c69c0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1c69c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c69c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c69c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69c8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1c69c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1c69cc: 0xc071b38  jal         func_1C6CE0
    ctx->pc = 0x1C69CCu;
    SET_GPR_U32(ctx, 31, 0x1C69D4u);
    ctx->pc = 0x1C6CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6CE0u, 0x1C69CCu, 0x1C69D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69D4u;
label_1c69d4:
    // 0x1c69d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c69d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69d8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c69dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c69e0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C69E0u;
    {
        const bool branch_taken_0x1c69e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c69e0) {
            ctx->pc = 0x1C6A04u;
            goto label_1c6a04;
        }
    }
    ctx->pc = 0x1C69E8u;
    // 0x1c69e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c69e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69ec: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1c69ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c69f0: 0xc071b68  jal         func_1C6DA0
    ctx->pc = 0x1C69F0u;
    SET_GPR_U32(ctx, 31, 0x1C69F8u);
    ctx->pc = 0x1C6DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6DA0u, 0x1C69F0u, 0x1C69F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69F8u;
label_1c69f8:
    // 0x1c69f8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1c69f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c69fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C69FCu;
    {
        const bool branch_taken_0x1c69fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c69fc) {
            ctx->pc = 0x1C6A24u;
            goto label_1c6a24;
        }
    }
    ctx->pc = 0x1C6A04u;
label_1c6a04:
    // 0x1c6a04: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1c6a04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a0c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1c6a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c6a10: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1c6a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c6a14: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1c6a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c6a18: 0xc071b18  jal         func_1C6C60
    ctx->pc = 0x1C6A18u;
    SET_GPR_U32(ctx, 31, 0x1C6A20u);
    ctx->pc = 0x1C6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6C60u, 0x1C6A18u, 0x1C6A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A20u;
label_1c6a20:
    // 0x1c6a20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6a24:
    // 0x1c6a24: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1c6a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c6a28: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C6A28u;
    {
        const bool branch_taken_0x1c6a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6a28) {
            ctx->pc = 0x1C6A54u;
            goto label_1c6a54;
        }
    }
    ctx->pc = 0x1C6A30u;
    // 0x1c6a30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6a34: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1c6a34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6a38: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c6a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c6a3c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c6a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c6a40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c6a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a44: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1c6a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c6a48: 0xc071b38  jal         func_1C6CE0
    ctx->pc = 0x1C6A48u;
    SET_GPR_U32(ctx, 31, 0x1C6A50u);
    ctx->pc = 0x1C6CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6CE0u, 0x1C6A48u, 0x1C6A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A50u;
label_1c6a50:
    // 0x1c6a50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6a54:
    // 0x1c6a54: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c6a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6a58: 0xc071abc  jal         func_1C6AF0
    ctx->pc = 0x1C6A58u;
    SET_GPR_U32(ctx, 31, 0x1C6A60u);
    ctx->pc = 0x1C6AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AF0u, 0x1C6A58u, 0x1C6A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A60u;
label_1c6a60:
    // 0x1c6a60: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1c6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1c6a64: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1c6a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c6a68: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6a6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c6a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a74: 0xc071aa8  jal         func_1C6AA0
    ctx->pc = 0x1C6A74u;
    SET_GPR_U32(ctx, 31, 0x1C6A7Cu);
    ctx->pc = 0x1C6AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AA0u, 0x1C6A74u, 0x1C6A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A7Cu;
label_1c6a7c:
    // 0x1c6a7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c6a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6a80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c6a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6a84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c6a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6a8c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1c6a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c6a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6A98u;
    // 0x1c6a98: 0x0  nop
    ctx->pc = 0x1c6a98u;
    // NOP
    // 0x1c6a9c: 0x0  nop
    ctx->pc = 0x1c6a9cu;
    // NOP
    ctx->pc = 0x1c6aa0u;
}
