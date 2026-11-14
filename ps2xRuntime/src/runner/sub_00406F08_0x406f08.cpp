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

// Function: sub_00406F08
// Address: 0x406f08 - 0x406f68
void sub_00406F08_0x406f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00406F08_0x406f08");
#endif

    switch (ctx->pc) {
        case 0x406f3cu: goto label_406f3c;
        case 0x406f4cu: goto label_406f4c;
        default: break;
    }

    ctx->pc = 0x406f08u;

    // 0x406f08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x406f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x406f0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x406f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x406f10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x406f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x406f14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x406f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406f18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x406f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x406f1c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x406f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x406f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x406f24: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x406F24u;
    {
        const bool branch_taken_0x406f24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x406F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406F24u;
        // 0x406f28: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406f24) {
            ctx->pc = 0x406F4Cu;
            goto label_406f4c;
        }
    }
    ctx->pc = 0x406F2Cu;
    // 0x406f2c: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x406F2Cu;
    {
        const bool branch_taken_0x406f2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x406f2c) {
            ctx->pc = 0x406F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406F2Cu;
            // 0x406f30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406F50u;
            goto label_406f50;
        }
    }
    ctx->pc = 0x406F34u;
    // 0x406f34: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x406F34u;
    SET_GPR_U32(ctx, 31, 0x406F3Cu);
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x406F34u, 0x406F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406F3Cu;
label_406f3c:
    // 0x406f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406f40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x406f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406f44: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x406F44u;
    SET_GPR_U32(ctx, 31, 0x406F4Cu);
    ctx->pc = 0x406F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406F44u;
    // 0x406f48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x406F44u, 0x406F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406F4Cu;
label_406f4c:
    // 0x406f4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x406f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_406f50:
    // 0x406f50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x406f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x406f54: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x406f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x406f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x406f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x406f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x406F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406F5Cu;
        // 0x406f60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x406F64u;
    // 0x406f64: 0x0  nop
    ctx->pc = 0x406f64u;
    // NOP
    ctx->pc = 0x406f68u;
}
