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

// Function: sub_00168BC0
// Address: 0x168bc0 - 0x168cc0
void sub_00168BC0_0x168bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168BC0_0x168bc0");
#endif

    switch (ctx->pc) {
        case 0x168bdcu: goto label_168bdc;
        case 0x168c08u: goto label_168c08;
        case 0x168c18u: goto label_168c18;
        case 0x168c30u: goto label_168c30;
        case 0x168c40u: goto label_168c40;
        case 0x168c50u: goto label_168c50;
        case 0x168c60u: goto label_168c60;
        case 0x168c70u: goto label_168c70;
        case 0x168ca0u: goto label_168ca0;
        case 0x168cb0u: goto label_168cb0;
        default: break;
    }

    ctx->pc = 0x168bc0u;

    // 0x168bc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x168bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x168bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168bc8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x168bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x168bcc: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x168bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x168bd0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x168bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168bd4: 0xc0495d4  jal         func_125750
    ctx->pc = 0x168BD4u;
    SET_GPR_U32(ctx, 31, 0x168BDCu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x168BD4u, 0x168BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168BDCu;
label_168bdc:
    // 0x168bdc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x168bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168be0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x168be0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168be4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x168be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x168be8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x168be8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x168bec: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x168becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x168bf0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x168BF0u;
    {
        const bool branch_taken_0x168bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x168bf0) {
            ctx->pc = 0x168C20u;
            goto label_168c20;
        }
    }
    ctx->pc = 0x168BF8u;
    // 0x168bf8: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x168bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x168bfc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x168bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168c00: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x168C00u;
    SET_GPR_U32(ctx, 31, 0x168C08u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x168C00u, 0x168C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168C08u;
label_168c08:
    // 0x168c08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x168c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168c0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c10: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x168C10u;
    SET_GPR_U32(ctx, 31, 0x168C18u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x168C10u, 0x168C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168C18u;
label_168c18:
    // 0x168c18: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x168C18u;
    {
        const bool branch_taken_0x168c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168c18) {
            ctx->pc = 0x168C70u;
            goto label_168c70;
        }
    }
    ctx->pc = 0x168C20u;
label_168c20:
    // 0x168c20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x168c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168c24: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x168c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168c28: 0xc040304  jal         func_100C10
    ctx->pc = 0x168C28u;
    SET_GPR_U32(ctx, 31, 0x168C30u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x168C28u, 0x168C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168C30u;
label_168c30:
    // 0x168c30: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x168c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x168c34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x168c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168c38: 0xc119568  jal         func_4655A0
    ctx->pc = 0x168C38u;
    SET_GPR_U32(ctx, 31, 0x168C40u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x168C38u, 0x168C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168C40u;
label_168c40:
    // 0x168c40: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x168c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168c44: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x168c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x168c48: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x168C48u;
    SET_GPR_U32(ctx, 31, 0x168C50u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x168C48u, 0x168C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168C50u;
label_168c50:
    // 0x168c50: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x168c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x168c54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x168c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168c58: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x168C58u;
    SET_GPR_U32(ctx, 31, 0x168C60u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x168C58u, 0x168C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168C60u;
label_168c60:
    // 0x168c60: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x168c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168c64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x168c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168c68: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x168C68u;
    SET_GPR_U32(ctx, 31, 0x168C70u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x168C68u, 0x168C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168C70u;
label_168c70:
    // 0x168c70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x168c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168c74: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x168c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x168c78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168C78u;
    {
        const bool branch_taken_0x168c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168c78) {
            ctx->pc = 0x168CA0u;
            goto label_168ca0;
        }
    }
    ctx->pc = 0x168C80u;
    // 0x168c80: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x168c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168c84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x168c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168c88: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x168c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x168c8c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x168c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x168c90: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x168c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168c94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x168c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168c98: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x168C98u;
    SET_GPR_U32(ctx, 31, 0x168CA0u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x168C98u, 0x168CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168CA0u;
label_168ca0:
    // 0x168ca0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x168ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168ca4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x168ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168ca8: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x168CA8u;
    SET_GPR_U32(ctx, 31, 0x168CB0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x168CA8u, 0x168CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168CB0u;
label_168cb0:
    // 0x168cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168cb4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x168cb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x168cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x168CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168CC0u;
}
