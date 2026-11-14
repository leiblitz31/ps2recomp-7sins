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

// Function: sub_003DCF68
// Address: 0x3dcf68 - 0x3dcfc8
void sub_003DCF68_0x3dcf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCF68_0x3dcf68");
#endif

    switch (ctx->pc) {
        case 0x3dcfb4u: goto label_3dcfb4;
        default: break;
    }

    ctx->pc = 0x3dcf68u;

    // 0x3dcf68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dcf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dcf6c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3dcf6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcf70: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DCF70u;
    {
        const bool branch_taken_0x3dcf70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF70u;
        // 0x3dcf74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcf70) {
            ctx->pc = 0x3DCF84u;
            goto label_3dcf84;
        }
    }
    ctx->pc = 0x3DCF78u;
    // 0x3dcf78: 0x8ce60024  lw          $a2, 0x24($a3)
    ctx->pc = 0x3dcf78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x3dcf7c: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DCF7Cu;
    {
        const bool branch_taken_0x3dcf7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dcf7c) {
            ctx->pc = 0x3DCF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DCF7Cu;
            // 0x3dcf80: 0x8cc30018  lw          $v1, 0x18($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DCF8Cu;
            goto label_3dcf8c;
        }
    }
    ctx->pc = 0x3DCF84u;
label_3dcf84:
    // 0x3dcf84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3DCF84u;
    {
        const bool branch_taken_0x3dcf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF84u;
        // 0x3dcf88: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcf84) {
            ctx->pc = 0x3DCFB8u;
            goto label_3dcfb8;
        }
    }
    ctx->pc = 0x3DCF8Cu;
label_3dcf8c:
    // 0x3dcf8c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3dcf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3dcf90: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x3dcf90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3dcf94: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3dcf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcf98: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x3dcf98u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x3dcf9c: 0xfce00018  sd          $zero, 0x18($a3)
    ctx->pc = 0x3dcf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 0));
    // 0x3dcfa0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3dcfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3dcfa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3dcfa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcfa8: 0xfce00008  sd          $zero, 0x8($a3)
    ctx->pc = 0x3dcfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 0));
    // 0x3dcfac: 0xc0f791a  jal         func_3DE468
    ctx->pc = 0x3DCFACu;
    SET_GPR_U32(ctx, 31, 0x3DCFB4u);
    ctx->pc = 0x3DCFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCFACu;
    // 0x3dcfb0: 0xace00020  sw          $zero, 0x20($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE468u, 0x3DCFACu, 0x3DCFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCFB4u;
label_3dcfb4:
    // 0x3dcfb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dcfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dcfb8:
    // 0x3dcfb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dcfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dcfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCFBCu;
        // 0x3dcfc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCFC4u;
    // 0x3dcfc4: 0x0  nop
    ctx->pc = 0x3dcfc4u;
    // NOP
    ctx->pc = 0x3dcfc8u;
}
