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

// Function: sub_00340068
// Address: 0x340068 - 0x3400c0
void sub_00340068_0x340068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340068_0x340068");
#endif

    switch (ctx->pc) {
        case 0x340094u: goto label_340094;
        default: break;
    }

    ctx->pc = 0x340068u;

    // 0x340068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34006c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x34006cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x340070: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x340074: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x340074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x340078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34007c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x34007cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x340080: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x340080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340084: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x340084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x340088: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x340088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x34008c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x34008Cu;
    SET_GPR_U32(ctx, 31, 0x340094u);
    ctx->pc = 0x340090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34008Cu;
    // 0x340090: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x34008Cu, 0x340094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340094u;
label_340094:
    // 0x340094: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x340094u;
    {
        const bool branch_taken_0x340094 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x340098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340094u;
        // 0x340098: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340094) {
            ctx->pc = 0x3400A0u;
            goto label_3400a0;
        }
    }
    ctx->pc = 0x34009Cu;
    // 0x34009c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x34009cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3400a0:
    // 0x3400a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3400a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3400a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3400a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3400a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3400a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3400ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3400acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3400b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3400b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3400b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3400B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3400B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3400B4u;
        // 0x3400b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3400B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3400BCu;
    // 0x3400bc: 0x0  nop
    ctx->pc = 0x3400bcu;
    // NOP
    ctx->pc = 0x3400c0u;
}
