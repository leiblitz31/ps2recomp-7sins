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

// Function: sub_00385C30
// Address: 0x385c30 - 0x385cb0
void sub_00385C30_0x385c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385C30_0x385c30");
#endif

    switch (ctx->pc) {
        case 0x385c60u: goto label_385c60;
        case 0x385c74u: goto label_385c74;
        case 0x385c80u: goto label_385c80;
        case 0x385c8cu: goto label_385c8c;
        default: break;
    }

    ctx->pc = 0x385c30u;

    // 0x385c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x385c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x385c34: 0x8f85a970  lw          $a1, -0x5690($gp)
    ctx->pc = 0x385c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945136)));
    // 0x385c38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x385c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x385c3c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x385c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x385c40: 0x8f87a974  lw          $a3, -0x568C($gp)
    ctx->pc = 0x385c40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945140)));
    // 0x385c44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x385c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385c48: 0x8f88bd04  lw          $t0, -0x42FC($gp)
    ctx->pc = 0x385c48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950148)));
    // 0x385c4c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x385c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x385c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385c54: 0x35290135  ori         $t1, $t1, 0x135
    ctx->pc = 0x385c54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)309);
    // 0x385c58: 0xc10408c  jal         func_410230
    ctx->pc = 0x385C58u;
    SET_GPR_U32(ctx, 31, 0x385C60u);
    ctx->pc = 0x385C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385C58u;
    // 0x385c5c: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x385C58u, 0x385C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385C60u;
label_385c60:
    // 0x385c60: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x385c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x385c64: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x385c64u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x385c68: 0x2484ad08  addiu       $a0, $a0, -0x52F8
    ctx->pc = 0x385c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946056));
    // 0x385c6c: 0xc0f04fc  jal         func_3C13F0
    ctx->pc = 0x385C6Cu;
    SET_GPR_U32(ctx, 31, 0x385C74u);
    ctx->pc = 0x385C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385C6Cu;
    // 0x385c70: 0xaf82bd04  sw          $v0, -0x42FC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C13F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C13F0u, 0x385C6Cu, 0x385C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385C74u;
label_385c74:
    // 0x385c74: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x385c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x385c78: 0xc0ef19a  jal         func_3BC668
    ctx->pc = 0x385C78u;
    SET_GPR_U32(ctx, 31, 0x385C80u);
    ctx->pc = 0x385C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385C78u;
    // 0x385c7c: 0x2484ad40  addiu       $a0, $a0, -0x52C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC668u, 0x385C78u, 0x385C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385C80u;
label_385c80:
    // 0x385c80: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x385c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x385c84: 0xc0ef19a  jal         func_3BC668
    ctx->pc = 0x385C84u;
    SET_GPR_U32(ctx, 31, 0x385C8Cu);
    ctx->pc = 0x385C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385C84u;
    // 0x385c88: 0x2484ad70  addiu       $a0, $a0, -0x5290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC668u, 0x385C84u, 0x385C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385C8Cu;
label_385c8c:
    // 0x385c8c: 0x8f83a96c  lw          $v1, -0x5694($gp)
    ctx->pc = 0x385c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945132)));
    // 0x385c90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x385c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385c94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x385c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385c98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x385c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x385c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385ca0: 0xaf83a96c  sw          $v1, -0x5694($gp)
    ctx->pc = 0x385ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945132), GPR_U32(ctx, 3));
    // 0x385ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x385CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CA4u;
        // 0x385ca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385CACu;
    // 0x385cac: 0x0  nop
    ctx->pc = 0x385cacu;
    // NOP
    ctx->pc = 0x385cb0u;
}
