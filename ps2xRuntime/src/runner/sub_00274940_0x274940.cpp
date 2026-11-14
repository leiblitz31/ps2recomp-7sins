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

// Function: sub_00274940
// Address: 0x274940 - 0x2749d0
void sub_00274940_0x274940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274940_0x274940");
#endif

    switch (ctx->pc) {
        case 0x274940u: goto label_274940;
        case 0x274944u: goto label_274944;
        case 0x274948u: goto label_274948;
        case 0x27494cu: goto label_27494c;
        case 0x274950u: goto label_274950;
        case 0x274954u: goto label_274954;
        case 0x274958u: goto label_274958;
        case 0x27495cu: goto label_27495c;
        case 0x274960u: goto label_274960;
        case 0x274964u: goto label_274964;
        case 0x274968u: goto label_274968;
        case 0x27496cu: goto label_27496c;
        case 0x274970u: goto label_274970;
        case 0x274974u: goto label_274974;
        case 0x274978u: goto label_274978;
        case 0x27497cu: goto label_27497c;
        case 0x274980u: goto label_274980;
        case 0x274984u: goto label_274984;
        case 0x274988u: goto label_274988;
        case 0x27498cu: goto label_27498c;
        case 0x274990u: goto label_274990;
        case 0x274994u: goto label_274994;
        case 0x274998u: goto label_274998;
        case 0x27499cu: goto label_27499c;
        case 0x2749a0u: goto label_2749a0;
        case 0x2749a4u: goto label_2749a4;
        case 0x2749a8u: goto label_2749a8;
        case 0x2749acu: goto label_2749ac;
        case 0x2749b0u: goto label_2749b0;
        case 0x2749b4u: goto label_2749b4;
        case 0x2749b8u: goto label_2749b8;
        case 0x2749bcu: goto label_2749bc;
        case 0x2749c0u: goto label_2749c0;
        case 0x2749c4u: goto label_2749c4;
        case 0x2749c8u: goto label_2749c8;
        case 0x2749ccu: goto label_2749cc;
        default: break;
    }

    ctx->pc = 0x274940u;

label_274940:
    // 0x274940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_274944:
    // 0x274944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_274948:
    // 0x274948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x274948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_27494c:
    // 0x27494c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27494cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_274950:
    // 0x274950: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x274950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_274954:
    // 0x274954: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x274954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_274958:
    // 0x274958: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x274958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_27495c:
    // 0x27495c: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_274960:
    if (ctx->pc == 0x274960u) {
        ctx->pc = 0x274964u;
        goto label_274964;
    }
    ctx->pc = 0x27495Cu;
    {
        const bool branch_taken_0x27495c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27495c) {
            ctx->pc = 0x2749B4u;
            goto label_2749b4;
        }
    }
    ctx->pc = 0x274964u;
label_274964:
    // 0x274964: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x274964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_274968:
    // 0x274968: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x274968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27496c:
    // 0x27496c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_274970:
    if (ctx->pc == 0x274970u) {
        ctx->pc = 0x274974u;
        goto label_274974;
    }
    ctx->pc = 0x27496Cu;
    {
        const bool branch_taken_0x27496c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27496c) {
            ctx->pc = 0x2749A8u;
            goto label_2749a8;
        }
    }
    ctx->pc = 0x274974u;
label_274974:
    // 0x274974: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x274974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_274978:
    // 0x274978: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x274978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_27497c:
    // 0x27497c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_274980:
    if (ctx->pc == 0x274980u) {
        ctx->pc = 0x274984u;
        goto label_274984;
    }
    ctx->pc = 0x27497Cu;
    {
        const bool branch_taken_0x27497c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27497c) {
            ctx->pc = 0x2749A8u;
            goto label_2749a8;
        }
    }
    ctx->pc = 0x274984u;
label_274984:
    // 0x274984: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_274988:
    // 0x274988: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x274988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_27498c:
    // 0x27498c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x27498cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_274990:
    // 0x274990: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x274990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_274994:
    // 0x274994: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x274994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_274998:
    // 0x274998: 0x320f809  jalr        $t9
label_27499c:
    if (ctx->pc == 0x27499Cu) {
        ctx->pc = 0x2749A0u;
        goto label_2749a0;
    }
    ctx->pc = 0x274998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2749A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274998u, 0x2749A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2749A0u;
label_2749a0:
    // 0x2749a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2749a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2749a4:
    // 0x2749a4: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x2749a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
label_2749a8:
    // 0x2749a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2749a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2749ac:
    // 0x2749ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2749acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2749b0:
    // 0x2749b0: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x2749b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
label_2749b4:
    // 0x2749b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2749b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2749b8:
    // 0x2749b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2749b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2749bc:
    // 0x2749bc: 0x3e00008  jr          $ra
label_2749c0:
    if (ctx->pc == 0x2749C0u) {
        ctx->pc = 0x2749C4u;
        goto label_2749c4;
    }
    ctx->pc = 0x2749BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2749BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2749C4u;
label_2749c4:
    // 0x2749c4: 0x0  nop
    ctx->pc = 0x2749c4u;
    // NOP
label_2749c8:
    // 0x2749c8: 0x0  nop
    ctx->pc = 0x2749c8u;
    // NOP
label_2749cc:
    // 0x2749cc: 0x0  nop
    ctx->pc = 0x2749ccu;
    // NOP
    ctx->pc = 0x2749d0u;
}
