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

// Function: sub_001FBC00
// Address: 0x1fbc00 - 0x1fbcd0
void sub_001FBC00_0x1fbc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBC00_0x1fbc00");
#endif

    switch (ctx->pc) {
        case 0x1fbc20u: goto label_1fbc20;
        case 0x1fbc2cu: goto label_1fbc2c;
        case 0x1fbc48u: goto label_1fbc48;
        case 0x1fbc60u: goto label_1fbc60;
        case 0x1fbc6cu: goto label_1fbc6c;
        case 0x1fbc88u: goto label_1fbc88;
        case 0x1fbc98u: goto label_1fbc98;
        case 0x1fbca8u: goto label_1fbca8;
        case 0x1fbcb8u: goto label_1fbcb8;
        default: break;
    }

    ctx->pc = 0x1fbc00u;

    // 0x1fbc00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fbc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fbc04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fbc08: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1fbc08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1fbc0c: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x1fbc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x1fbc10: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1fbc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1fbc14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1fbc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fbc18: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1FBC18u;
    SET_GPR_U32(ctx, 31, 0x1FBC20u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1FBC18u, 0x1FBC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC20u;
label_1fbc20:
    // 0x1fbc20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1fbc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fbc24: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1FBC24u;
    SET_GPR_U32(ctx, 31, 0x1FBC2Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1FBC24u, 0x1FBC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC2Cu;
label_1fbc2c:
    // 0x1fbc2c: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x1fbc2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fbc30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FBC30u;
    {
        const bool branch_taken_0x1fbc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbc30) {
            ctx->pc = 0x1FBC50u;
            goto label_1fbc50;
        }
    }
    ctx->pc = 0x1FBC38u;
    // 0x1fbc38: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1fbc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fbc3c: 0x27859988  addiu       $a1, $gp, -0x6678
    ctx->pc = 0x1fbc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941064));
    // 0x1fbc40: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x1FBC40u;
    SET_GPR_U32(ctx, 31, 0x1FBC48u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x1FBC40u, 0x1FBC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC48u;
label_1fbc48:
    // 0x1fbc48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBC48u;
    {
        const bool branch_taken_0x1fbc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbc48) {
            ctx->pc = 0x1FBC60u;
            goto label_1fbc60;
        }
    }
    ctx->pc = 0x1FBC50u;
label_1fbc50:
    // 0x1fbc50: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1fbc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fbc54: 0x27859990  addiu       $a1, $gp, -0x6670
    ctx->pc = 0x1fbc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941072));
    // 0x1fbc58: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x1FBC58u;
    SET_GPR_U32(ctx, 31, 0x1FBC60u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x1FBC58u, 0x1FBC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC60u;
label_1fbc60:
    // 0x1fbc60: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1fbc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fbc64: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FBC64u;
    SET_GPR_U32(ctx, 31, 0x1FBC6Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FBC64u, 0x1FBC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC6Cu;
label_1fbc6c:
    // 0x1fbc6c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1fbc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fbc70: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1fbc70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1fbc74: 0x24a58cb8  addiu       $a1, $a1, -0x7348
    ctx->pc = 0x1fbc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937784));
    // 0x1fbc78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fbc78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc7c: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x1fbc7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fbc80: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1FBC80u;
    SET_GPR_U32(ctx, 31, 0x1FBC88u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1FBC80u, 0x1FBC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC88u;
label_1fbc88:
    // 0x1fbc88: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fbc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fbc8c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1fbc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fbc90: 0xc042844  jal         func_10A110
    ctx->pc = 0x1FBC90u;
    SET_GPR_U32(ctx, 31, 0x1FBC98u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x1FBC90u, 0x1FBC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC98u;
label_1fbc98:
    // 0x1fbc98: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1fbc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fbc9c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fbc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fbca0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1FBCA0u;
    SET_GPR_U32(ctx, 31, 0x1FBCA8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1FBCA0u, 0x1FBCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCA8u;
label_1fbca8:
    // 0x1fbca8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1fbca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fbcac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fbcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fbcb0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1FBCB0u;
    SET_GPR_U32(ctx, 31, 0x1FBCB8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1FBCB0u, 0x1FBCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCB8u;
label_1fbcb8:
    // 0x1fbcb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fbcb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbcc0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1fbcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fbcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBCCCu;
    // 0x1fbccc: 0x0  nop
    ctx->pc = 0x1fbcccu;
    // NOP
    ctx->pc = 0x1fbcd0u;
}
