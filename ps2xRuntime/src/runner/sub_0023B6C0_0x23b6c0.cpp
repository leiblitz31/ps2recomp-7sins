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

// Function: sub_0023B6C0
// Address: 0x23b6c0 - 0x23b720
void sub_0023B6C0_0x23b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B6C0_0x23b6c0");
#endif

    switch (ctx->pc) {
        case 0x23b6c0u: goto label_23b6c0;
        case 0x23b6c4u: goto label_23b6c4;
        case 0x23b6c8u: goto label_23b6c8;
        case 0x23b6ccu: goto label_23b6cc;
        case 0x23b6d0u: goto label_23b6d0;
        case 0x23b6d4u: goto label_23b6d4;
        case 0x23b6d8u: goto label_23b6d8;
        case 0x23b6dcu: goto label_23b6dc;
        case 0x23b6e0u: goto label_23b6e0;
        case 0x23b6e4u: goto label_23b6e4;
        case 0x23b6e8u: goto label_23b6e8;
        case 0x23b6ecu: goto label_23b6ec;
        case 0x23b6f0u: goto label_23b6f0;
        case 0x23b6f4u: goto label_23b6f4;
        case 0x23b6f8u: goto label_23b6f8;
        case 0x23b6fcu: goto label_23b6fc;
        case 0x23b700u: goto label_23b700;
        case 0x23b704u: goto label_23b704;
        case 0x23b708u: goto label_23b708;
        case 0x23b70cu: goto label_23b70c;
        case 0x23b710u: goto label_23b710;
        case 0x23b714u: goto label_23b714;
        case 0x23b718u: goto label_23b718;
        case 0x23b71cu: goto label_23b71c;
        default: break;
    }

    ctx->pc = 0x23b6c0u;

label_23b6c0:
    // 0x23b6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23b6c4:
    // 0x23b6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23b6c8:
    // 0x23b6c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23b6cc:
    // 0x23b6cc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x23b6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_23b6d0:
    // 0x23b6d0: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x23b6d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_23b6d4:
    // 0x23b6d4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23b6d8:
    // 0x23b6d8: 0xa0640034  sb          $a0, 0x34($v1)
    ctx->pc = 0x23b6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 52), (uint8_t)GPR_U32(ctx, 4));
label_23b6dc:
    // 0x23b6dc: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x23b6dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_23b6e0:
    // 0x23b6e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x23b6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_23b6e4:
    // 0x23b6e4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_23b6e8:
    if (ctx->pc == 0x23B6E8u) {
        ctx->pc = 0x23B6ECu;
        goto label_23b6ec;
    }
    ctx->pc = 0x23B6E4u;
    {
        const bool branch_taken_0x23b6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b6e4) {
            ctx->pc = 0x23B704u;
            goto label_23b704;
        }
    }
    ctx->pc = 0x23B6ECu;
label_23b6ec:
    // 0x23b6ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23b6f0:
    // 0x23b6f0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_23b6f4:
    // 0x23b6f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23b6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23b6f8:
    // 0x23b6f8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x23b6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23b6fc:
    // 0x23b6fc: 0x320f809  jalr        $t9
label_23b700:
    if (ctx->pc == 0x23B700u) {
        ctx->pc = 0x23B704u;
        goto label_23b704;
    }
    ctx->pc = 0x23B6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23B704u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B6FCu, 0x23B704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B704u;
label_23b704:
    // 0x23b704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b708:
    // 0x23b708: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23b708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23b70c:
    // 0x23b70c: 0x3e00008  jr          $ra
label_23b710:
    if (ctx->pc == 0x23B710u) {
        ctx->pc = 0x23B714u;
        goto label_23b714;
    }
    ctx->pc = 0x23B70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B714u;
label_23b714:
    // 0x23b714: 0x0  nop
    ctx->pc = 0x23b714u;
    // NOP
label_23b718:
    // 0x23b718: 0x0  nop
    ctx->pc = 0x23b718u;
    // NOP
label_23b71c:
    // 0x23b71c: 0x0  nop
    ctx->pc = 0x23b71cu;
    // NOP
    ctx->pc = 0x23b720u;
}
