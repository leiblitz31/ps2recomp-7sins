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

// Function: sub_00415CB0
// Address: 0x415cb0 - 0x415cf0
void sub_00415CB0_0x415cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415CB0_0x415cb0");
#endif

    switch (ctx->pc) {
        case 0x415cb0u: goto label_415cb0;
        case 0x415cb4u: goto label_415cb4;
        case 0x415cb8u: goto label_415cb8;
        case 0x415cbcu: goto label_415cbc;
        case 0x415cc0u: goto label_415cc0;
        case 0x415cc4u: goto label_415cc4;
        case 0x415cc8u: goto label_415cc8;
        case 0x415cccu: goto label_415ccc;
        case 0x415cd0u: goto label_415cd0;
        case 0x415cd4u: goto label_415cd4;
        case 0x415cd8u: goto label_415cd8;
        case 0x415cdcu: goto label_415cdc;
        case 0x415ce0u: goto label_415ce0;
        case 0x415ce4u: goto label_415ce4;
        case 0x415ce8u: goto label_415ce8;
        case 0x415cecu: goto label_415cec;
        default: break;
    }

    ctx->pc = 0x415cb0u;

label_415cb0:
    // 0x415cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x415cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_415cb4:
    // 0x415cb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x415cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_415cb8:
    // 0x415cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_415cbc:
    // 0x415cbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x415cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_415cc0:
    // 0x415cc0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x415cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_415cc4:
    // 0x415cc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_415cc8:
    if (ctx->pc == 0x415CC8u) {
        ctx->pc = 0x415CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CC4u;
        // 0x415cc8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415CCCu;
        goto label_415ccc;
    }
    ctx->pc = 0x415CC4u;
    {
        const bool branch_taken_0x415cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CC4u;
        // 0x415cc8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415cc4) {
            ctx->pc = 0x415CD8u;
            goto label_415cd8;
        }
    }
    ctx->pc = 0x415CCCu;
label_415ccc:
    // 0x415ccc: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x415cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_415cd0:
    // 0x415cd0: 0x40f809  jalr        $v0
label_415cd4:
    if (ctx->pc == 0x415CD4u) {
        ctx->pc = 0x415CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CD0u;
        // 0x415cd4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415CD8u;
        goto label_415cd8;
    }
    ctx->pc = 0x415CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x415CD8u);
        ctx->pc = 0x415CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CD0u;
        // 0x415cd4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415CD0u, 0x415CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x415CD8u;
label_415cd8:
    // 0x415cd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x415cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415cdc:
    // 0x415cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_415ce0:
    // 0x415ce0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x415ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_415ce4:
    // 0x415ce4: 0x3e00008  jr          $ra
label_415ce8:
    if (ctx->pc == 0x415CE8u) {
        ctx->pc = 0x415CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CE4u;
        // 0x415ce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415CECu;
        goto label_415cec;
    }
    ctx->pc = 0x415CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CE4u;
        // 0x415ce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415CECu;
label_415cec:
    // 0x415cec: 0x0  nop
    ctx->pc = 0x415cecu;
    // NOP
    ctx->pc = 0x415cf0u;
}
