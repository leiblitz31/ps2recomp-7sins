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

// Function: sub_00326F20
// Address: 0x326f20 - 0x326f78
void sub_00326F20_0x326f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326F20_0x326f20");
#endif

    switch (ctx->pc) {
        case 0x326f4cu: goto label_326f4c;
        case 0x326f5cu: goto label_326f5c;
        default: break;
    }

    ctx->pc = 0x326f20u;

    // 0x326f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x326f24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x326f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x326f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x326f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326f30: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x326f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x326f34: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x326f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x326f38: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x326f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x326f3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x326F3Cu;
    {
        const bool branch_taken_0x326f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F3Cu;
        // 0x326f40: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f3c) {
            ctx->pc = 0x326F54u;
            goto label_326f54;
        }
    }
    ctx->pc = 0x326F44u;
    // 0x326f44: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x326F44u;
    SET_GPR_U32(ctx, 31, 0x326F4Cu);
    ctx->pc = 0x326F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F44u;
    // 0x326f48: 0x3484100e  ori         $a0, $a0, 0x100E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4110);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x326F44u, 0x326F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F4Cu;
label_326f4c:
    // 0x326f4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x326F4Cu;
    {
        const bool branch_taken_0x326f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F4Cu;
        // 0x326f50: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f4c) {
            ctx->pc = 0x326F60u;
            goto label_326f60;
        }
    }
    ctx->pc = 0x326F54u;
label_326f54:
    // 0x326f54: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x326F54u;
    SET_GPR_U32(ctx, 31, 0x326F5Cu);
    ctx->pc = 0x326F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F54u;
    // 0x326f58: 0x3484100d  ori         $a0, $a0, 0x100D (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4109);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x326F54u, 0x326F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F5Cu;
label_326f5c:
    // 0x326f5c: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x326f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_326f60:
    // 0x326f60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x326f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326f68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x326f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x326F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F6Cu;
        // 0x326f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326F74u;
    // 0x326f74: 0x0  nop
    ctx->pc = 0x326f74u;
    // NOP
    ctx->pc = 0x326f78u;
}
