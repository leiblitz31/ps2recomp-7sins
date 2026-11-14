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

// Function: sub_00406E00
// Address: 0x406e00 - 0x406e60
void sub_00406E00_0x406e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00406E00_0x406e00");
#endif

    switch (ctx->pc) {
        case 0x406e2cu: goto label_406e2c;
        case 0x406e3cu: goto label_406e3c;
        case 0x406e44u: goto label_406e44;
        default: break;
    }

    ctx->pc = 0x406e00u;

    // 0x406e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x406e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x406e04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x406e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x406e08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x406e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x406e0c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x406e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406e10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x406e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x406e14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x406e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406e18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x406e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406e1c: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x406e1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x406e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x406e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x406e24: 0xc101b98  jal         func_406E60
    ctx->pc = 0x406E24u;
    SET_GPR_U32(ctx, 31, 0x406E2Cu);
    ctx->pc = 0x406E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406E24u;
    // 0x406e28: 0x6303e  dsrl32      $a2, $a2, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x406E24u, 0x406E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406E2Cu;
label_406e2c:
    // 0x406e2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x406e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406e30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x406e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406e34: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x406E34u;
    SET_GPR_U32(ctx, 31, 0x406E3Cu);
    ctx->pc = 0x406E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406E34u;
    // 0x406e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x406E34u, 0x406E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406E3Cu;
label_406e3c:
    // 0x406e3c: 0xc101bda  jal         func_406F68
    ctx->pc = 0x406E3Cu;
    SET_GPR_U32(ctx, 31, 0x406E44u);
    ctx->pc = 0x406E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406E3Cu;
    // 0x406e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x406E3Cu, 0x406E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406E44u;
label_406e44:
    // 0x406e44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x406e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x406e48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x406e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x406e4c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x406e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x406e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x406e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x406e54: 0x3e00008  jr          $ra
    ctx->pc = 0x406E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406E54u;
        // 0x406e58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x406E5Cu;
    // 0x406e5c: 0x0  nop
    ctx->pc = 0x406e5cu;
    // NOP
    ctx->pc = 0x406e60u;
}
