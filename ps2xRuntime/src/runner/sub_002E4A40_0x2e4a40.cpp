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

// Function: sub_002E4A40
// Address: 0x2e4a40 - 0x2e4b50
void sub_002E4A40_0x2e4a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4A40_0x2e4a40");
#endif

    switch (ctx->pc) {
        case 0x2e4a74u: goto label_2e4a74;
        case 0x2e4a88u: goto label_2e4a88;
        case 0x2e4aacu: goto label_2e4aac;
        case 0x2e4ac8u: goto label_2e4ac8;
        case 0x2e4ae0u: goto label_2e4ae0;
        case 0x2e4b08u: goto label_2e4b08;
        case 0x2e4b18u: goto label_2e4b18;
        case 0x2e4b34u: goto label_2e4b34;
        default: break;
    }

    ctx->pc = 0x2e4a40u;

    // 0x2e4a40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e4a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e4a44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e4a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e4a48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e4a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e4a4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e4a50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4a54: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2e4a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2e4a58: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2e4a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2e4a5c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2e4a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2e4a60: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2e4a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2e4a64: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2e4a64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e4a68: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2e4a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4a6c: 0xc0b91dc  jal         func_2E4770
    ctx->pc = 0x2E4A6Cu;
    SET_GPR_U32(ctx, 31, 0x2E4A74u);
    ctx->pc = 0x2E4770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4770u, 0x2E4A6Cu, 0x2E4A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A74u;
label_2e4a74:
    // 0x2e4a74: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2e4a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2e4a78: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2e4a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2e4a7c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2e4a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e4a80: 0xc041954  jal         func_106550
    ctx->pc = 0x2E4A80u;
    SET_GPR_U32(ctx, 31, 0x2E4A88u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2E4A80u, 0x2E4A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A88u;
label_2e4a88:
    // 0x2e4a88: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2e4a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2e4a8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4a90: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2e4a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e4a94: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4a98: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2e4a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e4a9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e4a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4aa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e4aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4aa4: 0xc0b95e8  jal         func_2E57A0
    ctx->pc = 0x2E4AA4u;
    SET_GPR_U32(ctx, 31, 0x2E4AACu);
    ctx->pc = 0x2E57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E57A0u, 0x2E4AA4u, 0x2E4AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4AACu;
label_2e4aac:
    // 0x2e4aac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e4aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ab0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4ab4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e4ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4ab8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2e4ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e4abc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e4abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ac0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2E4AC0u;
    SET_GPR_U32(ctx, 31, 0x2E4AC8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2E4AC0u, 0x2E4AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4AC8u;
label_2e4ac8:
    // 0x2e4ac8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e4ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ad0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2e4ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e4ad4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2e4ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e4ad8: 0xc0b9308  jal         func_2E4C20
    ctx->pc = 0x2E4AD8u;
    SET_GPR_U32(ctx, 31, 0x2E4AE0u);
    ctx->pc = 0x2E4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4C20u, 0x2E4AD8u, 0x2E4AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4AE0u;
label_2e4ae0:
    // 0x2e4ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e4ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ae4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2e4ae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e4ae8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4AE8u;
    {
        const bool branch_taken_0x2e4ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4ae8) {
            ctx->pc = 0x2E4B0Cu;
            goto label_2e4b0c;
        }
    }
    ctx->pc = 0x2E4AF0u;
    // 0x2e4af0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4af4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e4af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e4af8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2e4af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e4afc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e4afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4b00: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2E4B00u;
    SET_GPR_U32(ctx, 31, 0x2E4B08u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2E4B00u, 0x2E4B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B08u;
label_2e4b08:
    // 0x2e4b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e4b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4b0c:
    // 0x2e4b0c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2e4b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4b10: 0xc0b92e8  jal         func_2E4BA0
    ctx->pc = 0x2E4B10u;
    SET_GPR_U32(ctx, 31, 0x2E4B18u);
    ctx->pc = 0x2E4BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4BA0u, 0x2E4B10u, 0x2E4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B18u;
label_2e4b18:
    // 0x2e4b18: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2e4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2e4b1c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2e4b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e4b20: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2e4b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4b24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e4b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4b28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e4b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4b2c: 0xc0b92d4  jal         func_2E4B50
    ctx->pc = 0x2E4B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E4B34u);
    ctx->pc = 0x2E4B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4B50u, 0x2E4B2Cu, 0x2E4B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B34u;
label_2e4b34:
    // 0x2e4b34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e4b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4b38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e4b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4b3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4b40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4b44: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2e4b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e4b48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4B50u;
}
