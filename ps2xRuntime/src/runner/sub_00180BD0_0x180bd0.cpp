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

// Function: sub_00180BD0
// Address: 0x180bd0 - 0x180ce0
void sub_00180BD0_0x180bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180BD0_0x180bd0");
#endif

    switch (ctx->pc) {
        case 0x180c04u: goto label_180c04;
        case 0x180c18u: goto label_180c18;
        case 0x180c3cu: goto label_180c3c;
        case 0x180c58u: goto label_180c58;
        case 0x180c70u: goto label_180c70;
        case 0x180c98u: goto label_180c98;
        case 0x180ca8u: goto label_180ca8;
        case 0x180cc4u: goto label_180cc4;
        default: break;
    }

    ctx->pc = 0x180bd0u;

    // 0x180bd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x180bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x180bd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x180bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x180bd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x180bdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180be0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180be4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x180be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x180be8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x180be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x180bec: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x180becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x180bf0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x180bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x180bf4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x180bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x180bf8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x180bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180bfc: 0xc05f31c  jal         func_17CC70
    ctx->pc = 0x180BFCu;
    SET_GPR_U32(ctx, 31, 0x180C04u);
    ctx->pc = 0x17CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CC70u, 0x180BFCu, 0x180C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180C04u;
label_180c04:
    // 0x180c04: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x180c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x180c08: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x180c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x180c0c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x180c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x180c10: 0xc041954  jal         func_106550
    ctx->pc = 0x180C10u;
    SET_GPR_U32(ctx, 31, 0x180C18u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x180C10u, 0x180C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180C18u;
label_180c18:
    // 0x180c18: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x180c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x180c1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x180c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180c20: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x180c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180c24: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x180c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180c28: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x180c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x180c2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x180c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c34: 0xc0609f8  jal         func_1827E0
    ctx->pc = 0x180C34u;
    SET_GPR_U32(ctx, 31, 0x180C3Cu);
    ctx->pc = 0x1827E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1827E0u, 0x180C34u, 0x180C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180C3Cu;
label_180c3c:
    // 0x180c3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x180c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c40: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x180c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180c44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x180c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180c48: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x180c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180c4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x180c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c50: 0xc041934  jal         func_1064D0
    ctx->pc = 0x180C50u;
    SET_GPR_U32(ctx, 31, 0x180C58u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x180C50u, 0x180C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180C58u;
label_180c58:
    // 0x180c58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c60: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x180c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x180c64: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x180c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180c68: 0xc06036c  jal         func_180DB0
    ctx->pc = 0x180C68u;
    SET_GPR_U32(ctx, 31, 0x180C70u);
    ctx->pc = 0x180DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180DB0u, 0x180C68u, 0x180C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180C70u;
label_180c70:
    // 0x180c70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c74: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x180c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x180c78: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180C78u;
    {
        const bool branch_taken_0x180c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180c78) {
            ctx->pc = 0x180C9Cu;
            goto label_180c9c;
        }
    }
    ctx->pc = 0x180C80u;
    // 0x180c80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x180c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180c84: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x180c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180c88: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x180c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x180c8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x180c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c90: 0xc041934  jal         func_1064D0
    ctx->pc = 0x180C90u;
    SET_GPR_U32(ctx, 31, 0x180C98u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x180C90u, 0x180C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180C98u;
label_180c98:
    // 0x180c98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180c9c:
    // 0x180c9c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x180c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180ca0: 0xc06034c  jal         func_180D30
    ctx->pc = 0x180CA0u;
    SET_GPR_U32(ctx, 31, 0x180CA8u);
    ctx->pc = 0x180D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180D30u, 0x180CA0u, 0x180CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180CA8u;
label_180ca8:
    // 0x180ca8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x180ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x180cac: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x180cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x180cb0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x180cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180cb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x180cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180cb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x180cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180cbc: 0xc060338  jal         func_180CE0
    ctx->pc = 0x180CBCu;
    SET_GPR_U32(ctx, 31, 0x180CC4u);
    ctx->pc = 0x180CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180CE0u, 0x180CBCu, 0x180CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180CC4u;
label_180cc4:
    // 0x180cc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x180cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180cc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180cd4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x180cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x180cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x180CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180CE0u;
}
