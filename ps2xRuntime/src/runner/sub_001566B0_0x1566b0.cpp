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

// Function: sub_001566B0
// Address: 0x1566b0 - 0x156740
void sub_001566B0_0x1566b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001566B0_0x1566b0");
#endif

    switch (ctx->pc) {
        case 0x1566b0u: goto label_1566b0;
        case 0x1566b4u: goto label_1566b4;
        case 0x1566b8u: goto label_1566b8;
        case 0x1566bcu: goto label_1566bc;
        case 0x1566c0u: goto label_1566c0;
        case 0x1566c4u: goto label_1566c4;
        case 0x1566c8u: goto label_1566c8;
        case 0x1566ccu: goto label_1566cc;
        case 0x1566d0u: goto label_1566d0;
        case 0x1566d4u: goto label_1566d4;
        case 0x1566d8u: goto label_1566d8;
        case 0x1566dcu: goto label_1566dc;
        case 0x1566e0u: goto label_1566e0;
        case 0x1566e4u: goto label_1566e4;
        case 0x1566e8u: goto label_1566e8;
        case 0x1566ecu: goto label_1566ec;
        case 0x1566f0u: goto label_1566f0;
        case 0x1566f4u: goto label_1566f4;
        case 0x1566f8u: goto label_1566f8;
        case 0x1566fcu: goto label_1566fc;
        case 0x156700u: goto label_156700;
        case 0x156704u: goto label_156704;
        case 0x156708u: goto label_156708;
        case 0x15670cu: goto label_15670c;
        case 0x156710u: goto label_156710;
        case 0x156714u: goto label_156714;
        case 0x156718u: goto label_156718;
        case 0x15671cu: goto label_15671c;
        case 0x156720u: goto label_156720;
        case 0x156724u: goto label_156724;
        case 0x156728u: goto label_156728;
        case 0x15672cu: goto label_15672c;
        case 0x156730u: goto label_156730;
        case 0x156734u: goto label_156734;
        case 0x156738u: goto label_156738;
        case 0x15673cu: goto label_15673c;
        default: break;
    }

    ctx->pc = 0x1566b0u;

label_1566b0:
    // 0x1566b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1566b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1566b4:
    // 0x1566b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1566b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1566b8:
    // 0x1566b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1566b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1566bc:
    // 0x1566bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1566bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1566c0:
    // 0x1566c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1566c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1566c4:
    // 0x1566c4: 0xc08ec48  jal         func_23B120
label_1566c8:
    if (ctx->pc == 0x1566C8u) {
        ctx->pc = 0x1566CCu;
        goto label_1566cc;
    }
    ctx->pc = 0x1566C4u;
    SET_GPR_U32(ctx, 31, 0x1566CCu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x1566C4u, 0x1566CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1566CCu;
label_1566cc:
    // 0x1566cc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1566ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1566d0:
    // 0x1566d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1566d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1566d4:
    // 0x1566d4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1566d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1566d8:
    // 0x1566d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1566d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1566dc:
    // 0x1566dc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1566dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1566e0:
    // 0x1566e0: 0x320f809  jalr        $t9
label_1566e4:
    if (ctx->pc == 0x1566E4u) {
        ctx->pc = 0x1566E8u;
        goto label_1566e8;
    }
    ctx->pc = 0x1566E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1566E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1566E0u, 0x1566E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1566E8u;
label_1566e8:
    // 0x1566e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1566e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1566ec:
    // 0x1566ec: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1566ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1566f0:
    // 0x1566f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1566f4:
    if (ctx->pc == 0x1566F4u) {
        ctx->pc = 0x1566F8u;
        goto label_1566f8;
    }
    ctx->pc = 0x1566F0u;
    {
        const bool branch_taken_0x1566f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1566f0) {
            ctx->pc = 0x156720u;
            goto label_156720;
        }
    }
    ctx->pc = 0x1566F8u;
label_1566f8:
    // 0x1566f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1566f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1566fc:
    // 0x1566fc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1566fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_156700:
    // 0x156700: 0xc0559d0  jal         func_156740
label_156704:
    if (ctx->pc == 0x156704u) {
        ctx->pc = 0x156708u;
        goto label_156708;
    }
    ctx->pc = 0x156700u;
    SET_GPR_U32(ctx, 31, 0x156708u);
    ctx->pc = 0x156740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156740u, 0x156700u, 0x156708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156708u;
label_156708:
    // 0x156708: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x156708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_15670c:
    // 0x15670c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15670cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_156710:
    // 0x156710: 0xc119c5c  jal         func_467170
label_156714:
    if (ctx->pc == 0x156714u) {
        ctx->pc = 0x156718u;
        goto label_156718;
    }
    ctx->pc = 0x156710u;
    SET_GPR_U32(ctx, 31, 0x156718u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x156710u, 0x156718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156718u;
label_156718:
    // 0x156718: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x156718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_15671c:
    // 0x15671c: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x15671cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_156720:
    // 0x156720: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x156720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_156724:
    // 0x156724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_156728:
    // 0x156728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15672c:
    // 0x15672c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15672cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_156730:
    // 0x156730: 0x3e00008  jr          $ra
label_156734:
    if (ctx->pc == 0x156734u) {
        ctx->pc = 0x156738u;
        goto label_156738;
    }
    ctx->pc = 0x156730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156738u;
label_156738:
    // 0x156738: 0x0  nop
    ctx->pc = 0x156738u;
    // NOP
label_15673c:
    // 0x15673c: 0x0  nop
    ctx->pc = 0x15673cu;
    // NOP
    ctx->pc = 0x156740u;
}
