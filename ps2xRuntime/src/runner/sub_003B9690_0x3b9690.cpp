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

// Function: sub_003B9690
// Address: 0x3b9690 - 0x3b96e8
void sub_003B9690_0x3b9690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9690_0x3b9690");
#endif

    switch (ctx->pc) {
        case 0x3b9690u: goto label_3b9690;
        case 0x3b9694u: goto label_3b9694;
        case 0x3b9698u: goto label_3b9698;
        case 0x3b969cu: goto label_3b969c;
        case 0x3b96a0u: goto label_3b96a0;
        case 0x3b96a4u: goto label_3b96a4;
        case 0x3b96a8u: goto label_3b96a8;
        case 0x3b96acu: goto label_3b96ac;
        case 0x3b96b0u: goto label_3b96b0;
        case 0x3b96b4u: goto label_3b96b4;
        case 0x3b96b8u: goto label_3b96b8;
        case 0x3b96bcu: goto label_3b96bc;
        case 0x3b96c0u: goto label_3b96c0;
        case 0x3b96c4u: goto label_3b96c4;
        case 0x3b96c8u: goto label_3b96c8;
        case 0x3b96ccu: goto label_3b96cc;
        case 0x3b96d0u: goto label_3b96d0;
        case 0x3b96d4u: goto label_3b96d4;
        case 0x3b96d8u: goto label_3b96d8;
        case 0x3b96dcu: goto label_3b96dc;
        case 0x3b96e0u: goto label_3b96e0;
        case 0x3b96e4u: goto label_3b96e4;
        default: break;
    }

    ctx->pc = 0x3b9690u;

label_3b9690:
    // 0x3b9690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b9690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b9694:
    // 0x3b9694: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b9694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b9698:
    // 0x3b9698: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b9698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3b969c:
    // 0x3b969c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b969cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b96a0:
    // 0x3b96a0: 0x11802b  sltu        $s0, $zero, $s1
    ctx->pc = 0x3b96a0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b96a4:
    // 0x3b96a4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_3b96a8:
    if (ctx->pc == 0x3B96A8u) {
        ctx->pc = 0x3B96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B96A4u;
        // 0x3b96a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B96ACu;
        goto label_3b96ac;
    }
    ctx->pc = 0x3B96A4u;
    {
        const bool branch_taken_0x3b96a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B96A4u;
        // 0x3b96a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b96a4) {
            ctx->pc = 0x3B96D0u;
            goto label_3b96d0;
        }
    }
    ctx->pc = 0x3B96ACu;
label_3b96ac:
    // 0x3b96ac: 0xc0ee78c  jal         func_3B9E30
label_3b96b0:
    if (ctx->pc == 0x3B96B0u) {
        ctx->pc = 0x3B96B4u;
        goto label_3b96b4;
    }
    ctx->pc = 0x3B96ACu;
    SET_GPR_U32(ctx, 31, 0x3B96B4u);
    ctx->pc = 0x3B9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9E30u, 0x3B96ACu, 0x3B96B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B96B4u;
label_3b96b4:
    // 0x3b96b4: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3b96b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3b96b8:
    // 0x3b96b8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b96b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b96bc:
    // 0x3b96bc: 0x8ca4d3ac  lw          $a0, -0x2C54($a1)
    ctx->pc = 0x3b96bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955948)));
label_3b96c0:
    // 0x3b96c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b96c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b96c4:
    // 0x3b96c4: 0x8c66e99c  lw          $a2, -0x1664($v1)
    ctx->pc = 0x3b96c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961564)));
label_3b96c8:
    // 0x3b96c8: 0xc0f809  jalr        $a2
label_3b96cc:
    if (ctx->pc == 0x3B96CCu) {
        ctx->pc = 0x3B96CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B96C8u;
        // 0x3b96cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B96D0u;
        goto label_3b96d0;
    }
    ctx->pc = 0x3B96C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3B96D0u);
        ctx->pc = 0x3B96CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B96C8u;
        // 0x3b96cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B96C8u, 0x3B96D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B96D0u;
label_3b96d0:
    // 0x3b96d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b96d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b96d4:
    // 0x3b96d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b96d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b96d8:
    // 0x3b96d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b96d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b96dc:
    // 0x3b96dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b96dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b96e0:
    // 0x3b96e0: 0x3e00008  jr          $ra
label_3b96e4:
    if (ctx->pc == 0x3B96E4u) {
        ctx->pc = 0x3B96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B96E0u;
        // 0x3b96e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B96E8u;
        goto label_fallthrough_0x3b96e0;
    }
    ctx->pc = 0x3B96E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B96E0u;
        // 0x3b96e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B96E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b96e0:
    ctx->pc = 0x3B96E8u;
}
