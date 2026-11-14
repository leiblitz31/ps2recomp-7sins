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

// Function: sub_00482C10
// Address: 0x482c10 - 0x482d20
void sub_00482C10_0x482c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482C10_0x482c10");
#endif

    switch (ctx->pc) {
        case 0x482c44u: goto label_482c44;
        case 0x482c58u: goto label_482c58;
        case 0x482c7cu: goto label_482c7c;
        case 0x482c98u: goto label_482c98;
        case 0x482cb0u: goto label_482cb0;
        case 0x482cd8u: goto label_482cd8;
        case 0x482ce8u: goto label_482ce8;
        case 0x482d04u: goto label_482d04;
        default: break;
    }

    ctx->pc = 0x482c10u;

    // 0x482c10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x482c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x482c14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x482c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x482c18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x482c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x482c1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x482c20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x482c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x482c24: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x482c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x482c28: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x482c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x482c2c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x482c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x482c30: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x482c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x482c34: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x482c34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x482c38: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x482c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x482c3c: 0xc120b98  jal         func_482E60
    ctx->pc = 0x482C3Cu;
    SET_GPR_U32(ctx, 31, 0x482C44u);
    ctx->pc = 0x482E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482E60u, 0x482C3Cu, 0x482C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482C44u;
label_482c44:
    // 0x482c44: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x482c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x482c48: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x482c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x482c4c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x482c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x482c50: 0xc041954  jal         func_106550
    ctx->pc = 0x482C50u;
    SET_GPR_U32(ctx, 31, 0x482C58u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x482C50u, 0x482C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482C58u;
label_482c58:
    // 0x482c58: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x482c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x482c5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x482c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x482c60: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x482c60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x482c64: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x482c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x482c68: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x482c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x482c6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x482c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482c70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x482c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482c74: 0xc121450  jal         func_485140
    ctx->pc = 0x482C74u;
    SET_GPR_U32(ctx, 31, 0x482C7Cu);
    ctx->pc = 0x485140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485140u, 0x482C74u, 0x482C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482C7Cu;
label_482c7c:
    // 0x482c7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x482c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482c80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x482c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x482c84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x482c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x482c88: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x482c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x482c8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x482c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482c90: 0xc041934  jal         func_1064D0
    ctx->pc = 0x482C90u;
    SET_GPR_U32(ctx, 31, 0x482C98u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x482C90u, 0x482C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482C98u;
label_482c98:
    // 0x482c98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x482c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x482c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482ca0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x482ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x482ca4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x482ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x482ca8: 0xc120b7c  jal         func_482DF0
    ctx->pc = 0x482CA8u;
    SET_GPR_U32(ctx, 31, 0x482CB0u);
    ctx->pc = 0x482DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482DF0u, 0x482CA8u, 0x482CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482CB0u;
label_482cb0:
    // 0x482cb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x482cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482cb4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x482cb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x482cb8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x482CB8u;
    {
        const bool branch_taken_0x482cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x482cb8) {
            ctx->pc = 0x482CDCu;
            goto label_482cdc;
        }
    }
    ctx->pc = 0x482CC0u;
    // 0x482cc0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x482cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x482cc4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x482cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x482cc8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x482cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x482ccc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x482cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482cd0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x482CD0u;
    SET_GPR_U32(ctx, 31, 0x482CD8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x482CD0u, 0x482CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482CD8u;
label_482cd8:
    // 0x482cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x482cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_482cdc:
    // 0x482cdc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x482cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x482ce0: 0xc120b5c  jal         func_482D70
    ctx->pc = 0x482CE0u;
    SET_GPR_U32(ctx, 31, 0x482CE8u);
    ctx->pc = 0x482D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482D70u, 0x482CE0u, 0x482CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482CE8u;
label_482ce8:
    // 0x482ce8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x482ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x482cec: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x482cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x482cf0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x482cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x482cf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x482cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482cf8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x482cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482cfc: 0xc120b48  jal         func_482D20
    ctx->pc = 0x482CFCu;
    SET_GPR_U32(ctx, 31, 0x482D04u);
    ctx->pc = 0x482D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482D20u, 0x482CFCu, 0x482D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482D04u;
label_482d04:
    // 0x482d04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x482d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x482d08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x482d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482d0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x482d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482d14: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x482d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x482d18: 0x3e00008  jr          $ra
    ctx->pc = 0x482D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482D20u;
}
