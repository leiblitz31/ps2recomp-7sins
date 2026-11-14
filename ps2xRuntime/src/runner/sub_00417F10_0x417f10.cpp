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

// Function: sub_00417F10
// Address: 0x417f10 - 0x417f70
void sub_00417F10_0x417f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417F10_0x417f10");
#endif

    switch (ctx->pc) {
        case 0x417f10u: goto label_417f10;
        case 0x417f14u: goto label_417f14;
        case 0x417f18u: goto label_417f18;
        case 0x417f1cu: goto label_417f1c;
        case 0x417f20u: goto label_417f20;
        case 0x417f24u: goto label_417f24;
        case 0x417f28u: goto label_417f28;
        case 0x417f2cu: goto label_417f2c;
        case 0x417f30u: goto label_417f30;
        case 0x417f34u: goto label_417f34;
        case 0x417f38u: goto label_417f38;
        case 0x417f3cu: goto label_417f3c;
        case 0x417f40u: goto label_417f40;
        case 0x417f44u: goto label_417f44;
        case 0x417f48u: goto label_417f48;
        case 0x417f4cu: goto label_417f4c;
        case 0x417f50u: goto label_417f50;
        case 0x417f54u: goto label_417f54;
        case 0x417f58u: goto label_417f58;
        case 0x417f5cu: goto label_417f5c;
        case 0x417f60u: goto label_417f60;
        case 0x417f64u: goto label_417f64;
        case 0x417f68u: goto label_417f68;
        case 0x417f6cu: goto label_417f6c;
        default: break;
    }

    ctx->pc = 0x417f10u;

label_417f10:
    // 0x417f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x417f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_417f14:
    // 0x417f14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x417f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_417f18:
    // 0x417f18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x417f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_417f1c:
    // 0x417f1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x417f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_417f20:
    // 0x417f20: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x417f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_417f24:
    // 0x417f24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x417f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417f28:
    // 0x417f28: 0xc104ca6  jal         func_413298
label_417f2c:
    if (ctx->pc == 0x417F2Cu) {
        ctx->pc = 0x417F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F28u;
        // 0x417f2c: 0x2484c898  addiu       $a0, $a0, -0x3768 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417F30u;
        goto label_417f30;
    }
    ctx->pc = 0x417F28u;
    SET_GPR_U32(ctx, 31, 0x417F30u);
    ctx->pc = 0x417F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417F28u;
    // 0x417f2c: 0x2484c898  addiu       $a0, $a0, -0x3768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x417F28u, 0x417F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417F30u;
label_417f30:
    // 0x417f30: 0xc1083c6  jal         func_420F18
label_417f34:
    if (ctx->pc == 0x417F34u) {
        ctx->pc = 0x417F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F30u;
        // 0x417f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417F38u;
        goto label_417f38;
    }
    ctx->pc = 0x417F30u;
    SET_GPR_U32(ctx, 31, 0x417F38u);
    ctx->pc = 0x417F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417F30u;
    // 0x417f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420F18u, 0x417F30u, 0x417F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417F38u;
label_417f38:
    // 0x417f38: 0x8f86bdf8  lw          $a2, -0x4208($gp)
    ctx->pc = 0x417f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950392)));
label_417f3c:
    // 0x417f3c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x417f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_417f40:
    // 0x417f40: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x417f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_417f44:
    // 0x417f44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x417f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417f48:
    // 0x417f48: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x417f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_417f4c:
    // 0x417f4c: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x417f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_417f50:
    // 0x417f50: 0x40f809  jalr        $v0
label_417f54:
    if (ctx->pc == 0x417F54u) {
        ctx->pc = 0x417F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F50u;
        // 0x417f54: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417F58u;
        goto label_417f58;
    }
    ctx->pc = 0x417F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x417F58u);
        ctx->pc = 0x417F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F50u;
        // 0x417f54: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417F50u, 0x417F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x417F58u;
label_417f58:
    // 0x417f58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x417f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_417f5c:
    // 0x417f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x417f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_417f60:
    // 0x417f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x417f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_417f64:
    // 0x417f64: 0x3e00008  jr          $ra
label_417f68:
    if (ctx->pc == 0x417F68u) {
        ctx->pc = 0x417F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F64u;
        // 0x417f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417F6Cu;
        goto label_417f6c;
    }
    ctx->pc = 0x417F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F64u;
        // 0x417f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417F6Cu;
label_417f6c:
    // 0x417f6c: 0x0  nop
    ctx->pc = 0x417f6cu;
    // NOP
    ctx->pc = 0x417f70u;
}
