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

// Function: sub_0023DD00
// Address: 0x23dd00 - 0x23dda0
void sub_0023DD00_0x23dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DD00_0x23dd00");
#endif

    switch (ctx->pc) {
        case 0x23dd00u: goto label_23dd00;
        case 0x23dd04u: goto label_23dd04;
        case 0x23dd08u: goto label_23dd08;
        case 0x23dd0cu: goto label_23dd0c;
        case 0x23dd10u: goto label_23dd10;
        case 0x23dd14u: goto label_23dd14;
        case 0x23dd18u: goto label_23dd18;
        case 0x23dd1cu: goto label_23dd1c;
        case 0x23dd20u: goto label_23dd20;
        case 0x23dd24u: goto label_23dd24;
        case 0x23dd28u: goto label_23dd28;
        case 0x23dd2cu: goto label_23dd2c;
        case 0x23dd30u: goto label_23dd30;
        case 0x23dd34u: goto label_23dd34;
        case 0x23dd38u: goto label_23dd38;
        case 0x23dd3cu: goto label_23dd3c;
        case 0x23dd40u: goto label_23dd40;
        case 0x23dd44u: goto label_23dd44;
        case 0x23dd48u: goto label_23dd48;
        case 0x23dd4cu: goto label_23dd4c;
        case 0x23dd50u: goto label_23dd50;
        case 0x23dd54u: goto label_23dd54;
        case 0x23dd58u: goto label_23dd58;
        case 0x23dd5cu: goto label_23dd5c;
        case 0x23dd60u: goto label_23dd60;
        case 0x23dd64u: goto label_23dd64;
        case 0x23dd68u: goto label_23dd68;
        case 0x23dd6cu: goto label_23dd6c;
        case 0x23dd70u: goto label_23dd70;
        case 0x23dd74u: goto label_23dd74;
        case 0x23dd78u: goto label_23dd78;
        case 0x23dd7cu: goto label_23dd7c;
        case 0x23dd80u: goto label_23dd80;
        case 0x23dd84u: goto label_23dd84;
        case 0x23dd88u: goto label_23dd88;
        case 0x23dd8cu: goto label_23dd8c;
        case 0x23dd90u: goto label_23dd90;
        case 0x23dd94u: goto label_23dd94;
        case 0x23dd98u: goto label_23dd98;
        case 0x23dd9cu: goto label_23dd9c;
        default: break;
    }

    ctx->pc = 0x23dd00u;

label_23dd00:
    // 0x23dd00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23dd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_23dd04:
    // 0x23dd04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23dd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23dd08:
    // 0x23dd08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23dd0c:
    // 0x23dd0c: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x23dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_23dd10:
    // 0x23dd10: 0xa3a500a0  sb          $a1, 0xA0($sp)
    ctx->pc = 0x23dd10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 5));
label_23dd14:
    // 0x23dd14: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x23dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
label_23dd18:
    // 0x23dd18: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23dd1c:
    // 0x23dd1c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x23dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_23dd20:
    // 0x23dd20: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x23dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_23dd24:
    // 0x23dd24: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x23dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_23dd28:
    // 0x23dd28: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x23dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_23dd2c:
    // 0x23dd2c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23dd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_23dd30:
    // 0x23dd30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23dd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23dd34:
    // 0x23dd34: 0xc08f584  jal         func_23D610
label_23dd38:
    if (ctx->pc == 0x23DD38u) {
        ctx->pc = 0x23DD3Cu;
        goto label_23dd3c;
    }
    ctx->pc = 0x23DD34u;
    SET_GPR_U32(ctx, 31, 0x23DD3Cu);
    ctx->pc = 0x23D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D610u, 0x23DD34u, 0x23DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD3Cu;
label_23dd3c:
    // 0x23dd3c: 0x93a300a0  lbu         $v1, 0xA0($sp)
    ctx->pc = 0x23dd3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_23dd40:
    // 0x23dd40: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_23dd44:
    if (ctx->pc == 0x23DD44u) {
        ctx->pc = 0x23DD48u;
        goto label_23dd48;
    }
    ctx->pc = 0x23DD40u;
    {
        const bool branch_taken_0x23dd40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dd40) {
            ctx->pc = 0x23DD84u;
            goto label_23dd84;
        }
    }
    ctx->pc = 0x23DD48u;
label_23dd48:
    // 0x23dd48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23dd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23dd4c:
    // 0x23dd4c: 0x1000000a  b           . + 4 + (0xA << 2)
label_23dd50:
    if (ctx->pc == 0x23DD50u) {
        ctx->pc = 0x23DD54u;
        goto label_23dd54;
    }
    ctx->pc = 0x23DD4Cu;
    {
        const bool branch_taken_0x23dd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dd4c) {
            ctx->pc = 0x23DD78u;
            goto label_23dd78;
        }
    }
    ctx->pc = 0x23DD54u;
label_23dd54:
    // 0x23dd54: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x23dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_23dd58:
    // 0x23dd58: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x23dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_23dd5c:
    // 0x23dd5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23dd5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23dd60:
    // 0x23dd60: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23dd60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23dd64:
    // 0x23dd64: 0x320f809  jalr        $t9
label_23dd68:
    if (ctx->pc == 0x23DD68u) {
        ctx->pc = 0x23DD6Cu;
        goto label_23dd6c;
    }
    ctx->pc = 0x23DD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DD6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DD64u, 0x23DD6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DD6Cu;
label_23dd6c:
    // 0x23dd6c: 0xc0f0c7e  jal         func_3C31F8
label_23dd70:
    if (ctx->pc == 0x23DD70u) {
        ctx->pc = 0x23DD74u;
        goto label_23dd74;
    }
    ctx->pc = 0x23DD6Cu;
    SET_GPR_U32(ctx, 31, 0x23DD74u);
    ctx->pc = 0x3C31F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C31F8u, 0x23DD6Cu, 0x23DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD74u;
label_23dd74:
    // 0x23dd74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23dd74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23dd78:
    // 0x23dd78: 0x2e031388  sltiu       $v1, $s0, 0x1388
    ctx->pc = 0x23dd78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5000) ? 1 : 0);
label_23dd7c:
    // 0x23dd7c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_23dd80:
    if (ctx->pc == 0x23DD80u) {
        ctx->pc = 0x23DD84u;
        goto label_23dd84;
    }
    ctx->pc = 0x23DD7Cu;
    {
        const bool branch_taken_0x23dd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dd7c) {
            ctx->pc = 0x23DD54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dd54;
        }
    }
    ctx->pc = 0x23DD84u;
label_23dd84:
    // 0x23dd84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23dd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23dd88:
    // 0x23dd88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23dd88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23dd8c:
    // 0x23dd8c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x23dd8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_23dd90:
    // 0x23dd90: 0x3e00008  jr          $ra
label_23dd94:
    if (ctx->pc == 0x23DD94u) {
        ctx->pc = 0x23DD98u;
        goto label_23dd98;
    }
    ctx->pc = 0x23DD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DD98u;
label_23dd98:
    // 0x23dd98: 0x0  nop
    ctx->pc = 0x23dd98u;
    // NOP
label_23dd9c:
    // 0x23dd9c: 0x0  nop
    ctx->pc = 0x23dd9cu;
    // NOP
    ctx->pc = 0x23dda0u;
}
