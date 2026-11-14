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

// Function: sub_00417E98
// Address: 0x417e98 - 0x417ed0
void sub_00417E98_0x417e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417E98_0x417e98");
#endif

    switch (ctx->pc) {
        case 0x417e98u: goto label_417e98;
        case 0x417e9cu: goto label_417e9c;
        case 0x417ea0u: goto label_417ea0;
        case 0x417ea4u: goto label_417ea4;
        case 0x417ea8u: goto label_417ea8;
        case 0x417eacu: goto label_417eac;
        case 0x417eb0u: goto label_417eb0;
        case 0x417eb4u: goto label_417eb4;
        case 0x417eb8u: goto label_417eb8;
        case 0x417ebcu: goto label_417ebc;
        case 0x417ec0u: goto label_417ec0;
        case 0x417ec4u: goto label_417ec4;
        case 0x417ec8u: goto label_417ec8;
        case 0x417eccu: goto label_417ecc;
        default: break;
    }

    ctx->pc = 0x417e98u;

label_417e98:
    // 0x417e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x417e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_417e9c:
    // 0x417e9c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x417e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_417ea0:
    // 0x417ea0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x417ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_417ea4:
    // 0x417ea4: 0x8c62e91c  lw          $v0, -0x16E4($v1)
    ctx->pc = 0x417ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961436)));
label_417ea8:
    // 0x417ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x417ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_417eac:
    // 0x417eac: 0x40f809  jalr        $v0
label_417eb0:
    if (ctx->pc == 0x417EB0u) {
        ctx->pc = 0x417EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417EACu;
        // 0x417eb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417EB4u;
        goto label_417eb4;
    }
    ctx->pc = 0x417EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x417EB4u);
        ctx->pc = 0x417EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417EACu;
        // 0x417eb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417EACu, 0x417EB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x417EB4u;
label_417eb4:
    // 0x417eb4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x417eb4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_417eb8:
    // 0x417eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x417eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_417ebc:
    // 0x417ebc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x417ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417ec0:
    // 0x417ec0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x417ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_417ec4:
    // 0x417ec4: 0x3e00008  jr          $ra
label_417ec8:
    if (ctx->pc == 0x417EC8u) {
        ctx->pc = 0x417EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417EC4u;
        // 0x417ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417ECCu;
        goto label_417ecc;
    }
    ctx->pc = 0x417EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417EC4u;
        // 0x417ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417ECCu;
label_417ecc:
    // 0x417ecc: 0x0  nop
    ctx->pc = 0x417eccu;
    // NOP
    ctx->pc = 0x417ed0u;
}
