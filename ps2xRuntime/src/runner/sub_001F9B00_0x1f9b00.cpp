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

// Function: sub_001F9B00
// Address: 0x1f9b00 - 0x1f9c60
void sub_001F9B00_0x1f9b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9B00_0x1f9b00");
#endif

    switch (ctx->pc) {
        case 0x1f9b34u: goto label_1f9b34;
        case 0x1f9b48u: goto label_1f9b48;
        case 0x1f9b6cu: goto label_1f9b6c;
        case 0x1f9b94u: goto label_1f9b94;
        case 0x1f9bb8u: goto label_1f9bb8;
        case 0x1f9be0u: goto label_1f9be0;
        case 0x1f9c10u: goto label_1f9c10;
        case 0x1f9c20u: goto label_1f9c20;
        case 0x1f9c44u: goto label_1f9c44;
        default: break;
    }

    ctx->pc = 0x1f9b00u;

    // 0x1f9b00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f9b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f9b04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f9b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f9b08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f9b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f9b0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f9b10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f9b14: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1f9b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1f9b18: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1f9b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1f9b1c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1f9b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1f9b20: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1f9b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1f9b24: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1f9b24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1f9b28: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f9b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9b2c: 0xc07cec0  jal         func_1F3B00
    ctx->pc = 0x1F9B2Cu;
    SET_GPR_U32(ctx, 31, 0x1F9B34u);
    ctx->pc = 0x1F3B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3B00u, 0x1F9B2Cu, 0x1F9B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B34u;
label_1f9b34:
    // 0x1f9b34: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1f9b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1f9b38: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1f9b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1f9b3c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f9b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f9b40: 0xc041954  jal         func_106550
    ctx->pc = 0x1F9B40u;
    SET_GPR_U32(ctx, 31, 0x1F9B48u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1F9B40u, 0x1F9B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B48u;
label_1f9b48:
    // 0x1f9b48: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1f9b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1f9b4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f9b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9b50: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1f9b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f9b54: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f9b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9b58: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1f9b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f9b5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f9b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f9b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b64: 0xc07e748  jal         func_1F9D20
    ctx->pc = 0x1F9B64u;
    SET_GPR_U32(ctx, 31, 0x1F9B6Cu);
    ctx->pc = 0x1F9D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9D20u, 0x1F9B64u, 0x1F9B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B6Cu;
label_1f9b6c:
    // 0x1f9b6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f9b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b70: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1f9b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b74: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f9b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9b78: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1f9b78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9b7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f9b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9b80: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1f9b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f9b84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f9b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b88: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1f9b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1f9b8c: 0xc0436e0  jal         func_10DB80
    ctx->pc = 0x1F9B8Cu;
    SET_GPR_U32(ctx, 31, 0x1F9B94u);
    ctx->pc = 0x10DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB80u, 0x1F9B8Cu, 0x1F9B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B94u;
label_1f9b94:
    // 0x1f9b94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b98: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1f9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f9b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9ba0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9BA0u;
    {
        const bool branch_taken_0x1f9ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f9ba0) {
            ctx->pc = 0x1F9BC4u;
            goto label_1f9bc4;
        }
    }
    ctx->pc = 0x1F9BA8u;
    // 0x1f9ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9bac: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1f9bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f9bb0: 0xc04282c  jal         func_10A0B0
    ctx->pc = 0x1F9BB0u;
    SET_GPR_U32(ctx, 31, 0x1F9BB8u);
    ctx->pc = 0x10A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A0B0u, 0x1F9BB0u, 0x1F9BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9BB8u;
label_1f9bb8:
    // 0x1f9bb8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1f9bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1f9bbc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9BBCu;
    {
        const bool branch_taken_0x1f9bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9bbc) {
            ctx->pc = 0x1F9BE4u;
            goto label_1f9be4;
        }
    }
    ctx->pc = 0x1F9BC4u;
label_1f9bc4:
    // 0x1f9bc4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1f9bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9bcc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1f9bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f9bd0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1f9bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f9bd4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1f9bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1f9bd8: 0xc043668  jal         func_10D9A0
    ctx->pc = 0x1F9BD8u;
    SET_GPR_U32(ctx, 31, 0x1F9BE0u);
    ctx->pc = 0x10D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D9A0u, 0x1F9BD8u, 0x1F9BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9BE0u;
label_1f9be0:
    // 0x1f9be0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9be4:
    // 0x1f9be4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1f9be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f9be8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F9BE8u;
    {
        const bool branch_taken_0x1f9be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9be8) {
            ctx->pc = 0x1F9C14u;
            goto label_1f9c14;
        }
    }
    ctx->pc = 0x1F9BF0u;
    // 0x1f9bf0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9bf4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1f9bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9bf8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1f9bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f9bfc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1f9bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f9c00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f9c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c04: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1f9c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f9c08: 0xc0436e0  jal         func_10DB80
    ctx->pc = 0x1F9C08u;
    SET_GPR_U32(ctx, 31, 0x1F9C10u);
    ctx->pc = 0x10DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB80u, 0x1F9C08u, 0x1F9C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9C10u;
label_1f9c10:
    // 0x1f9c10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9c14:
    // 0x1f9c14: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f9c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9c18: 0xc07e72c  jal         func_1F9CB0
    ctx->pc = 0x1F9C18u;
    SET_GPR_U32(ctx, 31, 0x1F9C20u);
    ctx->pc = 0x1F9CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9CB0u, 0x1F9C18u, 0x1F9C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9C20u;
label_1f9c20:
    // 0x1f9c20: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1f9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f9c24: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f9c28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9c2c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1f9c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9c30: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f9c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9c34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f9c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f9c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c3c: 0xc07e718  jal         func_1F9C60
    ctx->pc = 0x1F9C3Cu;
    SET_GPR_U32(ctx, 31, 0x1F9C44u);
    ctx->pc = 0x1F9C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9C60u, 0x1F9C3Cu, 0x1F9C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9C44u;
label_1f9c44:
    // 0x1f9c44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f9c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9c48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f9c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f9c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9c54: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1f9c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f9c58: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9C60u;
}
