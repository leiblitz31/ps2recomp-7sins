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

// Function: sub_0027FF00
// Address: 0x27ff00 - 0x27ffe0
void sub_0027FF00_0x27ff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FF00_0x27ff00");
#endif

    switch (ctx->pc) {
        case 0x27ff20u: goto label_27ff20;
        case 0x27ff30u: goto label_27ff30;
        case 0x27ff40u: goto label_27ff40;
        case 0x27ff50u: goto label_27ff50;
        case 0x27ff60u: goto label_27ff60;
        case 0x27ff6cu: goto label_27ff6c;
        case 0x27ff78u: goto label_27ff78;
        case 0x27ff98u: goto label_27ff98;
        case 0x27ffb8u: goto label_27ffb8;
        default: break;
    }

    ctx->pc = 0x27ff00u;

    // 0x27ff00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27ff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27ff04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27ff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27ff08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27ff08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27ff0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ff0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27ff10: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x27ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x27ff14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27ff18: 0xc041b48  jal         func_106D20
    ctx->pc = 0x27FF18u;
    SET_GPR_U32(ctx, 31, 0x27FF20u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x27FF18u, 0x27FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF20u;
label_27ff20:
    // 0x27ff20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x27ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ff24: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x27ff24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27ff28: 0xc040304  jal         func_100C10
    ctx->pc = 0x27FF28u;
    SET_GPR_U32(ctx, 31, 0x27FF30u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x27FF28u, 0x27FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF30u;
label_27ff30:
    // 0x27ff30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27ff30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27ff34: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x27ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ff38: 0xc119138  jal         func_4644E0
    ctx->pc = 0x27FF38u;
    SET_GPR_U32(ctx, 31, 0x27FF40u);
    ctx->pc = 0x4644E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4644E0u, 0x27FF38u, 0x27FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF40u;
label_27ff40:
    // 0x27ff40: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x27ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ff44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ff48: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x27FF48u;
    SET_GPR_U32(ctx, 31, 0x27FF50u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FF48u, 0x27FF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF50u;
label_27ff50:
    // 0x27ff50: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27ff54: 0x2785a228  addiu       $a1, $gp, -0x5DD8
    ctx->pc = 0x27ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943272));
    // 0x27ff58: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x27FF58u;
    SET_GPR_U32(ctx, 31, 0x27FF60u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x27FF58u, 0x27FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF60u;
label_27ff60:
    // 0x27ff60: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27ff60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27ff64: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x27FF64u;
    SET_GPR_U32(ctx, 31, 0x27FF6Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x27FF64u, 0x27FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF6Cu;
label_27ff6c:
    // 0x27ff6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27ff6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff70: 0xc0f0b92  jal         func_3C2E48
    ctx->pc = 0x27FF70u;
    SET_GPR_U32(ctx, 31, 0x27FF78u);
    ctx->pc = 0x3C2E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E48u, 0x27FF70u, 0x27FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF78u;
label_27ff78:
    // 0x27ff78: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27FF78u;
    {
        const bool branch_taken_0x27ff78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ff78) {
            ctx->pc = 0x27FFA4u;
            goto label_27ffa4;
        }
    }
    ctx->pc = 0x27FF80u;
    // 0x27ff80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ff84: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x27ff84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27ff88: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27ff8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27ff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ff90: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x27FF90u;
    SET_GPR_U32(ctx, 31, 0x27FF98u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FF90u, 0x27FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF98u;
label_27ff98:
    // 0x27ff98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27ff98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27FF9Cu;
    {
        const bool branch_taken_0x27ff9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ff9c) {
            ctx->pc = 0x27FFBCu;
            goto label_27ffbc;
        }
    }
    ctx->pc = 0x27FFA4u;
label_27ffa4:
    // 0x27ffa4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27ffa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ffa8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27ffac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ffb0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x27FFB0u;
    SET_GPR_U32(ctx, 31, 0x27FFB8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FFB0u, 0x27FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFB8u;
label_27ffb8:
    // 0x27ffb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27ffb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ffbc:
    // 0x27ffbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27ffbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ffc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ffc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ffc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ffc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ffc8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27ffc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27ffcc: 0x3e00008  jr          $ra
    ctx->pc = 0x27FFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FFD4u;
    // 0x27ffd4: 0x0  nop
    ctx->pc = 0x27ffd4u;
    // NOP
    // 0x27ffd8: 0x0  nop
    ctx->pc = 0x27ffd8u;
    // NOP
    // 0x27ffdc: 0x0  nop
    ctx->pc = 0x27ffdcu;
    // NOP
    ctx->pc = 0x27ffe0u;
}
