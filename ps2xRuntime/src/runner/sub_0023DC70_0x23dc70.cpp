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

// Function: sub_0023DC70
// Address: 0x23dc70 - 0x23dd00
void sub_0023DC70_0x23dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DC70_0x23dc70");
#endif

    switch (ctx->pc) {
        case 0x23dc70u: goto label_23dc70;
        case 0x23dc74u: goto label_23dc74;
        case 0x23dc78u: goto label_23dc78;
        case 0x23dc7cu: goto label_23dc7c;
        case 0x23dc80u: goto label_23dc80;
        case 0x23dc84u: goto label_23dc84;
        case 0x23dc88u: goto label_23dc88;
        case 0x23dc8cu: goto label_23dc8c;
        case 0x23dc90u: goto label_23dc90;
        case 0x23dc94u: goto label_23dc94;
        case 0x23dc98u: goto label_23dc98;
        case 0x23dc9cu: goto label_23dc9c;
        case 0x23dca0u: goto label_23dca0;
        case 0x23dca4u: goto label_23dca4;
        case 0x23dca8u: goto label_23dca8;
        case 0x23dcacu: goto label_23dcac;
        case 0x23dcb0u: goto label_23dcb0;
        case 0x23dcb4u: goto label_23dcb4;
        case 0x23dcb8u: goto label_23dcb8;
        case 0x23dcbcu: goto label_23dcbc;
        case 0x23dcc0u: goto label_23dcc0;
        case 0x23dcc4u: goto label_23dcc4;
        case 0x23dcc8u: goto label_23dcc8;
        case 0x23dcccu: goto label_23dccc;
        case 0x23dcd0u: goto label_23dcd0;
        case 0x23dcd4u: goto label_23dcd4;
        case 0x23dcd8u: goto label_23dcd8;
        case 0x23dcdcu: goto label_23dcdc;
        case 0x23dce0u: goto label_23dce0;
        case 0x23dce4u: goto label_23dce4;
        case 0x23dce8u: goto label_23dce8;
        case 0x23dcecu: goto label_23dcec;
        case 0x23dcf0u: goto label_23dcf0;
        case 0x23dcf4u: goto label_23dcf4;
        case 0x23dcf8u: goto label_23dcf8;
        case 0x23dcfcu: goto label_23dcfc;
        default: break;
    }

    ctx->pc = 0x23dc70u;

label_23dc70:
    // 0x23dc70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x23dc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_23dc74:
    // 0x23dc74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23dc78:
    // 0x23dc78: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x23dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_23dc7c:
    // 0x23dc7c: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x23dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
label_23dc80:
    // 0x23dc80: 0xa3a600a0  sb          $a2, 0xA0($sp)
    ctx->pc = 0x23dc80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 6));
label_23dc84:
    // 0x23dc84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23dc88:
    // 0x23dc88: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x23dc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_23dc8c:
    // 0x23dc8c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x23dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_23dc90:
    // 0x23dc90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23dc94:
    // 0x23dc94: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_23dc98:
    if (ctx->pc == 0x23DC98u) {
        ctx->pc = 0x23DC9Cu;
        goto label_23dc9c;
    }
    ctx->pc = 0x23DC94u;
    {
        const bool branch_taken_0x23dc94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23dc94) {
            ctx->pc = 0x23DCB0u;
            goto label_23dcb0;
        }
    }
    ctx->pc = 0x23DC9Cu;
label_23dc9c:
    // 0x23dc9c: 0x8f82bc68  lw          $v0, -0x4398($gp)
    ctx->pc = 0x23dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949992)));
label_23dca0:
    // 0x23dca0: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x23dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_23dca4:
    // 0x23dca4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x23dca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_23dca8:
    // 0x23dca8: 0x10000003  b           . + 4 + (0x3 << 2)
label_23dcac:
    if (ctx->pc == 0x23DCACu) {
        ctx->pc = 0x23DCB0u;
        goto label_23dcb0;
    }
    ctx->pc = 0x23DCA8u;
    {
        const bool branch_taken_0x23dca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dca8) {
            ctx->pc = 0x23DCB8u;
            goto label_23dcb8;
        }
    }
    ctx->pc = 0x23DCB0u;
label_23dcb0:
    // 0x23dcb0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x23dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_23dcb4:
    // 0x23dcb4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x23dcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_23dcb8:
    // 0x23dcb8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_23dcbc:
    // 0x23dcbc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23dcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_23dcc0:
    // 0x23dcc0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23dcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23dcc4:
    // 0x23dcc4: 0xc08f584  jal         func_23D610
label_23dcc8:
    if (ctx->pc == 0x23DCC8u) {
        ctx->pc = 0x23DCCCu;
        goto label_23dccc;
    }
    ctx->pc = 0x23DCC4u;
    SET_GPR_U32(ctx, 31, 0x23DCCCu);
    ctx->pc = 0x23D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D610u, 0x23DCC4u, 0x23DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCCCu;
label_23dccc:
    // 0x23dccc: 0x93a300a0  lbu         $v1, 0xA0($sp)
    ctx->pc = 0x23dcccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_23dcd0:
    // 0x23dcd0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_23dcd4:
    if (ctx->pc == 0x23DCD4u) {
        ctx->pc = 0x23DCD8u;
        goto label_23dcd8;
    }
    ctx->pc = 0x23DCD0u;
    {
        const bool branch_taken_0x23dcd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dcd0) {
            ctx->pc = 0x23DCF0u;
            goto label_23dcf0;
        }
    }
    ctx->pc = 0x23DCD8u;
label_23dcd8:
    // 0x23dcd8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_23dcdc:
    // 0x23dcdc: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x23dcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_23dce0:
    // 0x23dce0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23dce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23dce4:
    // 0x23dce4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23dce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23dce8:
    // 0x23dce8: 0x320f809  jalr        $t9
label_23dcec:
    if (ctx->pc == 0x23DCECu) {
        ctx->pc = 0x23DCF0u;
        goto label_23dcf0;
    }
    ctx->pc = 0x23DCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DCF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DCE8u, 0x23DCF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DCF0u;
label_23dcf0:
    // 0x23dcf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23dcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23dcf4:
    // 0x23dcf4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x23dcf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_23dcf8:
    // 0x23dcf8: 0x3e00008  jr          $ra
label_23dcfc:
    if (ctx->pc == 0x23DCFCu) {
        ctx->pc = 0x23DD00u;
        goto label_fallthrough_0x23dcf8;
    }
    ctx->pc = 0x23DCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23dcf8:
    ctx->pc = 0x23DD00u;
}
