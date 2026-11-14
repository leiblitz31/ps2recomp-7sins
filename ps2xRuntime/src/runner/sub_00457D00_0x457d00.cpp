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

// Function: sub_00457D00
// Address: 0x457d00 - 0x457de0
void sub_00457D00_0x457d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457D00_0x457d00");
#endif

    switch (ctx->pc) {
        case 0x457d2cu: goto label_457d2c;
        case 0x457d44u: goto label_457d44;
        case 0x457d68u: goto label_457d68;
        case 0x457d80u: goto label_457d80;
        case 0x457d90u: goto label_457d90;
        case 0x457da0u: goto label_457da0;
        case 0x457db0u: goto label_457db0;
        case 0x457dc0u: goto label_457dc0;
        default: break;
    }

    ctx->pc = 0x457d00u;

    // 0x457d00: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x457d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x457d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x457d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x457d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x457d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x457d0c: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x457d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x457d10: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x457d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x457d14: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x457d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
    // 0x457d18: 0xafa70150  sw          $a3, 0x150($sp)
    ctx->pc = 0x457d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 7));
    // 0x457d1c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x457d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x457d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x457d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457d24: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x457D24u;
    SET_GPR_U32(ctx, 31, 0x457D2Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x457D24u, 0x457D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457D2Cu;
label_457d2c:
    // 0x457d2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x457d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x457d30: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x457d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x457d34: 0x2786b0c8  addiu       $a2, $gp, -0x4F38
    ctx->pc = 0x457d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947016));
    // 0x457d38: 0x8fa70130  lw          $a3, 0x130($sp)
    ctx->pc = 0x457d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x457d3c: 0xc0bc398  jal         func_2F0E60
    ctx->pc = 0x457D3Cu;
    SET_GPR_U32(ctx, 31, 0x457D44u);
    ctx->pc = 0x2F0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0E60u, 0x457D3Cu, 0x457D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457D44u;
label_457d44:
    // 0x457d44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x457d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457d48: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x457d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x457d4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x457d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x457d50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x457D50u;
    {
        const bool branch_taken_0x457d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x457d50) {
            ctx->pc = 0x457D70u;
            goto label_457d70;
        }
    }
    ctx->pc = 0x457D58u;
    // 0x457d58: 0x2784b0b4  addiu       $a0, $gp, -0x4F4C
    ctx->pc = 0x457d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946996));
    // 0x457d5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x457d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457d60: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x457D60u;
    SET_GPR_U32(ctx, 31, 0x457D68u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x457D60u, 0x457D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457D68u;
label_457d68:
    // 0x457d68: 0xd  break       0
    ctx->pc = 0x457d68u;
    runtime->handleBreak(rdram, ctx);
    // 0x457d6c: 0x0  nop
    ctx->pc = 0x457d6cu;
    // NOP
label_457d70:
    // 0x457d70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x457d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x457d74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x457d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457d78: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x457D78u;
    SET_GPR_U32(ctx, 31, 0x457D80u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x457D78u, 0x457D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457D80u;
label_457d80:
    // 0x457d80: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x457d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x457d84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x457d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457d88: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x457D88u;
    SET_GPR_U32(ctx, 31, 0x457D90u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x457D88u, 0x457D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457D90u;
label_457d90:
    // 0x457d90: 0x2784b0d0  addiu       $a0, $gp, -0x4F30
    ctx->pc = 0x457d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947024));
    // 0x457d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x457d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457d98: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x457D98u;
    SET_GPR_U32(ctx, 31, 0x457DA0u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x457D98u, 0x457DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457DA0u;
label_457da0:
    // 0x457da0: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x457da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x457da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x457da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457da8: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x457DA8u;
    SET_GPR_U32(ctx, 31, 0x457DB0u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x457DA8u, 0x457DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457DB0u;
label_457db0:
    // 0x457db0: 0x2784b0d8  addiu       $a0, $gp, -0x4F28
    ctx->pc = 0x457db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947032));
    // 0x457db4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x457db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457db8: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x457DB8u;
    SET_GPR_U32(ctx, 31, 0x457DC0u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x457DB8u, 0x457DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457DC0u;
label_457dc0:
    // 0x457dc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x457dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457dc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x457dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457dc8: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x457dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x457dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x457DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457DD4u;
    // 0x457dd4: 0x0  nop
    ctx->pc = 0x457dd4u;
    // NOP
    // 0x457dd8: 0x0  nop
    ctx->pc = 0x457dd8u;
    // NOP
    // 0x457ddc: 0x0  nop
    ctx->pc = 0x457ddcu;
    // NOP
    ctx->pc = 0x457de0u;
}
