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

// Function: sub_001E8960
// Address: 0x1e8960 - 0x1e8ac0
void sub_001E8960_0x1e8960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8960_0x1e8960");
#endif

    switch (ctx->pc) {
        case 0x1e8994u: goto label_1e8994;
        case 0x1e89a8u: goto label_1e89a8;
        case 0x1e89ccu: goto label_1e89cc;
        case 0x1e89f4u: goto label_1e89f4;
        case 0x1e8a18u: goto label_1e8a18;
        case 0x1e8a40u: goto label_1e8a40;
        case 0x1e8a70u: goto label_1e8a70;
        case 0x1e8a80u: goto label_1e8a80;
        case 0x1e8aa4u: goto label_1e8aa4;
        default: break;
    }

    ctx->pc = 0x1e8960u;

    // 0x1e8960: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e8960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e8964: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e8964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e8968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e896c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e896cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e8970: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8974: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1e8974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1e8978: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1e8978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1e897c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1e897cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1e8980: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1e8980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1e8984: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1e8984u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1e8988: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e8988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e898c: 0xc078608  jal         func_1E1820
    ctx->pc = 0x1E898Cu;
    SET_GPR_U32(ctx, 31, 0x1E8994u);
    ctx->pc = 0x1E1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1820u, 0x1E898Cu, 0x1E8994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8994u;
label_1e8994:
    // 0x1e8994: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1e8994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1e8998: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1e8998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1e899c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1e899cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e89a0: 0xc041954  jal         func_106550
    ctx->pc = 0x1E89A0u;
    SET_GPR_U32(ctx, 31, 0x1E89A8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1E89A0u, 0x1E89A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E89A8u;
label_1e89a8:
    // 0x1e89a8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1e89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1e89ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e89acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e89b0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1e89b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e89b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e89b8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e89b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e89bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e89bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e89c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89c4: 0xc07a6e4  jal         func_1E9B90
    ctx->pc = 0x1E89C4u;
    SET_GPR_U32(ctx, 31, 0x1E89CCu);
    ctx->pc = 0x1E9B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9B90u, 0x1E89C4u, 0x1E89CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E89CCu;
label_1e89cc:
    // 0x1e89cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e89ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89d0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1e89d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e89d8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1e89d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e89dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e89dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e89e0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e89e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e89e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e89e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89e8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1e89e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e89ec: 0xc07a370  jal         func_1E8DC0
    ctx->pc = 0x1E89ECu;
    SET_GPR_U32(ctx, 31, 0x1E89F4u);
    ctx->pc = 0x1E8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8DC0u, 0x1E89ECu, 0x1E89F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E89F4u;
label_1e89f4:
    // 0x1e89f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e89f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89f8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1e89f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e89fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8a00: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8A00u;
    {
        const bool branch_taken_0x1e8a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8a00) {
            ctx->pc = 0x1E8A24u;
            goto label_1e8a24;
        }
    }
    ctx->pc = 0x1E8A08u;
    // 0x1e8a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a0c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1e8a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8a10: 0xc07a300  jal         func_1E8C00
    ctx->pc = 0x1E8A10u;
    SET_GPR_U32(ctx, 31, 0x1E8A18u);
    ctx->pc = 0x1E8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8C00u, 0x1E8A10u, 0x1E8A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A18u;
label_1e8a18:
    // 0x1e8a18: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1e8a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1e8a1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8A1Cu;
    {
        const bool branch_taken_0x1e8a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a1c) {
            ctx->pc = 0x1E8A44u;
            goto label_1e8a44;
        }
    }
    ctx->pc = 0x1E8A24u;
label_1e8a24:
    // 0x1e8a24: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1e8a24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a2c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1e8a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e8a30: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1e8a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8a34: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1e8a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1e8a38: 0xc07a2e0  jal         func_1E8B80
    ctx->pc = 0x1E8A38u;
    SET_GPR_U32(ctx, 31, 0x1E8A40u);
    ctx->pc = 0x1E8B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8B80u, 0x1E8A38u, 0x1E8A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A40u;
label_1e8a40:
    // 0x1e8a40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e8a44:
    // 0x1e8a44: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1e8a44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e8a48: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E8A48u;
    {
        const bool branch_taken_0x1e8a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a48) {
            ctx->pc = 0x1E8A74u;
            goto label_1e8a74;
        }
    }
    ctx->pc = 0x1E8A50u;
    // 0x1e8a50: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e8a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8a54: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1e8a54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8a58: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e8a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8a5c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e8a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e8a60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a64: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e8a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e8a68: 0xc07a370  jal         func_1E8DC0
    ctx->pc = 0x1E8A68u;
    SET_GPR_U32(ctx, 31, 0x1E8A70u);
    ctx->pc = 0x1E8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8DC0u, 0x1E8A68u, 0x1E8A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A70u;
label_1e8a70:
    // 0x1e8a70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e8a74:
    // 0x1e8a74: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e8a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8a78: 0xc07a2c4  jal         func_1E8B10
    ctx->pc = 0x1E8A78u;
    SET_GPR_U32(ctx, 31, 0x1E8A80u);
    ctx->pc = 0x1E8B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8B10u, 0x1E8A78u, 0x1E8A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A80u;
label_1e8a80:
    // 0x1e8a80: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e8a84: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e8a88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8a8c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1e8a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e8a90: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e8a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8a94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e8a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a9c: 0xc07a2b0  jal         func_1E8AC0
    ctx->pc = 0x1E8A9Cu;
    SET_GPR_U32(ctx, 31, 0x1E8AA4u);
    ctx->pc = 0x1E8AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8AC0u, 0x1E8A9Cu, 0x1E8AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8AA4u;
label_1e8aa4:
    // 0x1e8aa4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e8aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8aa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e8aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8aac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8ab4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1e8ab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e8ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8AC0u;
}
