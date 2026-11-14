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

// Function: sub_0046CBB0
// Address: 0x46cbb0 - 0x46cc80
void sub_0046CBB0_0x46cbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CBB0_0x46cbb0");
#endif

    switch (ctx->pc) {
        case 0x46cc10u: goto label_46cc10;
        case 0x46cc20u: goto label_46cc20;
        case 0x46cc34u: goto label_46cc34;
        case 0x46cc50u: goto label_46cc50;
        case 0x46cc60u: goto label_46cc60;
        default: break;
    }

    ctx->pc = 0x46cbb0u;

    // 0x46cbb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46cbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46cbb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46cbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46cbb8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46cbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46cbbc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x46cbc0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46cbc4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cbc8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x46cbc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46cbcc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x46cbccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x46cbd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46cbd4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cbd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x46cbdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46cbe0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x46cbe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46cbe4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x46cbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x46cbe8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46cbec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cbf0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x46cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x46cbf4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x46cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x46cbf8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x46cbf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46cbfc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x46cbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x46cc00: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x46cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x46cc04: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46cc08: 0xc11b328  jal         func_46CCA0
    ctx->pc = 0x46CC08u;
    SET_GPR_U32(ctx, 31, 0x46CC10u);
    ctx->pc = 0x46CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CCA0u, 0x46CC08u, 0x46CC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CC10u;
label_46cc10:
    // 0x46cc10: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x46cc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x46cc14: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x46cc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x46cc18: 0xc11b320  jal         func_46CC80
    ctx->pc = 0x46CC18u;
    SET_GPR_U32(ctx, 31, 0x46CC20u);
    ctx->pc = 0x46CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CC80u, 0x46CC18u, 0x46CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CC20u;
label_46cc20:
    // 0x46cc20: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cc24: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x46cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x46cc28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46cc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46cc2c: 0xc11a7e4  jal         func_469F90
    ctx->pc = 0x46CC2Cu;
    SET_GPR_U32(ctx, 31, 0x46CC34u);
    ctx->pc = 0x469F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F90u, 0x46CC2Cu, 0x46CC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CC34u;
label_46cc34:
    // 0x46cc34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cc38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46cc3c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x46cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x46cc40: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x46cc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x46cc44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46cc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46cc48: 0xc11a7c0  jal         func_469F00
    ctx->pc = 0x46CC48u;
    SET_GPR_U32(ctx, 31, 0x46CC50u);
    ctx->pc = 0x469F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F00u, 0x46CC48u, 0x46CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CC50u;
label_46cc50:
    // 0x46cc50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cc54: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46cc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46cc58: 0xc11b4d0  jal         func_46D340
    ctx->pc = 0x46CC58u;
    SET_GPR_U32(ctx, 31, 0x46CC60u);
    ctx->pc = 0x46D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D340u, 0x46CC58u, 0x46CC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CC60u;
label_46cc60:
    // 0x46cc60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cc64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46cc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46cc68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46cc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46cc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x46CC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CC74u;
    // 0x46cc74: 0x0  nop
    ctx->pc = 0x46cc74u;
    // NOP
    // 0x46cc78: 0x0  nop
    ctx->pc = 0x46cc78u;
    // NOP
    // 0x46cc7c: 0x0  nop
    ctx->pc = 0x46cc7cu;
    // NOP
    ctx->pc = 0x46cc80u;
}
