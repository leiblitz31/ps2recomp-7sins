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

// Function: sub_00457BA0
// Address: 0x457ba0 - 0x457c70
void sub_00457BA0_0x457ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457BA0_0x457ba0");
#endif

    switch (ctx->pc) {
        case 0x457bc0u: goto label_457bc0;
        case 0x457bd8u: goto label_457bd8;
        case 0x457becu: goto label_457bec;
        case 0x457bfcu: goto label_457bfc;
        case 0x457c24u: goto label_457c24;
        case 0x457c38u: goto label_457c38;
        case 0x457c48u: goto label_457c48;
        case 0x457c54u: goto label_457c54;
        default: break;
    }

    ctx->pc = 0x457ba0u;

    // 0x457ba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x457ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x457ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x457ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x457ba8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x457ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x457bac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x457bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x457bb0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x457bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x457bb4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x457bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x457bb8: 0xc115ee4  jal         func_457B90
    ctx->pc = 0x457BB8u;
    SET_GPR_U32(ctx, 31, 0x457BC0u);
    ctx->pc = 0x457B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457B90u, 0x457BB8u, 0x457BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457BC0u;
label_457bc0:
    // 0x457bc0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x457bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457bc4: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x457bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x457bc8: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x457bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x457bcc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x457bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x457bd0: 0xc115ed4  jal         func_457B50
    ctx->pc = 0x457BD0u;
    SET_GPR_U32(ctx, 31, 0x457BD8u);
    ctx->pc = 0x457B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457B50u, 0x457BD0u, 0x457BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457BD8u;
label_457bd8:
    // 0x457bd8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x457bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457bdc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x457bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x457be0: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x457be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x457be4: 0xc115ec4  jal         func_457B10
    ctx->pc = 0x457BE4u;
    SET_GPR_U32(ctx, 31, 0x457BECu);
    ctx->pc = 0x457B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457B10u, 0x457BE4u, 0x457BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457BECu;
label_457bec:
    // 0x457bec: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x457becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x457bf0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x457bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x457bf4: 0xc115eb8  jal         func_457AE0
    ctx->pc = 0x457BF4u;
    SET_GPR_U32(ctx, 31, 0x457BFCu);
    ctx->pc = 0x457AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457AE0u, 0x457BF4u, 0x457BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457BFCu;
label_457bfc:
    // 0x457bfc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x457BFCu;
    {
        const bool branch_taken_0x457bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x457bfc) {
            ctx->pc = 0x457C2Cu;
            goto label_457c2c;
        }
    }
    ctx->pc = 0x457C04u;
    // 0x457c04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x457c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457c08: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x457c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457c0c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x457c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x457c10: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x457c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x457c14: 0x24c6e570  addiu       $a2, $a2, -0x1A90
    ctx->pc = 0x457c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960496));
    // 0x457c18: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x457c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x457c1c: 0xc115dc0  jal         func_457700
    ctx->pc = 0x457C1Cu;
    SET_GPR_U32(ctx, 31, 0x457C24u);
    ctx->pc = 0x457700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457700u, 0x457C1Cu, 0x457C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457C24u;
label_457c24:
    // 0x457c24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x457C24u;
    {
        const bool branch_taken_0x457c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x457c24) {
            ctx->pc = 0x457C48u;
            goto label_457c48;
        }
    }
    ctx->pc = 0x457C2Cu;
label_457c2c:
    // 0x457c2c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x457c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x457c30: 0xc115db4  jal         func_4576D0
    ctx->pc = 0x457C30u;
    SET_GPR_U32(ctx, 31, 0x457C38u);
    ctx->pc = 0x4576D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4576D0u, 0x457C30u, 0x457C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457C38u;
label_457c38:
    // 0x457c38: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x457c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457c3c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x457c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x457c40: 0xc115f1c  jal         func_457C70
    ctx->pc = 0x457C40u;
    SET_GPR_U32(ctx, 31, 0x457C48u);
    ctx->pc = 0x457C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457C70u, 0x457C40u, 0x457C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457C48u;
label_457c48:
    // 0x457c48: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x457c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x457c4c: 0xc115dbc  jal         func_4576F0
    ctx->pc = 0x457C4Cu;
    SET_GPR_U32(ctx, 31, 0x457C54u);
    ctx->pc = 0x4576F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4576F0u, 0x457C4Cu, 0x457C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457C54u;
label_457c54:
    // 0x457c54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x457c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x457c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x457c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457c5c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x457c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x457c60: 0x3e00008  jr          $ra
    ctx->pc = 0x457C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457C68u;
    // 0x457c68: 0x0  nop
    ctx->pc = 0x457c68u;
    // NOP
    // 0x457c6c: 0x0  nop
    ctx->pc = 0x457c6cu;
    // NOP
    ctx->pc = 0x457c70u;
}
